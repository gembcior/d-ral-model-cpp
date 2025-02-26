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

#include <cstddef>
#include <limits>
#include <type_traits>

namespace dral {

template<typename UnderlyingT, std::size_t PositionV, std::size_t WidthV, typename TargetT = UnderlyingT>
class MaskPolicy
{
  static_assert(!std::is_same_v<UnderlyingT, bool> && std::is_integral_v<UnderlyingT>, "Underlying type must be an integral type, excluding bool.");

  static constexpr auto UnderlyingTypeSizeInBits{ TypeSizeInBits<UnderlyingT> };
  static_assert((PositionV >= 0) && (PositionV < UnderlyingTypeSizeInBits),
                "The position of the mask can't exceed the underlying type size or be less than 0.");
  static_assert((WidthV > 0) && (WidthV <= (UnderlyingTypeSizeInBits - PositionV)),
                "The width of the mask starting from the position can't exceed the underlying type size or be less than 1.");

  static_assert(sizeof(TargetT) <= sizeof(UnderlyingT), "Target type size must not exceed underlying type size.");

  static constexpr bool IsBoolean{ std::is_same_v<TargetT, bool> };
  static_assert((IsBoolean && (WidthV == 1)) || (!IsBoolean && (WidthV <= TypeSizeInBits<TargetT>)),
                "Target type must be at least Width wide and for bool Width must equal 1.");

  static constexpr UnderlyingT Mask{ (WidthV == UnderlyingTypeSizeInBits) ? std::numeric_limits<UnderlyingT>::max()
                                                                          : ((UnderlyingT{ 1U } << WidthV) - UnderlyingT{ 1U }) };

  static constexpr UnderlyingT ClearAbsolutMask{ ~(Mask << PositionV) };

public:
  using UnderlyingType = UnderlyingT;
  using TargetType = TargetT;

  [[nodiscard]] static constexpr auto fromUnderlyingValue(const UnderlyingType value)
  {
    return static_cast<TargetType>((value >> PositionV) & Mask);
  }

  [[nodiscard]] static constexpr auto toUnderlyingValue(const TargetType value)
  {
    return (static_cast<UnderlyingType>(value) & Mask) << PositionV;
  }

  [[nodiscard]] static constexpr auto updateUnderlyingValue(const UnderlyingType underlyingValue, const TargetType targetValue)
  {
    const auto updateValue{ toUnderlyingValue(targetValue) };
    const auto newValue{ (underlyingValue & ClearAbsolutMask) | updateValue };
    return newValue;
  }

  [[nodiscard]] static constexpr auto getMask()
  {
    return Mask;
  }
};

}  // namespace dral

#endif  // DRAL_MASK_POLICY_H
