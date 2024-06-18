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

#ifndef DRAL_STM32F411_FPU_H
#define DRAL_STM32F411_FPU_H

#include "dral/bitfield_model.h"
#include "dral/group_address_policy.h"
#include "dral/layer_offset_policy.h"
#include "dral/register_model.h"

namespace dral::stm32f411 {

class Fpu
{
public:
  static constexpr uintptr_t FpuBaseAddress = 0xE000EF34;

private:
  template<std::uintptr_t Address>
  using FpuAddressPolicy = GroupAddressPolicy<Address>;

/**
 * REGISTER FPCCR
 */
private:
  template<typename SizeType>
  class FpccrRegisterUnion
  {
  public:
    union
    {
      SizeType value;
      BitFieldModel<SizeType, 0, 1> lspact;
      BitFieldModel<SizeType, 1, 1> user;
      BitFieldModel<SizeType, 3, 1> thread;
      BitFieldModel<SizeType, 4, 1> hfrdy;
      BitFieldModel<SizeType, 5, 1> mmrdy;
      BitFieldModel<SizeType, 6, 1> bfrdy;
      BitFieldModel<SizeType, 8, 1> monrdy;
      BitFieldModel<SizeType, 30, 1> lspen;
      BitFieldModel<SizeType, 31, 1> aspen;
    };
  };

private:
  template<typename SizeType, std::uintptr_t Address>
  class FpccrRegisterModel : public RegisterModel<FpccrRegisterUnion<SizeType>, FpuAddressPolicy<Address>>
  {
  public:
    using reg = FpccrRegisterUnion<SizeType>;

  public:
    using lspact = FieldModel<reg, FpuAddressPolicy<Address>, 0, 1>;
    using user = FieldModel<reg, FpuAddressPolicy<Address>, 1, 1>;
    using thread = FieldModel<reg, FpuAddressPolicy<Address>, 3, 1>;
    using hfrdy = FieldModel<reg, FpuAddressPolicy<Address>, 4, 1>;
    using mmrdy = FieldModel<reg, FpuAddressPolicy<Address>, 5, 1>;
    using bfrdy = FieldModel<reg, FpuAddressPolicy<Address>, 6, 1>;
    using monrdy = FieldModel<reg, FpuAddressPolicy<Address>, 8, 1>;
    using lspen = FieldModel<reg, FpuAddressPolicy<Address>, 30, 1>;
    using aspen = FieldModel<reg, FpuAddressPolicy<Address>, 31, 1>;
  };

public:
  using fpccr = FpccrRegisterModel<uint32_t, FpuBaseAddress + 0x00000000>;

/**
 * REGISTER FPCAR
 */
private:
  template<typename SizeType>
  class FpcarRegisterUnion
  {
  public:
    union
    {
      SizeType value;
      BitFieldModel<SizeType, 3, 29> address;
    };
  };

private:
  template<typename SizeType, std::uintptr_t Address>
  class FpcarRegisterModel : public RegisterModel<FpcarRegisterUnion<SizeType>, FpuAddressPolicy<Address>>
  {
  public:
    using reg = FpcarRegisterUnion<SizeType>;

  public:
    using address = FieldModel<reg, FpuAddressPolicy<Address>, 3, 29>;
  };

public:
  using fpcar = FpcarRegisterModel<uint32_t, FpuBaseAddress + 0x00000004>;

/**
 * REGISTER FPSCR
 */
private:
  template<typename SizeType>
  class FpscrRegisterUnion
  {
  public:
    union
    {
      SizeType value;
      BitFieldModel<SizeType, 0, 1> ioc;
      BitFieldModel<SizeType, 1, 1> dzc;
      BitFieldModel<SizeType, 2, 1> ofc;
      BitFieldModel<SizeType, 3, 1> ufc;
      BitFieldModel<SizeType, 4, 1> ixc;
      BitFieldModel<SizeType, 7, 1> idc;
      BitFieldModel<SizeType, 22, 2> rmode;
      BitFieldModel<SizeType, 24, 1> fz;
      BitFieldModel<SizeType, 25, 1> dn;
      BitFieldModel<SizeType, 26, 1> ahp;
      BitFieldModel<SizeType, 28, 1> v;
      BitFieldModel<SizeType, 29, 1> c;
      BitFieldModel<SizeType, 30, 1> z;
      BitFieldModel<SizeType, 31, 1> n;
    };
  };

private:
  template<typename SizeType, std::uintptr_t Address>
  class FpscrRegisterModel : public RegisterModel<FpscrRegisterUnion<SizeType>, FpuAddressPolicy<Address>>
  {
  public:
    using reg = FpscrRegisterUnion<SizeType>;

  public:
    using ioc = FieldModel<reg, FpuAddressPolicy<Address>, 0, 1>;
    using dzc = FieldModel<reg, FpuAddressPolicy<Address>, 1, 1>;
    using ofc = FieldModel<reg, FpuAddressPolicy<Address>, 2, 1>;
    using ufc = FieldModel<reg, FpuAddressPolicy<Address>, 3, 1>;
    using ixc = FieldModel<reg, FpuAddressPolicy<Address>, 4, 1>;
    using idc = FieldModel<reg, FpuAddressPolicy<Address>, 7, 1>;
    using rmode = FieldModel<reg, FpuAddressPolicy<Address>, 22, 2>;
    using fz = FieldModel<reg, FpuAddressPolicy<Address>, 24, 1>;
    using dn = FieldModel<reg, FpuAddressPolicy<Address>, 25, 1>;
    using ahp = FieldModel<reg, FpuAddressPolicy<Address>, 26, 1>;
    using v = FieldModel<reg, FpuAddressPolicy<Address>, 28, 1>;
    using c = FieldModel<reg, FpuAddressPolicy<Address>, 29, 1>;
    using z = FieldModel<reg, FpuAddressPolicy<Address>, 30, 1>;
    using n = FieldModel<reg, FpuAddressPolicy<Address>, 31, 1>;
  };

public:
  using fpscr = FpscrRegisterModel<uint32_t, FpuBaseAddress + 0x00000008>;


};

}

#endif /* DRAL_STM32F411_FPU_H */