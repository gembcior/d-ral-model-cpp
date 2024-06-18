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

#ifndef DRAL_STM32F411_FLASH_H
#define DRAL_STM32F411_FLASH_H

#include "dral/bitfield_model.h"
#include "dral/group_address_policy.h"
#include "dral/layer_offset_policy.h"
#include "dral/register_model.h"

namespace dral::stm32f411 {

class Flash
{
public:
  static constexpr uintptr_t FlashBaseAddress = 0x40023C00;

private:
  template<std::uintptr_t Address>
  using FlashAddressPolicy = GroupAddressPolicy<Address>;

/**
 * REGISTER ACR
 */
private:
  template<typename SizeType>
  class AcrRegisterUnion
  {
  public:
    union
    {
      SizeType value;
      BitFieldModel<SizeType, 0, 3> latency;
      BitFieldModel<SizeType, 8, 1> prften;
      BitFieldModel<SizeType, 9, 1> icen;
      BitFieldModel<SizeType, 10, 1> dcen;
      BitFieldModel<SizeType, 11, 1> icrst;
      BitFieldModel<SizeType, 12, 1> dcrst;
    };
  };

private:
  template<typename SizeType, std::uintptr_t Address>
  class AcrRegisterModel : public RegisterModel<AcrRegisterUnion<SizeType>, FlashAddressPolicy<Address>>
  {
  public:
    using reg = AcrRegisterUnion<SizeType>;

  public:
    using latency = FieldModel<reg, FlashAddressPolicy<Address>, 0, 3>;
    using prften = FieldModel<reg, FlashAddressPolicy<Address>, 8, 1>;
    using icen = FieldModel<reg, FlashAddressPolicy<Address>, 9, 1>;
    using dcen = FieldModel<reg, FlashAddressPolicy<Address>, 10, 1>;
    using icrst = FieldModel<reg, FlashAddressPolicy<Address>, 11, 1>;
    using dcrst = FieldModel<reg, FlashAddressPolicy<Address>, 12, 1>;
  };

public:
  using acr = AcrRegisterModel<uint32_t, FlashBaseAddress + 0x00000000>;

/**
 * REGISTER KEYR
 */
private:
  template<typename SizeType>
  class KeyrRegisterUnion
  {
  public:
    union
    {
      SizeType value;
      BitFieldModel<SizeType, 0, 32> key;
    };
  };

private:
  template<typename SizeType, std::uintptr_t Address>
  class KeyrRegisterModel : public RegisterModel<KeyrRegisterUnion<SizeType>, FlashAddressPolicy<Address>>
  {
  public:
    using reg = KeyrRegisterUnion<SizeType>;

  public:
    using key = FieldModel<reg, FlashAddressPolicy<Address>, 0, 32>;
  };

public:
  using keyr = KeyrRegisterModel<uint32_t, FlashBaseAddress + 0x00000004>;

/**
 * REGISTER OPTKEYR
 */
private:
  template<typename SizeType>
  class OptkeyrRegisterUnion
  {
  public:
    union
    {
      SizeType value;
      BitFieldModel<SizeType, 0, 32> optkey;
    };
  };

private:
  template<typename SizeType, std::uintptr_t Address>
  class OptkeyrRegisterModel : public RegisterModel<OptkeyrRegisterUnion<SizeType>, FlashAddressPolicy<Address>>
  {
  public:
    using reg = OptkeyrRegisterUnion<SizeType>;

  public:
    using optkey = FieldModel<reg, FlashAddressPolicy<Address>, 0, 32>;
  };

public:
  using optkeyr = OptkeyrRegisterModel<uint32_t, FlashBaseAddress + 0x00000008>;

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
      BitFieldModel<SizeType, 0, 1> eop;
      BitFieldModel<SizeType, 1, 1> operr;
      BitFieldModel<SizeType, 4, 1> wrperr;
      BitFieldModel<SizeType, 5, 1> pgaerr;
      BitFieldModel<SizeType, 6, 1> pgperr;
      BitFieldModel<SizeType, 7, 1> pgserr;
      BitFieldModel<SizeType, 16, 1> bsy;
    };
  };

private:
  template<typename SizeType, std::uintptr_t Address>
  class SrRegisterModel : public RegisterModel<SrRegisterUnion<SizeType>, FlashAddressPolicy<Address>>
  {
  public:
    using reg = SrRegisterUnion<SizeType>;

  public:
    using eop = FieldModel<reg, FlashAddressPolicy<Address>, 0, 1>;
    using operr = FieldModel<reg, FlashAddressPolicy<Address>, 1, 1>;
    using wrperr = FieldModel<reg, FlashAddressPolicy<Address>, 4, 1>;
    using pgaerr = FieldModel<reg, FlashAddressPolicy<Address>, 5, 1>;
    using pgperr = FieldModel<reg, FlashAddressPolicy<Address>, 6, 1>;
    using pgserr = FieldModel<reg, FlashAddressPolicy<Address>, 7, 1>;
    using bsy = FieldModel<reg, FlashAddressPolicy<Address>, 16, 1>;
  };

public:
  using sr = SrRegisterModel<uint32_t, FlashBaseAddress + 0x0000000C>;

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
      BitFieldModel<SizeType, 0, 1> pg;
      BitFieldModel<SizeType, 1, 1> ser;
      BitFieldModel<SizeType, 2, 1> mer;
      BitFieldModel<SizeType, 3, 4> snb;
      BitFieldModel<SizeType, 8, 2> psize;
      BitFieldModel<SizeType, 16, 1> strt;
      BitFieldModel<SizeType, 24, 1> eopie;
      BitFieldModel<SizeType, 25, 1> errie;
      BitFieldModel<SizeType, 31, 1> lock;
    };
  };

private:
  template<typename SizeType, std::uintptr_t Address>
  class CrRegisterModel : public RegisterModel<CrRegisterUnion<SizeType>, FlashAddressPolicy<Address>>
  {
  public:
    using reg = CrRegisterUnion<SizeType>;

  public:
    using pg = FieldModel<reg, FlashAddressPolicy<Address>, 0, 1>;
    using ser = FieldModel<reg, FlashAddressPolicy<Address>, 1, 1>;
    using mer = FieldModel<reg, FlashAddressPolicy<Address>, 2, 1>;
    using snb = FieldModel<reg, FlashAddressPolicy<Address>, 3, 4>;
    using psize = FieldModel<reg, FlashAddressPolicy<Address>, 8, 2>;
    using strt = FieldModel<reg, FlashAddressPolicy<Address>, 16, 1>;
    using eopie = FieldModel<reg, FlashAddressPolicy<Address>, 24, 1>;
    using errie = FieldModel<reg, FlashAddressPolicy<Address>, 25, 1>;
    using lock = FieldModel<reg, FlashAddressPolicy<Address>, 31, 1>;
  };

public:
  using cr = CrRegisterModel<uint32_t, FlashBaseAddress + 0x00000010>;

/**
 * REGISTER OPTCR
 */
private:
  template<typename SizeType>
  class OptcrRegisterUnion
  {
  public:
    union
    {
      SizeType value;
      BitFieldModel<SizeType, 0, 1> optlock;
      BitFieldModel<SizeType, 1, 1> optstrt;
      BitFieldModel<SizeType, 2, 2> borLev;
      BitFieldModel<SizeType, 5, 1> wdgSw;
      BitFieldModel<SizeType, 6, 1> nrstStop;
      BitFieldModel<SizeType, 7, 1> nrstStdby;
      BitFieldModel<SizeType, 8, 8> rdp;
      BitFieldModel<SizeType, 16, 12> nwrp;
    };
  };

private:
  template<typename SizeType, std::uintptr_t Address>
  class OptcrRegisterModel : public RegisterModel<OptcrRegisterUnion<SizeType>, FlashAddressPolicy<Address>>
  {
  public:
    using reg = OptcrRegisterUnion<SizeType>;

  public:
    using optlock = FieldModel<reg, FlashAddressPolicy<Address>, 0, 1>;
    using optstrt = FieldModel<reg, FlashAddressPolicy<Address>, 1, 1>;
    using borLev = FieldModel<reg, FlashAddressPolicy<Address>, 2, 2>;
    using wdgSw = FieldModel<reg, FlashAddressPolicy<Address>, 5, 1>;
    using nrstStop = FieldModel<reg, FlashAddressPolicy<Address>, 6, 1>;
    using nrstStdby = FieldModel<reg, FlashAddressPolicy<Address>, 7, 1>;
    using rdp = FieldModel<reg, FlashAddressPolicy<Address>, 8, 8>;
    using nwrp = FieldModel<reg, FlashAddressPolicy<Address>, 16, 12>;
  };

public:
  using optcr = OptcrRegisterModel<uint32_t, FlashBaseAddress + 0x00000014>;


};

}

#endif /* DRAL_STM32F411_FLASH_H */