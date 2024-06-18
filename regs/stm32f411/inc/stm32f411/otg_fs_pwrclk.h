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

#ifndef DRAL_STM32F411_OTG_FS_PWRCLK_H
#define DRAL_STM32F411_OTG_FS_PWRCLK_H

#include "dral/bitfield_model.h"
#include "dral/group_address_policy.h"
#include "dral/layer_offset_policy.h"
#include "dral/register_model.h"

namespace dral::stm32f411 {

class OtgFsPwrclk
{
public:
  static constexpr uintptr_t OtgFsPwrclkBaseAddress = 0x50000E00;

private:
  template<std::uintptr_t Address>
  using OtgFsPwrclkAddressPolicy = GroupAddressPolicy<Address>;

/**
 * REGISTER FS_PCGCCTL
 */
private:
  template<typename SizeType>
  class FsPcgcctlRegisterUnion
  {
  public:
    union
    {
      SizeType value;
      BitFieldModel<SizeType, 0, 1> stppclk;
      BitFieldModel<SizeType, 1, 1> gatehclk;
      BitFieldModel<SizeType, 4, 1> physusp;
    };
  };

private:
  template<typename SizeType, std::uintptr_t Address>
  class FsPcgcctlRegisterModel : public RegisterModel<FsPcgcctlRegisterUnion<SizeType>, OtgFsPwrclkAddressPolicy<Address>>
  {
  public:
    using reg = FsPcgcctlRegisterUnion<SizeType>;

  public:
    using stppclk = FieldModel<reg, OtgFsPwrclkAddressPolicy<Address>, 0, 1>;
    using gatehclk = FieldModel<reg, OtgFsPwrclkAddressPolicy<Address>, 1, 1>;
    using physusp = FieldModel<reg, OtgFsPwrclkAddressPolicy<Address>, 4, 1>;
  };

public:
  using fsPcgcctl = FsPcgcctlRegisterModel<uint32_t, OtgFsPwrclkBaseAddress + 0x00000000>;


};

}

#endif /* DRAL_STM32F411_OTG_FS_PWRCLK_H */