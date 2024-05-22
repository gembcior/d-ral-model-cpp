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

#ifndef DRAL_LAYER_OFFSET_POLICY_H
#define DRAL_LAYER_OFFSET_POLICY_H

#include <cstdint>

namespace dral {

/**
 * Layer Offset Policy
 */
template<std::uintptr_t Offset, typename IndexValueType = std::size_t>
class LayerOffsetPolicy
{
public:
  using IndexType = IndexValueType;

public:
  static constexpr std::uintptr_t getOffset(IndexType index)
  {
    return Offset * static_cast<std::size_t>(index);
  }

  static_assert(Offset > 0);
};

}

#endif /* DRAL_LAYER_OFFSET_POLICY_H */
