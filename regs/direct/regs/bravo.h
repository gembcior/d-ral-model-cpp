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

#ifndef DRAL_DRALTESTDEVICE_BRAVO_H
#define DRAL_DRALTESTDEVICE_BRAVO_H

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

class BravoGroup final
{
private:
  static constexpr uintptr_t BaseAddress{ 0x2001'0000 };

  template<std::uintptr_t Address>
  using AddressPolicy = GroupAddressPolicy<BaseAddress + Address>;

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
  class AlbatrossType : public RegisterValue<uint32_t, AlbatrossFields, AlbatrossAllMasks>
  {
  public:
    using RegisterValue<uint32_t, AlbatrossFields, AlbatrossAllMasks>::RegisterValue;
    using enum AlbatrossFields;
  };

  class AlbatrossRegister final : public RegisterModel<AlbatrossType, AddressPolicy<0x0000'0000>, AccessType::ReadWrite>
  {
  public:
    using reg = RegisterModel<AlbatrossType, AddressPolicy<0x0000'0000>, AccessType::ReadWrite>;
    using kvmField = FieldModel<reg, 1, 13>;
    using ecdsaField = FieldModel<reg, 31, 1>;

    using AllFields = std::tuple<kvmField, ecdsaField>;
  };

  /**
   * GROUP BEAR_X
   */
  class BearXGroup final
  {
  private:
    static constexpr uintptr_t BaseAddress{ BravoGroup::BaseAddress + 0x0000'0020 };

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
    using AddressPolicy = GroupAddressPolicy<BaseAddress + Address, std::tuple<OffsetPolicy>>;

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
    class BearXType : public RegisterValue<uint32_t, BearXFields, BearXAllMasks>
    {
    public:
      using RegisterValue<uint32_t, BearXFields, BearXAllMasks>::RegisterValue;
      using enum BearXFields;
    };

    class BearXRegister final : public RegisterModel<BearXType, AddressPolicy<0x0000'0000>, AccessType::ReadWrite>
    {
    public:
      using reg = RegisterModel<BearXType, AddressPolicy<0x0000'0000>, AccessType::ReadWrite>;
      using tcpField = FieldModel<reg, 0, 9>;
      using udpField = FieldModel<reg, 10, 9>;

      using AllFields = std::tuple<tcpField, udpField>;
    };
  };
};

}

#endif /* DRAL_DRALTESTDEVICE_BRAVO_H */