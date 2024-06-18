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

#ifndef DRAL_STM32F411_SYSCFG_H
#define DRAL_STM32F411_SYSCFG_H

#include "dral/bitfield_model.h"
#include "dral/group_address_policy.h"
#include "dral/layer_offset_policy.h"
#include "dral/register_model.h"

namespace dral::stm32f411 {

class Syscfg
{
public:
  static constexpr uintptr_t SyscfgBaseAddress = 0x40013800;

private:
  template<std::uintptr_t Address>
  using SyscfgAddressPolicy = GroupAddressPolicy<Address>;

/**
 * REGISTER MEMRM
 */
private:
  template<typename SizeType>
  class MemrmRegisterUnion
  {
  public:
    union
    {
      SizeType value;
      BitFieldModel<SizeType, 0, 2> memMode;
    };
  };

private:
  template<typename SizeType, std::uintptr_t Address>
  class MemrmRegisterModel : public RegisterModel<MemrmRegisterUnion<SizeType>, SyscfgAddressPolicy<Address>>
  {
  public:
    using reg = MemrmRegisterUnion<SizeType>;

  public:
    using memMode = FieldModel<reg, SyscfgAddressPolicy<Address>, 0, 2>;
  };

public:
  using memrm = MemrmRegisterModel<uint32_t, SyscfgBaseAddress + 0x00000000>;

/**
 * REGISTER PMC
 */
private:
  template<typename SizeType>
  class PmcRegisterUnion
  {
  public:
    union
    {
      SizeType value;
      BitFieldModel<SizeType, 16, 1> adc1dc2;
    };
  };

private:
  template<typename SizeType, std::uintptr_t Address>
  class PmcRegisterModel : public RegisterModel<PmcRegisterUnion<SizeType>, SyscfgAddressPolicy<Address>>
  {
  public:
    using reg = PmcRegisterUnion<SizeType>;

  public:
    using adc1dc2 = FieldModel<reg, SyscfgAddressPolicy<Address>, 16, 1>;
  };

public:
  using pmc = PmcRegisterModel<uint32_t, SyscfgBaseAddress + 0x00000004>;

/**
 * REGISTER EXTICR1
 */
private:
  template<typename SizeType>
  class Exticr1RegisterUnion
  {
  public:
    union
    {
      SizeType value;
      BitFieldModel<SizeType, 12, 4> exti3;
      BitFieldModel<SizeType, 8, 4> exti2;
      BitFieldModel<SizeType, 4, 4> exti1;
      BitFieldModel<SizeType, 0, 4> exti0;
    };
  };

private:
  template<typename SizeType, std::uintptr_t Address>
  class Exticr1RegisterModel : public RegisterModel<Exticr1RegisterUnion<SizeType>, SyscfgAddressPolicy<Address>>
  {
  public:
    using reg = Exticr1RegisterUnion<SizeType>;

  public:
    using exti3 = FieldModel<reg, SyscfgAddressPolicy<Address>, 12, 4>;
    using exti2 = FieldModel<reg, SyscfgAddressPolicy<Address>, 8, 4>;
    using exti1 = FieldModel<reg, SyscfgAddressPolicy<Address>, 4, 4>;
    using exti0 = FieldModel<reg, SyscfgAddressPolicy<Address>, 0, 4>;
  };

public:
  using exticr1 = Exticr1RegisterModel<uint32_t, SyscfgBaseAddress + 0x00000008>;

/**
 * REGISTER EXTICR2
 */
private:
  template<typename SizeType>
  class Exticr2RegisterUnion
  {
  public:
    union
    {
      SizeType value;
      BitFieldModel<SizeType, 12, 4> exti7;
      BitFieldModel<SizeType, 8, 4> exti6;
      BitFieldModel<SizeType, 4, 4> exti5;
      BitFieldModel<SizeType, 0, 4> exti4;
    };
  };

private:
  template<typename SizeType, std::uintptr_t Address>
  class Exticr2RegisterModel : public RegisterModel<Exticr2RegisterUnion<SizeType>, SyscfgAddressPolicy<Address>>
  {
  public:
    using reg = Exticr2RegisterUnion<SizeType>;

  public:
    using exti7 = FieldModel<reg, SyscfgAddressPolicy<Address>, 12, 4>;
    using exti6 = FieldModel<reg, SyscfgAddressPolicy<Address>, 8, 4>;
    using exti5 = FieldModel<reg, SyscfgAddressPolicy<Address>, 4, 4>;
    using exti4 = FieldModel<reg, SyscfgAddressPolicy<Address>, 0, 4>;
  };

public:
  using exticr2 = Exticr2RegisterModel<uint32_t, SyscfgBaseAddress + 0x0000000C>;

/**
 * REGISTER EXTICR3
 */
private:
  template<typename SizeType>
  class Exticr3RegisterUnion
  {
  public:
    union
    {
      SizeType value;
      BitFieldModel<SizeType, 12, 4> exti11;
      BitFieldModel<SizeType, 8, 4> exti10;
      BitFieldModel<SizeType, 4, 4> exti9;
      BitFieldModel<SizeType, 0, 4> exti8;
    };
  };

private:
  template<typename SizeType, std::uintptr_t Address>
  class Exticr3RegisterModel : public RegisterModel<Exticr3RegisterUnion<SizeType>, SyscfgAddressPolicy<Address>>
  {
  public:
    using reg = Exticr3RegisterUnion<SizeType>;

  public:
    using exti11 = FieldModel<reg, SyscfgAddressPolicy<Address>, 12, 4>;
    using exti10 = FieldModel<reg, SyscfgAddressPolicy<Address>, 8, 4>;
    using exti9 = FieldModel<reg, SyscfgAddressPolicy<Address>, 4, 4>;
    using exti8 = FieldModel<reg, SyscfgAddressPolicy<Address>, 0, 4>;
  };

public:
  using exticr3 = Exticr3RegisterModel<uint32_t, SyscfgBaseAddress + 0x00000010>;

/**
 * REGISTER EXTICR4
 */
private:
  template<typename SizeType>
  class Exticr4RegisterUnion
  {
  public:
    union
    {
      SizeType value;
      BitFieldModel<SizeType, 12, 4> exti15;
      BitFieldModel<SizeType, 8, 4> exti14;
      BitFieldModel<SizeType, 4, 4> exti13;
      BitFieldModel<SizeType, 0, 4> exti12;
    };
  };

private:
  template<typename SizeType, std::uintptr_t Address>
  class Exticr4RegisterModel : public RegisterModel<Exticr4RegisterUnion<SizeType>, SyscfgAddressPolicy<Address>>
  {
  public:
    using reg = Exticr4RegisterUnion<SizeType>;

  public:
    using exti15 = FieldModel<reg, SyscfgAddressPolicy<Address>, 12, 4>;
    using exti14 = FieldModel<reg, SyscfgAddressPolicy<Address>, 8, 4>;
    using exti13 = FieldModel<reg, SyscfgAddressPolicy<Address>, 4, 4>;
    using exti12 = FieldModel<reg, SyscfgAddressPolicy<Address>, 0, 4>;
  };

public:
  using exticr4 = Exticr4RegisterModel<uint32_t, SyscfgBaseAddress + 0x00000014>;

/**
 * REGISTER CMPCR
 */
private:
  template<typename SizeType>
  class CmpcrRegisterUnion
  {
  public:
    union
    {
      SizeType value;
      BitFieldModel<SizeType, 8, 1> ready;
      BitFieldModel<SizeType, 0, 1> cmpPd;
    };
  };

private:
  template<typename SizeType, std::uintptr_t Address>
  class CmpcrRegisterModel : public RegisterModel<CmpcrRegisterUnion<SizeType>, SyscfgAddressPolicy<Address>>
  {
  public:
    using reg = CmpcrRegisterUnion<SizeType>;

  public:
    using ready = FieldModel<reg, SyscfgAddressPolicy<Address>, 8, 1>;
    using cmpPd = FieldModel<reg, SyscfgAddressPolicy<Address>, 0, 1>;
  };

public:
  using cmpcr = CmpcrRegisterModel<uint32_t, SyscfgBaseAddress + 0x00000020>;


};

}

#endif /* DRAL_STM32F411_SYSCFG_H */