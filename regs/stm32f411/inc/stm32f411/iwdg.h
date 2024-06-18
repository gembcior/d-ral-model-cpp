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

#ifndef DRAL_STM32F411_IWDG_H
#define DRAL_STM32F411_IWDG_H

#include "dral/bitfield_model.h"
#include "dral/group_address_policy.h"
#include "dral/layer_offset_policy.h"
#include "dral/register_model.h"

namespace dral::stm32f411 {

class Iwdg
{
public:
  static constexpr uintptr_t IwdgBaseAddress = 0x40003000;

private:
  template<std::uintptr_t Address>
  using IwdgAddressPolicy = GroupAddressPolicy<Address>;

/**
 * REGISTER KR
 */
private:
  template<typename SizeType>
  class KrRegisterUnion
  {
  public:
    union
    {
      SizeType value;
      BitFieldModel<SizeType, 0, 16> key;
    };
  };

private:
  template<typename SizeType, std::uintptr_t Address>
  class KrRegisterModel : public RegisterModel<KrRegisterUnion<SizeType>, IwdgAddressPolicy<Address>>
  {
  public:
    using reg = KrRegisterUnion<SizeType>;

  public:
    using key = FieldModel<reg, IwdgAddressPolicy<Address>, 0, 16>;
  };

public:
  using kr = KrRegisterModel<uint32_t, IwdgBaseAddress + 0x00000000>;

/**
 * REGISTER PR
 */
private:
  template<typename SizeType>
  class PrRegisterUnion
  {
  public:
    union
    {
      SizeType value;
      BitFieldModel<SizeType, 0, 3> pr;
    };
  };

private:
  template<typename SizeType, std::uintptr_t Address>
  class PrRegisterModel : public RegisterModel<PrRegisterUnion<SizeType>, IwdgAddressPolicy<Address>>
  {
  public:
    using reg = PrRegisterUnion<SizeType>;

  public:
    using pr = FieldModel<reg, IwdgAddressPolicy<Address>, 0, 3>;
  };

public:
  using pr = PrRegisterModel<uint32_t, IwdgBaseAddress + 0x00000004>;

/**
 * REGISTER RLR
 */
private:
  template<typename SizeType>
  class RlrRegisterUnion
  {
  public:
    union
    {
      SizeType value;
      BitFieldModel<SizeType, 0, 12> rl;
    };
  };

private:
  template<typename SizeType, std::uintptr_t Address>
  class RlrRegisterModel : public RegisterModel<RlrRegisterUnion<SizeType>, IwdgAddressPolicy<Address>>
  {
  public:
    using reg = RlrRegisterUnion<SizeType>;

  public:
    using rl = FieldModel<reg, IwdgAddressPolicy<Address>, 0, 12>;
  };

public:
  using rlr = RlrRegisterModel<uint32_t, IwdgBaseAddress + 0x00000008>;

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
      BitFieldModel<SizeType, 1, 1> rvu;
      BitFieldModel<SizeType, 0, 1> pvu;
    };
  };

private:
  template<typename SizeType, std::uintptr_t Address>
  class SrRegisterModel : public RegisterModel<SrRegisterUnion<SizeType>, IwdgAddressPolicy<Address>>
  {
  public:
    using reg = SrRegisterUnion<SizeType>;

  public:
    using rvu = FieldModel<reg, IwdgAddressPolicy<Address>, 1, 1>;
    using pvu = FieldModel<reg, IwdgAddressPolicy<Address>, 0, 1>;
  };

public:
  using sr = SrRegisterModel<uint32_t, IwdgBaseAddress + 0x0000000C>;


};

}

#endif /* DRAL_STM32F411_IWDG_H */