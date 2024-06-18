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

#ifndef DRAL_STM32F411_MPU_H
#define DRAL_STM32F411_MPU_H

#include "dral/bitfield_model.h"
#include "dral/group_address_policy.h"
#include "dral/layer_offset_policy.h"
#include "dral/register_model.h"

namespace dral::stm32f411 {

class Mpu
{
public:
  static constexpr uintptr_t MpuBaseAddress = 0xE000ED90;

private:
  template<std::uintptr_t Address>
  using MpuAddressPolicy = GroupAddressPolicy<Address>;

/**
 * REGISTER MPU_TYPER
 */
private:
  template<typename SizeType>
  class MpuTyperRegisterUnion
  {
  public:
    union
    {
      SizeType value;
      BitFieldModel<SizeType, 0, 1> separate;
      BitFieldModel<SizeType, 8, 8> dregion;
      BitFieldModel<SizeType, 16, 8> iregion;
    };
  };

private:
  template<typename SizeType, std::uintptr_t Address>
  class MpuTyperRegisterModel : public RegisterModel<MpuTyperRegisterUnion<SizeType>, MpuAddressPolicy<Address>>
  {
  public:
    using reg = MpuTyperRegisterUnion<SizeType>;

  public:
    using separate = FieldModel<reg, MpuAddressPolicy<Address>, 0, 1>;
    using dregion = FieldModel<reg, MpuAddressPolicy<Address>, 8, 8>;
    using iregion = FieldModel<reg, MpuAddressPolicy<Address>, 16, 8>;
  };

public:
  using mpuTyper = MpuTyperRegisterModel<uint32_t, MpuBaseAddress + 0x00000000>;

/**
 * REGISTER MPU_CTRL
 */
private:
  template<typename SizeType>
  class MpuCtrlRegisterUnion
  {
  public:
    union
    {
      SizeType value;
      BitFieldModel<SizeType, 0, 1> enable;
      BitFieldModel<SizeType, 1, 1> hfnmiena;
      BitFieldModel<SizeType, 2, 1> privdefena;
    };
  };

private:
  template<typename SizeType, std::uintptr_t Address>
  class MpuCtrlRegisterModel : public RegisterModel<MpuCtrlRegisterUnion<SizeType>, MpuAddressPolicy<Address>>
  {
  public:
    using reg = MpuCtrlRegisterUnion<SizeType>;

  public:
    using enable = FieldModel<reg, MpuAddressPolicy<Address>, 0, 1>;
    using hfnmiena = FieldModel<reg, MpuAddressPolicy<Address>, 1, 1>;
    using privdefena = FieldModel<reg, MpuAddressPolicy<Address>, 2, 1>;
  };

public:
  using mpuCtrl = MpuCtrlRegisterModel<uint32_t, MpuBaseAddress + 0x00000004>;

/**
 * REGISTER MPU_RNR
 */
private:
  template<typename SizeType>
  class MpuRnrRegisterUnion
  {
  public:
    union
    {
      SizeType value;
      BitFieldModel<SizeType, 0, 8> region;
    };
  };

private:
  template<typename SizeType, std::uintptr_t Address>
  class MpuRnrRegisterModel : public RegisterModel<MpuRnrRegisterUnion<SizeType>, MpuAddressPolicy<Address>>
  {
  public:
    using reg = MpuRnrRegisterUnion<SizeType>;

  public:
    using region = FieldModel<reg, MpuAddressPolicy<Address>, 0, 8>;
  };

public:
  using mpuRnr = MpuRnrRegisterModel<uint32_t, MpuBaseAddress + 0x00000008>;

/**
 * REGISTER MPU_RBAR
 */
private:
  template<typename SizeType>
  class MpuRbarRegisterUnion
  {
  public:
    union
    {
      SizeType value;
      BitFieldModel<SizeType, 0, 4> region;
      BitFieldModel<SizeType, 4, 1> valid;
      BitFieldModel<SizeType, 5, 27> addr;
    };
  };

private:
  template<typename SizeType, std::uintptr_t Address>
  class MpuRbarRegisterModel : public RegisterModel<MpuRbarRegisterUnion<SizeType>, MpuAddressPolicy<Address>>
  {
  public:
    using reg = MpuRbarRegisterUnion<SizeType>;

  public:
    using region = FieldModel<reg, MpuAddressPolicy<Address>, 0, 4>;
    using valid = FieldModel<reg, MpuAddressPolicy<Address>, 4, 1>;
    using addr = FieldModel<reg, MpuAddressPolicy<Address>, 5, 27>;
  };

public:
  using mpuRbar = MpuRbarRegisterModel<uint32_t, MpuBaseAddress + 0x0000000C>;

/**
 * REGISTER MPU_RASR
 */
private:
  template<typename SizeType>
  class MpuRasrRegisterUnion
  {
  public:
    union
    {
      SizeType value;
      BitFieldModel<SizeType, 0, 1> enable;
      BitFieldModel<SizeType, 1, 5> size;
      BitFieldModel<SizeType, 8, 8> srd;
      BitFieldModel<SizeType, 16, 1> b;
      BitFieldModel<SizeType, 17, 1> c;
      BitFieldModel<SizeType, 18, 1> s;
      BitFieldModel<SizeType, 19, 3> tex;
      BitFieldModel<SizeType, 24, 3> ap;
      BitFieldModel<SizeType, 28, 1> xn;
    };
  };

private:
  template<typename SizeType, std::uintptr_t Address>
  class MpuRasrRegisterModel : public RegisterModel<MpuRasrRegisterUnion<SizeType>, MpuAddressPolicy<Address>>
  {
  public:
    using reg = MpuRasrRegisterUnion<SizeType>;

  public:
    using enable = FieldModel<reg, MpuAddressPolicy<Address>, 0, 1>;
    using size = FieldModel<reg, MpuAddressPolicy<Address>, 1, 5>;
    using srd = FieldModel<reg, MpuAddressPolicy<Address>, 8, 8>;
    using b = FieldModel<reg, MpuAddressPolicy<Address>, 16, 1>;
    using c = FieldModel<reg, MpuAddressPolicy<Address>, 17, 1>;
    using s = FieldModel<reg, MpuAddressPolicy<Address>, 18, 1>;
    using tex = FieldModel<reg, MpuAddressPolicy<Address>, 19, 3>;
    using ap = FieldModel<reg, MpuAddressPolicy<Address>, 24, 3>;
    using xn = FieldModel<reg, MpuAddressPolicy<Address>, 28, 1>;
  };

public:
  using mpuRasr = MpuRasrRegisterModel<uint32_t, MpuBaseAddress + 0x00000010>;


};

}

#endif /* DRAL_STM32F411_MPU_H */