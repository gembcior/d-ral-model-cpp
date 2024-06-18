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

#ifndef DRAL_STM32F411_PWR_H
#define DRAL_STM32F411_PWR_H

#include "dral/bitfield_model.h"
#include "dral/group_address_policy.h"
#include "dral/layer_offset_policy.h"
#include "dral/register_model.h"

namespace dral::stm32f411 {

class Pwr
{
public:
  static constexpr uintptr_t PwrBaseAddress = 0x40007000;

private:
  template<std::uintptr_t Address>
  using PwrAddressPolicy = GroupAddressPolicy<Address>;

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
      BitFieldModel<SizeType, 14, 2> vos;
      BitFieldModel<SizeType, 13, 1> adcdc1;
      BitFieldModel<SizeType, 9, 1> fpds;
      BitFieldModel<SizeType, 8, 1> dbp;
      BitFieldModel<SizeType, 5, 3> pls;
      BitFieldModel<SizeType, 4, 1> pvde;
      BitFieldModel<SizeType, 3, 1> csbf;
      BitFieldModel<SizeType, 2, 1> cwuf;
      BitFieldModel<SizeType, 1, 1> pdds;
      BitFieldModel<SizeType, 0, 1> lpds;
    };
  };

private:
  template<typename SizeType, std::uintptr_t Address>
  class CrRegisterModel : public RegisterModel<CrRegisterUnion<SizeType>, PwrAddressPolicy<Address>>
  {
  public:
    using reg = CrRegisterUnion<SizeType>;

  public:
    using vos = FieldModel<reg, PwrAddressPolicy<Address>, 14, 2>;
    using adcdc1 = FieldModel<reg, PwrAddressPolicy<Address>, 13, 1>;
    using fpds = FieldModel<reg, PwrAddressPolicy<Address>, 9, 1>;
    using dbp = FieldModel<reg, PwrAddressPolicy<Address>, 8, 1>;
    using pls = FieldModel<reg, PwrAddressPolicy<Address>, 5, 3>;
    using pvde = FieldModel<reg, PwrAddressPolicy<Address>, 4, 1>;
    using csbf = FieldModel<reg, PwrAddressPolicy<Address>, 3, 1>;
    using cwuf = FieldModel<reg, PwrAddressPolicy<Address>, 2, 1>;
    using pdds = FieldModel<reg, PwrAddressPolicy<Address>, 1, 1>;
    using lpds = FieldModel<reg, PwrAddressPolicy<Address>, 0, 1>;
  };

public:
  using cr = CrRegisterModel<uint32_t, PwrBaseAddress + 0x00000000>;

/**
 * REGISTER CSR
 */
private:
  template<typename SizeType>
  class CsrRegisterUnion
  {
  public:
    union
    {
      SizeType value;
      BitFieldModel<SizeType, 0, 1> wuf;
      BitFieldModel<SizeType, 1, 1> sbf;
      BitFieldModel<SizeType, 2, 1> pvdo;
      BitFieldModel<SizeType, 3, 1> brr;
      BitFieldModel<SizeType, 8, 1> ewup;
      BitFieldModel<SizeType, 9, 1> bre;
      BitFieldModel<SizeType, 14, 1> vosrdy;
    };
  };

private:
  template<typename SizeType, std::uintptr_t Address>
  class CsrRegisterModel : public RegisterModel<CsrRegisterUnion<SizeType>, PwrAddressPolicy<Address>>
  {
  public:
    using reg = CsrRegisterUnion<SizeType>;

  public:
    using wuf = FieldModel<reg, PwrAddressPolicy<Address>, 0, 1>;
    using sbf = FieldModel<reg, PwrAddressPolicy<Address>, 1, 1>;
    using pvdo = FieldModel<reg, PwrAddressPolicy<Address>, 2, 1>;
    using brr = FieldModel<reg, PwrAddressPolicy<Address>, 3, 1>;
    using ewup = FieldModel<reg, PwrAddressPolicy<Address>, 8, 1>;
    using bre = FieldModel<reg, PwrAddressPolicy<Address>, 9, 1>;
    using vosrdy = FieldModel<reg, PwrAddressPolicy<Address>, 14, 1>;
  };

public:
  using csr = CsrRegisterModel<uint32_t, PwrBaseAddress + 0x00000004>;


};

}

#endif /* DRAL_STM32F411_PWR_H */