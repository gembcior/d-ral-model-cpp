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

#ifndef DRAL_GROUP_ADDRESS_POLICY_H
#define DRAL_GROUP_ADDRESS_POLICY_H

#include <cstdint>
#include <tuple>

namespace dral {

template<typename T>
class DefaultTypeExtractor
{
public:
  using type = typename T::type;
};

template<typename T>
class OffsetPolicyTypeExtractor
{
public:
  using type = typename T::IndexType;
};

template<template<typename> class TypeExtractorT, typename TupleT, typename IndexT>
struct ExtractedTypesTuple;

template<template<typename> class TypeExtractorT, typename TupleT, std::size_t... IndexV>
struct ExtractedTypesTuple<TypeExtractorT, TupleT, std::index_sequence<IndexV...>>
{
  using type = std::tuple<typename TypeExtractorT<std::tuple_element_t<IndexV, TupleT>>::type...>;
};

template<typename TupleT, template<typename> class TypeExtractorT = DefaultTypeExtractor>
using IndicesTypesTuple = typename ExtractedTypesTuple<TypeExtractorT, TupleT, std::make_index_sequence<std::tuple_size_v<TupleT>>>::type;

template<std::uintptr_t AddressV, typename OffsetPolicyT = void>
class GroupAddressPolicy;

template<std::uintptr_t AddressV, typename... OffsetPolicyT>
class GroupAddressPolicy<AddressV, std::tuple<OffsetPolicyT...>>
{
  using Layers = std::tuple<OffsetPolicyT...>;

  template<std::size_t V>
  static constexpr auto PreviousIndex{ V - 1 };

public:
  static constexpr auto LayersCount{ sizeof...(OffsetPolicyT) };
  using IndexType = IndicesTypesTuple<Layers, OffsetPolicyTypeExtractor>;

  template<std::size_t IdxV>
  using LayerPolicy = std::tuple_element_t<IdxV, Layers>;

  [[nodiscard]] static constexpr auto getBaseAddress()
  {
    return AddressV;
  }

  [[nodiscard]] static constexpr auto getAddress(const IndexType& index)
  {
    return AddressV + getOffset<PreviousIndex<LayersCount>>(index);
  }

  template<typename... IndexT>
  [[nodiscard]] static constexpr auto getAddress(IndexT&&... index)
  {
    static_assert(sizeof...(IndexT) == LayersCount, "The number of indices must match the number of layers.");
    const auto indexValue{ IndexType(std::forward<IndexT>(index)...) };
    return getAddress(indexValue);
  }

private:
  template<std::size_t IndexV>
  [[nodiscard]] static constexpr auto getOffset(const IndexType& index)
  {
    const auto offset{ LayerPolicy<IndexV>::getOffset(std::get<IndexV>(index)) };
    if constexpr (IndexV > 0) {
      return offset + getOffset<PreviousIndex<IndexV>>(index);
    }
    return offset;
  }
};

template<std::uintptr_t AddressV, typename OffsetPolicyT>
class GroupAddressPolicy<AddressV, std::tuple<OffsetPolicyT>>
{
public:
  static constexpr std::size_t LayersCount{ 1 };
  using LayerPolicy = OffsetPolicyT;
  using IndexType = typename LayerPolicy::IndexType;

  [[nodiscard]] static constexpr auto getBaseAddress()
  {
    return AddressV;
  }

  [[nodiscard]] static constexpr auto getAddress(const IndexType& index)
  {
    return AddressV + LayerPolicy::getOffset(index);
  }
};

template<std::uintptr_t AddressV>
class GroupAddressPolicy<AddressV, void>
{
public:
  static constexpr std::size_t LayersCount{ 0 };

  [[nodiscard]] static constexpr auto getBaseAddress()
  {
    return AddressV;
  }

  [[nodiscard]] static constexpr auto getAddress()
  {
    return AddressV;
  }
};

}  // namespace dral

#endif  // DRAL_GROUP_ADDRESS_POLICY_H
