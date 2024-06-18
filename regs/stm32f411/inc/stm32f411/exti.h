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

#ifndef DRAL_STM32F411_EXTI_H
#define DRAL_STM32F411_EXTI_H

#include "dral/bitfield_model.h"
#include "dral/group_address_policy.h"
#include "dral/layer_offset_policy.h"
#include "dral/register_model.h"

namespace dral::stm32f411 {

class Exti
{
public:
  static constexpr uintptr_t ExtiBaseAddress = 0x40013C00;

private:
  template<std::uintptr_t Address>
  using ExtiAddressPolicy = GroupAddressPolicy<Address>;

/**
 * REGISTER SWIER
 */
private:
  template<typename SizeType>
  class SwierRegisterUnion
  {
  public:
    union
    {
      SizeType value;
      BitFieldModel<SizeType, 0, 1> swier0;
      BitFieldModel<SizeType, 1, 1> swier1;
      BitFieldModel<SizeType, 2, 1> swier2;
      BitFieldModel<SizeType, 3, 1> swier3;
      BitFieldModel<SizeType, 4, 1> swier4;
      BitFieldModel<SizeType, 5, 1> swier5;
      BitFieldModel<SizeType, 6, 1> swier6;
      BitFieldModel<SizeType, 7, 1> swier7;
      BitFieldModel<SizeType, 8, 1> swier8;
      BitFieldModel<SizeType, 9, 1> swier9;
      BitFieldModel<SizeType, 10, 1> swier10;
      BitFieldModel<SizeType, 11, 1> swier11;
      BitFieldModel<SizeType, 12, 1> swier12;
      BitFieldModel<SizeType, 13, 1> swier13;
      BitFieldModel<SizeType, 14, 1> swier14;
      BitFieldModel<SizeType, 15, 1> swier15;
      BitFieldModel<SizeType, 16, 1> swier16;
      BitFieldModel<SizeType, 17, 1> swier17;
      BitFieldModel<SizeType, 18, 1> swier18;
      BitFieldModel<SizeType, 19, 1> swier19;
      BitFieldModel<SizeType, 20, 1> swier20;
      BitFieldModel<SizeType, 21, 1> swier21;
      BitFieldModel<SizeType, 22, 1> swier22;
    };
  };

private:
  template<typename SizeType, std::uintptr_t Address>
  class SwierRegisterModel : public RegisterModel<SwierRegisterUnion<SizeType>, ExtiAddressPolicy<Address>>
  {
  public:
    using reg = SwierRegisterUnion<SizeType>;

  public:
    using swier0 = FieldModel<reg, ExtiAddressPolicy<Address>, 0, 1>;
    using swier1 = FieldModel<reg, ExtiAddressPolicy<Address>, 1, 1>;
    using swier2 = FieldModel<reg, ExtiAddressPolicy<Address>, 2, 1>;
    using swier3 = FieldModel<reg, ExtiAddressPolicy<Address>, 3, 1>;
    using swier4 = FieldModel<reg, ExtiAddressPolicy<Address>, 4, 1>;
    using swier5 = FieldModel<reg, ExtiAddressPolicy<Address>, 5, 1>;
    using swier6 = FieldModel<reg, ExtiAddressPolicy<Address>, 6, 1>;
    using swier7 = FieldModel<reg, ExtiAddressPolicy<Address>, 7, 1>;
    using swier8 = FieldModel<reg, ExtiAddressPolicy<Address>, 8, 1>;
    using swier9 = FieldModel<reg, ExtiAddressPolicy<Address>, 9, 1>;
    using swier10 = FieldModel<reg, ExtiAddressPolicy<Address>, 10, 1>;
    using swier11 = FieldModel<reg, ExtiAddressPolicy<Address>, 11, 1>;
    using swier12 = FieldModel<reg, ExtiAddressPolicy<Address>, 12, 1>;
    using swier13 = FieldModel<reg, ExtiAddressPolicy<Address>, 13, 1>;
    using swier14 = FieldModel<reg, ExtiAddressPolicy<Address>, 14, 1>;
    using swier15 = FieldModel<reg, ExtiAddressPolicy<Address>, 15, 1>;
    using swier16 = FieldModel<reg, ExtiAddressPolicy<Address>, 16, 1>;
    using swier17 = FieldModel<reg, ExtiAddressPolicy<Address>, 17, 1>;
    using swier18 = FieldModel<reg, ExtiAddressPolicy<Address>, 18, 1>;
    using swier19 = FieldModel<reg, ExtiAddressPolicy<Address>, 19, 1>;
    using swier20 = FieldModel<reg, ExtiAddressPolicy<Address>, 20, 1>;
    using swier21 = FieldModel<reg, ExtiAddressPolicy<Address>, 21, 1>;
    using swier22 = FieldModel<reg, ExtiAddressPolicy<Address>, 22, 1>;
  };

public:
  using swier = SwierRegisterModel<uint32_t, ExtiBaseAddress + 0x00000010>;

/**
 * REGISTER PR
 */
private:
  template<typename SizeType>
  class PrRegisterUnion
  {
  public:
    union
    {
      SizeType value;
      BitFieldModel<SizeType, 0, 1> pr0;
      BitFieldModel<SizeType, 1, 1> pr1;
      BitFieldModel<SizeType, 2, 1> pr2;
      BitFieldModel<SizeType, 3, 1> pr3;
      BitFieldModel<SizeType, 4, 1> pr4;
      BitFieldModel<SizeType, 5, 1> pr5;
      BitFieldModel<SizeType, 6, 1> pr6;
      BitFieldModel<SizeType, 7, 1> pr7;
      BitFieldModel<SizeType, 8, 1> pr8;
      BitFieldModel<SizeType, 9, 1> pr9;
      BitFieldModel<SizeType, 10, 1> pr10;
      BitFieldModel<SizeType, 11, 1> pr11;
      BitFieldModel<SizeType, 12, 1> pr12;
      BitFieldModel<SizeType, 13, 1> pr13;
      BitFieldModel<SizeType, 14, 1> pr14;
      BitFieldModel<SizeType, 15, 1> pr15;
      BitFieldModel<SizeType, 16, 1> pr16;
      BitFieldModel<SizeType, 17, 1> pr17;
      BitFieldModel<SizeType, 18, 1> pr18;
      BitFieldModel<SizeType, 19, 1> pr19;
      BitFieldModel<SizeType, 20, 1> pr20;
      BitFieldModel<SizeType, 21, 1> pr21;
      BitFieldModel<SizeType, 22, 1> pr22;
    };
  };

private:
  template<typename SizeType, std::uintptr_t Address>
  class PrRegisterModel : public RegisterModel<PrRegisterUnion<SizeType>, ExtiAddressPolicy<Address>>
  {
  public:
    using reg = PrRegisterUnion<SizeType>;

  public:
    using pr0 = FieldModel<reg, ExtiAddressPolicy<Address>, 0, 1>;
    using pr1 = FieldModel<reg, ExtiAddressPolicy<Address>, 1, 1>;
    using pr2 = FieldModel<reg, ExtiAddressPolicy<Address>, 2, 1>;
    using pr3 = FieldModel<reg, ExtiAddressPolicy<Address>, 3, 1>;
    using pr4 = FieldModel<reg, ExtiAddressPolicy<Address>, 4, 1>;
    using pr5 = FieldModel<reg, ExtiAddressPolicy<Address>, 5, 1>;
    using pr6 = FieldModel<reg, ExtiAddressPolicy<Address>, 6, 1>;
    using pr7 = FieldModel<reg, ExtiAddressPolicy<Address>, 7, 1>;
    using pr8 = FieldModel<reg, ExtiAddressPolicy<Address>, 8, 1>;
    using pr9 = FieldModel<reg, ExtiAddressPolicy<Address>, 9, 1>;
    using pr10 = FieldModel<reg, ExtiAddressPolicy<Address>, 10, 1>;
    using pr11 = FieldModel<reg, ExtiAddressPolicy<Address>, 11, 1>;
    using pr12 = FieldModel<reg, ExtiAddressPolicy<Address>, 12, 1>;
    using pr13 = FieldModel<reg, ExtiAddressPolicy<Address>, 13, 1>;
    using pr14 = FieldModel<reg, ExtiAddressPolicy<Address>, 14, 1>;
    using pr15 = FieldModel<reg, ExtiAddressPolicy<Address>, 15, 1>;
    using pr16 = FieldModel<reg, ExtiAddressPolicy<Address>, 16, 1>;
    using pr17 = FieldModel<reg, ExtiAddressPolicy<Address>, 17, 1>;
    using pr18 = FieldModel<reg, ExtiAddressPolicy<Address>, 18, 1>;
    using pr19 = FieldModel<reg, ExtiAddressPolicy<Address>, 19, 1>;
    using pr20 = FieldModel<reg, ExtiAddressPolicy<Address>, 20, 1>;
    using pr21 = FieldModel<reg, ExtiAddressPolicy<Address>, 21, 1>;
    using pr22 = FieldModel<reg, ExtiAddressPolicy<Address>, 22, 1>;
  };

public:
  using pr = PrRegisterModel<uint32_t, ExtiBaseAddress + 0x00000014>;


/**
 * GROUP X_MR
 */
public:
  class XMr
  {
  public:
    static constexpr uintptr_t XMrBaseAddress = 0x00000000;

  private:
    enum class XMrIndex
    {
      Imr,
      Emr,
    };

  public:
    struct Index
    {
      using enum XMrIndex;
      static constexpr std::array All = {XMrIndex::Imr, XMrIndex::Emr};
    };

  private:
    using XMrLayerOffsetPolicy = LayerOffsetPolicy<XMrIndex, 0x00000004>;

    template<std::uintptr_t Address>
    using XMrAddressPolicy = GroupAddressPolicy<Address, std::tuple<XMrLayerOffsetPolicy>>;

  /**
   * REGISTER X_MR
   */
  private:
    template<typename SizeType>
    class XMrRegisterUnion
    {
    public:
      union
      {
        SizeType value;
        BitFieldModel<SizeType, 0, 1> mr0;
        BitFieldModel<SizeType, 1, 1> mr1;
        BitFieldModel<SizeType, 2, 1> mr2;
        BitFieldModel<SizeType, 3, 1> mr3;
        BitFieldModel<SizeType, 4, 1> mr4;
        BitFieldModel<SizeType, 5, 1> mr5;
        BitFieldModel<SizeType, 6, 1> mr6;
        BitFieldModel<SizeType, 7, 1> mr7;
        BitFieldModel<SizeType, 8, 1> mr8;
        BitFieldModel<SizeType, 9, 1> mr9;
        BitFieldModel<SizeType, 10, 1> mr10;
        BitFieldModel<SizeType, 11, 1> mr11;
        BitFieldModel<SizeType, 12, 1> mr12;
        BitFieldModel<SizeType, 13, 1> mr13;
        BitFieldModel<SizeType, 14, 1> mr14;
        BitFieldModel<SizeType, 15, 1> mr15;
        BitFieldModel<SizeType, 16, 1> mr16;
        BitFieldModel<SizeType, 17, 1> mr17;
        BitFieldModel<SizeType, 18, 1> mr18;
        BitFieldModel<SizeType, 19, 1> mr19;
        BitFieldModel<SizeType, 20, 1> mr20;
        BitFieldModel<SizeType, 21, 1> mr21;
        BitFieldModel<SizeType, 22, 1> mr22;
      };
    };

  private:
    template<typename SizeType, std::uintptr_t Address>
    class XMrRegisterModel : public RegisterModel<XMrRegisterUnion<SizeType>, XMrAddressPolicy<Address>>
    {
    public:
      using reg = XMrRegisterUnion<SizeType>;

    public:
      using mr0 = FieldModel<reg, XMrAddressPolicy<Address>, 0, 1>;
      using mr1 = FieldModel<reg, XMrAddressPolicy<Address>, 1, 1>;
      using mr2 = FieldModel<reg, XMrAddressPolicy<Address>, 2, 1>;
      using mr3 = FieldModel<reg, XMrAddressPolicy<Address>, 3, 1>;
      using mr4 = FieldModel<reg, XMrAddressPolicy<Address>, 4, 1>;
      using mr5 = FieldModel<reg, XMrAddressPolicy<Address>, 5, 1>;
      using mr6 = FieldModel<reg, XMrAddressPolicy<Address>, 6, 1>;
      using mr7 = FieldModel<reg, XMrAddressPolicy<Address>, 7, 1>;
      using mr8 = FieldModel<reg, XMrAddressPolicy<Address>, 8, 1>;
      using mr9 = FieldModel<reg, XMrAddressPolicy<Address>, 9, 1>;
      using mr10 = FieldModel<reg, XMrAddressPolicy<Address>, 10, 1>;
      using mr11 = FieldModel<reg, XMrAddressPolicy<Address>, 11, 1>;
      using mr12 = FieldModel<reg, XMrAddressPolicy<Address>, 12, 1>;
      using mr13 = FieldModel<reg, XMrAddressPolicy<Address>, 13, 1>;
      using mr14 = FieldModel<reg, XMrAddressPolicy<Address>, 14, 1>;
      using mr15 = FieldModel<reg, XMrAddressPolicy<Address>, 15, 1>;
      using mr16 = FieldModel<reg, XMrAddressPolicy<Address>, 16, 1>;
      using mr17 = FieldModel<reg, XMrAddressPolicy<Address>, 17, 1>;
      using mr18 = FieldModel<reg, XMrAddressPolicy<Address>, 18, 1>;
      using mr19 = FieldModel<reg, XMrAddressPolicy<Address>, 19, 1>;
      using mr20 = FieldModel<reg, XMrAddressPolicy<Address>, 20, 1>;
      using mr21 = FieldModel<reg, XMrAddressPolicy<Address>, 21, 1>;
      using mr22 = FieldModel<reg, XMrAddressPolicy<Address>, 22, 1>;
    };

  public:
    using xMr = XMrRegisterModel<uint32_t, ExtiBaseAddress + XMrBaseAddress + 0x00000000>;


  };

/**
 * GROUP X_TSR
 */
public:
  class XTsr
  {
  public:
    static constexpr uintptr_t XTsrBaseAddress = 0x00000008;

  private:
    enum class XTsrIndex
    {
      Rtsr,
      Ftsr,
    };

  public:
    struct Index
    {
      using enum XTsrIndex;
      static constexpr std::array All = {XTsrIndex::Rtsr, XTsrIndex::Ftsr};
    };

  private:
    using XTsrLayerOffsetPolicy = LayerOffsetPolicy<XTsrIndex, 0x00000004>;

    template<std::uintptr_t Address>
    using XTsrAddressPolicy = GroupAddressPolicy<Address, std::tuple<XTsrLayerOffsetPolicy>>;

  /**
   * REGISTER X_TSR
   */
  private:
    template<typename SizeType>
    class XTsrRegisterUnion
    {
    public:
      union
      {
        SizeType value;
        BitFieldModel<SizeType, 0, 1> tr0;
        BitFieldModel<SizeType, 1, 1> tr1;
        BitFieldModel<SizeType, 2, 1> tr2;
        BitFieldModel<SizeType, 3, 1> tr3;
        BitFieldModel<SizeType, 4, 1> tr4;
        BitFieldModel<SizeType, 5, 1> tr5;
        BitFieldModel<SizeType, 6, 1> tr6;
        BitFieldModel<SizeType, 7, 1> tr7;
        BitFieldModel<SizeType, 8, 1> tr8;
        BitFieldModel<SizeType, 9, 1> tr9;
        BitFieldModel<SizeType, 10, 1> tr10;
        BitFieldModel<SizeType, 11, 1> tr11;
        BitFieldModel<SizeType, 12, 1> tr12;
        BitFieldModel<SizeType, 13, 1> tr13;
        BitFieldModel<SizeType, 14, 1> tr14;
        BitFieldModel<SizeType, 15, 1> tr15;
        BitFieldModel<SizeType, 16, 1> tr16;
        BitFieldModel<SizeType, 17, 1> tr17;
        BitFieldModel<SizeType, 18, 1> tr18;
        BitFieldModel<SizeType, 19, 1> tr19;
        BitFieldModel<SizeType, 20, 1> tr20;
        BitFieldModel<SizeType, 21, 1> tr21;
        BitFieldModel<SizeType, 22, 1> tr22;
      };
    };

  private:
    template<typename SizeType, std::uintptr_t Address>
    class XTsrRegisterModel : public RegisterModel<XTsrRegisterUnion<SizeType>, XTsrAddressPolicy<Address>>
    {
    public:
      using reg = XTsrRegisterUnion<SizeType>;

    public:
      using tr0 = FieldModel<reg, XTsrAddressPolicy<Address>, 0, 1>;
      using tr1 = FieldModel<reg, XTsrAddressPolicy<Address>, 1, 1>;
      using tr2 = FieldModel<reg, XTsrAddressPolicy<Address>, 2, 1>;
      using tr3 = FieldModel<reg, XTsrAddressPolicy<Address>, 3, 1>;
      using tr4 = FieldModel<reg, XTsrAddressPolicy<Address>, 4, 1>;
      using tr5 = FieldModel<reg, XTsrAddressPolicy<Address>, 5, 1>;
      using tr6 = FieldModel<reg, XTsrAddressPolicy<Address>, 6, 1>;
      using tr7 = FieldModel<reg, XTsrAddressPolicy<Address>, 7, 1>;
      using tr8 = FieldModel<reg, XTsrAddressPolicy<Address>, 8, 1>;
      using tr9 = FieldModel<reg, XTsrAddressPolicy<Address>, 9, 1>;
      using tr10 = FieldModel<reg, XTsrAddressPolicy<Address>, 10, 1>;
      using tr11 = FieldModel<reg, XTsrAddressPolicy<Address>, 11, 1>;
      using tr12 = FieldModel<reg, XTsrAddressPolicy<Address>, 12, 1>;
      using tr13 = FieldModel<reg, XTsrAddressPolicy<Address>, 13, 1>;
      using tr14 = FieldModel<reg, XTsrAddressPolicy<Address>, 14, 1>;
      using tr15 = FieldModel<reg, XTsrAddressPolicy<Address>, 15, 1>;
      using tr16 = FieldModel<reg, XTsrAddressPolicy<Address>, 16, 1>;
      using tr17 = FieldModel<reg, XTsrAddressPolicy<Address>, 17, 1>;
      using tr18 = FieldModel<reg, XTsrAddressPolicy<Address>, 18, 1>;
      using tr19 = FieldModel<reg, XTsrAddressPolicy<Address>, 19, 1>;
      using tr20 = FieldModel<reg, XTsrAddressPolicy<Address>, 20, 1>;
      using tr21 = FieldModel<reg, XTsrAddressPolicy<Address>, 21, 1>;
      using tr22 = FieldModel<reg, XTsrAddressPolicy<Address>, 22, 1>;
    };

  public:
    using xTsr = XTsrRegisterModel<uint32_t, ExtiBaseAddress + XTsrBaseAddress + 0x00000000>;


  };

};

}

#endif /* DRAL_STM32F411_EXTI_H */