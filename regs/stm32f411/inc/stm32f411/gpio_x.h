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

#ifndef DRAL_STM32F411_GPIO_X_H
#define DRAL_STM32F411_GPIO_X_H

#include "dral/bitfield_model.h"
#include "dral/group_address_policy.h"
#include "dral/layer_offset_policy.h"
#include "dral/register_model.h"

namespace dral::stm32f411 {

class GpioX
{
public:
  static constexpr uintptr_t GpioXBaseAddress = 0x40020000;

private:
  enum class GpioXIndex
  {
    Gpioa,
    Gpiob,
    Gpioc,
    Gpiod,
    Gpioe,
    Gpioh,
  };

public:
  struct Index
  {
    using enum GpioXIndex;
    static constexpr std::array All = {GpioXIndex::Gpioa, GpioXIndex::Gpiob, GpioXIndex::Gpioc, GpioXIndex::Gpiod, GpioXIndex::Gpioe, GpioXIndex::Gpioh};
  };

private:
  using GpioXLayerOffsetPolicy = NonUniformLayerOffsetPolicy<GpioXIndex, std::integer_sequence<std::uintptr_t, 0x00000000, 0x00000400, 0x00000800, 0x00000C00, 0x00001000, 0x00001C00>>;

  template<std::uintptr_t Address>
  using GpioXAddressPolicy = GroupAddressPolicy<Address, std::tuple<GpioXLayerOffsetPolicy>>;

/**
 * REGISTER MODER
 */
private:
  template<typename SizeType>
  class ModerRegisterUnion
  {
  public:
    union
    {
      SizeType value;
      BitFieldModel<SizeType, 30, 2> moder15;
      BitFieldModel<SizeType, 28, 2> moder14;
      BitFieldModel<SizeType, 26, 2> moder13;
      BitFieldModel<SizeType, 24, 2> moder12;
      BitFieldModel<SizeType, 22, 2> moder11;
      BitFieldModel<SizeType, 20, 2> moder10;
      BitFieldModel<SizeType, 18, 2> moder9;
      BitFieldModel<SizeType, 16, 2> moder8;
      BitFieldModel<SizeType, 14, 2> moder7;
      BitFieldModel<SizeType, 12, 2> moder6;
      BitFieldModel<SizeType, 10, 2> moder5;
      BitFieldModel<SizeType, 8, 2> moder4;
      BitFieldModel<SizeType, 6, 2> moder3;
      BitFieldModel<SizeType, 4, 2> moder2;
      BitFieldModel<SizeType, 2, 2> moder1;
      BitFieldModel<SizeType, 0, 2> moder0;
    };
  };

private:
  template<typename SizeType, std::uintptr_t Address>
  class ModerRegisterModel : public RegisterModel<ModerRegisterUnion<SizeType>, GpioXAddressPolicy<Address>>
  {
  public:
    using reg = ModerRegisterUnion<SizeType>;

  public:
    using moder15 = FieldModel<reg, GpioXAddressPolicy<Address>, 30, 2>;
    using moder14 = FieldModel<reg, GpioXAddressPolicy<Address>, 28, 2>;
    using moder13 = FieldModel<reg, GpioXAddressPolicy<Address>, 26, 2>;
    using moder12 = FieldModel<reg, GpioXAddressPolicy<Address>, 24, 2>;
    using moder11 = FieldModel<reg, GpioXAddressPolicy<Address>, 22, 2>;
    using moder10 = FieldModel<reg, GpioXAddressPolicy<Address>, 20, 2>;
    using moder9 = FieldModel<reg, GpioXAddressPolicy<Address>, 18, 2>;
    using moder8 = FieldModel<reg, GpioXAddressPolicy<Address>, 16, 2>;
    using moder7 = FieldModel<reg, GpioXAddressPolicy<Address>, 14, 2>;
    using moder6 = FieldModel<reg, GpioXAddressPolicy<Address>, 12, 2>;
    using moder5 = FieldModel<reg, GpioXAddressPolicy<Address>, 10, 2>;
    using moder4 = FieldModel<reg, GpioXAddressPolicy<Address>, 8, 2>;
    using moder3 = FieldModel<reg, GpioXAddressPolicy<Address>, 6, 2>;
    using moder2 = FieldModel<reg, GpioXAddressPolicy<Address>, 4, 2>;
    using moder1 = FieldModel<reg, GpioXAddressPolicy<Address>, 2, 2>;
    using moder0 = FieldModel<reg, GpioXAddressPolicy<Address>, 0, 2>;
  };

public:
  using moder = ModerRegisterModel<uint32_t, GpioXBaseAddress + 0x00000000>;

/**
 * REGISTER OTYPER
 */
private:
  template<typename SizeType>
  class OtyperRegisterUnion
  {
  public:
    union
    {
      SizeType value;
      BitFieldModel<SizeType, 15, 1> ot15;
      BitFieldModel<SizeType, 14, 1> ot14;
      BitFieldModel<SizeType, 13, 1> ot13;
      BitFieldModel<SizeType, 12, 1> ot12;
      BitFieldModel<SizeType, 11, 1> ot11;
      BitFieldModel<SizeType, 10, 1> ot10;
      BitFieldModel<SizeType, 9, 1> ot9;
      BitFieldModel<SizeType, 8, 1> ot8;
      BitFieldModel<SizeType, 7, 1> ot7;
      BitFieldModel<SizeType, 6, 1> ot6;
      BitFieldModel<SizeType, 5, 1> ot5;
      BitFieldModel<SizeType, 4, 1> ot4;
      BitFieldModel<SizeType, 3, 1> ot3;
      BitFieldModel<SizeType, 2, 1> ot2;
      BitFieldModel<SizeType, 1, 1> ot1;
      BitFieldModel<SizeType, 0, 1> ot0;
    };
  };

private:
  template<typename SizeType, std::uintptr_t Address>
  class OtyperRegisterModel : public RegisterModel<OtyperRegisterUnion<SizeType>, GpioXAddressPolicy<Address>>
  {
  public:
    using reg = OtyperRegisterUnion<SizeType>;

  public:
    using ot15 = FieldModel<reg, GpioXAddressPolicy<Address>, 15, 1>;
    using ot14 = FieldModel<reg, GpioXAddressPolicy<Address>, 14, 1>;
    using ot13 = FieldModel<reg, GpioXAddressPolicy<Address>, 13, 1>;
    using ot12 = FieldModel<reg, GpioXAddressPolicy<Address>, 12, 1>;
    using ot11 = FieldModel<reg, GpioXAddressPolicy<Address>, 11, 1>;
    using ot10 = FieldModel<reg, GpioXAddressPolicy<Address>, 10, 1>;
    using ot9 = FieldModel<reg, GpioXAddressPolicy<Address>, 9, 1>;
    using ot8 = FieldModel<reg, GpioXAddressPolicy<Address>, 8, 1>;
    using ot7 = FieldModel<reg, GpioXAddressPolicy<Address>, 7, 1>;
    using ot6 = FieldModel<reg, GpioXAddressPolicy<Address>, 6, 1>;
    using ot5 = FieldModel<reg, GpioXAddressPolicy<Address>, 5, 1>;
    using ot4 = FieldModel<reg, GpioXAddressPolicy<Address>, 4, 1>;
    using ot3 = FieldModel<reg, GpioXAddressPolicy<Address>, 3, 1>;
    using ot2 = FieldModel<reg, GpioXAddressPolicy<Address>, 2, 1>;
    using ot1 = FieldModel<reg, GpioXAddressPolicy<Address>, 1, 1>;
    using ot0 = FieldModel<reg, GpioXAddressPolicy<Address>, 0, 1>;
  };

public:
  using otyper = OtyperRegisterModel<uint32_t, GpioXBaseAddress + 0x00000004>;

/**
 * REGISTER OSPEEDR
 */
private:
  template<typename SizeType>
  class OspeedrRegisterUnion
  {
  public:
    union
    {
      SizeType value;
      BitFieldModel<SizeType, 30, 2> ospeedr15;
      BitFieldModel<SizeType, 28, 2> ospeedr14;
      BitFieldModel<SizeType, 26, 2> ospeedr13;
      BitFieldModel<SizeType, 24, 2> ospeedr12;
      BitFieldModel<SizeType, 22, 2> ospeedr11;
      BitFieldModel<SizeType, 20, 2> ospeedr10;
      BitFieldModel<SizeType, 18, 2> ospeedr9;
      BitFieldModel<SizeType, 16, 2> ospeedr8;
      BitFieldModel<SizeType, 14, 2> ospeedr7;
      BitFieldModel<SizeType, 12, 2> ospeedr6;
      BitFieldModel<SizeType, 10, 2> ospeedr5;
      BitFieldModel<SizeType, 8, 2> ospeedr4;
      BitFieldModel<SizeType, 6, 2> ospeedr3;
      BitFieldModel<SizeType, 4, 2> ospeedr2;
      BitFieldModel<SizeType, 2, 2> ospeedr1;
      BitFieldModel<SizeType, 0, 2> ospeedr0;
    };
  };

private:
  template<typename SizeType, std::uintptr_t Address>
  class OspeedrRegisterModel : public RegisterModel<OspeedrRegisterUnion<SizeType>, GpioXAddressPolicy<Address>>
  {
  public:
    using reg = OspeedrRegisterUnion<SizeType>;

  public:
    using ospeedr15 = FieldModel<reg, GpioXAddressPolicy<Address>, 30, 2>;
    using ospeedr14 = FieldModel<reg, GpioXAddressPolicy<Address>, 28, 2>;
    using ospeedr13 = FieldModel<reg, GpioXAddressPolicy<Address>, 26, 2>;
    using ospeedr12 = FieldModel<reg, GpioXAddressPolicy<Address>, 24, 2>;
    using ospeedr11 = FieldModel<reg, GpioXAddressPolicy<Address>, 22, 2>;
    using ospeedr10 = FieldModel<reg, GpioXAddressPolicy<Address>, 20, 2>;
    using ospeedr9 = FieldModel<reg, GpioXAddressPolicy<Address>, 18, 2>;
    using ospeedr8 = FieldModel<reg, GpioXAddressPolicy<Address>, 16, 2>;
    using ospeedr7 = FieldModel<reg, GpioXAddressPolicy<Address>, 14, 2>;
    using ospeedr6 = FieldModel<reg, GpioXAddressPolicy<Address>, 12, 2>;
    using ospeedr5 = FieldModel<reg, GpioXAddressPolicy<Address>, 10, 2>;
    using ospeedr4 = FieldModel<reg, GpioXAddressPolicy<Address>, 8, 2>;
    using ospeedr3 = FieldModel<reg, GpioXAddressPolicy<Address>, 6, 2>;
    using ospeedr2 = FieldModel<reg, GpioXAddressPolicy<Address>, 4, 2>;
    using ospeedr1 = FieldModel<reg, GpioXAddressPolicy<Address>, 2, 2>;
    using ospeedr0 = FieldModel<reg, GpioXAddressPolicy<Address>, 0, 2>;
  };

public:
  using ospeedr = OspeedrRegisterModel<uint32_t, GpioXBaseAddress + 0x00000008>;

/**
 * REGISTER PUPDR
 */
private:
  template<typename SizeType>
  class PupdrRegisterUnion
  {
  public:
    union
    {
      SizeType value;
      BitFieldModel<SizeType, 30, 2> pupdr15;
      BitFieldModel<SizeType, 28, 2> pupdr14;
      BitFieldModel<SizeType, 26, 2> pupdr13;
      BitFieldModel<SizeType, 24, 2> pupdr12;
      BitFieldModel<SizeType, 22, 2> pupdr11;
      BitFieldModel<SizeType, 20, 2> pupdr10;
      BitFieldModel<SizeType, 18, 2> pupdr9;
      BitFieldModel<SizeType, 16, 2> pupdr8;
      BitFieldModel<SizeType, 14, 2> pupdr7;
      BitFieldModel<SizeType, 12, 2> pupdr6;
      BitFieldModel<SizeType, 10, 2> pupdr5;
      BitFieldModel<SizeType, 8, 2> pupdr4;
      BitFieldModel<SizeType, 6, 2> pupdr3;
      BitFieldModel<SizeType, 4, 2> pupdr2;
      BitFieldModel<SizeType, 2, 2> pupdr1;
      BitFieldModel<SizeType, 0, 2> pupdr0;
    };
  };

private:
  template<typename SizeType, std::uintptr_t Address>
  class PupdrRegisterModel : public RegisterModel<PupdrRegisterUnion<SizeType>, GpioXAddressPolicy<Address>>
  {
  public:
    using reg = PupdrRegisterUnion<SizeType>;

  public:
    using pupdr15 = FieldModel<reg, GpioXAddressPolicy<Address>, 30, 2>;
    using pupdr14 = FieldModel<reg, GpioXAddressPolicy<Address>, 28, 2>;
    using pupdr13 = FieldModel<reg, GpioXAddressPolicy<Address>, 26, 2>;
    using pupdr12 = FieldModel<reg, GpioXAddressPolicy<Address>, 24, 2>;
    using pupdr11 = FieldModel<reg, GpioXAddressPolicy<Address>, 22, 2>;
    using pupdr10 = FieldModel<reg, GpioXAddressPolicy<Address>, 20, 2>;
    using pupdr9 = FieldModel<reg, GpioXAddressPolicy<Address>, 18, 2>;
    using pupdr8 = FieldModel<reg, GpioXAddressPolicy<Address>, 16, 2>;
    using pupdr7 = FieldModel<reg, GpioXAddressPolicy<Address>, 14, 2>;
    using pupdr6 = FieldModel<reg, GpioXAddressPolicy<Address>, 12, 2>;
    using pupdr5 = FieldModel<reg, GpioXAddressPolicy<Address>, 10, 2>;
    using pupdr4 = FieldModel<reg, GpioXAddressPolicy<Address>, 8, 2>;
    using pupdr3 = FieldModel<reg, GpioXAddressPolicy<Address>, 6, 2>;
    using pupdr2 = FieldModel<reg, GpioXAddressPolicy<Address>, 4, 2>;
    using pupdr1 = FieldModel<reg, GpioXAddressPolicy<Address>, 2, 2>;
    using pupdr0 = FieldModel<reg, GpioXAddressPolicy<Address>, 0, 2>;
  };

public:
  using pupdr = PupdrRegisterModel<uint32_t, GpioXBaseAddress + 0x0000000C>;

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
      BitFieldModel<SizeType, 15, 1> idr15;
      BitFieldModel<SizeType, 14, 1> idr14;
      BitFieldModel<SizeType, 13, 1> idr13;
      BitFieldModel<SizeType, 12, 1> idr12;
      BitFieldModel<SizeType, 11, 1> idr11;
      BitFieldModel<SizeType, 10, 1> idr10;
      BitFieldModel<SizeType, 9, 1> idr9;
      BitFieldModel<SizeType, 8, 1> idr8;
      BitFieldModel<SizeType, 7, 1> idr7;
      BitFieldModel<SizeType, 6, 1> idr6;
      BitFieldModel<SizeType, 5, 1> idr5;
      BitFieldModel<SizeType, 4, 1> idr4;
      BitFieldModel<SizeType, 3, 1> idr3;
      BitFieldModel<SizeType, 2, 1> idr2;
      BitFieldModel<SizeType, 1, 1> idr1;
      BitFieldModel<SizeType, 0, 1> idr0;
    };
  };

private:
  template<typename SizeType, std::uintptr_t Address>
  class IdrRegisterModel : public RegisterModel<IdrRegisterUnion<SizeType>, GpioXAddressPolicy<Address>>
  {
  public:
    using reg = IdrRegisterUnion<SizeType>;

  public:
    using idr15 = FieldModel<reg, GpioXAddressPolicy<Address>, 15, 1>;
    using idr14 = FieldModel<reg, GpioXAddressPolicy<Address>, 14, 1>;
    using idr13 = FieldModel<reg, GpioXAddressPolicy<Address>, 13, 1>;
    using idr12 = FieldModel<reg, GpioXAddressPolicy<Address>, 12, 1>;
    using idr11 = FieldModel<reg, GpioXAddressPolicy<Address>, 11, 1>;
    using idr10 = FieldModel<reg, GpioXAddressPolicy<Address>, 10, 1>;
    using idr9 = FieldModel<reg, GpioXAddressPolicy<Address>, 9, 1>;
    using idr8 = FieldModel<reg, GpioXAddressPolicy<Address>, 8, 1>;
    using idr7 = FieldModel<reg, GpioXAddressPolicy<Address>, 7, 1>;
    using idr6 = FieldModel<reg, GpioXAddressPolicy<Address>, 6, 1>;
    using idr5 = FieldModel<reg, GpioXAddressPolicy<Address>, 5, 1>;
    using idr4 = FieldModel<reg, GpioXAddressPolicy<Address>, 4, 1>;
    using idr3 = FieldModel<reg, GpioXAddressPolicy<Address>, 3, 1>;
    using idr2 = FieldModel<reg, GpioXAddressPolicy<Address>, 2, 1>;
    using idr1 = FieldModel<reg, GpioXAddressPolicy<Address>, 1, 1>;
    using idr0 = FieldModel<reg, GpioXAddressPolicy<Address>, 0, 1>;
  };

public:
  using idr = IdrRegisterModel<uint32_t, GpioXBaseAddress + 0x00000010>;

/**
 * REGISTER ODR
 */
private:
  template<typename SizeType>
  class OdrRegisterUnion
  {
  public:
    union
    {
      SizeType value;
      BitFieldModel<SizeType, 15, 1> odr15;
      BitFieldModel<SizeType, 14, 1> odr14;
      BitFieldModel<SizeType, 13, 1> odr13;
      BitFieldModel<SizeType, 12, 1> odr12;
      BitFieldModel<SizeType, 11, 1> odr11;
      BitFieldModel<SizeType, 10, 1> odr10;
      BitFieldModel<SizeType, 9, 1> odr9;
      BitFieldModel<SizeType, 8, 1> odr8;
      BitFieldModel<SizeType, 7, 1> odr7;
      BitFieldModel<SizeType, 6, 1> odr6;
      BitFieldModel<SizeType, 5, 1> odr5;
      BitFieldModel<SizeType, 4, 1> odr4;
      BitFieldModel<SizeType, 3, 1> odr3;
      BitFieldModel<SizeType, 2, 1> odr2;
      BitFieldModel<SizeType, 1, 1> odr1;
      BitFieldModel<SizeType, 0, 1> odr0;
    };
  };

private:
  template<typename SizeType, std::uintptr_t Address>
  class OdrRegisterModel : public RegisterModel<OdrRegisterUnion<SizeType>, GpioXAddressPolicy<Address>>
  {
  public:
    using reg = OdrRegisterUnion<SizeType>;

  public:
    using odr15 = FieldModel<reg, GpioXAddressPolicy<Address>, 15, 1>;
    using odr14 = FieldModel<reg, GpioXAddressPolicy<Address>, 14, 1>;
    using odr13 = FieldModel<reg, GpioXAddressPolicy<Address>, 13, 1>;
    using odr12 = FieldModel<reg, GpioXAddressPolicy<Address>, 12, 1>;
    using odr11 = FieldModel<reg, GpioXAddressPolicy<Address>, 11, 1>;
    using odr10 = FieldModel<reg, GpioXAddressPolicy<Address>, 10, 1>;
    using odr9 = FieldModel<reg, GpioXAddressPolicy<Address>, 9, 1>;
    using odr8 = FieldModel<reg, GpioXAddressPolicy<Address>, 8, 1>;
    using odr7 = FieldModel<reg, GpioXAddressPolicy<Address>, 7, 1>;
    using odr6 = FieldModel<reg, GpioXAddressPolicy<Address>, 6, 1>;
    using odr5 = FieldModel<reg, GpioXAddressPolicy<Address>, 5, 1>;
    using odr4 = FieldModel<reg, GpioXAddressPolicy<Address>, 4, 1>;
    using odr3 = FieldModel<reg, GpioXAddressPolicy<Address>, 3, 1>;
    using odr2 = FieldModel<reg, GpioXAddressPolicy<Address>, 2, 1>;
    using odr1 = FieldModel<reg, GpioXAddressPolicy<Address>, 1, 1>;
    using odr0 = FieldModel<reg, GpioXAddressPolicy<Address>, 0, 1>;
  };

public:
  using odr = OdrRegisterModel<uint32_t, GpioXBaseAddress + 0x00000014>;

/**
 * REGISTER BSRR
 */
private:
  template<typename SizeType>
  class BsrrRegisterUnion
  {
  public:
    union
    {
      SizeType value;
      BitFieldModel<SizeType, 31, 1> br15;
      BitFieldModel<SizeType, 30, 1> br14;
      BitFieldModel<SizeType, 29, 1> br13;
      BitFieldModel<SizeType, 28, 1> br12;
      BitFieldModel<SizeType, 27, 1> br11;
      BitFieldModel<SizeType, 26, 1> br10;
      BitFieldModel<SizeType, 25, 1> br9;
      BitFieldModel<SizeType, 24, 1> br8;
      BitFieldModel<SizeType, 23, 1> br7;
      BitFieldModel<SizeType, 22, 1> br6;
      BitFieldModel<SizeType, 21, 1> br5;
      BitFieldModel<SizeType, 20, 1> br4;
      BitFieldModel<SizeType, 19, 1> br3;
      BitFieldModel<SizeType, 18, 1> br2;
      BitFieldModel<SizeType, 17, 1> br1;
      BitFieldModel<SizeType, 16, 1> br0;
      BitFieldModel<SizeType, 15, 1> bs15;
      BitFieldModel<SizeType, 14, 1> bs14;
      BitFieldModel<SizeType, 13, 1> bs13;
      BitFieldModel<SizeType, 12, 1> bs12;
      BitFieldModel<SizeType, 11, 1> bs11;
      BitFieldModel<SizeType, 10, 1> bs10;
      BitFieldModel<SizeType, 9, 1> bs9;
      BitFieldModel<SizeType, 8, 1> bs8;
      BitFieldModel<SizeType, 7, 1> bs7;
      BitFieldModel<SizeType, 6, 1> bs6;
      BitFieldModel<SizeType, 5, 1> bs5;
      BitFieldModel<SizeType, 4, 1> bs4;
      BitFieldModel<SizeType, 3, 1> bs3;
      BitFieldModel<SizeType, 2, 1> bs2;
      BitFieldModel<SizeType, 1, 1> bs1;
      BitFieldModel<SizeType, 0, 1> bs0;
    };
  };

private:
  template<typename SizeType, std::uintptr_t Address>
  class BsrrRegisterModel : public RegisterModel<BsrrRegisterUnion<SizeType>, GpioXAddressPolicy<Address>>
  {
  public:
    using reg = BsrrRegisterUnion<SizeType>;

  public:
    using br15 = FieldModel<reg, GpioXAddressPolicy<Address>, 31, 1>;
    using br14 = FieldModel<reg, GpioXAddressPolicy<Address>, 30, 1>;
    using br13 = FieldModel<reg, GpioXAddressPolicy<Address>, 29, 1>;
    using br12 = FieldModel<reg, GpioXAddressPolicy<Address>, 28, 1>;
    using br11 = FieldModel<reg, GpioXAddressPolicy<Address>, 27, 1>;
    using br10 = FieldModel<reg, GpioXAddressPolicy<Address>, 26, 1>;
    using br9 = FieldModel<reg, GpioXAddressPolicy<Address>, 25, 1>;
    using br8 = FieldModel<reg, GpioXAddressPolicy<Address>, 24, 1>;
    using br7 = FieldModel<reg, GpioXAddressPolicy<Address>, 23, 1>;
    using br6 = FieldModel<reg, GpioXAddressPolicy<Address>, 22, 1>;
    using br5 = FieldModel<reg, GpioXAddressPolicy<Address>, 21, 1>;
    using br4 = FieldModel<reg, GpioXAddressPolicy<Address>, 20, 1>;
    using br3 = FieldModel<reg, GpioXAddressPolicy<Address>, 19, 1>;
    using br2 = FieldModel<reg, GpioXAddressPolicy<Address>, 18, 1>;
    using br1 = FieldModel<reg, GpioXAddressPolicy<Address>, 17, 1>;
    using br0 = FieldModel<reg, GpioXAddressPolicy<Address>, 16, 1>;
    using bs15 = FieldModel<reg, GpioXAddressPolicy<Address>, 15, 1>;
    using bs14 = FieldModel<reg, GpioXAddressPolicy<Address>, 14, 1>;
    using bs13 = FieldModel<reg, GpioXAddressPolicy<Address>, 13, 1>;
    using bs12 = FieldModel<reg, GpioXAddressPolicy<Address>, 12, 1>;
    using bs11 = FieldModel<reg, GpioXAddressPolicy<Address>, 11, 1>;
    using bs10 = FieldModel<reg, GpioXAddressPolicy<Address>, 10, 1>;
    using bs9 = FieldModel<reg, GpioXAddressPolicy<Address>, 9, 1>;
    using bs8 = FieldModel<reg, GpioXAddressPolicy<Address>, 8, 1>;
    using bs7 = FieldModel<reg, GpioXAddressPolicy<Address>, 7, 1>;
    using bs6 = FieldModel<reg, GpioXAddressPolicy<Address>, 6, 1>;
    using bs5 = FieldModel<reg, GpioXAddressPolicy<Address>, 5, 1>;
    using bs4 = FieldModel<reg, GpioXAddressPolicy<Address>, 4, 1>;
    using bs3 = FieldModel<reg, GpioXAddressPolicy<Address>, 3, 1>;
    using bs2 = FieldModel<reg, GpioXAddressPolicy<Address>, 2, 1>;
    using bs1 = FieldModel<reg, GpioXAddressPolicy<Address>, 1, 1>;
    using bs0 = FieldModel<reg, GpioXAddressPolicy<Address>, 0, 1>;
  };

public:
  using bsrr = BsrrRegisterModel<uint32_t, GpioXBaseAddress + 0x00000018>;

/**
 * REGISTER LCKR
 */
private:
  template<typename SizeType>
  class LckrRegisterUnion
  {
  public:
    union
    {
      SizeType value;
      BitFieldModel<SizeType, 16, 1> lckk;
      BitFieldModel<SizeType, 15, 1> lck15;
      BitFieldModel<SizeType, 14, 1> lck14;
      BitFieldModel<SizeType, 13, 1> lck13;
      BitFieldModel<SizeType, 12, 1> lck12;
      BitFieldModel<SizeType, 11, 1> lck11;
      BitFieldModel<SizeType, 10, 1> lck10;
      BitFieldModel<SizeType, 9, 1> lck9;
      BitFieldModel<SizeType, 8, 1> lck8;
      BitFieldModel<SizeType, 7, 1> lck7;
      BitFieldModel<SizeType, 6, 1> lck6;
      BitFieldModel<SizeType, 5, 1> lck5;
      BitFieldModel<SizeType, 4, 1> lck4;
      BitFieldModel<SizeType, 3, 1> lck3;
      BitFieldModel<SizeType, 2, 1> lck2;
      BitFieldModel<SizeType, 1, 1> lck1;
      BitFieldModel<SizeType, 0, 1> lck0;
    };
  };

private:
  template<typename SizeType, std::uintptr_t Address>
  class LckrRegisterModel : public RegisterModel<LckrRegisterUnion<SizeType>, GpioXAddressPolicy<Address>>
  {
  public:
    using reg = LckrRegisterUnion<SizeType>;

  public:
    using lckk = FieldModel<reg, GpioXAddressPolicy<Address>, 16, 1>;
    using lck15 = FieldModel<reg, GpioXAddressPolicy<Address>, 15, 1>;
    using lck14 = FieldModel<reg, GpioXAddressPolicy<Address>, 14, 1>;
    using lck13 = FieldModel<reg, GpioXAddressPolicy<Address>, 13, 1>;
    using lck12 = FieldModel<reg, GpioXAddressPolicy<Address>, 12, 1>;
    using lck11 = FieldModel<reg, GpioXAddressPolicy<Address>, 11, 1>;
    using lck10 = FieldModel<reg, GpioXAddressPolicy<Address>, 10, 1>;
    using lck9 = FieldModel<reg, GpioXAddressPolicy<Address>, 9, 1>;
    using lck8 = FieldModel<reg, GpioXAddressPolicy<Address>, 8, 1>;
    using lck7 = FieldModel<reg, GpioXAddressPolicy<Address>, 7, 1>;
    using lck6 = FieldModel<reg, GpioXAddressPolicy<Address>, 6, 1>;
    using lck5 = FieldModel<reg, GpioXAddressPolicy<Address>, 5, 1>;
    using lck4 = FieldModel<reg, GpioXAddressPolicy<Address>, 4, 1>;
    using lck3 = FieldModel<reg, GpioXAddressPolicy<Address>, 3, 1>;
    using lck2 = FieldModel<reg, GpioXAddressPolicy<Address>, 2, 1>;
    using lck1 = FieldModel<reg, GpioXAddressPolicy<Address>, 1, 1>;
    using lck0 = FieldModel<reg, GpioXAddressPolicy<Address>, 0, 1>;
  };

public:
  using lckr = LckrRegisterModel<uint32_t, GpioXBaseAddress + 0x0000001C>;

/**
 * REGISTER AFRL
 */
private:
  template<typename SizeType>
  class AfrlRegisterUnion
  {
  public:
    union
    {
      SizeType value;
      BitFieldModel<SizeType, 28, 4> afrl7;
      BitFieldModel<SizeType, 24, 4> afrl6;
      BitFieldModel<SizeType, 20, 4> afrl5;
      BitFieldModel<SizeType, 16, 4> afrl4;
      BitFieldModel<SizeType, 12, 4> afrl3;
      BitFieldModel<SizeType, 8, 4> afrl2;
      BitFieldModel<SizeType, 4, 4> afrl1;
      BitFieldModel<SizeType, 0, 4> afrl0;
    };
  };

private:
  template<typename SizeType, std::uintptr_t Address>
  class AfrlRegisterModel : public RegisterModel<AfrlRegisterUnion<SizeType>, GpioXAddressPolicy<Address>>
  {
  public:
    using reg = AfrlRegisterUnion<SizeType>;

  public:
    using afrl7 = FieldModel<reg, GpioXAddressPolicy<Address>, 28, 4>;
    using afrl6 = FieldModel<reg, GpioXAddressPolicy<Address>, 24, 4>;
    using afrl5 = FieldModel<reg, GpioXAddressPolicy<Address>, 20, 4>;
    using afrl4 = FieldModel<reg, GpioXAddressPolicy<Address>, 16, 4>;
    using afrl3 = FieldModel<reg, GpioXAddressPolicy<Address>, 12, 4>;
    using afrl2 = FieldModel<reg, GpioXAddressPolicy<Address>, 8, 4>;
    using afrl1 = FieldModel<reg, GpioXAddressPolicy<Address>, 4, 4>;
    using afrl0 = FieldModel<reg, GpioXAddressPolicy<Address>, 0, 4>;
  };

public:
  using afrl = AfrlRegisterModel<uint32_t, GpioXBaseAddress + 0x00000020>;

/**
 * REGISTER AFRH
 */
private:
  template<typename SizeType>
  class AfrhRegisterUnion
  {
  public:
    union
    {
      SizeType value;
      BitFieldModel<SizeType, 28, 4> afrh15;
      BitFieldModel<SizeType, 24, 4> afrh14;
      BitFieldModel<SizeType, 20, 4> afrh13;
      BitFieldModel<SizeType, 16, 4> afrh12;
      BitFieldModel<SizeType, 12, 4> afrh11;
      BitFieldModel<SizeType, 8, 4> afrh10;
      BitFieldModel<SizeType, 4, 4> afrh9;
      BitFieldModel<SizeType, 0, 4> afrh8;
    };
  };

private:
  template<typename SizeType, std::uintptr_t Address>
  class AfrhRegisterModel : public RegisterModel<AfrhRegisterUnion<SizeType>, GpioXAddressPolicy<Address>>
  {
  public:
    using reg = AfrhRegisterUnion<SizeType>;

  public:
    using afrh15 = FieldModel<reg, GpioXAddressPolicy<Address>, 28, 4>;
    using afrh14 = FieldModel<reg, GpioXAddressPolicy<Address>, 24, 4>;
    using afrh13 = FieldModel<reg, GpioXAddressPolicy<Address>, 20, 4>;
    using afrh12 = FieldModel<reg, GpioXAddressPolicy<Address>, 16, 4>;
    using afrh11 = FieldModel<reg, GpioXAddressPolicy<Address>, 12, 4>;
    using afrh10 = FieldModel<reg, GpioXAddressPolicy<Address>, 8, 4>;
    using afrh9 = FieldModel<reg, GpioXAddressPolicy<Address>, 4, 4>;
    using afrh8 = FieldModel<reg, GpioXAddressPolicy<Address>, 0, 4>;
  };

public:
  using afrh = AfrhRegisterModel<uint32_t, GpioXBaseAddress + 0x00000024>;


};

}

#endif /* DRAL_STM32F411_GPIO_X_H */