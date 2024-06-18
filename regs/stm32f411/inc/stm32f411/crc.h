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

#ifndef DRAL_STM32F411_CRC_H
#define DRAL_STM32F411_CRC_H

#include "dral/bitfield_model.h"
#include "dral/group_address_policy.h"
#include "dral/layer_offset_policy.h"
#include "dral/register_model.h"

namespace dral::stm32f411 {

class Crc
{
public:
  static constexpr uintptr_t CrcBaseAddress = 0x40023000;

private:
  template<std::uintptr_t Address>
  using CrcAddressPolicy = GroupAddressPolicy<Address>;

/**
 * REGISTER DR
 */
private:
  template<typename SizeType>
  class DrRegisterUnion
  {
  public:
    union
    {
      SizeType value;
      BitFieldModel<SizeType, 0, 32> dr;
    };
  };

private:
  template<typename SizeType, std::uintptr_t Address>
  class DrRegisterModel : public RegisterModel<DrRegisterUnion<SizeType>, CrcAddressPolicy<Address>>
  {
  public:
    using reg = DrRegisterUnion<SizeType>;

  public:
    using dr = FieldModel<reg, CrcAddressPolicy<Address>, 0, 32>;
  };

public:
  using dr = DrRegisterModel<uint32_t, CrcBaseAddress + 0x00000000>;

/**
 * REGISTER IDR
 */
private:
  template<typename SizeType>
  class IdrRegisterUnion
  {
  public:
    union
    {
      SizeType value;
      BitFieldModel<SizeType, 0, 8> idr;
    };
  };

private:
  template<typename SizeType, std::uintptr_t Address>
  class IdrRegisterModel : public RegisterModel<IdrRegisterUnion<SizeType>, CrcAddressPolicy<Address>>
  {
  public:
    using reg = IdrRegisterUnion<SizeType>;

  public:
    using idr = FieldModel<reg, CrcAddressPolicy<Address>, 0, 8>;
  };

public:
  using idr = IdrRegisterModel<uint32_t, CrcBaseAddress + 0x00000004>;

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
      BitFieldModel<SizeType, 0, 1> cr;
    };
  };

private:
  template<typename SizeType, std::uintptr_t Address>
  class CrRegisterModel : public RegisterModel<CrRegisterUnion<SizeType>, CrcAddressPolicy<Address>>
  {
  public:
    using reg = CrRegisterUnion<SizeType>;

  public:
    using cr = FieldModel<reg, CrcAddressPolicy<Address>, 0, 1>;
  };

public:
  using cr = CrRegisterModel<uint32_t, CrcBaseAddress + 0x00000008>;


};

}

#endif /* DRAL_STM32F411_CRC_H */