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

#ifndef DRAL_REGISTER_MODEL_H
#define DRAL_REGISTER_MODEL_H

#include "access_type.h"

#include <utility>

namespace dral {

template<typename ValueT, typename AddressPolicyT, AccessType AccessV = AccessType::ReadWrite>
class RegisterModel
{
  static constexpr auto Access{ AccessV };

  using AddressPolicyType = AddressPolicyT;

public:
  using UnderlyingType = typename ValueT::UnderlyingType;
  using ValueType = ValueT;

// GCC treats pointers in below code as 0 sized arrays and each access to them triggers -Warray-bounds warning
#ifdef __GNUC__
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Warray-bounds"
#endif

  template<typename... IndexT>
    requires IsReadable<Access>
  [[nodiscard]] static auto read(IndexT&&... index)
  {
    volatile const auto* const regPtr{ reinterpret_cast<volatile const UnderlyingType*>(AddressPolicyType::getAddress(std::forward<IndexT>(index)...)) };
    return ValueType{ *regPtr };
  }

  template<typename... IndexT>
    requires IsWritable<Access>
  static void write(const UnderlyingType rawValue, IndexT&&... index)
  {
    volatile auto* const regPtr{ reinterpret_cast<volatile UnderlyingType*>(AddressPolicyType::getAddress(std::forward<IndexT>(index)...)) };
    *regPtr = rawValue;
  }

#ifdef __GNUC__
#pragma GCC diagnostic pop
#endif

  template<typename... IndexT>
    requires IsWritable<Access>
  static void write(const ValueType& regValue, IndexT&&... index)
  {
    write(static_cast<UnderlyingType>(regValue), std::forward<IndexT>(index)...);
  }
};
}  // namespace dral

#endif  // DRAL_REGISTER_MODEL_H
