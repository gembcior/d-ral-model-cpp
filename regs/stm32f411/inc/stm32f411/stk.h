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

#ifndef DRAL_STM32F411_STK_H
#define DRAL_STM32F411_STK_H

#include "dral/bitfield_model.h"
#include "dral/group_address_policy.h"
#include "dral/layer_offset_policy.h"
#include "dral/register_model.h"

namespace dral::stm32f411 {

class Stk
{
public:
  static constexpr uintptr_t StkBaseAddress = 0xE000E010;

private:
  template<std::uintptr_t Address>
  using StkAddressPolicy = GroupAddressPolicy<Address>;

/**
 * REGISTER CTRL
 */
private:
  template<typename SizeType>
  class CtrlRegisterUnion
  {
  public:
    union
    {
      SizeType value;
      BitFieldModel<SizeType, 0, 1> enable;
      BitFieldModel<SizeType, 1, 1> tickint;
      BitFieldModel<SizeType, 2, 1> clksource;
      BitFieldModel<SizeType, 16, 1> countflag;
    };
  };

private:
  template<typename SizeType, std::uintptr_t Address>
  class CtrlRegisterModel : public RegisterModel<CtrlRegisterUnion<SizeType>, StkAddressPolicy<Address>>
  {
  public:
    using reg = CtrlRegisterUnion<SizeType>;

  public:
    using enable = FieldModel<reg, StkAddressPolicy<Address>, 0, 1>;
    using tickint = FieldModel<reg, StkAddressPolicy<Address>, 1, 1>;
    using clksource = FieldModel<reg, StkAddressPolicy<Address>, 2, 1>;
    using countflag = FieldModel<reg, StkAddressPolicy<Address>, 16, 1>;
  };

public:
  using ctrl = CtrlRegisterModel<uint32_t, StkBaseAddress + 0x00000000>;

/**
 * REGISTER LOAD
 */
private:
  template<typename SizeType>
  class LoadRegisterUnion
  {
  public:
    union
    {
      SizeType value;
      BitFieldModel<SizeType, 0, 24> reload;
    };
  };

private:
  template<typename SizeType, std::uintptr_t Address>
  class LoadRegisterModel : public RegisterModel<LoadRegisterUnion<SizeType>, StkAddressPolicy<Address>>
  {
  public:
    using reg = LoadRegisterUnion<SizeType>;

  public:
    using reload = FieldModel<reg, StkAddressPolicy<Address>, 0, 24>;
  };

public:
  using load = LoadRegisterModel<uint32_t, StkBaseAddress + 0x00000004>;

/**
 * REGISTER VAL
 */
private:
  template<typename SizeType>
  class ValRegisterUnion
  {
  public:
    union
    {
      SizeType value;
      BitFieldModel<SizeType, 0, 24> current;
    };
  };

private:
  template<typename SizeType, std::uintptr_t Address>
  class ValRegisterModel : public RegisterModel<ValRegisterUnion<SizeType>, StkAddressPolicy<Address>>
  {
  public:
    using reg = ValRegisterUnion<SizeType>;

  public:
    using current = FieldModel<reg, StkAddressPolicy<Address>, 0, 24>;
  };

public:
  using val = ValRegisterModel<uint32_t, StkBaseAddress + 0x00000008>;

/**
 * REGISTER CALIB
 */
private:
  template<typename SizeType>
  class CalibRegisterUnion
  {
  public:
    union
    {
      SizeType value;
      BitFieldModel<SizeType, 0, 24> tenms;
      BitFieldModel<SizeType, 30, 1> skew;
      BitFieldModel<SizeType, 31, 1> noref;
    };
  };

private:
  template<typename SizeType, std::uintptr_t Address>
  class CalibRegisterModel : public RegisterModel<CalibRegisterUnion<SizeType>, StkAddressPolicy<Address>>
  {
  public:
    using reg = CalibRegisterUnion<SizeType>;

  public:
    using tenms = FieldModel<reg, StkAddressPolicy<Address>, 0, 24>;
    using skew = FieldModel<reg, StkAddressPolicy<Address>, 30, 1>;
    using noref = FieldModel<reg, StkAddressPolicy<Address>, 31, 1>;
  };

public:
  using calib = CalibRegisterModel<uint32_t, StkBaseAddress + 0x0000000C>;


};

}

#endif /* DRAL_STM32F411_STK_H */