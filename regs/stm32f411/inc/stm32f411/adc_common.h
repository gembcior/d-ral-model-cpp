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

#ifndef DRAL_STM32F411_ADC_COMMON_H
#define DRAL_STM32F411_ADC_COMMON_H

#include "dral/bitfield_model.h"
#include "dral/group_address_policy.h"
#include "dral/layer_offset_policy.h"
#include "dral/register_model.h"

namespace dral::stm32f411 {

class AdcCommon
{
public:
  static constexpr uintptr_t AdcCommonBaseAddress = 0x40012300;

private:
  template<std::uintptr_t Address>
  using AdcCommonAddressPolicy = GroupAddressPolicy<Address>;

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
      BitFieldModel<SizeType, 21, 1> ovr3;
      BitFieldModel<SizeType, 20, 1> strt3;
      BitFieldModel<SizeType, 19, 1> jstrt3;
      BitFieldModel<SizeType, 18, 1> jeoc3;
      BitFieldModel<SizeType, 17, 1> eoc3;
      BitFieldModel<SizeType, 16, 1> awd3;
      BitFieldModel<SizeType, 13, 1> ovr2;
      BitFieldModel<SizeType, 12, 1> strt2;
      BitFieldModel<SizeType, 11, 1> jstrt2;
      BitFieldModel<SizeType, 10, 1> jeoc2;
      BitFieldModel<SizeType, 9, 1> eoc2;
      BitFieldModel<SizeType, 8, 1> awd2;
      BitFieldModel<SizeType, 5, 1> ovr1;
      BitFieldModel<SizeType, 4, 1> strt1;
      BitFieldModel<SizeType, 3, 1> jstrt1;
      BitFieldModel<SizeType, 2, 1> jeoc1;
      BitFieldModel<SizeType, 1, 1> eoc1;
      BitFieldModel<SizeType, 0, 1> awd1;
    };
  };

private:
  template<typename SizeType, std::uintptr_t Address>
  class CsrRegisterModel : public RegisterModel<CsrRegisterUnion<SizeType>, AdcCommonAddressPolicy<Address>>
  {
  public:
    using reg = CsrRegisterUnion<SizeType>;

  public:
    using ovr3 = FieldModel<reg, AdcCommonAddressPolicy<Address>, 21, 1>;
    using strt3 = FieldModel<reg, AdcCommonAddressPolicy<Address>, 20, 1>;
    using jstrt3 = FieldModel<reg, AdcCommonAddressPolicy<Address>, 19, 1>;
    using jeoc3 = FieldModel<reg, AdcCommonAddressPolicy<Address>, 18, 1>;
    using eoc3 = FieldModel<reg, AdcCommonAddressPolicy<Address>, 17, 1>;
    using awd3 = FieldModel<reg, AdcCommonAddressPolicy<Address>, 16, 1>;
    using ovr2 = FieldModel<reg, AdcCommonAddressPolicy<Address>, 13, 1>;
    using strt2 = FieldModel<reg, AdcCommonAddressPolicy<Address>, 12, 1>;
    using jstrt2 = FieldModel<reg, AdcCommonAddressPolicy<Address>, 11, 1>;
    using jeoc2 = FieldModel<reg, AdcCommonAddressPolicy<Address>, 10, 1>;
    using eoc2 = FieldModel<reg, AdcCommonAddressPolicy<Address>, 9, 1>;
    using awd2 = FieldModel<reg, AdcCommonAddressPolicy<Address>, 8, 1>;
    using ovr1 = FieldModel<reg, AdcCommonAddressPolicy<Address>, 5, 1>;
    using strt1 = FieldModel<reg, AdcCommonAddressPolicy<Address>, 4, 1>;
    using jstrt1 = FieldModel<reg, AdcCommonAddressPolicy<Address>, 3, 1>;
    using jeoc1 = FieldModel<reg, AdcCommonAddressPolicy<Address>, 2, 1>;
    using eoc1 = FieldModel<reg, AdcCommonAddressPolicy<Address>, 1, 1>;
    using awd1 = FieldModel<reg, AdcCommonAddressPolicy<Address>, 0, 1>;
  };

public:
  using csr = CsrRegisterModel<uint32_t, AdcCommonBaseAddress + 0x00000000>;

/**
 * REGISTER CCR
 */
private:
  template<typename SizeType>
  class CcrRegisterUnion
  {
  public:
    union
    {
      SizeType value;
      BitFieldModel<SizeType, 23, 1> tsvrefe;
      BitFieldModel<SizeType, 22, 1> vbate;
      BitFieldModel<SizeType, 16, 2> adcpre;
      BitFieldModel<SizeType, 14, 2> dma;
      BitFieldModel<SizeType, 13, 1> dds;
      BitFieldModel<SizeType, 8, 4> delay;
    };
  };

private:
  template<typename SizeType, std::uintptr_t Address>
  class CcrRegisterModel : public RegisterModel<CcrRegisterUnion<SizeType>, AdcCommonAddressPolicy<Address>>
  {
  public:
    using reg = CcrRegisterUnion<SizeType>;

  public:
    using tsvrefe = FieldModel<reg, AdcCommonAddressPolicy<Address>, 23, 1>;
    using vbate = FieldModel<reg, AdcCommonAddressPolicy<Address>, 22, 1>;
    using adcpre = FieldModel<reg, AdcCommonAddressPolicy<Address>, 16, 2>;
    using dma = FieldModel<reg, AdcCommonAddressPolicy<Address>, 14, 2>;
    using dds = FieldModel<reg, AdcCommonAddressPolicy<Address>, 13, 1>;
    using delay = FieldModel<reg, AdcCommonAddressPolicy<Address>, 8, 4>;
  };

public:
  using ccr = CcrRegisterModel<uint32_t, AdcCommonBaseAddress + 0x00000004>;


};

}

#endif /* DRAL_STM32F411_ADC_COMMON_H */