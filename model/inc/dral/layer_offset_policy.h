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

#include <array>
#include <cstdint>
#include <utility>

namespace dral {

template<typename IndexT, std::uintptr_t OffsetV>
class LayerOffsetPolicy
{
  static_assert(OffsetV > 0, "Offset must be greater than zero");

public:
  using IndexType = IndexT;

  [[nodiscard]] static constexpr auto getOffset(const IndexType index)
  {
    return OffsetV * static_cast<std::size_t>(index);
  }
};

template<typename IndexT, typename OffsetsT>
class NonUniformLayerOffsetPolicy;

template<typename IndexT, std::uintptr_t... OffsetsV>
class NonUniformLayerOffsetPolicy<IndexT, std::integer_sequence<std::uintptr_t, OffsetsV...>>
{
  static_assert(sizeof...(OffsetsV) > 2, "More than two offsets must be provided");

public:
  using IndexType = IndexT;

  [[nodiscard]] static constexpr auto getOffset(const IndexType index)
  {
    constexpr std::array OffsetsValues{ OffsetsV... };
    return OffsetsValues[static_cast<std::size_t>(index)];
  }
};

}  // namespace dral

#endif  // DRAL_LAYER_OFFSET_POLICY_H
