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

#include <cstddef>
#include <utility>

namespace dral {

template<typename RegisterModelT,
         std::size_t PositionV,
         std::size_t WidthV,
         typename FieldT = typename RegisterModelTraits<RegisterModelT>::UnderlyingType,
         AccessType AccessV = RegisterModelTraits<RegisterModelT>::getAccess()>
class FieldModel
{
  static_assert(IsAccessSupported<AccessV, RegisterModelTraits<RegisterModelT>::getAccess()>, "Field model access must be supported by register model access.");

  using IsReadWrite = std::bool_constant<IsAccessSupported<AccessType::ReadWrite, AccessV>>;
  using Mask = MaskPolicy<typename RegisterModelTraits<RegisterModelT>::UnderlyingType, PositionV, WidthV, FieldT>;

public:
  using FieldType = FieldT;

  [[nodiscard]] static constexpr auto getMask()
  {
    return Mask::getMask();
  }

  template<typename... IndexT>
    requires IsReadable<AccessV>
  [[nodiscard]] static auto read(IndexT&&... index)
  {
    const auto rawValue{ RegisterModelT::read(std::forward<IndexT>(index)...).value() };
    return Mask::fromUnderlyingValue(rawValue);
  }

  template<typename... IndexT>
    requires IsWritable<AccessV>
  static void write(const FieldType value, IndexT&&... index)
  {
    write(IsReadWrite{}, value, std::forward<IndexT>(index)...);
  }

private:
  template<typename... IndexT>
  static void write(std::true_type, const FieldType value, IndexT&&... index)
  {
    const auto oldValue{ RegisterModelT::read(std::forward<IndexT>(index)...).value() };
    const auto newValue{ Mask::updateUnderlyingValue(oldValue, value) };
    RegisterModelT::write(newValue, std::forward<IndexT>(index)...);
  }

  template<typename... IndexT>
  static void write(std::false_type, const FieldType value, IndexT&&... index)
  {
    const auto newValue{ Mask::toUnderlyingValue(value) };
    RegisterModelT::write(newValue, std::forward<IndexT>(index)...);
  }
};

}  // namespace dral

#endif  // DRAL_REGISTER_MODEL_H
