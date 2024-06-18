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

#ifndef DRAL_STM32F411_DBG_H
#define DRAL_STM32F411_DBG_H

#include "dral/bitfield_model.h"
#include "dral/group_address_policy.h"
#include "dral/layer_offset_policy.h"
#include "dral/register_model.h"

namespace dral::stm32f411 {

class Dbg
{
public:
  static constexpr uintptr_t DbgBaseAddress = 0xE0042000;

private:
  template<std::uintptr_t Address>
  using DbgAddressPolicy = GroupAddressPolicy<Address>;

/**
 * REGISTER DBGMCU_IDCODE
 */
private:
  template<typename SizeType>
  class DbgmcuIdcodeRegisterUnion
  {
  public:
    union
    {
      SizeType value;
      BitFieldModel<SizeType, 0, 12> devId;
      BitFieldModel<SizeType, 16, 16> revId;
    };
  };

private:
  template<typename SizeType, std::uintptr_t Address>
  class DbgmcuIdcodeRegisterModel : public RegisterModel<DbgmcuIdcodeRegisterUnion<SizeType>, DbgAddressPolicy<Address>>
  {
  public:
    using reg = DbgmcuIdcodeRegisterUnion<SizeType>;

  public:
    using devId = FieldModel<reg, DbgAddressPolicy<Address>, 0, 12>;
    using revId = FieldModel<reg, DbgAddressPolicy<Address>, 16, 16>;
  };

public:
  using dbgmcuIdcode = DbgmcuIdcodeRegisterModel<uint32_t, DbgBaseAddress + 0x00000000>;

/**
 * REGISTER DBGMCU_CR
 */
private:
  template<typename SizeType>
  class DbgmcuCrRegisterUnion
  {
  public:
    union
    {
      SizeType value;
      BitFieldModel<SizeType, 0, 1> dbgSleep;
      BitFieldModel<SizeType, 1, 1> dbgStop;
      BitFieldModel<SizeType, 2, 1> dbgStandby;
      BitFieldModel<SizeType, 5, 1> traceIoen;
      BitFieldModel<SizeType, 6, 2> traceMode;
    };
  };

private:
  template<typename SizeType, std::uintptr_t Address>
  class DbgmcuCrRegisterModel : public RegisterModel<DbgmcuCrRegisterUnion<SizeType>, DbgAddressPolicy<Address>>
  {
  public:
    using reg = DbgmcuCrRegisterUnion<SizeType>;

  public:
    using dbgSleep = FieldModel<reg, DbgAddressPolicy<Address>, 0, 1>;
    using dbgStop = FieldModel<reg, DbgAddressPolicy<Address>, 1, 1>;
    using dbgStandby = FieldModel<reg, DbgAddressPolicy<Address>, 2, 1>;
    using traceIoen = FieldModel<reg, DbgAddressPolicy<Address>, 5, 1>;
    using traceMode = FieldModel<reg, DbgAddressPolicy<Address>, 6, 2>;
  };

public:
  using dbgmcuCr = DbgmcuCrRegisterModel<uint32_t, DbgBaseAddress + 0x00000004>;

/**
 * REGISTER DBGMCU_APB1_FZ
 */
private:
  template<typename SizeType>
  class DbgmcuApb1FzRegisterUnion
  {
  public:
    union
    {
      SizeType value;
      BitFieldModel<SizeType, 0, 1> dbgTim2Stop;
      BitFieldModel<SizeType, 1, 1> dbgTim3Stop;
      BitFieldModel<SizeType, 2, 1> dbgTim4Stop;
      BitFieldModel<SizeType, 3, 1> dbgTim5Stop;
      BitFieldModel<SizeType, 10, 1> dbgRtcStop;
      BitFieldModel<SizeType, 11, 1> dbgWwdgStop;
      BitFieldModel<SizeType, 12, 1> dbgIwdegStop;
      BitFieldModel<SizeType, 21, 1> dbgI2c1SmbusTimeout;
      BitFieldModel<SizeType, 22, 1> dbgI2c2SmbusTimeout;
      BitFieldModel<SizeType, 23, 1> dbgI2c3smbusTimeout;
    };
  };

private:
  template<typename SizeType, std::uintptr_t Address>
  class DbgmcuApb1FzRegisterModel : public RegisterModel<DbgmcuApb1FzRegisterUnion<SizeType>, DbgAddressPolicy<Address>>
  {
  public:
    using reg = DbgmcuApb1FzRegisterUnion<SizeType>;

  public:
    using dbgTim2Stop = FieldModel<reg, DbgAddressPolicy<Address>, 0, 1>;
    using dbgTim3Stop = FieldModel<reg, DbgAddressPolicy<Address>, 1, 1>;
    using dbgTim4Stop = FieldModel<reg, DbgAddressPolicy<Address>, 2, 1>;
    using dbgTim5Stop = FieldModel<reg, DbgAddressPolicy<Address>, 3, 1>;
    using dbgRtcStop = FieldModel<reg, DbgAddressPolicy<Address>, 10, 1>;
    using dbgWwdgStop = FieldModel<reg, DbgAddressPolicy<Address>, 11, 1>;
    using dbgIwdegStop = FieldModel<reg, DbgAddressPolicy<Address>, 12, 1>;
    using dbgI2c1SmbusTimeout = FieldModel<reg, DbgAddressPolicy<Address>, 21, 1>;
    using dbgI2c2SmbusTimeout = FieldModel<reg, DbgAddressPolicy<Address>, 22, 1>;
    using dbgI2c3smbusTimeout = FieldModel<reg, DbgAddressPolicy<Address>, 23, 1>;
  };

public:
  using dbgmcuApb1Fz = DbgmcuApb1FzRegisterModel<uint32_t, DbgBaseAddress + 0x00000008>;

/**
 * REGISTER DBGMCU_APB2_FZ
 */
private:
  template<typename SizeType>
  class DbgmcuApb2FzRegisterUnion
  {
  public:
    union
    {
      SizeType value;
      BitFieldModel<SizeType, 0, 1> dbgTim1Stop;
      BitFieldModel<SizeType, 16, 1> dbgTim9Stop;
      BitFieldModel<SizeType, 17, 1> dbgTim10Stop;
      BitFieldModel<SizeType, 18, 1> dbgTim11Stop;
    };
  };

private:
  template<typename SizeType, std::uintptr_t Address>
  class DbgmcuApb2FzRegisterModel : public RegisterModel<DbgmcuApb2FzRegisterUnion<SizeType>, DbgAddressPolicy<Address>>
  {
  public:
    using reg = DbgmcuApb2FzRegisterUnion<SizeType>;

  public:
    using dbgTim1Stop = FieldModel<reg, DbgAddressPolicy<Address>, 0, 1>;
    using dbgTim9Stop = FieldModel<reg, DbgAddressPolicy<Address>, 16, 1>;
    using dbgTim10Stop = FieldModel<reg, DbgAddressPolicy<Address>, 17, 1>;
    using dbgTim11Stop = FieldModel<reg, DbgAddressPolicy<Address>, 18, 1>;
  };

public:
  using dbgmcuApb2Fz = DbgmcuApb2FzRegisterModel<uint32_t, DbgBaseAddress + 0x0000000C>;


};

}

#endif /* DRAL_STM32F411_DBG_H */