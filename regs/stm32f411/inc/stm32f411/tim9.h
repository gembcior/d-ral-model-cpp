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

#ifndef DRAL_STM32F411_TIM9_H
#define DRAL_STM32F411_TIM9_H

#include "dral/bitfield_model.h"
#include "dral/group_address_policy.h"
#include "dral/layer_offset_policy.h"
#include "dral/register_model.h"

namespace dral::stm32f411 {

class Tim9
{
public:
  static constexpr uintptr_t Tim9BaseAddress = 0x40014000;

private:
  template<std::uintptr_t Address>
  using Tim9AddressPolicy = GroupAddressPolicy<Address>;

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
      BitFieldModel<SizeType, 3, 1> opm;
      BitFieldModel<SizeType, 2, 1> urs;
      BitFieldModel<SizeType, 1, 1> udis;
      BitFieldModel<SizeType, 0, 1> cen;
    };
  };

private:
  template<typename SizeType, std::uintptr_t Address>
  class Cr1RegisterModel : public RegisterModel<Cr1RegisterUnion<SizeType>, Tim9AddressPolicy<Address>>
  {
  public:
    using reg = Cr1RegisterUnion<SizeType>;

  public:
    using ckd = FieldModel<reg, Tim9AddressPolicy<Address>, 8, 2>;
    using arpe = FieldModel<reg, Tim9AddressPolicy<Address>, 7, 1>;
    using opm = FieldModel<reg, Tim9AddressPolicy<Address>, 3, 1>;
    using urs = FieldModel<reg, Tim9AddressPolicy<Address>, 2, 1>;
    using udis = FieldModel<reg, Tim9AddressPolicy<Address>, 1, 1>;
    using cen = FieldModel<reg, Tim9AddressPolicy<Address>, 0, 1>;
  };

public:
  using cr1 = Cr1RegisterModel<uint32_t, Tim9BaseAddress + 0x00000000>;

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
      BitFieldModel<SizeType, 4, 3> mms;
    };
  };

private:
  template<typename SizeType, std::uintptr_t Address>
  class Cr2RegisterModel : public RegisterModel<Cr2RegisterUnion<SizeType>, Tim9AddressPolicy<Address>>
  {
  public:
    using reg = Cr2RegisterUnion<SizeType>;

  public:
    using mms = FieldModel<reg, Tim9AddressPolicy<Address>, 4, 3>;
  };

public:
  using cr2 = Cr2RegisterModel<uint32_t, Tim9BaseAddress + 0x00000004>;

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
      BitFieldModel<SizeType, 7, 1> msm;
      BitFieldModel<SizeType, 4, 3> ts;
      BitFieldModel<SizeType, 0, 3> sms;
    };
  };

private:
  template<typename SizeType, std::uintptr_t Address>
  class SmcrRegisterModel : public RegisterModel<SmcrRegisterUnion<SizeType>, Tim9AddressPolicy<Address>>
  {
  public:
    using reg = SmcrRegisterUnion<SizeType>;

  public:
    using msm = FieldModel<reg, Tim9AddressPolicy<Address>, 7, 1>;
    using ts = FieldModel<reg, Tim9AddressPolicy<Address>, 4, 3>;
    using sms = FieldModel<reg, Tim9AddressPolicy<Address>, 0, 3>;
  };

public:
  using smcr = SmcrRegisterModel<uint32_t, Tim9BaseAddress + 0x00000008>;

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
      BitFieldModel<SizeType, 6, 1> tie;
      BitFieldModel<SizeType, 2, 1> cc2ie;
      BitFieldModel<SizeType, 1, 1> cc1ie;
      BitFieldModel<SizeType, 0, 1> uie;
    };
  };

private:
  template<typename SizeType, std::uintptr_t Address>
  class DierRegisterModel : public RegisterModel<DierRegisterUnion<SizeType>, Tim9AddressPolicy<Address>>
  {
  public:
    using reg = DierRegisterUnion<SizeType>;

  public:
    using tie = FieldModel<reg, Tim9AddressPolicy<Address>, 6, 1>;
    using cc2ie = FieldModel<reg, Tim9AddressPolicy<Address>, 2, 1>;
    using cc1ie = FieldModel<reg, Tim9AddressPolicy<Address>, 1, 1>;
    using uie = FieldModel<reg, Tim9AddressPolicy<Address>, 0, 1>;
  };

public:
  using dier = DierRegisterModel<uint32_t, Tim9BaseAddress + 0x0000000C>;

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
      BitFieldModel<SizeType, 10, 1> cc2of;
      BitFieldModel<SizeType, 9, 1> cc1of;
      BitFieldModel<SizeType, 6, 1> tif;
      BitFieldModel<SizeType, 2, 1> cc2if;
      BitFieldModel<SizeType, 1, 1> cc1if;
      BitFieldModel<SizeType, 0, 1> uif;
    };
  };

private:
  template<typename SizeType, std::uintptr_t Address>
  class SrRegisterModel : public RegisterModel<SrRegisterUnion<SizeType>, Tim9AddressPolicy<Address>>
  {
  public:
    using reg = SrRegisterUnion<SizeType>;

  public:
    using cc2of = FieldModel<reg, Tim9AddressPolicy<Address>, 10, 1>;
    using cc1of = FieldModel<reg, Tim9AddressPolicy<Address>, 9, 1>;
    using tif = FieldModel<reg, Tim9AddressPolicy<Address>, 6, 1>;
    using cc2if = FieldModel<reg, Tim9AddressPolicy<Address>, 2, 1>;
    using cc1if = FieldModel<reg, Tim9AddressPolicy<Address>, 1, 1>;
    using uif = FieldModel<reg, Tim9AddressPolicy<Address>, 0, 1>;
  };

public:
  using sr = SrRegisterModel<uint32_t, Tim9BaseAddress + 0x00000010>;

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
      BitFieldModel<SizeType, 2, 1> cc2g;
      BitFieldModel<SizeType, 1, 1> cc1g;
      BitFieldModel<SizeType, 0, 1> ug;
    };
  };

private:
  template<typename SizeType, std::uintptr_t Address>
  class EgrRegisterModel : public RegisterModel<EgrRegisterUnion<SizeType>, Tim9AddressPolicy<Address>>
  {
  public:
    using reg = EgrRegisterUnion<SizeType>;

  public:
    using tg = FieldModel<reg, Tim9AddressPolicy<Address>, 6, 1>;
    using cc2g = FieldModel<reg, Tim9AddressPolicy<Address>, 2, 1>;
    using cc1g = FieldModel<reg, Tim9AddressPolicy<Address>, 1, 1>;
    using ug = FieldModel<reg, Tim9AddressPolicy<Address>, 0, 1>;
  };

public:
  using egr = EgrRegisterModel<uint32_t, Tim9BaseAddress + 0x00000014>;

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
      BitFieldModel<SizeType, 12, 3> oc2m;
      BitFieldModel<SizeType, 11, 1> oc2pe;
      BitFieldModel<SizeType, 10, 1> oc2fe;
      BitFieldModel<SizeType, 8, 2> cc2s;
      BitFieldModel<SizeType, 4, 3> oc1m;
      BitFieldModel<SizeType, 3, 1> oc1pe;
      BitFieldModel<SizeType, 2, 1> oc1fe;
      BitFieldModel<SizeType, 0, 2> cc1s;
    };
  };

private:
  template<typename SizeType, std::uintptr_t Address>
  class Ccmr1OutputRegisterModel : public RegisterModel<Ccmr1OutputRegisterUnion<SizeType>, Tim9AddressPolicy<Address>>
  {
  public:
    using reg = Ccmr1OutputRegisterUnion<SizeType>;

  public:
    using oc2m = FieldModel<reg, Tim9AddressPolicy<Address>, 12, 3>;
    using oc2pe = FieldModel<reg, Tim9AddressPolicy<Address>, 11, 1>;
    using oc2fe = FieldModel<reg, Tim9AddressPolicy<Address>, 10, 1>;
    using cc2s = FieldModel<reg, Tim9AddressPolicy<Address>, 8, 2>;
    using oc1m = FieldModel<reg, Tim9AddressPolicy<Address>, 4, 3>;
    using oc1pe = FieldModel<reg, Tim9AddressPolicy<Address>, 3, 1>;
    using oc1fe = FieldModel<reg, Tim9AddressPolicy<Address>, 2, 1>;
    using cc1s = FieldModel<reg, Tim9AddressPolicy<Address>, 0, 2>;
  };

public:
  using ccmr1Output = Ccmr1OutputRegisterModel<uint32_t, Tim9BaseAddress + 0x00000018>;

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
      BitFieldModel<SizeType, 12, 3> ic2f;
      BitFieldModel<SizeType, 10, 2> ic2pcs;
      BitFieldModel<SizeType, 8, 2> cc2s;
      BitFieldModel<SizeType, 4, 3> ic1f;
      BitFieldModel<SizeType, 2, 2> icpcs;
      BitFieldModel<SizeType, 0, 2> cc1s;
    };
  };

private:
  template<typename SizeType, std::uintptr_t Address>
  class Ccmr1InputRegisterModel : public RegisterModel<Ccmr1InputRegisterUnion<SizeType>, Tim9AddressPolicy<Address>>
  {
  public:
    using reg = Ccmr1InputRegisterUnion<SizeType>;

  public:
    using ic2f = FieldModel<reg, Tim9AddressPolicy<Address>, 12, 3>;
    using ic2pcs = FieldModel<reg, Tim9AddressPolicy<Address>, 10, 2>;
    using cc2s = FieldModel<reg, Tim9AddressPolicy<Address>, 8, 2>;
    using ic1f = FieldModel<reg, Tim9AddressPolicy<Address>, 4, 3>;
    using icpcs = FieldModel<reg, Tim9AddressPolicy<Address>, 2, 2>;
    using cc1s = FieldModel<reg, Tim9AddressPolicy<Address>, 0, 2>;
  };

public:
  using ccmr1Input = Ccmr1InputRegisterModel<uint32_t, Tim9BaseAddress + 0x00000018>;

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
  class CcerRegisterModel : public RegisterModel<CcerRegisterUnion<SizeType>, Tim9AddressPolicy<Address>>
  {
  public:
    using reg = CcerRegisterUnion<SizeType>;

  public:
    using cc2np = FieldModel<reg, Tim9AddressPolicy<Address>, 7, 1>;
    using cc2p = FieldModel<reg, Tim9AddressPolicy<Address>, 5, 1>;
    using cc2e = FieldModel<reg, Tim9AddressPolicy<Address>, 4, 1>;
    using cc1np = FieldModel<reg, Tim9AddressPolicy<Address>, 3, 1>;
    using cc1p = FieldModel<reg, Tim9AddressPolicy<Address>, 1, 1>;
    using cc1e = FieldModel<reg, Tim9AddressPolicy<Address>, 0, 1>;
  };

public:
  using ccer = CcerRegisterModel<uint32_t, Tim9BaseAddress + 0x00000020>;

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
      BitFieldModel<SizeType, 0, 16> cnt;
    };
  };

private:
  template<typename SizeType, std::uintptr_t Address>
  class CntRegisterModel : public RegisterModel<CntRegisterUnion<SizeType>, Tim9AddressPolicy<Address>>
  {
  public:
    using reg = CntRegisterUnion<SizeType>;

  public:
    using cnt = FieldModel<reg, Tim9AddressPolicy<Address>, 0, 16>;
  };

public:
  using cnt = CntRegisterModel<uint32_t, Tim9BaseAddress + 0x00000024>;

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
  class PscRegisterModel : public RegisterModel<PscRegisterUnion<SizeType>, Tim9AddressPolicy<Address>>
  {
  public:
    using reg = PscRegisterUnion<SizeType>;

  public:
    using psc = FieldModel<reg, Tim9AddressPolicy<Address>, 0, 16>;
  };

public:
  using psc = PscRegisterModel<uint32_t, Tim9BaseAddress + 0x00000028>;

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
      BitFieldModel<SizeType, 0, 16> arr;
    };
  };

private:
  template<typename SizeType, std::uintptr_t Address>
  class ArrRegisterModel : public RegisterModel<ArrRegisterUnion<SizeType>, Tim9AddressPolicy<Address>>
  {
  public:
    using reg = ArrRegisterUnion<SizeType>;

  public:
    using arr = FieldModel<reg, Tim9AddressPolicy<Address>, 0, 16>;
  };

public:
  using arr = ArrRegisterModel<uint32_t, Tim9BaseAddress + 0x0000002C>;

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
      BitFieldModel<SizeType, 0, 16> ccr1;
    };
  };

private:
  template<typename SizeType, std::uintptr_t Address>
  class Ccr1RegisterModel : public RegisterModel<Ccr1RegisterUnion<SizeType>, Tim9AddressPolicy<Address>>
  {
  public:
    using reg = Ccr1RegisterUnion<SizeType>;

  public:
    using ccr1 = FieldModel<reg, Tim9AddressPolicy<Address>, 0, 16>;
  };

public:
  using ccr1 = Ccr1RegisterModel<uint32_t, Tim9BaseAddress + 0x00000034>;

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
      BitFieldModel<SizeType, 0, 16> ccr2;
    };
  };

private:
  template<typename SizeType, std::uintptr_t Address>
  class Ccr2RegisterModel : public RegisterModel<Ccr2RegisterUnion<SizeType>, Tim9AddressPolicy<Address>>
  {
  public:
    using reg = Ccr2RegisterUnion<SizeType>;

  public:
    using ccr2 = FieldModel<reg, Tim9AddressPolicy<Address>, 0, 16>;
  };

public:
  using ccr2 = Ccr2RegisterModel<uint32_t, Tim9BaseAddress + 0x00000038>;


};

}

#endif /* DRAL_STM32F411_TIM9_H */