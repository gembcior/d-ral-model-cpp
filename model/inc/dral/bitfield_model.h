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

#ifndef DRAL_BITFIELD_MODEL_H
#define DRAL_BITFIELD_MODEL_H

#include "mask_policy.h"

#include <cstdint>

namespace dral {

template<typename SizeType, std::size_t Position, std::size_t Width, typename FieldType = SizeType>
class BitFieldModel
{
private:
  using Mask = MaskPolicy<SizeType, Position, Width, FieldType>;

public:
  using FieldValue = FieldType;

  BitFieldModel() = default;
  BitFieldModel(const BitFieldModel& other) = default;

  BitFieldModel& operator=(const BitFieldModel& other) = default;

  BitFieldModel& operator=(const FieldValue value)
  {
    m_value = Mask::updateUnderlyingValue(m_value, value);
    return *this;
  }

  [[nodiscard]] constexpr operator FieldValue() const
  {
    return Mask::fromUnderlyingValue(m_value);
  }

private:
  SizeType m_value;
};
}  // namespace dral

#endif  // DRAL_BITFIELD_MODEL_H
