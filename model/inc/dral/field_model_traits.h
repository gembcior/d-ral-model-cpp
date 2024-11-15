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

#ifndef DRAL_FIELD_MODEL_TRAITS_H
#define DRAL_FIELD_MODEL_TRAITS_H

#include "access_type.h"
#include "field_model.h"
#include "register_model_traits.h"

#include <cstdint>
#include <utility>

namespace dral {

template<typename ModelType>
class FieldModelTraits;

template<typename RegisterModel, std::size_t Position, std::size_t Width, typename FieldType, AccessType Access>
class FieldModelTraits<FieldModel<RegisterModel, Position, Width, FieldType, Access>>
{
public:
  using RegisterModelType = RegisterModel;

  template<typename... Index>
  static constexpr std::uintptr_t address(Index&&... index)
  {
    return RegisterModelTraits<RegisterModel>::address(std::forward<Index>(index)...);
  }

  static constexpr std::size_t position()
  {
    return Position;
  }

  static constexpr std::size_t width()
  {
    return Width;
  }

  using FieldValue = FieldType;

  static constexpr AccessType access()
  {
    return Access;
  }
};

}  // namespace dral

#endif  // DRAL_FIELD_MODEL_TRAITS_H
