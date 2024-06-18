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

#ifndef DRAL_STM32F411_ADC1_H
#define DRAL_STM32F411_ADC1_H

#include "dral/bitfield_model.h"
#include "dral/group_address_policy.h"
#include "dral/layer_offset_policy.h"
#include "dral/register_model.h"

namespace dral::stm32f411 {

class Adc1
{
public:
  static constexpr uintptr_t Adc1BaseAddress = 0x40012000;

private:
  template<std::uintptr_t Address>
  using Adc1AddressPolicy = GroupAddressPolicy<Address>;

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
      BitFieldModel<SizeType, 5, 1> ovr;
      BitFieldModel<SizeType, 4, 1> strt;
      BitFieldModel<SizeType, 3, 1> jstrt;
      BitFieldModel<SizeType, 2, 1> jeoc;
      BitFieldModel<SizeType, 1, 1> eoc;
      BitFieldModel<SizeType, 0, 1> awd;
    };
  };

private:
  template<typename SizeType, std::uintptr_t Address>
  class SrRegisterModel : public RegisterModel<SrRegisterUnion<SizeType>, Adc1AddressPolicy<Address>>
  {
  public:
    using reg = SrRegisterUnion<SizeType>;

  public:
    using ovr = FieldModel<reg, Adc1AddressPolicy<Address>, 5, 1>;
    using strt = FieldModel<reg, Adc1AddressPolicy<Address>, 4, 1>;
    using jstrt = FieldModel<reg, Adc1AddressPolicy<Address>, 3, 1>;
    using jeoc = FieldModel<reg, Adc1AddressPolicy<Address>, 2, 1>;
    using eoc = FieldModel<reg, Adc1AddressPolicy<Address>, 1, 1>;
    using awd = FieldModel<reg, Adc1AddressPolicy<Address>, 0, 1>;
  };

public:
  using sr = SrRegisterModel<uint32_t, Adc1BaseAddress + 0x00000000>;

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
      BitFieldModel<SizeType, 26, 1> ovrie;
      BitFieldModel<SizeType, 24, 2> res;
      BitFieldModel<SizeType, 23, 1> awden;
      BitFieldModel<SizeType, 22, 1> jawden;
      BitFieldModel<SizeType, 13, 3> discnum;
      BitFieldModel<SizeType, 12, 1> jdiscen;
      BitFieldModel<SizeType, 11, 1> discen;
      BitFieldModel<SizeType, 10, 1> jauto;
      BitFieldModel<SizeType, 9, 1> awdsgl;
      BitFieldModel<SizeType, 8, 1> scan;
      BitFieldModel<SizeType, 7, 1> jeocie;
      BitFieldModel<SizeType, 6, 1> awdie;
      BitFieldModel<SizeType, 5, 1> eocie;
      BitFieldModel<SizeType, 0, 5> awdch;
    };
  };

private:
  template<typename SizeType, std::uintptr_t Address>
  class Cr1RegisterModel : public RegisterModel<Cr1RegisterUnion<SizeType>, Adc1AddressPolicy<Address>>
  {
  public:
    using reg = Cr1RegisterUnion<SizeType>;

  public:
    using ovrie = FieldModel<reg, Adc1AddressPolicy<Address>, 26, 1>;
    using res = FieldModel<reg, Adc1AddressPolicy<Address>, 24, 2>;
    using awden = FieldModel<reg, Adc1AddressPolicy<Address>, 23, 1>;
    using jawden = FieldModel<reg, Adc1AddressPolicy<Address>, 22, 1>;
    using discnum = FieldModel<reg, Adc1AddressPolicy<Address>, 13, 3>;
    using jdiscen = FieldModel<reg, Adc1AddressPolicy<Address>, 12, 1>;
    using discen = FieldModel<reg, Adc1AddressPolicy<Address>, 11, 1>;
    using jauto = FieldModel<reg, Adc1AddressPolicy<Address>, 10, 1>;
    using awdsgl = FieldModel<reg, Adc1AddressPolicy<Address>, 9, 1>;
    using scan = FieldModel<reg, Adc1AddressPolicy<Address>, 8, 1>;
    using jeocie = FieldModel<reg, Adc1AddressPolicy<Address>, 7, 1>;
    using awdie = FieldModel<reg, Adc1AddressPolicy<Address>, 6, 1>;
    using eocie = FieldModel<reg, Adc1AddressPolicy<Address>, 5, 1>;
    using awdch = FieldModel<reg, Adc1AddressPolicy<Address>, 0, 5>;
  };

public:
  using cr1 = Cr1RegisterModel<uint32_t, Adc1BaseAddress + 0x00000004>;

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
      BitFieldModel<SizeType, 30, 1> swstart;
      BitFieldModel<SizeType, 28, 2> exten;
      BitFieldModel<SizeType, 24, 4> extsel;
      BitFieldModel<SizeType, 22, 1> jswstart;
      BitFieldModel<SizeType, 20, 2> jexten;
      BitFieldModel<SizeType, 16, 4> jextsel;
      BitFieldModel<SizeType, 11, 1> align;
      BitFieldModel<SizeType, 10, 1> eocs;
      BitFieldModel<SizeType, 9, 1> dds;
      BitFieldModel<SizeType, 8, 1> dma;
      BitFieldModel<SizeType, 1, 1> cont;
      BitFieldModel<SizeType, 0, 1> adon;
    };
  };

private:
  template<typename SizeType, std::uintptr_t Address>
  class Cr2RegisterModel : public RegisterModel<Cr2RegisterUnion<SizeType>, Adc1AddressPolicy<Address>>
  {
  public:
    using reg = Cr2RegisterUnion<SizeType>;

  public:
    using swstart = FieldModel<reg, Adc1AddressPolicy<Address>, 30, 1>;
    using exten = FieldModel<reg, Adc1AddressPolicy<Address>, 28, 2>;
    using extsel = FieldModel<reg, Adc1AddressPolicy<Address>, 24, 4>;
    using jswstart = FieldModel<reg, Adc1AddressPolicy<Address>, 22, 1>;
    using jexten = FieldModel<reg, Adc1AddressPolicy<Address>, 20, 2>;
    using jextsel = FieldModel<reg, Adc1AddressPolicy<Address>, 16, 4>;
    using align = FieldModel<reg, Adc1AddressPolicy<Address>, 11, 1>;
    using eocs = FieldModel<reg, Adc1AddressPolicy<Address>, 10, 1>;
    using dds = FieldModel<reg, Adc1AddressPolicy<Address>, 9, 1>;
    using dma = FieldModel<reg, Adc1AddressPolicy<Address>, 8, 1>;
    using cont = FieldModel<reg, Adc1AddressPolicy<Address>, 1, 1>;
    using adon = FieldModel<reg, Adc1AddressPolicy<Address>, 0, 1>;
  };

public:
  using cr2 = Cr2RegisterModel<uint32_t, Adc1BaseAddress + 0x00000008>;

/**
 * REGISTER JOFR1
 */
private:
  template<typename SizeType>
  class Jofr1RegisterUnion
  {
  public:
    union
    {
      SizeType value;
      BitFieldModel<SizeType, 0, 12> joffset1;
    };
  };

private:
  template<typename SizeType, std::uintptr_t Address>
  class Jofr1RegisterModel : public RegisterModel<Jofr1RegisterUnion<SizeType>, Adc1AddressPolicy<Address>>
  {
  public:
    using reg = Jofr1RegisterUnion<SizeType>;

  public:
    using joffset1 = FieldModel<reg, Adc1AddressPolicy<Address>, 0, 12>;
  };

public:
  using jofr1 = Jofr1RegisterModel<uint32_t, Adc1BaseAddress + 0x00000014>;

/**
 * REGISTER JOFR2
 */
private:
  template<typename SizeType>
  class Jofr2RegisterUnion
  {
  public:
    union
    {
      SizeType value;
      BitFieldModel<SizeType, 0, 12> joffset2;
    };
  };

private:
  template<typename SizeType, std::uintptr_t Address>
  class Jofr2RegisterModel : public RegisterModel<Jofr2RegisterUnion<SizeType>, Adc1AddressPolicy<Address>>
  {
  public:
    using reg = Jofr2RegisterUnion<SizeType>;

  public:
    using joffset2 = FieldModel<reg, Adc1AddressPolicy<Address>, 0, 12>;
  };

public:
  using jofr2 = Jofr2RegisterModel<uint32_t, Adc1BaseAddress + 0x00000018>;

/**
 * REGISTER JOFR3
 */
private:
  template<typename SizeType>
  class Jofr3RegisterUnion
  {
  public:
    union
    {
      SizeType value;
      BitFieldModel<SizeType, 0, 12> joffset3;
    };
  };

private:
  template<typename SizeType, std::uintptr_t Address>
  class Jofr3RegisterModel : public RegisterModel<Jofr3RegisterUnion<SizeType>, Adc1AddressPolicy<Address>>
  {
  public:
    using reg = Jofr3RegisterUnion<SizeType>;

  public:
    using joffset3 = FieldModel<reg, Adc1AddressPolicy<Address>, 0, 12>;
  };

public:
  using jofr3 = Jofr3RegisterModel<uint32_t, Adc1BaseAddress + 0x0000001C>;

/**
 * REGISTER JOFR4
 */
private:
  template<typename SizeType>
  class Jofr4RegisterUnion
  {
  public:
    union
    {
      SizeType value;
      BitFieldModel<SizeType, 0, 12> joffset4;
    };
  };

private:
  template<typename SizeType, std::uintptr_t Address>
  class Jofr4RegisterModel : public RegisterModel<Jofr4RegisterUnion<SizeType>, Adc1AddressPolicy<Address>>
  {
  public:
    using reg = Jofr4RegisterUnion<SizeType>;

  public:
    using joffset4 = FieldModel<reg, Adc1AddressPolicy<Address>, 0, 12>;
  };

public:
  using jofr4 = Jofr4RegisterModel<uint32_t, Adc1BaseAddress + 0x00000020>;

/**
 * REGISTER HTR
 */
private:
  template<typename SizeType>
  class HtrRegisterUnion
  {
  public:
    union
    {
      SizeType value;
      BitFieldModel<SizeType, 0, 12> ht;
    };
  };

private:
  template<typename SizeType, std::uintptr_t Address>
  class HtrRegisterModel : public RegisterModel<HtrRegisterUnion<SizeType>, Adc1AddressPolicy<Address>>
  {
  public:
    using reg = HtrRegisterUnion<SizeType>;

  public:
    using ht = FieldModel<reg, Adc1AddressPolicy<Address>, 0, 12>;
  };

public:
  using htr = HtrRegisterModel<uint32_t, Adc1BaseAddress + 0x00000024>;

/**
 * REGISTER LTR
 */
private:
  template<typename SizeType>
  class LtrRegisterUnion
  {
  public:
    union
    {
      SizeType value;
      BitFieldModel<SizeType, 0, 12> lt;
    };
  };

private:
  template<typename SizeType, std::uintptr_t Address>
  class LtrRegisterModel : public RegisterModel<LtrRegisterUnion<SizeType>, Adc1AddressPolicy<Address>>
  {
  public:
    using reg = LtrRegisterUnion<SizeType>;

  public:
    using lt = FieldModel<reg, Adc1AddressPolicy<Address>, 0, 12>;
  };

public:
  using ltr = LtrRegisterModel<uint32_t, Adc1BaseAddress + 0x00000028>;

/**
 * REGISTER SQR1
 */
private:
  template<typename SizeType>
  class Sqr1RegisterUnion
  {
  public:
    union
    {
      SizeType value;
      BitFieldModel<SizeType, 20, 4> l;
      BitFieldModel<SizeType, 15, 5> sq16;
      BitFieldModel<SizeType, 10, 5> sq15;
      BitFieldModel<SizeType, 5, 5> sq14;
      BitFieldModel<SizeType, 0, 5> sq13;
    };
  };

private:
  template<typename SizeType, std::uintptr_t Address>
  class Sqr1RegisterModel : public RegisterModel<Sqr1RegisterUnion<SizeType>, Adc1AddressPolicy<Address>>
  {
  public:
    using reg = Sqr1RegisterUnion<SizeType>;

  public:
    using l = FieldModel<reg, Adc1AddressPolicy<Address>, 20, 4>;
    using sq16 = FieldModel<reg, Adc1AddressPolicy<Address>, 15, 5>;
    using sq15 = FieldModel<reg, Adc1AddressPolicy<Address>, 10, 5>;
    using sq14 = FieldModel<reg, Adc1AddressPolicy<Address>, 5, 5>;
    using sq13 = FieldModel<reg, Adc1AddressPolicy<Address>, 0, 5>;
  };

public:
  using sqr1 = Sqr1RegisterModel<uint32_t, Adc1BaseAddress + 0x0000002C>;

/**
 * REGISTER SQR2
 */
private:
  template<typename SizeType>
  class Sqr2RegisterUnion
  {
  public:
    union
    {
      SizeType value;
      BitFieldModel<SizeType, 25, 5> sq12;
      BitFieldModel<SizeType, 20, 5> sq11;
      BitFieldModel<SizeType, 15, 5> sq10;
      BitFieldModel<SizeType, 10, 5> sq9;
      BitFieldModel<SizeType, 5, 5> sq8;
      BitFieldModel<SizeType, 0, 5> sq7;
    };
  };

private:
  template<typename SizeType, std::uintptr_t Address>
  class Sqr2RegisterModel : public RegisterModel<Sqr2RegisterUnion<SizeType>, Adc1AddressPolicy<Address>>
  {
  public:
    using reg = Sqr2RegisterUnion<SizeType>;

  public:
    using sq12 = FieldModel<reg, Adc1AddressPolicy<Address>, 25, 5>;
    using sq11 = FieldModel<reg, Adc1AddressPolicy<Address>, 20, 5>;
    using sq10 = FieldModel<reg, Adc1AddressPolicy<Address>, 15, 5>;
    using sq9 = FieldModel<reg, Adc1AddressPolicy<Address>, 10, 5>;
    using sq8 = FieldModel<reg, Adc1AddressPolicy<Address>, 5, 5>;
    using sq7 = FieldModel<reg, Adc1AddressPolicy<Address>, 0, 5>;
  };

public:
  using sqr2 = Sqr2RegisterModel<uint32_t, Adc1BaseAddress + 0x00000030>;

/**
 * REGISTER SQR3
 */
private:
  template<typename SizeType>
  class Sqr3RegisterUnion
  {
  public:
    union
    {
      SizeType value;
      BitFieldModel<SizeType, 25, 5> sq6;
      BitFieldModel<SizeType, 20, 5> sq5;
      BitFieldModel<SizeType, 15, 5> sq4;
      BitFieldModel<SizeType, 10, 5> sq3;
      BitFieldModel<SizeType, 5, 5> sq2;
      BitFieldModel<SizeType, 0, 5> sq1;
    };
  };

private:
  template<typename SizeType, std::uintptr_t Address>
  class Sqr3RegisterModel : public RegisterModel<Sqr3RegisterUnion<SizeType>, Adc1AddressPolicy<Address>>
  {
  public:
    using reg = Sqr3RegisterUnion<SizeType>;

  public:
    using sq6 = FieldModel<reg, Adc1AddressPolicy<Address>, 25, 5>;
    using sq5 = FieldModel<reg, Adc1AddressPolicy<Address>, 20, 5>;
    using sq4 = FieldModel<reg, Adc1AddressPolicy<Address>, 15, 5>;
    using sq3 = FieldModel<reg, Adc1AddressPolicy<Address>, 10, 5>;
    using sq2 = FieldModel<reg, Adc1AddressPolicy<Address>, 5, 5>;
    using sq1 = FieldModel<reg, Adc1AddressPolicy<Address>, 0, 5>;
  };

public:
  using sqr3 = Sqr3RegisterModel<uint32_t, Adc1BaseAddress + 0x00000034>;

/**
 * REGISTER JSQR
 */
private:
  template<typename SizeType>
  class JsqrRegisterUnion
  {
  public:
    union
    {
      SizeType value;
      BitFieldModel<SizeType, 20, 2> jl;
      BitFieldModel<SizeType, 15, 5> jsq4;
      BitFieldModel<SizeType, 10, 5> jsq3;
      BitFieldModel<SizeType, 5, 5> jsq2;
      BitFieldModel<SizeType, 0, 5> jsq1;
    };
  };

private:
  template<typename SizeType, std::uintptr_t Address>
  class JsqrRegisterModel : public RegisterModel<JsqrRegisterUnion<SizeType>, Adc1AddressPolicy<Address>>
  {
  public:
    using reg = JsqrRegisterUnion<SizeType>;

  public:
    using jl = FieldModel<reg, Adc1AddressPolicy<Address>, 20, 2>;
    using jsq4 = FieldModel<reg, Adc1AddressPolicy<Address>, 15, 5>;
    using jsq3 = FieldModel<reg, Adc1AddressPolicy<Address>, 10, 5>;
    using jsq2 = FieldModel<reg, Adc1AddressPolicy<Address>, 5, 5>;
    using jsq1 = FieldModel<reg, Adc1AddressPolicy<Address>, 0, 5>;
  };

public:
  using jsqr = JsqrRegisterModel<uint32_t, Adc1BaseAddress + 0x00000038>;

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
      BitFieldModel<SizeType, 0, 16> data;
    };
  };

private:
  template<typename SizeType, std::uintptr_t Address>
  class DrRegisterModel : public RegisterModel<DrRegisterUnion<SizeType>, Adc1AddressPolicy<Address>>
  {
  public:
    using reg = DrRegisterUnion<SizeType>;

  public:
    using data = FieldModel<reg, Adc1AddressPolicy<Address>, 0, 16>;
  };

public:
  using dr = DrRegisterModel<uint32_t, Adc1BaseAddress + 0x0000004C>;


/**
 * GROUP SMPR_X
 */
public:
  class SmprX
  {
  public:
    static constexpr uintptr_t SmprXBaseAddress = 0x0000000C;

  private:
    enum class SmprXIndex
    {
      Smpr1,
      Smpr2,
    };

  public:
    struct Index
    {
      using enum SmprXIndex;
      static constexpr std::array All = {SmprXIndex::Smpr1, SmprXIndex::Smpr2};
    };

  private:
    using SmprXLayerOffsetPolicy = LayerOffsetPolicy<SmprXIndex, 0x00000004>;

    template<std::uintptr_t Address>
    using SmprXAddressPolicy = GroupAddressPolicy<Address, std::tuple<SmprXLayerOffsetPolicy>>;

  /**
   * REGISTER SMPR_X
   */
  private:
    template<typename SizeType>
    class SmprXRegisterUnion
    {
    public:
      union
      {
        SizeType value;
        BitFieldModel<SizeType, 0, 32> smpxX;
      };
    };

  private:
    template<typename SizeType, std::uintptr_t Address>
    class SmprXRegisterModel : public RegisterModel<SmprXRegisterUnion<SizeType>, SmprXAddressPolicy<Address>>
    {
    public:
      using reg = SmprXRegisterUnion<SizeType>;

    public:
      using smpxX = FieldModel<reg, SmprXAddressPolicy<Address>, 0, 32>;
    };

  public:
    using smprX = SmprXRegisterModel<uint32_t, Adc1BaseAddress + SmprXBaseAddress + 0x00000000>;


  };

/**
 * GROUP JDR_X
 */
public:
  class JdrX
  {
  public:
    static constexpr uintptr_t JdrXBaseAddress = 0x0000003C;

  private:
    enum class JdrXIndex
    {
      Jdr1,
      Jdr2,
      Jdr3,
      Jdr4,
    };

  public:
    struct Index
    {
      using enum JdrXIndex;
      static constexpr std::array All = {JdrXIndex::Jdr1, JdrXIndex::Jdr2, JdrXIndex::Jdr3, JdrXIndex::Jdr4};
    };

  private:
    using JdrXLayerOffsetPolicy = LayerOffsetPolicy<JdrXIndex, 0x00000004>;

    template<std::uintptr_t Address>
    using JdrXAddressPolicy = GroupAddressPolicy<Address, std::tuple<JdrXLayerOffsetPolicy>>;

  /**
   * REGISTER JDR_X
   */
  private:
    template<typename SizeType>
    class JdrXRegisterUnion
    {
    public:
      union
      {
        SizeType value;
        BitFieldModel<SizeType, 0, 16> jdata;
      };
    };

  private:
    template<typename SizeType, std::uintptr_t Address>
    class JdrXRegisterModel : public RegisterModel<JdrXRegisterUnion<SizeType>, JdrXAddressPolicy<Address>>
    {
    public:
      using reg = JdrXRegisterUnion<SizeType>;

    public:
      using jdata = FieldModel<reg, JdrXAddressPolicy<Address>, 0, 16>;
    };

  public:
    using jdrX = JdrXRegisterModel<uint32_t, Adc1BaseAddress + JdrXBaseAddress + 0x00000000>;


  };

};

}

#endif /* DRAL_STM32F411_ADC1_H */