/*
 * D-RAL - Device Register Access Layer
 * https://github.com/gembcior/d-ral
 *
 * MIT License
 *
 * Copyright (c) 2025 Gembcior
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in all
 * copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 *
 * This is an auto generated file. Do not modify!
 */

#ifndef DRAL_DRALTESTDEVICE_ECHO_X_H
#define DRAL_DRALTESTDEVICE_ECHO_X_H

#include "dral/access_type.h"
#include "dral/field_model.h"
#include "dral/group_address_policy.h"
#include "dral/layer_offset_policy.h"
#include "dral/mask_policy.h"
#include "dral/register_model.h"
#include "dral/register_value.h"

#include <array>
#include <cstdint>
#include <tuple>

namespace dral::draltestdevice {

class EchoXGroup final
{
private:
  static constexpr uintptr_t BaseAddress{ 0x2004'0000 };

public:
  enum class IndexType
  {
    Echo0,
    Echo1,
  };

  struct Index final
  {
    using enum IndexType;
    static constexpr std::array All{ Echo0, Echo1 };
  };

private:
  using OffsetPolicy = LayerOffsetPolicy<IndexType, 0x0000'1000>;

  template<std::uintptr_t Address>
  using AddressPolicy = GroupAddressPolicy<BaseAddress + Address, std::tuple<OffsetPolicy>>;

public:
private:
  enum class AlbatrossFields
  {
    kvm,
    ecdsa
  };

  using AlbatrossAllMasks = std::tuple<MaskPolicy<uint32_t, 1, 13>, MaskPolicy<uint32_t, 31, 1>>;

public:
  /**
   * REGISTER ALBATROSS
   */
  class AlbatrossRegister : public IndirectRegisterValue<uint32_t, AddressPolicy<0x0000'0000>, AlbatrossFields, AlbatrossAllMasks>
  {
  public:
    using IndirectRegisterValue<uint32_t, AddressPolicy<0x0000'0000>, AlbatrossFields, AlbatrossAllMasks>::IndirectRegisterValue;
    using enum AlbatrossFields;
  };

  /**
   * GROUP BEAR_X
   */
  class BearXGroup final
  {
  private:
    static constexpr uintptr_t BaseAddress{ 0x0000'0020 };

  public:
    enum class IndexType
    {
      Bear0,
      Bear1,
      Bear2,
    };

    struct Index final
    {
      using enum IndexType;
      static constexpr std::array All{ Bear0, Bear1, Bear2 };
    };

  private:
    using OffsetPolicy = LayerOffsetPolicy<IndexType, 0x0000'0020>;

    template<std::uintptr_t Address>
    using AddressPolicy = GroupAddressPolicy<BaseAddress + Address, std::tuple<EchoXGroup::OffsetPolicy, OffsetPolicy>>;

  private:
    enum class BearXFields
    {
      tcp,
      udp
    };

    using BearXAllMasks = std::tuple<MaskPolicy<uint32_t, 0, 9>, MaskPolicy<uint32_t, 10, 9>>;

  public:
    /**
     * REGISTER BEAR_X
     */
    class BearXRegister : public IndirectRegisterValue<uint32_t, AddressPolicy<0x0000'0000>, BearXFields, BearXAllMasks>
    {
    public:
      using IndirectRegisterValue<uint32_t, AddressPolicy<0x0000'0000>, BearXFields, BearXAllMasks>::IndirectRegisterValue;
      using enum BearXFields;
    };
  };
};

}

#endif /* DRAL_DRALTESTDEVICE_ECHO_X_H */