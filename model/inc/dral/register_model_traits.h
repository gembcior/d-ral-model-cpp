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

#ifndef DRAL_REGISTER_MODEL_TRAITS_H
#define DRAL_REGISTER_MODEL_TRAITS_H

#include "access_type.h"
#include "register_model.h"
#include <cstdint>
#include <utility>

namespace dral {

template<typename RegisterModel>
class RegisterModelTraits;

template<typename RegType, typename AddressPolicy, AccessType Access>
class RegisterModelTraits<RegisterModel<RegType, AddressPolicy, Access>>
{
public:
  using RegValue = RegType;
  using SizeType = decltype(RegType::value);
  using AddressPolicyType = AddressPolicy;

  template<typename... Index>
  static constexpr std::uintptr_t address(Index&&... index)
  {
    return AddressPolicy::getAddress(std::forward<Index>(index)...);
  }

  static constexpr AccessType access()
  {
    return Access;
  }
};

}  // namespace dral

#endif  // DRAL_REGISTER_MODEL_TRAITS_H
