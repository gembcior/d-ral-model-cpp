/*
 * D-RAL - Device Register Access Layer
 * https://github.com/gembcior/d-ral
 *
 * MIT License
 *
 * Copyright (c) 2024 Gembcior
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

#ifndef DRAL_DRALTESTDEVICE_DELTA_X_H
#define DRAL_DRALTESTDEVICE_DELTA_X_H

#include "dral/bitfield_model.h"
#include "dral/field_model.h"
#include "dral/group_address_policy.h"
#include "dral/layer_offset_policy.h"
#include "dral/register_model.h"

#include <array>
#include <cstdint>
#include <tuple>

namespace dral::draltestdevice {

class DeltaXGroup final
{
private:
  static constexpr uintptr_t BaseAddress{ 0x2003'0000 };

public:
  enum class IndexType
  {
    Delta0,
    Delta1,
  };

  struct Index final
  {
    using enum IndexType;
    static constexpr std::array All{ Delta0, Delta1 };
  };

private:
  using OffsetPolicy = LayerOffsetPolicy<IndexType, 0x0000'1000>;

  template<std::uintptr_t Address>
  using AddressPolicy = GroupAddressPolicy<BaseAddress + Address, std::tuple<OffsetPolicy>>;

public:
  /**
   * REGISTER APPLE
   */
  union AppleType
  {
    uint32_t value;
    BitFieldModel<uint32_t, 0, 1> dpField;
    BitFieldModel<uint32_t, 2, 4> hdmiField;
    BitFieldModel<uint32_t, 15, 16> usbField;

    constexpr operator uint32_t() const
    {
      return value;
    }
  };

  class AppleRegister final : public RegisterModel<AppleType, AddressPolicy<0x0000'0000>, AccessType::ReadWrite>
  {
  private:
    using reg = RegisterModel<AppleType, AddressPolicy<0x0000'0000>, AccessType::ReadWrite>;

  public:
    using dpField = FieldModel<reg, 0, 1>;
    using hdmiField = FieldModel<reg, 2, 4>;
    using usbField = FieldModel<reg, 15, 16>;

    using AllFields = std::tuple<dpField, hdmiField, usbField>;
  };

  /**
   * REGISTER BANANA
   */
  union BananaType
  {
    uint32_t value;
    BitFieldModel<uint32_t, 0, 10> hdcpField;
    BitFieldModel<uint32_t, 20, 5> aesField;

    constexpr operator uint32_t() const
    {
      return value;
    }
  };

  class BananaRegister final : public RegisterModel<BananaType, AddressPolicy<0x0000'0020>, AccessType::ReadWrite>
  {
  private:
    using reg = RegisterModel<BananaType, AddressPolicy<0x0000'0020>, AccessType::ReadWrite>;

  public:
    using hdcpField = FieldModel<reg, 0, 10>;
    using aesField = FieldModel<reg, 20, 5>;

    using AllFields = std::tuple<hdcpField, aesField>;
  };
};

}

#endif /* DRAL_DRALTESTDEVICE_DELTA_X_H */