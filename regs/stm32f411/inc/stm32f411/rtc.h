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

#ifndef DRAL_STM32F411_RTC_H
#define DRAL_STM32F411_RTC_H

#include "dral/bitfield_model.h"
#include "dral/group_address_policy.h"
#include "dral/layer_offset_policy.h"
#include "dral/register_model.h"

namespace dral::stm32f411 {

class Rtc
{
public:
  static constexpr uintptr_t RtcBaseAddress = 0x40002800;

private:
  template<std::uintptr_t Address>
  using RtcAddressPolicy = GroupAddressPolicy<Address>;

/**
 * REGISTER TR
 */
private:
  template<typename SizeType>
  class TrRegisterUnion
  {
  public:
    union
    {
      SizeType value;
      BitFieldModel<SizeType, 22, 1> pm;
      BitFieldModel<SizeType, 20, 2> ht;
      BitFieldModel<SizeType, 16, 4> hu;
      BitFieldModel<SizeType, 12, 3> mnt;
      BitFieldModel<SizeType, 8, 4> mnu;
      BitFieldModel<SizeType, 4, 3> st;
      BitFieldModel<SizeType, 0, 4> su;
    };
  };

private:
  template<typename SizeType, std::uintptr_t Address>
  class TrRegisterModel : public RegisterModel<TrRegisterUnion<SizeType>, RtcAddressPolicy<Address>>
  {
  public:
    using reg = TrRegisterUnion<SizeType>;

  public:
    using pm = FieldModel<reg, RtcAddressPolicy<Address>, 22, 1>;
    using ht = FieldModel<reg, RtcAddressPolicy<Address>, 20, 2>;
    using hu = FieldModel<reg, RtcAddressPolicy<Address>, 16, 4>;
    using mnt = FieldModel<reg, RtcAddressPolicy<Address>, 12, 3>;
    using mnu = FieldModel<reg, RtcAddressPolicy<Address>, 8, 4>;
    using st = FieldModel<reg, RtcAddressPolicy<Address>, 4, 3>;
    using su = FieldModel<reg, RtcAddressPolicy<Address>, 0, 4>;
  };

public:
  using tr = TrRegisterModel<uint32_t, RtcBaseAddress + 0x00000000>;

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
      BitFieldModel<SizeType, 20, 4> yt;
      BitFieldModel<SizeType, 16, 4> yu;
      BitFieldModel<SizeType, 13, 3> wdu;
      BitFieldModel<SizeType, 12, 1> mt;
      BitFieldModel<SizeType, 8, 4> mu;
      BitFieldModel<SizeType, 4, 2> dt;
      BitFieldModel<SizeType, 0, 4> du;
    };
  };

private:
  template<typename SizeType, std::uintptr_t Address>
  class DrRegisterModel : public RegisterModel<DrRegisterUnion<SizeType>, RtcAddressPolicy<Address>>
  {
  public:
    using reg = DrRegisterUnion<SizeType>;

  public:
    using yt = FieldModel<reg, RtcAddressPolicy<Address>, 20, 4>;
    using yu = FieldModel<reg, RtcAddressPolicy<Address>, 16, 4>;
    using wdu = FieldModel<reg, RtcAddressPolicy<Address>, 13, 3>;
    using mt = FieldModel<reg, RtcAddressPolicy<Address>, 12, 1>;
    using mu = FieldModel<reg, RtcAddressPolicy<Address>, 8, 4>;
    using dt = FieldModel<reg, RtcAddressPolicy<Address>, 4, 2>;
    using du = FieldModel<reg, RtcAddressPolicy<Address>, 0, 4>;
  };

public:
  using dr = DrRegisterModel<uint32_t, RtcBaseAddress + 0x00000004>;

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
      BitFieldModel<SizeType, 23, 1> coe;
      BitFieldModel<SizeType, 21, 2> osel;
      BitFieldModel<SizeType, 20, 1> pol;
      BitFieldModel<SizeType, 19, 1> cosel;
      BitFieldModel<SizeType, 18, 1> bkp;
      BitFieldModel<SizeType, 17, 1> sub1h;
      BitFieldModel<SizeType, 16, 1> add1h;
      BitFieldModel<SizeType, 15, 1> tsie;
      BitFieldModel<SizeType, 14, 1> wutie;
      BitFieldModel<SizeType, 13, 1> alrbie;
      BitFieldModel<SizeType, 12, 1> alraie;
      BitFieldModel<SizeType, 11, 1> tse;
      BitFieldModel<SizeType, 10, 1> wute;
      BitFieldModel<SizeType, 9, 1> alrbe;
      BitFieldModel<SizeType, 8, 1> alrae;
      BitFieldModel<SizeType, 7, 1> dce;
      BitFieldModel<SizeType, 6, 1> fmt;
      BitFieldModel<SizeType, 5, 1> bypshad;
      BitFieldModel<SizeType, 4, 1> refckon;
      BitFieldModel<SizeType, 3, 1> tsedge;
      BitFieldModel<SizeType, 0, 3> wcksel;
    };
  };

private:
  template<typename SizeType, std::uintptr_t Address>
  class CrRegisterModel : public RegisterModel<CrRegisterUnion<SizeType>, RtcAddressPolicy<Address>>
  {
  public:
    using reg = CrRegisterUnion<SizeType>;

  public:
    using coe = FieldModel<reg, RtcAddressPolicy<Address>, 23, 1>;
    using osel = FieldModel<reg, RtcAddressPolicy<Address>, 21, 2>;
    using pol = FieldModel<reg, RtcAddressPolicy<Address>, 20, 1>;
    using cosel = FieldModel<reg, RtcAddressPolicy<Address>, 19, 1>;
    using bkp = FieldModel<reg, RtcAddressPolicy<Address>, 18, 1>;
    using sub1h = FieldModel<reg, RtcAddressPolicy<Address>, 17, 1>;
    using add1h = FieldModel<reg, RtcAddressPolicy<Address>, 16, 1>;
    using tsie = FieldModel<reg, RtcAddressPolicy<Address>, 15, 1>;
    using wutie = FieldModel<reg, RtcAddressPolicy<Address>, 14, 1>;
    using alrbie = FieldModel<reg, RtcAddressPolicy<Address>, 13, 1>;
    using alraie = FieldModel<reg, RtcAddressPolicy<Address>, 12, 1>;
    using tse = FieldModel<reg, RtcAddressPolicy<Address>, 11, 1>;
    using wute = FieldModel<reg, RtcAddressPolicy<Address>, 10, 1>;
    using alrbe = FieldModel<reg, RtcAddressPolicy<Address>, 9, 1>;
    using alrae = FieldModel<reg, RtcAddressPolicy<Address>, 8, 1>;
    using dce = FieldModel<reg, RtcAddressPolicy<Address>, 7, 1>;
    using fmt = FieldModel<reg, RtcAddressPolicy<Address>, 6, 1>;
    using bypshad = FieldModel<reg, RtcAddressPolicy<Address>, 5, 1>;
    using refckon = FieldModel<reg, RtcAddressPolicy<Address>, 4, 1>;
    using tsedge = FieldModel<reg, RtcAddressPolicy<Address>, 3, 1>;
    using wcksel = FieldModel<reg, RtcAddressPolicy<Address>, 0, 3>;
  };

public:
  using cr = CrRegisterModel<uint32_t, RtcBaseAddress + 0x00000008>;

/**
 * REGISTER ISR
 */
private:
  template<typename SizeType>
  class IsrRegisterUnion
  {
  public:
    union
    {
      SizeType value;
      BitFieldModel<SizeType, 0, 1> alrawf;
      BitFieldModel<SizeType, 1, 1> alrbwf;
      BitFieldModel<SizeType, 2, 1> wutwf;
      BitFieldModel<SizeType, 3, 1> shpf;
      BitFieldModel<SizeType, 4, 1> inits;
      BitFieldModel<SizeType, 5, 1> rsf;
      BitFieldModel<SizeType, 6, 1> initf;
      BitFieldModel<SizeType, 7, 1> init;
      BitFieldModel<SizeType, 8, 1> alraf;
      BitFieldModel<SizeType, 9, 1> alrbf;
      BitFieldModel<SizeType, 10, 1> wutf;
      BitFieldModel<SizeType, 11, 1> tsf;
      BitFieldModel<SizeType, 12, 1> tsovf;
      BitFieldModel<SizeType, 13, 1> tamp1f;
      BitFieldModel<SizeType, 14, 1> tamp2f;
      BitFieldModel<SizeType, 16, 1> recalpf;
    };
  };

private:
  template<typename SizeType, std::uintptr_t Address>
  class IsrRegisterModel : public RegisterModel<IsrRegisterUnion<SizeType>, RtcAddressPolicy<Address>>
  {
  public:
    using reg = IsrRegisterUnion<SizeType>;

  public:
    using alrawf = FieldModel<reg, RtcAddressPolicy<Address>, 0, 1>;
    using alrbwf = FieldModel<reg, RtcAddressPolicy<Address>, 1, 1>;
    using wutwf = FieldModel<reg, RtcAddressPolicy<Address>, 2, 1>;
    using shpf = FieldModel<reg, RtcAddressPolicy<Address>, 3, 1>;
    using inits = FieldModel<reg, RtcAddressPolicy<Address>, 4, 1>;
    using rsf = FieldModel<reg, RtcAddressPolicy<Address>, 5, 1>;
    using initf = FieldModel<reg, RtcAddressPolicy<Address>, 6, 1>;
    using init = FieldModel<reg, RtcAddressPolicy<Address>, 7, 1>;
    using alraf = FieldModel<reg, RtcAddressPolicy<Address>, 8, 1>;
    using alrbf = FieldModel<reg, RtcAddressPolicy<Address>, 9, 1>;
    using wutf = FieldModel<reg, RtcAddressPolicy<Address>, 10, 1>;
    using tsf = FieldModel<reg, RtcAddressPolicy<Address>, 11, 1>;
    using tsovf = FieldModel<reg, RtcAddressPolicy<Address>, 12, 1>;
    using tamp1f = FieldModel<reg, RtcAddressPolicy<Address>, 13, 1>;
    using tamp2f = FieldModel<reg, RtcAddressPolicy<Address>, 14, 1>;
    using recalpf = FieldModel<reg, RtcAddressPolicy<Address>, 16, 1>;
  };

public:
  using isr = IsrRegisterModel<uint32_t, RtcBaseAddress + 0x0000000C>;

/**
 * REGISTER PRER
 */
private:
  template<typename SizeType>
  class PrerRegisterUnion
  {
  public:
    union
    {
      SizeType value;
      BitFieldModel<SizeType, 16, 7> predivA;
      BitFieldModel<SizeType, 0, 15> predivS;
    };
  };

private:
  template<typename SizeType, std::uintptr_t Address>
  class PrerRegisterModel : public RegisterModel<PrerRegisterUnion<SizeType>, RtcAddressPolicy<Address>>
  {
  public:
    using reg = PrerRegisterUnion<SizeType>;

  public:
    using predivA = FieldModel<reg, RtcAddressPolicy<Address>, 16, 7>;
    using predivS = FieldModel<reg, RtcAddressPolicy<Address>, 0, 15>;
  };

public:
  using prer = PrerRegisterModel<uint32_t, RtcBaseAddress + 0x00000010>;

/**
 * REGISTER WUTR
 */
private:
  template<typename SizeType>
  class WutrRegisterUnion
  {
  public:
    union
    {
      SizeType value;
      BitFieldModel<SizeType, 0, 16> wut;
    };
  };

private:
  template<typename SizeType, std::uintptr_t Address>
  class WutrRegisterModel : public RegisterModel<WutrRegisterUnion<SizeType>, RtcAddressPolicy<Address>>
  {
  public:
    using reg = WutrRegisterUnion<SizeType>;

  public:
    using wut = FieldModel<reg, RtcAddressPolicy<Address>, 0, 16>;
  };

public:
  using wutr = WutrRegisterModel<uint32_t, RtcBaseAddress + 0x00000014>;

/**
 * REGISTER CALIBR
 */
private:
  template<typename SizeType>
  class CalibrRegisterUnion
  {
  public:
    union
    {
      SizeType value;
      BitFieldModel<SizeType, 7, 1> dcs;
      BitFieldModel<SizeType, 0, 5> dc;
    };
  };

private:
  template<typename SizeType, std::uintptr_t Address>
  class CalibrRegisterModel : public RegisterModel<CalibrRegisterUnion<SizeType>, RtcAddressPolicy<Address>>
  {
  public:
    using reg = CalibrRegisterUnion<SizeType>;

  public:
    using dcs = FieldModel<reg, RtcAddressPolicy<Address>, 7, 1>;
    using dc = FieldModel<reg, RtcAddressPolicy<Address>, 0, 5>;
  };

public:
  using calibr = CalibrRegisterModel<uint32_t, RtcBaseAddress + 0x00000018>;

/**
 * REGISTER WPR
 */
private:
  template<typename SizeType>
  class WprRegisterUnion
  {
  public:
    union
    {
      SizeType value;
      BitFieldModel<SizeType, 0, 8> key;
    };
  };

private:
  template<typename SizeType, std::uintptr_t Address>
  class WprRegisterModel : public RegisterModel<WprRegisterUnion<SizeType>, RtcAddressPolicy<Address>>
  {
  public:
    using reg = WprRegisterUnion<SizeType>;

  public:
    using key = FieldModel<reg, RtcAddressPolicy<Address>, 0, 8>;
  };

public:
  using wpr = WprRegisterModel<uint32_t, RtcBaseAddress + 0x00000024>;

/**
 * REGISTER SSR
 */
private:
  template<typename SizeType>
  class SsrRegisterUnion
  {
  public:
    union
    {
      SizeType value;
      BitFieldModel<SizeType, 0, 16> ss;
    };
  };

private:
  template<typename SizeType, std::uintptr_t Address>
  class SsrRegisterModel : public RegisterModel<SsrRegisterUnion<SizeType>, RtcAddressPolicy<Address>>
  {
  public:
    using reg = SsrRegisterUnion<SizeType>;

  public:
    using ss = FieldModel<reg, RtcAddressPolicy<Address>, 0, 16>;
  };

public:
  using ssr = SsrRegisterModel<uint32_t, RtcBaseAddress + 0x00000028>;

/**
 * REGISTER SHIFTR
 */
private:
  template<typename SizeType>
  class ShiftrRegisterUnion
  {
  public:
    union
    {
      SizeType value;
      BitFieldModel<SizeType, 31, 1> add1s;
      BitFieldModel<SizeType, 0, 15> subfs;
    };
  };

private:
  template<typename SizeType, std::uintptr_t Address>
  class ShiftrRegisterModel : public RegisterModel<ShiftrRegisterUnion<SizeType>, RtcAddressPolicy<Address>>
  {
  public:
    using reg = ShiftrRegisterUnion<SizeType>;

  public:
    using add1s = FieldModel<reg, RtcAddressPolicy<Address>, 31, 1>;
    using subfs = FieldModel<reg, RtcAddressPolicy<Address>, 0, 15>;
  };

public:
  using shiftr = ShiftrRegisterModel<uint32_t, RtcBaseAddress + 0x0000002C>;

/**
 * REGISTER TSTR
 */
private:
  template<typename SizeType>
  class TstrRegisterUnion
  {
  public:
    union
    {
      SizeType value;
      BitFieldModel<SizeType, 22, 1> pm;
      BitFieldModel<SizeType, 20, 2> ht;
      BitFieldModel<SizeType, 16, 4> hu;
      BitFieldModel<SizeType, 12, 3> mnt;
      BitFieldModel<SizeType, 8, 4> mnu;
      BitFieldModel<SizeType, 4, 3> st;
      BitFieldModel<SizeType, 0, 4> su;
    };
  };

private:
  template<typename SizeType, std::uintptr_t Address>
  class TstrRegisterModel : public RegisterModel<TstrRegisterUnion<SizeType>, RtcAddressPolicy<Address>>
  {
  public:
    using reg = TstrRegisterUnion<SizeType>;

  public:
    using pm = FieldModel<reg, RtcAddressPolicy<Address>, 22, 1>;
    using ht = FieldModel<reg, RtcAddressPolicy<Address>, 20, 2>;
    using hu = FieldModel<reg, RtcAddressPolicy<Address>, 16, 4>;
    using mnt = FieldModel<reg, RtcAddressPolicy<Address>, 12, 3>;
    using mnu = FieldModel<reg, RtcAddressPolicy<Address>, 8, 4>;
    using st = FieldModel<reg, RtcAddressPolicy<Address>, 4, 3>;
    using su = FieldModel<reg, RtcAddressPolicy<Address>, 0, 4>;
  };

public:
  using tstr = TstrRegisterModel<uint32_t, RtcBaseAddress + 0x00000030>;

/**
 * REGISTER TSDR
 */
private:
  template<typename SizeType>
  class TsdrRegisterUnion
  {
  public:
    union
    {
      SizeType value;
      BitFieldModel<SizeType, 13, 3> wdu;
      BitFieldModel<SizeType, 12, 1> mt;
      BitFieldModel<SizeType, 8, 4> mu;
      BitFieldModel<SizeType, 4, 2> dt;
      BitFieldModel<SizeType, 0, 4> du;
    };
  };

private:
  template<typename SizeType, std::uintptr_t Address>
  class TsdrRegisterModel : public RegisterModel<TsdrRegisterUnion<SizeType>, RtcAddressPolicy<Address>>
  {
  public:
    using reg = TsdrRegisterUnion<SizeType>;

  public:
    using wdu = FieldModel<reg, RtcAddressPolicy<Address>, 13, 3>;
    using mt = FieldModel<reg, RtcAddressPolicy<Address>, 12, 1>;
    using mu = FieldModel<reg, RtcAddressPolicy<Address>, 8, 4>;
    using dt = FieldModel<reg, RtcAddressPolicy<Address>, 4, 2>;
    using du = FieldModel<reg, RtcAddressPolicy<Address>, 0, 4>;
  };

public:
  using tsdr = TsdrRegisterModel<uint32_t, RtcBaseAddress + 0x00000034>;

/**
 * REGISTER TSSSR
 */
private:
  template<typename SizeType>
  class TsssrRegisterUnion
  {
  public:
    union
    {
      SizeType value;
      BitFieldModel<SizeType, 0, 16> ss;
    };
  };

private:
  template<typename SizeType, std::uintptr_t Address>
  class TsssrRegisterModel : public RegisterModel<TsssrRegisterUnion<SizeType>, RtcAddressPolicy<Address>>
  {
  public:
    using reg = TsssrRegisterUnion<SizeType>;

  public:
    using ss = FieldModel<reg, RtcAddressPolicy<Address>, 0, 16>;
  };

public:
  using tsssr = TsssrRegisterModel<uint32_t, RtcBaseAddress + 0x00000038>;

/**
 * REGISTER CALR
 */
private:
  template<typename SizeType>
  class CalrRegisterUnion
  {
  public:
    union
    {
      SizeType value;
      BitFieldModel<SizeType, 15, 1> calp;
      BitFieldModel<SizeType, 14, 1> calw8;
      BitFieldModel<SizeType, 13, 1> calw16;
      BitFieldModel<SizeType, 0, 9> calm;
    };
  };

private:
  template<typename SizeType, std::uintptr_t Address>
  class CalrRegisterModel : public RegisterModel<CalrRegisterUnion<SizeType>, RtcAddressPolicy<Address>>
  {
  public:
    using reg = CalrRegisterUnion<SizeType>;

  public:
    using calp = FieldModel<reg, RtcAddressPolicy<Address>, 15, 1>;
    using calw8 = FieldModel<reg, RtcAddressPolicy<Address>, 14, 1>;
    using calw16 = FieldModel<reg, RtcAddressPolicy<Address>, 13, 1>;
    using calm = FieldModel<reg, RtcAddressPolicy<Address>, 0, 9>;
  };

public:
  using calr = CalrRegisterModel<uint32_t, RtcBaseAddress + 0x0000003C>;

/**
 * REGISTER TAFCR
 */
private:
  template<typename SizeType>
  class TafcrRegisterUnion
  {
  public:
    union
    {
      SizeType value;
      BitFieldModel<SizeType, 18, 1> alarmouttype;
      BitFieldModel<SizeType, 17, 1> tsinsel;
      BitFieldModel<SizeType, 16, 1> tamp1insel;
      BitFieldModel<SizeType, 15, 1> tamppudis;
      BitFieldModel<SizeType, 13, 2> tampprch;
      BitFieldModel<SizeType, 11, 2> tampflt;
      BitFieldModel<SizeType, 8, 3> tampfreq;
      BitFieldModel<SizeType, 7, 1> tampts;
      BitFieldModel<SizeType, 4, 1> tamp2trg;
      BitFieldModel<SizeType, 3, 1> tamp2e;
      BitFieldModel<SizeType, 2, 1> tampie;
      BitFieldModel<SizeType, 1, 1> tamp1trg;
      BitFieldModel<SizeType, 0, 1> tamp1e;
    };
  };

private:
  template<typename SizeType, std::uintptr_t Address>
  class TafcrRegisterModel : public RegisterModel<TafcrRegisterUnion<SizeType>, RtcAddressPolicy<Address>>
  {
  public:
    using reg = TafcrRegisterUnion<SizeType>;

  public:
    using alarmouttype = FieldModel<reg, RtcAddressPolicy<Address>, 18, 1>;
    using tsinsel = FieldModel<reg, RtcAddressPolicy<Address>, 17, 1>;
    using tamp1insel = FieldModel<reg, RtcAddressPolicy<Address>, 16, 1>;
    using tamppudis = FieldModel<reg, RtcAddressPolicy<Address>, 15, 1>;
    using tampprch = FieldModel<reg, RtcAddressPolicy<Address>, 13, 2>;
    using tampflt = FieldModel<reg, RtcAddressPolicy<Address>, 11, 2>;
    using tampfreq = FieldModel<reg, RtcAddressPolicy<Address>, 8, 3>;
    using tampts = FieldModel<reg, RtcAddressPolicy<Address>, 7, 1>;
    using tamp2trg = FieldModel<reg, RtcAddressPolicy<Address>, 4, 1>;
    using tamp2e = FieldModel<reg, RtcAddressPolicy<Address>, 3, 1>;
    using tampie = FieldModel<reg, RtcAddressPolicy<Address>, 2, 1>;
    using tamp1trg = FieldModel<reg, RtcAddressPolicy<Address>, 1, 1>;
    using tamp1e = FieldModel<reg, RtcAddressPolicy<Address>, 0, 1>;
  };

public:
  using tafcr = TafcrRegisterModel<uint32_t, RtcBaseAddress + 0x00000040>;


/**
 * GROUP ALRM_X_R
 */
public:
  class AlrmXR
  {
  public:
    static constexpr uintptr_t AlrmXRBaseAddress = 0x0000001C;

  private:
    enum class AlrmXRIndex
    {
      Alrmar,
      Alrmbr,
    };

  public:
    struct Index
    {
      using enum AlrmXRIndex;
      static constexpr std::array All = {AlrmXRIndex::Alrmar, AlrmXRIndex::Alrmbr};
    };

  private:
    using AlrmXRLayerOffsetPolicy = LayerOffsetPolicy<AlrmXRIndex, 0x00000004>;

    template<std::uintptr_t Address>
    using AlrmXRAddressPolicy = GroupAddressPolicy<Address, std::tuple<AlrmXRLayerOffsetPolicy>>;

  /**
   * REGISTER ALRM_X_R
   */
  private:
    template<typename SizeType>
    class AlrmXRRegisterUnion
    {
    public:
      union
      {
        SizeType value;
        BitFieldModel<SizeType, 31, 1> msk4;
        BitFieldModel<SizeType, 30, 1> wdsel;
        BitFieldModel<SizeType, 28, 2> dt;
        BitFieldModel<SizeType, 24, 4> du;
        BitFieldModel<SizeType, 23, 1> msk3;
        BitFieldModel<SizeType, 22, 1> pm;
        BitFieldModel<SizeType, 20, 2> ht;
        BitFieldModel<SizeType, 16, 4> hu;
        BitFieldModel<SizeType, 15, 1> msk2;
        BitFieldModel<SizeType, 12, 3> mnt;
        BitFieldModel<SizeType, 8, 4> mnu;
        BitFieldModel<SizeType, 7, 1> msk1;
        BitFieldModel<SizeType, 4, 3> st;
        BitFieldModel<SizeType, 0, 4> su;
      };
    };

  private:
    template<typename SizeType, std::uintptr_t Address>
    class AlrmXRRegisterModel : public RegisterModel<AlrmXRRegisterUnion<SizeType>, AlrmXRAddressPolicy<Address>>
    {
    public:
      using reg = AlrmXRRegisterUnion<SizeType>;

    public:
      using msk4 = FieldModel<reg, AlrmXRAddressPolicy<Address>, 31, 1>;
      using wdsel = FieldModel<reg, AlrmXRAddressPolicy<Address>, 30, 1>;
      using dt = FieldModel<reg, AlrmXRAddressPolicy<Address>, 28, 2>;
      using du = FieldModel<reg, AlrmXRAddressPolicy<Address>, 24, 4>;
      using msk3 = FieldModel<reg, AlrmXRAddressPolicy<Address>, 23, 1>;
      using pm = FieldModel<reg, AlrmXRAddressPolicy<Address>, 22, 1>;
      using ht = FieldModel<reg, AlrmXRAddressPolicy<Address>, 20, 2>;
      using hu = FieldModel<reg, AlrmXRAddressPolicy<Address>, 16, 4>;
      using msk2 = FieldModel<reg, AlrmXRAddressPolicy<Address>, 15, 1>;
      using mnt = FieldModel<reg, AlrmXRAddressPolicy<Address>, 12, 3>;
      using mnu = FieldModel<reg, AlrmXRAddressPolicy<Address>, 8, 4>;
      using msk1 = FieldModel<reg, AlrmXRAddressPolicy<Address>, 7, 1>;
      using st = FieldModel<reg, AlrmXRAddressPolicy<Address>, 4, 3>;
      using su = FieldModel<reg, AlrmXRAddressPolicy<Address>, 0, 4>;
    };

  public:
    using alrmXR = AlrmXRRegisterModel<uint32_t, RtcBaseAddress + AlrmXRBaseAddress + 0x00000000>;


  };

/**
 * GROUP ALRM_X_SSR
 */
public:
  class AlrmXSsr
  {
  public:
    static constexpr uintptr_t AlrmXSsrBaseAddress = 0x00000044;

  private:
    enum class AlrmXSsrIndex
    {
      Alrmassr,
      Alrmbssr,
    };

  public:
    struct Index
    {
      using enum AlrmXSsrIndex;
      static constexpr std::array All = {AlrmXSsrIndex::Alrmassr, AlrmXSsrIndex::Alrmbssr};
    };

  private:
    using AlrmXSsrLayerOffsetPolicy = LayerOffsetPolicy<AlrmXSsrIndex, 0x00000004>;

    template<std::uintptr_t Address>
    using AlrmXSsrAddressPolicy = GroupAddressPolicy<Address, std::tuple<AlrmXSsrLayerOffsetPolicy>>;

  /**
   * REGISTER ALRM_X_SSR
   */
  private:
    template<typename SizeType>
    class AlrmXSsrRegisterUnion
    {
    public:
      union
      {
        SizeType value;
        BitFieldModel<SizeType, 24, 4> maskss;
        BitFieldModel<SizeType, 0, 15> ss;
      };
    };

  private:
    template<typename SizeType, std::uintptr_t Address>
    class AlrmXSsrRegisterModel : public RegisterModel<AlrmXSsrRegisterUnion<SizeType>, AlrmXSsrAddressPolicy<Address>>
    {
    public:
      using reg = AlrmXSsrRegisterUnion<SizeType>;

    public:
      using maskss = FieldModel<reg, AlrmXSsrAddressPolicy<Address>, 24, 4>;
      using ss = FieldModel<reg, AlrmXSsrAddressPolicy<Address>, 0, 15>;
    };

  public:
    using alrmXSsr = AlrmXSsrRegisterModel<uint32_t, RtcBaseAddress + AlrmXSsrBaseAddress + 0x00000000>;


  };

/**
 * GROUP BKP_X_R
 */
public:
  class BkpXR
  {
  public:
    static constexpr uintptr_t BkpXRBaseAddress = 0x00000050;

  private:
    enum class BkpXRIndex
    {
      Bkp0r,
      Bkp1r,
      Bkp2r,
      Bkp3r,
      Bkp4r,
      Bkp5r,
      Bkp6r,
      Bkp7r,
      Bkp8r,
      Bkp9r,
      Bkp10r,
      Bkp11r,
      Bkp12r,
      Bkp13r,
      Bkp14r,
      Bkp15r,
      Bkp16r,
      Bkp17r,
      Bkp18r,
      Bkp19r,
    };

  public:
    struct Index
    {
      using enum BkpXRIndex;
      static constexpr std::array All = {BkpXRIndex::Bkp0r, BkpXRIndex::Bkp1r, BkpXRIndex::Bkp2r, BkpXRIndex::Bkp3r, BkpXRIndex::Bkp4r, BkpXRIndex::Bkp5r, BkpXRIndex::Bkp6r, BkpXRIndex::Bkp7r, BkpXRIndex::Bkp8r, BkpXRIndex::Bkp9r, BkpXRIndex::Bkp10r, BkpXRIndex::Bkp11r, BkpXRIndex::Bkp12r, BkpXRIndex::Bkp13r, BkpXRIndex::Bkp14r, BkpXRIndex::Bkp15r, BkpXRIndex::Bkp16r, BkpXRIndex::Bkp17r, BkpXRIndex::Bkp18r, BkpXRIndex::Bkp19r};
    };

  private:
    using BkpXRLayerOffsetPolicy = LayerOffsetPolicy<BkpXRIndex, 0x00000004>;

    template<std::uintptr_t Address>
    using BkpXRAddressPolicy = GroupAddressPolicy<Address, std::tuple<BkpXRLayerOffsetPolicy>>;

  /**
   * REGISTER BKP_X_R
   */
  private:
    template<typename SizeType>
    class BkpXRRegisterUnion
    {
    public:
      union
      {
        SizeType value;
        BitFieldModel<SizeType, 0, 32> bkp;
      };
    };

  private:
    template<typename SizeType, std::uintptr_t Address>
    class BkpXRRegisterModel : public RegisterModel<BkpXRRegisterUnion<SizeType>, BkpXRAddressPolicy<Address>>
    {
    public:
      using reg = BkpXRRegisterUnion<SizeType>;

    public:
      using bkp = FieldModel<reg, BkpXRAddressPolicy<Address>, 0, 32>;
    };

  public:
    using bkpXR = BkpXRRegisterModel<uint32_t, RtcBaseAddress + BkpXRBaseAddress + 0x00000000>;


  };

};

}

#endif /* DRAL_STM32F411_RTC_H */