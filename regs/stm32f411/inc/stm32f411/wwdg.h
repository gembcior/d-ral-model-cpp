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

#ifndef DRAL_STM32F411_WWDG_H
#define DRAL_STM32F411_WWDG_H

#include "dral/bitfield_model.h"
#include "dral/group_address_policy.h"
#include "dral/layer_offset_policy.h"
#include "dral/register_model.h"

namespace dral::stm32f411 {

class Wwdg
{
public:
  static constexpr uintptr_t WwdgBaseAddress = 0x40002C00;

private:
  template<std::uintptr_t Address>
  using WwdgAddressPolicy = GroupAddressPolicy<Address>;

/**
 * REGISTER CR
 */
private:
  template<typename SizeType>
  class CrRegisterUnion
  {
  public:
    union
    {
      SizeType value;
      BitFieldModel<SizeType, 7, 1> wdga;
      BitFieldModel<SizeType, 0, 7> t;
    };
  };

private:
  template<typename SizeType, std::uintptr_t Address>
  class CrRegisterModel : public RegisterModel<CrRegisterUnion<SizeType>, WwdgAddressPolicy<Address>>
  {
  public:
    using reg = CrRegisterUnion<SizeType>;

  public:
    using wdga = FieldModel<reg, WwdgAddressPolicy<Address>, 7, 1>;
    using t = FieldModel<reg, WwdgAddressPolicy<Address>, 0, 7>;
  };

public:
  using cr = CrRegisterModel<uint32_t, WwdgBaseAddress + 0x00000000>;

/**
 * REGISTER CFR
 */
private:
  template<typename SizeType>
  class CfrRegisterUnion
  {
  public:
    union
    {
      SizeType value;
      BitFieldModel<SizeType, 9, 1> ewi;
      BitFieldModel<SizeType, 8, 1> wdgtb1;
      BitFieldModel<SizeType, 7, 1> wdgtb0;
      BitFieldModel<SizeType, 0, 7> w;
    };
  };

private:
  template<typename SizeType, std::uintptr_t Address>
  class CfrRegisterModel : public RegisterModel<CfrRegisterUnion<SizeType>, WwdgAddressPolicy<Address>>
  {
  public:
    using reg = CfrRegisterUnion<SizeType>;

  public:
    using ewi = FieldModel<reg, WwdgAddressPolicy<Address>, 9, 1>;
    using wdgtb1 = FieldModel<reg, WwdgAddressPolicy<Address>, 8, 1>;
    using wdgtb0 = FieldModel<reg, WwdgAddressPolicy<Address>, 7, 1>;
    using w = FieldModel<reg, WwdgAddressPolicy<Address>, 0, 7>;
  };

public:
  using cfr = CfrRegisterModel<uint32_t, WwdgBaseAddress + 0x00000004>;

/**
 * REGISTER SR
 */
private:
  template<typename SizeType>
  class SrRegisterUnion
  {
  public:
    union
    {
      SizeType value;
      BitFieldModel<SizeType, 0, 1> ewif;
    };
  };

private:
  template<typename SizeType, std::uintptr_t Address>
  class SrRegisterModel : public RegisterModel<SrRegisterUnion<SizeType>, WwdgAddressPolicy<Address>>
  {
  public:
    using reg = SrRegisterUnion<SizeType>;

  public:
    using ewif = FieldModel<reg, WwdgAddressPolicy<Address>, 0, 1>;
  };

public:
  using sr = SrRegisterModel<uint32_t, WwdgBaseAddress + 0x00000008>;


};

}

#endif /* DRAL_STM32F411_WWDG_H */