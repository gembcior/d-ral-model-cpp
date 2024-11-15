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

#ifndef DRAL_FIELD_MODEL_H
#define DRAL_FIELD_MODEL_H

#include "access_type.h"
#include "mask_policy.h"
#include "register_model_traits.h"

#include <cstdint>
#include <utility>

namespace dral {

template<typename RegisterModel,
         std::size_t Position,
         std::size_t Width,
         typename FieldType = typename RegisterModelTraits<RegisterModel>::SizeType,
         AccessType Access = RegisterModelTraits<RegisterModel>::access()>
class FieldModel
{
  static_assert((Access & RegisterModelTraits<RegisterModel>::access()) == Access,
                "Field model access must be supported by register model access.");

  static constexpr bool IsReadable{(Access & AccessType::ReadOnly) == AccessType::ReadOnly};
  static constexpr bool IsWritable{(Access & AccessType::WriteOnly) == AccessType::WriteOnly};
  using IsReadWrite = std::bool_constant<Access == AccessType::ReadWrite>;
  using Mask = MaskPolicy<typename RegisterModelTraits<RegisterModel>::SizeType, Position, Width, FieldType>;

public:
  using FieldValue = FieldType;

  template<typename... Index>
    requires IsReadable
  [[nodiscard]] static FieldValue read(Index&&... index)
  {
    const auto rawValue{RegisterModel::read(std::forward<Index>(index)...).value};
    return Mask::fromUnderlyingValue(rawValue);
  }

  template<typename... Index>
    requires IsWritable
  static void write(const FieldValue value, Index&&... index)
  {
    write(IsReadWrite{}, value, std::forward<Index>(index)...);
  }

private:
  template<typename... Index>
  static void write(std::true_type, const FieldValue value, Index&&... index)
  {
    const auto oldValue{RegisterModel::read(std::forward<Index>(index)...).value};
    const auto newValue{Mask::updateUnderlyingValue(oldValue, value)};
    RegisterModel::write(newValue, std::forward<Index>(index)...);
  }

  template<typename... Index>
  static void write(std::false_type, const FieldValue value, Index&&... index)
  {
    const auto newValue{Mask::toUnderlyingValue(value)};
    RegisterModel::write(newValue, std::forward<Index>(index)...);
  }
};

}  // namespace dral

#endif  // DRAL_REGISTER_MODEL_H
