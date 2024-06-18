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

#ifndef DRAL_STM32F411_TIM2_H
#define DRAL_STM32F411_TIM2_H

#include "dral/bitfield_model.h"
#include "dral/group_address_policy.h"
#include "dral/layer_offset_policy.h"
#include "dral/register_model.h"

namespace dral::stm32f411 {

class Tim2
{
public:
  static constexpr uintptr_t Tim2BaseAddress = 0x40000000;

private:
  template<std::uintptr_t Address>
  using Tim2AddressPolicy = GroupAddressPolicy<Address>;

/**
 * REGISTER CR1
 */
private:
  template<typename SizeType>
  class Cr1RegisterUnion
  {
  public:
    union
    {
      SizeType value;
      BitFieldModel<SizeType, 8, 2> ckd;
      BitFieldModel<SizeType, 7, 1> arpe;
      BitFieldModel<SizeType, 5, 2> cms;
      BitFieldModel<SizeType, 4, 1> dir;
      BitFieldModel<SizeType, 3, 1> opm;
      BitFieldModel<SizeType, 2, 1> urs;
      BitFieldModel<SizeType, 1, 1> udis;
      BitFieldModel<SizeType, 0, 1> cen;
    };
  };

private:
  template<typename SizeType, std::uintptr_t Address>
  class Cr1RegisterModel : public RegisterModel<Cr1RegisterUnion<SizeType>, Tim2AddressPolicy<Address>>
  {
  public:
    using reg = Cr1RegisterUnion<SizeType>;

  public:
    using ckd = FieldModel<reg, Tim2AddressPolicy<Address>, 8, 2>;
    using arpe = FieldModel<reg, Tim2AddressPolicy<Address>, 7, 1>;
    using cms = FieldModel<reg, Tim2AddressPolicy<Address>, 5, 2>;
    using dir = FieldModel<reg, Tim2AddressPolicy<Address>, 4, 1>;
    using opm = FieldModel<reg, Tim2AddressPolicy<Address>, 3, 1>;
    using urs = FieldModel<reg, Tim2AddressPolicy<Address>, 2, 1>;
    using udis = FieldModel<reg, Tim2AddressPolicy<Address>, 1, 1>;
    using cen = FieldModel<reg, Tim2AddressPolicy<Address>, 0, 1>;
  };

public:
  using cr1 = Cr1RegisterModel<uint32_t, Tim2BaseAddress + 0x00000000>;

/**
 * REGISTER CR2
 */
private:
  template<typename SizeType>
  class Cr2RegisterUnion
  {
  public:
    union
    {
      SizeType value;
      BitFieldModel<SizeType, 7, 1> ti1s;
      BitFieldModel<SizeType, 4, 3> mms;
      BitFieldModel<SizeType, 3, 1> ccds;
    };
  };

private:
  template<typename SizeType, std::uintptr_t Address>
  class Cr2RegisterModel : public RegisterModel<Cr2RegisterUnion<SizeType>, Tim2AddressPolicy<Address>>
  {
  public:
    using reg = Cr2RegisterUnion<SizeType>;

  public:
    using ti1s = FieldModel<reg, Tim2AddressPolicy<Address>, 7, 1>;
    using mms = FieldModel<reg, Tim2AddressPolicy<Address>, 4, 3>;
    using ccds = FieldModel<reg, Tim2AddressPolicy<Address>, 3, 1>;
  };

public:
  using cr2 = Cr2RegisterModel<uint32_t, Tim2BaseAddress + 0x00000004>;

/**
 * REGISTER SMCR
 */
private:
  template<typename SizeType>
  class SmcrRegisterUnion
  {
  public:
    union
    {
      SizeType value;
      BitFieldModel<SizeType, 15, 1> etp;
      BitFieldModel<SizeType, 14, 1> ece;
      BitFieldModel<SizeType, 12, 2> etps;
      BitFieldModel<SizeType, 8, 4> etf;
      BitFieldModel<SizeType, 7, 1> msm;
      BitFieldModel<SizeType, 4, 3> ts;
      BitFieldModel<SizeType, 0, 3> sms;
    };
  };

private:
  template<typename SizeType, std::uintptr_t Address>
  class SmcrRegisterModel : public RegisterModel<SmcrRegisterUnion<SizeType>, Tim2AddressPolicy<Address>>
  {
  public:
    using reg = SmcrRegisterUnion<SizeType>;

  public:
    using etp = FieldModel<reg, Tim2AddressPolicy<Address>, 15, 1>;
    using ece = FieldModel<reg, Tim2AddressPolicy<Address>, 14, 1>;
    using etps = FieldModel<reg, Tim2AddressPolicy<Address>, 12, 2>;
    using etf = FieldModel<reg, Tim2AddressPolicy<Address>, 8, 4>;
    using msm = FieldModel<reg, Tim2AddressPolicy<Address>, 7, 1>;
    using ts = FieldModel<reg, Tim2AddressPolicy<Address>, 4, 3>;
    using sms = FieldModel<reg, Tim2AddressPolicy<Address>, 0, 3>;
  };

public:
  using smcr = SmcrRegisterModel<uint32_t, Tim2BaseAddress + 0x00000008>;

/**
 * REGISTER DIER
 */
private:
  template<typename SizeType>
  class DierRegisterUnion
  {
  public:
    union
    {
      SizeType value;
      BitFieldModel<SizeType, 14, 1> tde;
      BitFieldModel<SizeType, 12, 1> cc4de;
      BitFieldModel<SizeType, 11, 1> cc3de;
      BitFieldModel<SizeType, 10, 1> cc2de;
      BitFieldModel<SizeType, 9, 1> cc1de;
      BitFieldModel<SizeType, 8, 1> ude;
      BitFieldModel<SizeType, 6, 1> tie;
      BitFieldModel<SizeType, 4, 1> cc4ie;
      BitFieldModel<SizeType, 3, 1> cc3ie;
      BitFieldModel<SizeType, 2, 1> cc2ie;
      BitFieldModel<SizeType, 1, 1> cc1ie;
      BitFieldModel<SizeType, 0, 1> uie;
    };
  };

private:
  template<typename SizeType, std::uintptr_t Address>
  class DierRegisterModel : public RegisterModel<DierRegisterUnion<SizeType>, Tim2AddressPolicy<Address>>
  {
  public:
    using reg = DierRegisterUnion<SizeType>;

  public:
    using tde = FieldModel<reg, Tim2AddressPolicy<Address>, 14, 1>;
    using cc4de = FieldModel<reg, Tim2AddressPolicy<Address>, 12, 1>;
    using cc3de = FieldModel<reg, Tim2AddressPolicy<Address>, 11, 1>;
    using cc2de = FieldModel<reg, Tim2AddressPolicy<Address>, 10, 1>;
    using cc1de = FieldModel<reg, Tim2AddressPolicy<Address>, 9, 1>;
    using ude = FieldModel<reg, Tim2AddressPolicy<Address>, 8, 1>;
    using tie = FieldModel<reg, Tim2AddressPolicy<Address>, 6, 1>;
    using cc4ie = FieldModel<reg, Tim2AddressPolicy<Address>, 4, 1>;
    using cc3ie = FieldModel<reg, Tim2AddressPolicy<Address>, 3, 1>;
    using cc2ie = FieldModel<reg, Tim2AddressPolicy<Address>, 2, 1>;
    using cc1ie = FieldModel<reg, Tim2AddressPolicy<Address>, 1, 1>;
    using uie = FieldModel<reg, Tim2AddressPolicy<Address>, 0, 1>;
  };

public:
  using dier = DierRegisterModel<uint32_t, Tim2BaseAddress + 0x0000000C>;

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
      BitFieldModel<SizeType, 12, 1> cc4of;
      BitFieldModel<SizeType, 11, 1> cc3of;
      BitFieldModel<SizeType, 10, 1> cc2of;
      BitFieldModel<SizeType, 9, 1> cc1of;
      BitFieldModel<SizeType, 6, 1> tif;
      BitFieldModel<SizeType, 4, 1> cc4if;
      BitFieldModel<SizeType, 3, 1> cc3if;
      BitFieldModel<SizeType, 2, 1> cc2if;
      BitFieldModel<SizeType, 1, 1> cc1if;
      BitFieldModel<SizeType, 0, 1> uif;
    };
  };

private:
  template<typename SizeType, std::uintptr_t Address>
  class SrRegisterModel : public RegisterModel<SrRegisterUnion<SizeType>, Tim2AddressPolicy<Address>>
  {
  public:
    using reg = SrRegisterUnion<SizeType>;

  public:
    using cc4of = FieldModel<reg, Tim2AddressPolicy<Address>, 12, 1>;
    using cc3of = FieldModel<reg, Tim2AddressPolicy<Address>, 11, 1>;
    using cc2of = FieldModel<reg, Tim2AddressPolicy<Address>, 10, 1>;
    using cc1of = FieldModel<reg, Tim2AddressPolicy<Address>, 9, 1>;
    using tif = FieldModel<reg, Tim2AddressPolicy<Address>, 6, 1>;
    using cc4if = FieldModel<reg, Tim2AddressPolicy<Address>, 4, 1>;
    using cc3if = FieldModel<reg, Tim2AddressPolicy<Address>, 3, 1>;
    using cc2if = FieldModel<reg, Tim2AddressPolicy<Address>, 2, 1>;
    using cc1if = FieldModel<reg, Tim2AddressPolicy<Address>, 1, 1>;
    using uif = FieldModel<reg, Tim2AddressPolicy<Address>, 0, 1>;
  };

public:
  using sr = SrRegisterModel<uint32_t, Tim2BaseAddress + 0x00000010>;

/**
 * REGISTER EGR
 */
private:
  template<typename SizeType>
  class EgrRegisterUnion
  {
  public:
    union
    {
      SizeType value;
      BitFieldModel<SizeType, 6, 1> tg;
      BitFieldModel<SizeType, 4, 1> cc4g;
      BitFieldModel<SizeType, 3, 1> cc3g;
      BitFieldModel<SizeType, 2, 1> cc2g;
      BitFieldModel<SizeType, 1, 1> cc1g;
      BitFieldModel<SizeType, 0, 1> ug;
    };
  };

private:
  template<typename SizeType, std::uintptr_t Address>
  class EgrRegisterModel : public RegisterModel<EgrRegisterUnion<SizeType>, Tim2AddressPolicy<Address>>
  {
  public:
    using reg = EgrRegisterUnion<SizeType>;

  public:
    using tg = FieldModel<reg, Tim2AddressPolicy<Address>, 6, 1>;
    using cc4g = FieldModel<reg, Tim2AddressPolicy<Address>, 4, 1>;
    using cc3g = FieldModel<reg, Tim2AddressPolicy<Address>, 3, 1>;
    using cc2g = FieldModel<reg, Tim2AddressPolicy<Address>, 2, 1>;
    using cc1g = FieldModel<reg, Tim2AddressPolicy<Address>, 1, 1>;
    using ug = FieldModel<reg, Tim2AddressPolicy<Address>, 0, 1>;
  };

public:
  using egr = EgrRegisterModel<uint32_t, Tim2BaseAddress + 0x00000014>;

/**
 * REGISTER CCMR1_OUTPUT
 */
private:
  template<typename SizeType>
  class Ccmr1OutputRegisterUnion
  {
  public:
    union
    {
      SizeType value;
      BitFieldModel<SizeType, 15, 1> oc2ce;
      BitFieldModel<SizeType, 12, 3> oc2m;
      BitFieldModel<SizeType, 11, 1> oc2pe;
      BitFieldModel<SizeType, 10, 1> oc2fe;
      BitFieldModel<SizeType, 8, 2> cc2s;
      BitFieldModel<SizeType, 7, 1> oc1ce;
      BitFieldModel<SizeType, 4, 3> oc1m;
      BitFieldModel<SizeType, 3, 1> oc1pe;
      BitFieldModel<SizeType, 2, 1> oc1fe;
      BitFieldModel<SizeType, 0, 2> cc1s;
    };
  };

private:
  template<typename SizeType, std::uintptr_t Address>
  class Ccmr1OutputRegisterModel : public RegisterModel<Ccmr1OutputRegisterUnion<SizeType>, Tim2AddressPolicy<Address>>
  {
  public:
    using reg = Ccmr1OutputRegisterUnion<SizeType>;

  public:
    using oc2ce = FieldModel<reg, Tim2AddressPolicy<Address>, 15, 1>;
    using oc2m = FieldModel<reg, Tim2AddressPolicy<Address>, 12, 3>;
    using oc2pe = FieldModel<reg, Tim2AddressPolicy<Address>, 11, 1>;
    using oc2fe = FieldModel<reg, Tim2AddressPolicy<Address>, 10, 1>;
    using cc2s = FieldModel<reg, Tim2AddressPolicy<Address>, 8, 2>;
    using oc1ce = FieldModel<reg, Tim2AddressPolicy<Address>, 7, 1>;
    using oc1m = FieldModel<reg, Tim2AddressPolicy<Address>, 4, 3>;
    using oc1pe = FieldModel<reg, Tim2AddressPolicy<Address>, 3, 1>;
    using oc1fe = FieldModel<reg, Tim2AddressPolicy<Address>, 2, 1>;
    using cc1s = FieldModel<reg, Tim2AddressPolicy<Address>, 0, 2>;
  };

public:
  using ccmr1Output = Ccmr1OutputRegisterModel<uint32_t, Tim2BaseAddress + 0x00000018>;

/**
 * REGISTER CCMR1_INPUT
 */
private:
  template<typename SizeType>
  class Ccmr1InputRegisterUnion
  {
  public:
    union
    {
      SizeType value;
      BitFieldModel<SizeType, 12, 4> ic2f;
      BitFieldModel<SizeType, 10, 2> ic2pcs;
      BitFieldModel<SizeType, 8, 2> cc2s;
      BitFieldModel<SizeType, 4, 4> ic1f;
      BitFieldModel<SizeType, 2, 2> icpcs;
      BitFieldModel<SizeType, 0, 2> cc1s;
    };
  };

private:
  template<typename SizeType, std::uintptr_t Address>
  class Ccmr1InputRegisterModel : public RegisterModel<Ccmr1InputRegisterUnion<SizeType>, Tim2AddressPolicy<Address>>
  {
  public:
    using reg = Ccmr1InputRegisterUnion<SizeType>;

  public:
    using ic2f = FieldModel<reg, Tim2AddressPolicy<Address>, 12, 4>;
    using ic2pcs = FieldModel<reg, Tim2AddressPolicy<Address>, 10, 2>;
    using cc2s = FieldModel<reg, Tim2AddressPolicy<Address>, 8, 2>;
    using ic1f = FieldModel<reg, Tim2AddressPolicy<Address>, 4, 4>;
    using icpcs = FieldModel<reg, Tim2AddressPolicy<Address>, 2, 2>;
    using cc1s = FieldModel<reg, Tim2AddressPolicy<Address>, 0, 2>;
  };

public:
  using ccmr1Input = Ccmr1InputRegisterModel<uint32_t, Tim2BaseAddress + 0x00000018>;

/**
 * REGISTER CCMR2_OUTPUT
 */
private:
  template<typename SizeType>
  class Ccmr2OutputRegisterUnion
  {
  public:
    union
    {
      SizeType value;
      BitFieldModel<SizeType, 15, 1> oc4ce;
      BitFieldModel<SizeType, 12, 3> oc4m;
      BitFieldModel<SizeType, 11, 1> oc4pe;
      BitFieldModel<SizeType, 10, 1> oc4fe;
      BitFieldModel<SizeType, 8, 2> cc4s;
      BitFieldModel<SizeType, 7, 1> oc3ce;
      BitFieldModel<SizeType, 4, 3> oc3m;
      BitFieldModel<SizeType, 3, 1> oc3pe;
      BitFieldModel<SizeType, 2, 1> oc3fe;
      BitFieldModel<SizeType, 0, 2> cc3s;
    };
  };

private:
  template<typename SizeType, std::uintptr_t Address>
  class Ccmr2OutputRegisterModel : public RegisterModel<Ccmr2OutputRegisterUnion<SizeType>, Tim2AddressPolicy<Address>>
  {
  public:
    using reg = Ccmr2OutputRegisterUnion<SizeType>;

  public:
    using oc4ce = FieldModel<reg, Tim2AddressPolicy<Address>, 15, 1>;
    using oc4m = FieldModel<reg, Tim2AddressPolicy<Address>, 12, 3>;
    using oc4pe = FieldModel<reg, Tim2AddressPolicy<Address>, 11, 1>;
    using oc4fe = FieldModel<reg, Tim2AddressPolicy<Address>, 10, 1>;
    using cc4s = FieldModel<reg, Tim2AddressPolicy<Address>, 8, 2>;
    using oc3ce = FieldModel<reg, Tim2AddressPolicy<Address>, 7, 1>;
    using oc3m = FieldModel<reg, Tim2AddressPolicy<Address>, 4, 3>;
    using oc3pe = FieldModel<reg, Tim2AddressPolicy<Address>, 3, 1>;
    using oc3fe = FieldModel<reg, Tim2AddressPolicy<Address>, 2, 1>;
    using cc3s = FieldModel<reg, Tim2AddressPolicy<Address>, 0, 2>;
  };

public:
  using ccmr2Output = Ccmr2OutputRegisterModel<uint32_t, Tim2BaseAddress + 0x0000001C>;

/**
 * REGISTER CCMR2_INPUT
 */
private:
  template<typename SizeType>
  class Ccmr2InputRegisterUnion
  {
  public:
    union
    {
      SizeType value;
      BitFieldModel<SizeType, 12, 4> ic4f;
      BitFieldModel<SizeType, 10, 2> ic4psc;
      BitFieldModel<SizeType, 8, 2> cc4s;
      BitFieldModel<SizeType, 4, 4> ic3f;
      BitFieldModel<SizeType, 2, 2> ic3psc;
      BitFieldModel<SizeType, 0, 2> cc3s;
    };
  };

private:
  template<typename SizeType, std::uintptr_t Address>
  class Ccmr2InputRegisterModel : public RegisterModel<Ccmr2InputRegisterUnion<SizeType>, Tim2AddressPolicy<Address>>
  {
  public:
    using reg = Ccmr2InputRegisterUnion<SizeType>;

  public:
    using ic4f = FieldModel<reg, Tim2AddressPolicy<Address>, 12, 4>;
    using ic4psc = FieldModel<reg, Tim2AddressPolicy<Address>, 10, 2>;
    using cc4s = FieldModel<reg, Tim2AddressPolicy<Address>, 8, 2>;
    using ic3f = FieldModel<reg, Tim2AddressPolicy<Address>, 4, 4>;
    using ic3psc = FieldModel<reg, Tim2AddressPolicy<Address>, 2, 2>;
    using cc3s = FieldModel<reg, Tim2AddressPolicy<Address>, 0, 2>;
  };

public:
  using ccmr2Input = Ccmr2InputRegisterModel<uint32_t, Tim2BaseAddress + 0x0000001C>;

/**
 * REGISTER CCER
 */
private:
  template<typename SizeType>
  class CcerRegisterUnion
  {
  public:
    union
    {
      SizeType value;
      BitFieldModel<SizeType, 15, 1> cc4np;
      BitFieldModel<SizeType, 13, 1> cc4p;
      BitFieldModel<SizeType, 12, 1> cc4e;
      BitFieldModel<SizeType, 11, 1> cc3np;
      BitFieldModel<SizeType, 9, 1> cc3p;
      BitFieldModel<SizeType, 8, 1> cc3e;
      BitFieldModel<SizeType, 7, 1> cc2np;
      BitFieldModel<SizeType, 5, 1> cc2p;
      BitFieldModel<SizeType, 4, 1> cc2e;
      BitFieldModel<SizeType, 3, 1> cc1np;
      BitFieldModel<SizeType, 1, 1> cc1p;
      BitFieldModel<SizeType, 0, 1> cc1e;
    };
  };

private:
  template<typename SizeType, std::uintptr_t Address>
  class CcerRegisterModel : public RegisterModel<CcerRegisterUnion<SizeType>, Tim2AddressPolicy<Address>>
  {
  public:
    using reg = CcerRegisterUnion<SizeType>;

  public:
    using cc4np = FieldModel<reg, Tim2AddressPolicy<Address>, 15, 1>;
    using cc4p = FieldModel<reg, Tim2AddressPolicy<Address>, 13, 1>;
    using cc4e = FieldModel<reg, Tim2AddressPolicy<Address>, 12, 1>;
    using cc3np = FieldModel<reg, Tim2AddressPolicy<Address>, 11, 1>;
    using cc3p = FieldModel<reg, Tim2AddressPolicy<Address>, 9, 1>;
    using cc3e = FieldModel<reg, Tim2AddressPolicy<Address>, 8, 1>;
    using cc2np = FieldModel<reg, Tim2AddressPolicy<Address>, 7, 1>;
    using cc2p = FieldModel<reg, Tim2AddressPolicy<Address>, 5, 1>;
    using cc2e = FieldModel<reg, Tim2AddressPolicy<Address>, 4, 1>;
    using cc1np = FieldModel<reg, Tim2AddressPolicy<Address>, 3, 1>;
    using cc1p = FieldModel<reg, Tim2AddressPolicy<Address>, 1, 1>;
    using cc1e = FieldModel<reg, Tim2AddressPolicy<Address>, 0, 1>;
  };

public:
  using ccer = CcerRegisterModel<uint32_t, Tim2BaseAddress + 0x00000020>;

/**
 * REGISTER CNT
 */
private:
  template<typename SizeType>
  class CntRegisterUnion
  {
  public:
    union
    {
      SizeType value;
      BitFieldModel<SizeType, 16, 16> cntH;
      BitFieldModel<SizeType, 0, 16> cntL;
    };
  };

private:
  template<typename SizeType, std::uintptr_t Address>
  class CntRegisterModel : public RegisterModel<CntRegisterUnion<SizeType>, Tim2AddressPolicy<Address>>
  {
  public:
    using reg = CntRegisterUnion<SizeType>;

  public:
    using cntH = FieldModel<reg, Tim2AddressPolicy<Address>, 16, 16>;
    using cntL = FieldModel<reg, Tim2AddressPolicy<Address>, 0, 16>;
  };

public:
  using cnt = CntRegisterModel<uint32_t, Tim2BaseAddress + 0x00000024>;

/**
 * REGISTER PSC
 */
private:
  template<typename SizeType>
  class PscRegisterUnion
  {
  public:
    union
    {
      SizeType value;
      BitFieldModel<SizeType, 0, 16> psc;
    };
  };

private:
  template<typename SizeType, std::uintptr_t Address>
  class PscRegisterModel : public RegisterModel<PscRegisterUnion<SizeType>, Tim2AddressPolicy<Address>>
  {
  public:
    using reg = PscRegisterUnion<SizeType>;

  public:
    using psc = FieldModel<reg, Tim2AddressPolicy<Address>, 0, 16>;
  };

public:
  using psc = PscRegisterModel<uint32_t, Tim2BaseAddress + 0x00000028>;

/**
 * REGISTER ARR
 */
private:
  template<typename SizeType>
  class ArrRegisterUnion
  {
  public:
    union
    {
      SizeType value;
      BitFieldModel<SizeType, 16, 16> arrH;
      BitFieldModel<SizeType, 0, 16> arrL;
    };
  };

private:
  template<typename SizeType, std::uintptr_t Address>
  class ArrRegisterModel : public RegisterModel<ArrRegisterUnion<SizeType>, Tim2AddressPolicy<Address>>
  {
  public:
    using reg = ArrRegisterUnion<SizeType>;

  public:
    using arrH = FieldModel<reg, Tim2AddressPolicy<Address>, 16, 16>;
    using arrL = FieldModel<reg, Tim2AddressPolicy<Address>, 0, 16>;
  };

public:
  using arr = ArrRegisterModel<uint32_t, Tim2BaseAddress + 0x0000002C>;

/**
 * REGISTER CCR1
 */
private:
  template<typename SizeType>
  class Ccr1RegisterUnion
  {
  public:
    union
    {
      SizeType value;
      BitFieldModel<SizeType, 16, 16> ccr1H;
      BitFieldModel<SizeType, 0, 16> ccr1L;
    };
  };

private:
  template<typename SizeType, std::uintptr_t Address>
  class Ccr1RegisterModel : public RegisterModel<Ccr1RegisterUnion<SizeType>, Tim2AddressPolicy<Address>>
  {
  public:
    using reg = Ccr1RegisterUnion<SizeType>;

  public:
    using ccr1H = FieldModel<reg, Tim2AddressPolicy<Address>, 16, 16>;
    using ccr1L = FieldModel<reg, Tim2AddressPolicy<Address>, 0, 16>;
  };

public:
  using ccr1 = Ccr1RegisterModel<uint32_t, Tim2BaseAddress + 0x00000034>;

/**
 * REGISTER CCR2
 */
private:
  template<typename SizeType>
  class Ccr2RegisterUnion
  {
  public:
    union
    {
      SizeType value;
      BitFieldModel<SizeType, 16, 16> ccr2H;
      BitFieldModel<SizeType, 0, 16> ccr2L;
    };
  };

private:
  template<typename SizeType, std::uintptr_t Address>
  class Ccr2RegisterModel : public RegisterModel<Ccr2RegisterUnion<SizeType>, Tim2AddressPolicy<Address>>
  {
  public:
    using reg = Ccr2RegisterUnion<SizeType>;

  public:
    using ccr2H = FieldModel<reg, Tim2AddressPolicy<Address>, 16, 16>;
    using ccr2L = FieldModel<reg, Tim2AddressPolicy<Address>, 0, 16>;
  };

public:
  using ccr2 = Ccr2RegisterModel<uint32_t, Tim2BaseAddress + 0x00000038>;

/**
 * REGISTER CCR3
 */
private:
  template<typename SizeType>
  class Ccr3RegisterUnion
  {
  public:
    union
    {
      SizeType value;
      BitFieldModel<SizeType, 16, 16> ccr3H;
      BitFieldModel<SizeType, 0, 16> ccr3L;
    };
  };

private:
  template<typename SizeType, std::uintptr_t Address>
  class Ccr3RegisterModel : public RegisterModel<Ccr3RegisterUnion<SizeType>, Tim2AddressPolicy<Address>>
  {
  public:
    using reg = Ccr3RegisterUnion<SizeType>;

  public:
    using ccr3H = FieldModel<reg, Tim2AddressPolicy<Address>, 16, 16>;
    using ccr3L = FieldModel<reg, Tim2AddressPolicy<Address>, 0, 16>;
  };

public:
  using ccr3 = Ccr3RegisterModel<uint32_t, Tim2BaseAddress + 0x0000003C>;

/**
 * REGISTER CCR4
 */
private:
  template<typename SizeType>
  class Ccr4RegisterUnion
  {
  public:
    union
    {
      SizeType value;
      BitFieldModel<SizeType, 16, 16> ccr4H;
      BitFieldModel<SizeType, 0, 16> ccr4L;
    };
  };

private:
  template<typename SizeType, std::uintptr_t Address>
  class Ccr4RegisterModel : public RegisterModel<Ccr4RegisterUnion<SizeType>, Tim2AddressPolicy<Address>>
  {
  public:
    using reg = Ccr4RegisterUnion<SizeType>;

  public:
    using ccr4H = FieldModel<reg, Tim2AddressPolicy<Address>, 16, 16>;
    using ccr4L = FieldModel<reg, Tim2AddressPolicy<Address>, 0, 16>;
  };

public:
  using ccr4 = Ccr4RegisterModel<uint32_t, Tim2BaseAddress + 0x00000040>;

/**
 * REGISTER DCR
 */
private:
  template<typename SizeType>
  class DcrRegisterUnion
  {
  public:
    union
    {
      SizeType value;
      BitFieldModel<SizeType, 8, 5> dbl;
      BitFieldModel<SizeType, 0, 5> dba;
    };
  };

private:
  template<typename SizeType, std::uintptr_t Address>
  class DcrRegisterModel : public RegisterModel<DcrRegisterUnion<SizeType>, Tim2AddressPolicy<Address>>
  {
  public:
    using reg = DcrRegisterUnion<SizeType>;

  public:
    using dbl = FieldModel<reg, Tim2AddressPolicy<Address>, 8, 5>;
    using dba = FieldModel<reg, Tim2AddressPolicy<Address>, 0, 5>;
  };

public:
  using dcr = DcrRegisterModel<uint32_t, Tim2BaseAddress + 0x00000048>;

/**
 * REGISTER DMAR
 */
private:
  template<typename SizeType>
  class DmarRegisterUnion
  {
  public:
    union
    {
      SizeType value;
      BitFieldModel<SizeType, 0, 16> dmab;
    };
  };

private:
  template<typename SizeType, std::uintptr_t Address>
  class DmarRegisterModel : public RegisterModel<DmarRegisterUnion<SizeType>, Tim2AddressPolicy<Address>>
  {
  public:
    using reg = DmarRegisterUnion<SizeType>;

  public:
    using dmab = FieldModel<reg, Tim2AddressPolicy<Address>, 0, 16>;
  };

public:
  using dmar = DmarRegisterModel<uint32_t, Tim2BaseAddress + 0x0000004C>;

/**
 * REGISTER OR
 */
private:
  template<typename SizeType>
  class OrRegisterUnion
  {
  public:
    union
    {
      SizeType value;
      BitFieldModel<SizeType, 10, 2> itr1Rmp;
    };
  };

private:
  template<typename SizeType, std::uintptr_t Address>
  class OrRegisterModel : public RegisterModel<OrRegisterUnion<SizeType>, Tim2AddressPolicy<Address>>
  {
  public:
    using reg = OrRegisterUnion<SizeType>;

  public:
    using itr1Rmp = FieldModel<reg, Tim2AddressPolicy<Address>, 10, 2>;
  };

public:
  using or = OrRegisterModel<uint32_t, Tim2BaseAddress + 0x00000050>;


};

}

#endif /* DRAL_STM32F411_TIM2_H */