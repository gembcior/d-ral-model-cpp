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

#ifndef DRAL_DRALTESTDEVICE_CHARLIE_H
#define DRAL_DRALTESTDEVICE_CHARLIE_H

#include "dral/group_address_policy.h"
#include "dral/layer_offset_policy.h"
#include "dral/mask_policy.h"
#include "dral/register_value.h"

#include <array>
#include <cstdint>
#include <tuple>

namespace dral::draltestdevice {

class CharlieGroup final
{
private:
  static constexpr uintptr_t BaseAddress{ 0x2002'0000 };

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
  class AlbatrossRegister : public IndirectRegisterValue<uint32_t, AddressPolicy<0x0000'0000>, AlbatrossFields, AlbatrossAllMasks>
  {
  public:
    using IndirectRegisterValue<uint32_t, AddressPolicy<0x0000'0000>, AlbatrossFields, AlbatrossAllMasks>::IndirectRegisterValue;
    using enum AlbatrossFields;
  };

  /**
   * GROUP FRUITS
   */
  class FruitsGroup final
  {
  private:
    static constexpr uintptr_t BaseAddress{ CharlieGroup::BaseAddress + 0x0000'0020 };

    template<std::uintptr_t Address>
    using AddressPolicy = GroupAddressPolicy<BaseAddress + Address>;

  private:
    enum class AppleFields
    {
      dp,
      hdmi,
      usb
    };

    using AppleAllMasks = std::tuple<MaskPolicy<uint32_t, 0, 1>, MaskPolicy<uint32_t, 2, 4>, MaskPolicy<uint32_t, 15, 16>>;

  public:
    /**
     * REGISTER APPLE
     */
    class AppleRegister : public IndirectRegisterValue<uint32_t, AddressPolicy<0x0000'0000>, AppleFields, AppleAllMasks>
    {
    public:
      using IndirectRegisterValue<uint32_t, AddressPolicy<0x0000'0000>, AppleFields, AppleAllMasks>::IndirectRegisterValue;
      using enum AppleFields;
    };

  private:
    enum class BananaFields
    {
      hdcp,
      aes
    };

    using BananaAllMasks = std::tuple<MaskPolicy<uint32_t, 0, 10>, MaskPolicy<uint32_t, 20, 5>>;

  public:
    /**
     * REGISTER BANANA
     */
    class BananaRegister : public IndirectRegisterValue<uint32_t, AddressPolicy<0x0000'0020>, BananaFields, BananaAllMasks>
    {
    public:
      using IndirectRegisterValue<uint32_t, AddressPolicy<0x0000'0020>, BananaFields, BananaAllMasks>::IndirectRegisterValue;
      using enum BananaFields;
    };
  };
};

}

#endif /* DRAL_DRALTESTDEVICE_CHARLIE_H */