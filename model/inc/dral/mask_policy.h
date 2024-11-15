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

#ifndef DRAL_MASK_POLICY_H
#define DRAL_MASK_POLICY_H

#include "utilities.h"

#include <cstdint>
#include <limits>
#include <type_traits>

namespace dral {

template<typename UnderlyingType, std::size_t Position, std::size_t Width, typename TargetType = UnderlyingType>
class MaskPolicy
{
  static_assert(!std::is_same_v<UnderlyingType, bool> && std::is_integral_v<UnderlyingType>,
                "UnderlyingType must be an integral type, excluding bool.");

  static constexpr auto UnderlyingTypeSizeInBits{TypeSizeInBits<UnderlyingType>};
  static_assert((Position >= 0) && (Position <= (UnderlyingTypeSizeInBits - 1)),
                "The position of the mask can't exceed the UnderlyingType size or be less than 0.");
  static_assert((Width >= 1) && (Width <= (UnderlyingTypeSizeInBits - Position)),
                "The width of the mask starting from the position can't exceed the UnderlyingType size or be less than 1.");

  static constexpr bool IsBoolean{std::is_same_v<TargetType, bool>};
  static_assert(sizeof(TargetType) <= sizeof(UnderlyingType), "TargetType size must not exceed UnderlyingType size.");
  static_assert((IsBoolean && (Width == 1)) || (!IsBoolean && (Width <= TypeSizeInBits<TargetType>)),
                "TargetType must be at least Width wide and for bool Width must equal 1.");

  static constexpr UnderlyingType Mask{Width == UnderlyingTypeSizeInBits ? std::numeric_limits<UnderlyingType>::max() : ((1U << Width) - 1U)};

public:
  using UnderlyingValueType = UnderlyingType;
  using TargetValueType = TargetType;

  static constexpr TargetValueType fromUnderlyingValue(const UnderlyingValueType value)
  {
    return static_cast<TargetValueType>((value >> Position) & Mask);
  }

  static constexpr UnderlyingValueType toUnderlyingValue(const TargetValueType value)
  {
    return (static_cast<UnderlyingValueType>(value) & Mask) << Position;
  }

  static constexpr UnderlyingValueType updateUnderlyingValue(const UnderlyingValueType underlyingValue,
                                                             const TargetValueType targetValue)
  {
    return (underlyingValue & ~(Mask << Position)) |
           ((static_cast<UnderlyingValueType>(targetValue) & Mask) << Position);
  }
};
}  // namespace dral

#endif  // DRAL_MASK_POLICY_H
