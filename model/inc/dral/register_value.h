// =================================================================================
//
// MIT License
//
// Copyright (c) 2024 Gembcior
//
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included in all
// copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
// SOFTWARE.
//
// ==================================================================================

#ifndef DRAL_REGISTER_VALUE_H
#define DRAL_REGISTER_VALUE_H

#include <tuple>
#include <type_traits>

namespace dral {

namespace impl {

template<typename UnderlyingT>
class RegisterValue
{
  static_assert(std::is_integral_v<UnderlyingT>, "Underlying register type must be integral type");

public:
  using UnderlyingType = UnderlyingT;

  explicit constexpr RegisterValue(const UnderlyingType value = {})
    : m_value(value)
  {
  }

  template<typename MaskPolicyT>
  [[nodiscard]] constexpr auto get() const
  {
    static_assert(sizeof(UnderlyingType) == sizeof(typename MaskPolicyT::UnderlyingType), "Underlying type and mask underlying type must have the same size.");
    return MaskPolicyT::fromUnderlyingValue(m_value);
  }

  template<typename MaskPolicyT>
  constexpr void set(const typename MaskPolicyT::TargetType fieldValue)
  {
    static_assert(sizeof(UnderlyingType) == sizeof(typename MaskPolicyT::UnderlyingType), "Underlying type and mask underlying type must have the same size.");
    m_value = MaskPolicyT::updateUnderlyingValue(m_value, fieldValue);
  }

  [[nodiscard]] constexpr UnderlyingType value() const
  {
    return m_value;
  }

private:
  UnderlyingType m_value;
};

}  // namespace impl

template<typename UnderlyingT, typename FieldIndexT, typename TupleT>
class RegisterValue;

template<typename UnderlyingT, typename FieldIndexT, typename... MaskT>
class RegisterValue<UnderlyingT, FieldIndexT, std::tuple<MaskT...>>
{
  static_assert(std::is_enum_v<FieldIndexT>, "Field index type must be enum");

  using AllFields = std::tuple<MaskT...>;

  template<FieldIndexT FiV>
  using FieldMask = std::tuple_element_t<static_cast<std::underlying_type_t<FieldIndexT>>(FiV), AllFields>;

  template<FieldIndexT FiV>
  using FieldType = typename FieldMask<FiV>::TargetType;

  impl::RegisterValue<UnderlyingT> m_regValue;

public:
  using UnderlyingType = typename impl::RegisterValue<UnderlyingT>::UnderlyingType;

  explicit constexpr RegisterValue(const UnderlyingType value = {})
    : m_regValue(value)
  {
  }

  [[nodiscard]] constexpr UnderlyingType value() const
  {
    return m_regValue.value();
  }

  using FieldIndex = FieldIndexT;

  template<FieldIndex FiV>
  [[nodiscard]] constexpr auto get() const
  {
    return m_regValue.template get<FieldMask<FiV>>();
  }

  template<FieldIndex FiV>
  constexpr void set(const FieldType<FiV> value)
  {
    m_regValue.template set<FieldMask<FiV>>(value);
  }
};

template<typename UnderlyingT, typename AddressPolicyT, typename FieldIndexT, typename... MaskT>
class IndirectRegisterValue : public RegisterValue<UnderlyingT, FieldIndexT, MaskT...>
{
  using RegisterValue<UnderlyingT, FieldIndexT, MaskT...>::RegisterValue;
  using AddressPolicyType = AddressPolicyT;

public:
  template<typename... IndexT>
  [[nodiscard]] static constexpr auto getAddress(IndexT&&... index)
  {
    return AddressPolicyType::getAddress(std::forward<IndexT>(index)...);
  }
};
}  // namespace dral

#endif  // DRAL_REGISTER_VALUE_H
