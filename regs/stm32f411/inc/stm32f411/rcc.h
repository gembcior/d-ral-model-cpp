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

#ifndef DRAL_STM32F411_RCC_H
#define DRAL_STM32F411_RCC_H

#include "dral/bitfield_model.h"
#include "dral/group_address_policy.h"
#include "dral/layer_offset_policy.h"
#include "dral/register_model.h"

namespace dral::stm32f411 {

class Rcc
{
public:
  static constexpr uintptr_t RccBaseAddress = 0x40023800;

private:
  template<std::uintptr_t Address>
  using RccAddressPolicy = GroupAddressPolicy<Address>;

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
      BitFieldModel<SizeType, 27, 1> plli2srdy;
      BitFieldModel<SizeType, 26, 1> plli2son;
      BitFieldModel<SizeType, 25, 1> pllrdy;
      BitFieldModel<SizeType, 24, 1> pllon;
      BitFieldModel<SizeType, 19, 1> csson;
      BitFieldModel<SizeType, 18, 1> hsebyp;
      BitFieldModel<SizeType, 17, 1> hserdy;
      BitFieldModel<SizeType, 16, 1> hseon;
      BitFieldModel<SizeType, 8, 8> hsical;
      BitFieldModel<SizeType, 3, 5> hsitrim;
      BitFieldModel<SizeType, 1, 1> hsirdy;
      BitFieldModel<SizeType, 0, 1> hsion;
    };
  };

private:
  template<typename SizeType, std::uintptr_t Address>
  class CrRegisterModel : public RegisterModel<CrRegisterUnion<SizeType>, RccAddressPolicy<Address>>
  {
  public:
    using reg = CrRegisterUnion<SizeType>;

  public:
    using plli2srdy = FieldModel<reg, RccAddressPolicy<Address>, 27, 1>;
    using plli2son = FieldModel<reg, RccAddressPolicy<Address>, 26, 1>;
    using pllrdy = FieldModel<reg, RccAddressPolicy<Address>, 25, 1>;
    using pllon = FieldModel<reg, RccAddressPolicy<Address>, 24, 1>;
    using csson = FieldModel<reg, RccAddressPolicy<Address>, 19, 1>;
    using hsebyp = FieldModel<reg, RccAddressPolicy<Address>, 18, 1>;
    using hserdy = FieldModel<reg, RccAddressPolicy<Address>, 17, 1>;
    using hseon = FieldModel<reg, RccAddressPolicy<Address>, 16, 1>;
    using hsical = FieldModel<reg, RccAddressPolicy<Address>, 8, 8>;
    using hsitrim = FieldModel<reg, RccAddressPolicy<Address>, 3, 5>;
    using hsirdy = FieldModel<reg, RccAddressPolicy<Address>, 1, 1>;
    using hsion = FieldModel<reg, RccAddressPolicy<Address>, 0, 1>;
  };

public:
  using cr = CrRegisterModel<uint32_t, RccBaseAddress + 0x00000000>;

/**
 * REGISTER PLLCFGR
 */
private:
  template<typename SizeType>
  class PllcfgrRegisterUnion
  {
  public:
    union
    {
      SizeType value;
      BitFieldModel<SizeType, 27, 1> pllq3;
      BitFieldModel<SizeType, 26, 1> pllq2;
      BitFieldModel<SizeType, 25, 1> pllq1;
      BitFieldModel<SizeType, 24, 1> pllq0;
      BitFieldModel<SizeType, 22, 1> pllsrc;
      BitFieldModel<SizeType, 17, 1> pllp1;
      BitFieldModel<SizeType, 16, 1> pllp0;
      BitFieldModel<SizeType, 14, 1> plln8;
      BitFieldModel<SizeType, 13, 1> plln7;
      BitFieldModel<SizeType, 12, 1> plln6;
      BitFieldModel<SizeType, 11, 1> plln5;
      BitFieldModel<SizeType, 10, 1> plln4;
      BitFieldModel<SizeType, 9, 1> plln3;
      BitFieldModel<SizeType, 8, 1> plln2;
      BitFieldModel<SizeType, 7, 1> plln1;
      BitFieldModel<SizeType, 6, 1> plln0;
      BitFieldModel<SizeType, 5, 1> pllm5;
      BitFieldModel<SizeType, 4, 1> pllm4;
      BitFieldModel<SizeType, 3, 1> pllm3;
      BitFieldModel<SizeType, 2, 1> pllm2;
      BitFieldModel<SizeType, 1, 1> pllm1;
      BitFieldModel<SizeType, 0, 1> pllm0;
    };
  };

private:
  template<typename SizeType, std::uintptr_t Address>
  class PllcfgrRegisterModel : public RegisterModel<PllcfgrRegisterUnion<SizeType>, RccAddressPolicy<Address>>
  {
  public:
    using reg = PllcfgrRegisterUnion<SizeType>;

  public:
    using pllq3 = FieldModel<reg, RccAddressPolicy<Address>, 27, 1>;
    using pllq2 = FieldModel<reg, RccAddressPolicy<Address>, 26, 1>;
    using pllq1 = FieldModel<reg, RccAddressPolicy<Address>, 25, 1>;
    using pllq0 = FieldModel<reg, RccAddressPolicy<Address>, 24, 1>;
    using pllsrc = FieldModel<reg, RccAddressPolicy<Address>, 22, 1>;
    using pllp1 = FieldModel<reg, RccAddressPolicy<Address>, 17, 1>;
    using pllp0 = FieldModel<reg, RccAddressPolicy<Address>, 16, 1>;
    using plln8 = FieldModel<reg, RccAddressPolicy<Address>, 14, 1>;
    using plln7 = FieldModel<reg, RccAddressPolicy<Address>, 13, 1>;
    using plln6 = FieldModel<reg, RccAddressPolicy<Address>, 12, 1>;
    using plln5 = FieldModel<reg, RccAddressPolicy<Address>, 11, 1>;
    using plln4 = FieldModel<reg, RccAddressPolicy<Address>, 10, 1>;
    using plln3 = FieldModel<reg, RccAddressPolicy<Address>, 9, 1>;
    using plln2 = FieldModel<reg, RccAddressPolicy<Address>, 8, 1>;
    using plln1 = FieldModel<reg, RccAddressPolicy<Address>, 7, 1>;
    using plln0 = FieldModel<reg, RccAddressPolicy<Address>, 6, 1>;
    using pllm5 = FieldModel<reg, RccAddressPolicy<Address>, 5, 1>;
    using pllm4 = FieldModel<reg, RccAddressPolicy<Address>, 4, 1>;
    using pllm3 = FieldModel<reg, RccAddressPolicy<Address>, 3, 1>;
    using pllm2 = FieldModel<reg, RccAddressPolicy<Address>, 2, 1>;
    using pllm1 = FieldModel<reg, RccAddressPolicy<Address>, 1, 1>;
    using pllm0 = FieldModel<reg, RccAddressPolicy<Address>, 0, 1>;
  };

public:
  using pllcfgr = PllcfgrRegisterModel<uint32_t, RccBaseAddress + 0x00000004>;

/**
 * REGISTER CFGR
 */
private:
  template<typename SizeType>
  class CfgrRegisterUnion
  {
  public:
    union
    {
      SizeType value;
      BitFieldModel<SizeType, 30, 2> mco2;
      BitFieldModel<SizeType, 27, 3> mco2pre;
      BitFieldModel<SizeType, 24, 3> mco1pre;
      BitFieldModel<SizeType, 23, 1> i2ssrc;
      BitFieldModel<SizeType, 21, 2> mco1;
      BitFieldModel<SizeType, 16, 5> rtcpre;
      BitFieldModel<SizeType, 13, 3> ppre2;
      BitFieldModel<SizeType, 10, 3> ppre1;
      BitFieldModel<SizeType, 4, 4> hpre;
      BitFieldModel<SizeType, 3, 1> sws1;
      BitFieldModel<SizeType, 2, 1> sws0;
      BitFieldModel<SizeType, 1, 1> sw1;
      BitFieldModel<SizeType, 0, 1> sw0;
    };
  };

private:
  template<typename SizeType, std::uintptr_t Address>
  class CfgrRegisterModel : public RegisterModel<CfgrRegisterUnion<SizeType>, RccAddressPolicy<Address>>
  {
  public:
    using reg = CfgrRegisterUnion<SizeType>;

  public:
    using mco2 = FieldModel<reg, RccAddressPolicy<Address>, 30, 2>;
    using mco2pre = FieldModel<reg, RccAddressPolicy<Address>, 27, 3>;
    using mco1pre = FieldModel<reg, RccAddressPolicy<Address>, 24, 3>;
    using i2ssrc = FieldModel<reg, RccAddressPolicy<Address>, 23, 1>;
    using mco1 = FieldModel<reg, RccAddressPolicy<Address>, 21, 2>;
    using rtcpre = FieldModel<reg, RccAddressPolicy<Address>, 16, 5>;
    using ppre2 = FieldModel<reg, RccAddressPolicy<Address>, 13, 3>;
    using ppre1 = FieldModel<reg, RccAddressPolicy<Address>, 10, 3>;
    using hpre = FieldModel<reg, RccAddressPolicy<Address>, 4, 4>;
    using sws1 = FieldModel<reg, RccAddressPolicy<Address>, 3, 1>;
    using sws0 = FieldModel<reg, RccAddressPolicy<Address>, 2, 1>;
    using sw1 = FieldModel<reg, RccAddressPolicy<Address>, 1, 1>;
    using sw0 = FieldModel<reg, RccAddressPolicy<Address>, 0, 1>;
  };

public:
  using cfgr = CfgrRegisterModel<uint32_t, RccBaseAddress + 0x00000008>;

/**
 * REGISTER CIR
 */
private:
  template<typename SizeType>
  class CirRegisterUnion
  {
  public:
    union
    {
      SizeType value;
      BitFieldModel<SizeType, 23, 1> cssc;
      BitFieldModel<SizeType, 21, 1> plli2srdyc;
      BitFieldModel<SizeType, 20, 1> pllrdyc;
      BitFieldModel<SizeType, 19, 1> hserdyc;
      BitFieldModel<SizeType, 18, 1> hsirdyc;
      BitFieldModel<SizeType, 17, 1> lserdyc;
      BitFieldModel<SizeType, 16, 1> lsirdyc;
      BitFieldModel<SizeType, 13, 1> plli2srdyie;
      BitFieldModel<SizeType, 12, 1> pllrdyie;
      BitFieldModel<SizeType, 11, 1> hserdyie;
      BitFieldModel<SizeType, 10, 1> hsirdyie;
      BitFieldModel<SizeType, 9, 1> lserdyie;
      BitFieldModel<SizeType, 8, 1> lsirdyie;
      BitFieldModel<SizeType, 7, 1> cssf;
      BitFieldModel<SizeType, 5, 1> plli2srdyf;
      BitFieldModel<SizeType, 4, 1> pllrdyf;
      BitFieldModel<SizeType, 3, 1> hserdyf;
      BitFieldModel<SizeType, 2, 1> hsirdyf;
      BitFieldModel<SizeType, 1, 1> lserdyf;
      BitFieldModel<SizeType, 0, 1> lsirdyf;
    };
  };

private:
  template<typename SizeType, std::uintptr_t Address>
  class CirRegisterModel : public RegisterModel<CirRegisterUnion<SizeType>, RccAddressPolicy<Address>>
  {
  public:
    using reg = CirRegisterUnion<SizeType>;

  public:
    using cssc = FieldModel<reg, RccAddressPolicy<Address>, 23, 1>;
    using plli2srdyc = FieldModel<reg, RccAddressPolicy<Address>, 21, 1>;
    using pllrdyc = FieldModel<reg, RccAddressPolicy<Address>, 20, 1>;
    using hserdyc = FieldModel<reg, RccAddressPolicy<Address>, 19, 1>;
    using hsirdyc = FieldModel<reg, RccAddressPolicy<Address>, 18, 1>;
    using lserdyc = FieldModel<reg, RccAddressPolicy<Address>, 17, 1>;
    using lsirdyc = FieldModel<reg, RccAddressPolicy<Address>, 16, 1>;
    using plli2srdyie = FieldModel<reg, RccAddressPolicy<Address>, 13, 1>;
    using pllrdyie = FieldModel<reg, RccAddressPolicy<Address>, 12, 1>;
    using hserdyie = FieldModel<reg, RccAddressPolicy<Address>, 11, 1>;
    using hsirdyie = FieldModel<reg, RccAddressPolicy<Address>, 10, 1>;
    using lserdyie = FieldModel<reg, RccAddressPolicy<Address>, 9, 1>;
    using lsirdyie = FieldModel<reg, RccAddressPolicy<Address>, 8, 1>;
    using cssf = FieldModel<reg, RccAddressPolicy<Address>, 7, 1>;
    using plli2srdyf = FieldModel<reg, RccAddressPolicy<Address>, 5, 1>;
    using pllrdyf = FieldModel<reg, RccAddressPolicy<Address>, 4, 1>;
    using hserdyf = FieldModel<reg, RccAddressPolicy<Address>, 3, 1>;
    using hsirdyf = FieldModel<reg, RccAddressPolicy<Address>, 2, 1>;
    using lserdyf = FieldModel<reg, RccAddressPolicy<Address>, 1, 1>;
    using lsirdyf = FieldModel<reg, RccAddressPolicy<Address>, 0, 1>;
  };

public:
  using cir = CirRegisterModel<uint32_t, RccBaseAddress + 0x0000000C>;

/**
 * REGISTER AHB1RSTR
 */
private:
  template<typename SizeType>
  class Ahb1rstrRegisterUnion
  {
  public:
    union
    {
      SizeType value;
      BitFieldModel<SizeType, 22, 1> dma2rst;
      BitFieldModel<SizeType, 21, 1> dma1rst;
      BitFieldModel<SizeType, 12, 1> crcrst;
      BitFieldModel<SizeType, 7, 1> gpiohrst;
      BitFieldModel<SizeType, 4, 1> gpioerst;
      BitFieldModel<SizeType, 3, 1> gpiodrst;
      BitFieldModel<SizeType, 2, 1> gpiocrst;
      BitFieldModel<SizeType, 1, 1> gpiobrst;
      BitFieldModel<SizeType, 0, 1> gpioarst;
    };
  };

private:
  template<typename SizeType, std::uintptr_t Address>
  class Ahb1rstrRegisterModel : public RegisterModel<Ahb1rstrRegisterUnion<SizeType>, RccAddressPolicy<Address>>
  {
  public:
    using reg = Ahb1rstrRegisterUnion<SizeType>;

  public:
    using dma2rst = FieldModel<reg, RccAddressPolicy<Address>, 22, 1>;
    using dma1rst = FieldModel<reg, RccAddressPolicy<Address>, 21, 1>;
    using crcrst = FieldModel<reg, RccAddressPolicy<Address>, 12, 1>;
    using gpiohrst = FieldModel<reg, RccAddressPolicy<Address>, 7, 1>;
    using gpioerst = FieldModel<reg, RccAddressPolicy<Address>, 4, 1>;
    using gpiodrst = FieldModel<reg, RccAddressPolicy<Address>, 3, 1>;
    using gpiocrst = FieldModel<reg, RccAddressPolicy<Address>, 2, 1>;
    using gpiobrst = FieldModel<reg, RccAddressPolicy<Address>, 1, 1>;
    using gpioarst = FieldModel<reg, RccAddressPolicy<Address>, 0, 1>;
  };

public:
  using ahb1rstr = Ahb1rstrRegisterModel<uint32_t, RccBaseAddress + 0x00000010>;

/**
 * REGISTER AHB2RSTR
 */
private:
  template<typename SizeType>
  class Ahb2rstrRegisterUnion
  {
  public:
    union
    {
      SizeType value;
      BitFieldModel<SizeType, 7, 1> otgfsrst;
    };
  };

private:
  template<typename SizeType, std::uintptr_t Address>
  class Ahb2rstrRegisterModel : public RegisterModel<Ahb2rstrRegisterUnion<SizeType>, RccAddressPolicy<Address>>
  {
  public:
    using reg = Ahb2rstrRegisterUnion<SizeType>;

  public:
    using otgfsrst = FieldModel<reg, RccAddressPolicy<Address>, 7, 1>;
  };

public:
  using ahb2rstr = Ahb2rstrRegisterModel<uint32_t, RccBaseAddress + 0x00000014>;

/**
 * REGISTER APB1RSTR
 */
private:
  template<typename SizeType>
  class Apb1rstrRegisterUnion
  {
  public:
    union
    {
      SizeType value;
      BitFieldModel<SizeType, 28, 1> pwrrst;
      BitFieldModel<SizeType, 23, 1> i2c3rst;
      BitFieldModel<SizeType, 22, 1> i2c2rst;
      BitFieldModel<SizeType, 21, 1> i2c1rst;
      BitFieldModel<SizeType, 17, 1> uart2rst;
      BitFieldModel<SizeType, 15, 1> spi3rst;
      BitFieldModel<SizeType, 14, 1> spi2rst;
      BitFieldModel<SizeType, 11, 1> wwdgrst;
      BitFieldModel<SizeType, 3, 1> tim5rst;
      BitFieldModel<SizeType, 2, 1> tim4rst;
      BitFieldModel<SizeType, 1, 1> tim3rst;
      BitFieldModel<SizeType, 0, 1> tim2rst;
    };
  };

private:
  template<typename SizeType, std::uintptr_t Address>
  class Apb1rstrRegisterModel : public RegisterModel<Apb1rstrRegisterUnion<SizeType>, RccAddressPolicy<Address>>
  {
  public:
    using reg = Apb1rstrRegisterUnion<SizeType>;

  public:
    using pwrrst = FieldModel<reg, RccAddressPolicy<Address>, 28, 1>;
    using i2c3rst = FieldModel<reg, RccAddressPolicy<Address>, 23, 1>;
    using i2c2rst = FieldModel<reg, RccAddressPolicy<Address>, 22, 1>;
    using i2c1rst = FieldModel<reg, RccAddressPolicy<Address>, 21, 1>;
    using uart2rst = FieldModel<reg, RccAddressPolicy<Address>, 17, 1>;
    using spi3rst = FieldModel<reg, RccAddressPolicy<Address>, 15, 1>;
    using spi2rst = FieldModel<reg, RccAddressPolicy<Address>, 14, 1>;
    using wwdgrst = FieldModel<reg, RccAddressPolicy<Address>, 11, 1>;
    using tim5rst = FieldModel<reg, RccAddressPolicy<Address>, 3, 1>;
    using tim4rst = FieldModel<reg, RccAddressPolicy<Address>, 2, 1>;
    using tim3rst = FieldModel<reg, RccAddressPolicy<Address>, 1, 1>;
    using tim2rst = FieldModel<reg, RccAddressPolicy<Address>, 0, 1>;
  };

public:
  using apb1rstr = Apb1rstrRegisterModel<uint32_t, RccBaseAddress + 0x00000020>;

/**
 * REGISTER APB2RSTR
 */
private:
  template<typename SizeType>
  class Apb2rstrRegisterUnion
  {
  public:
    union
    {
      SizeType value;
      BitFieldModel<SizeType, 18, 1> tim11rst;
      BitFieldModel<SizeType, 17, 1> tim10rst;
      BitFieldModel<SizeType, 16, 1> tim9rst;
      BitFieldModel<SizeType, 14, 1> syscfgrst;
      BitFieldModel<SizeType, 12, 1> spi1rst;
      BitFieldModel<SizeType, 11, 1> sdiorst;
      BitFieldModel<SizeType, 8, 1> adcrst;
      BitFieldModel<SizeType, 5, 1> usart6rst;
      BitFieldModel<SizeType, 4, 1> usart1rst;
      BitFieldModel<SizeType, 0, 1> tim1rst;
    };
  };

private:
  template<typename SizeType, std::uintptr_t Address>
  class Apb2rstrRegisterModel : public RegisterModel<Apb2rstrRegisterUnion<SizeType>, RccAddressPolicy<Address>>
  {
  public:
    using reg = Apb2rstrRegisterUnion<SizeType>;

  public:
    using tim11rst = FieldModel<reg, RccAddressPolicy<Address>, 18, 1>;
    using tim10rst = FieldModel<reg, RccAddressPolicy<Address>, 17, 1>;
    using tim9rst = FieldModel<reg, RccAddressPolicy<Address>, 16, 1>;
    using syscfgrst = FieldModel<reg, RccAddressPolicy<Address>, 14, 1>;
    using spi1rst = FieldModel<reg, RccAddressPolicy<Address>, 12, 1>;
    using sdiorst = FieldModel<reg, RccAddressPolicy<Address>, 11, 1>;
    using adcrst = FieldModel<reg, RccAddressPolicy<Address>, 8, 1>;
    using usart6rst = FieldModel<reg, RccAddressPolicy<Address>, 5, 1>;
    using usart1rst = FieldModel<reg, RccAddressPolicy<Address>, 4, 1>;
    using tim1rst = FieldModel<reg, RccAddressPolicy<Address>, 0, 1>;
  };

public:
  using apb2rstr = Apb2rstrRegisterModel<uint32_t, RccBaseAddress + 0x00000024>;

/**
 * REGISTER AHB1ENR
 */
private:
  template<typename SizeType>
  class Ahb1enrRegisterUnion
  {
  public:
    union
    {
      SizeType value;
      BitFieldModel<SizeType, 22, 1> dma2en;
      BitFieldModel<SizeType, 21, 1> dma1en;
      BitFieldModel<SizeType, 12, 1> crcen;
      BitFieldModel<SizeType, 7, 1> gpiohen;
      BitFieldModel<SizeType, 4, 1> gpioeen;
      BitFieldModel<SizeType, 3, 1> gpioden;
      BitFieldModel<SizeType, 2, 1> gpiocen;
      BitFieldModel<SizeType, 1, 1> gpioben;
      BitFieldModel<SizeType, 0, 1> gpioaen;
    };
  };

private:
  template<typename SizeType, std::uintptr_t Address>
  class Ahb1enrRegisterModel : public RegisterModel<Ahb1enrRegisterUnion<SizeType>, RccAddressPolicy<Address>>
  {
  public:
    using reg = Ahb1enrRegisterUnion<SizeType>;

  public:
    using dma2en = FieldModel<reg, RccAddressPolicy<Address>, 22, 1>;
    using dma1en = FieldModel<reg, RccAddressPolicy<Address>, 21, 1>;
    using crcen = FieldModel<reg, RccAddressPolicy<Address>, 12, 1>;
    using gpiohen = FieldModel<reg, RccAddressPolicy<Address>, 7, 1>;
    using gpioeen = FieldModel<reg, RccAddressPolicy<Address>, 4, 1>;
    using gpioden = FieldModel<reg, RccAddressPolicy<Address>, 3, 1>;
    using gpiocen = FieldModel<reg, RccAddressPolicy<Address>, 2, 1>;
    using gpioben = FieldModel<reg, RccAddressPolicy<Address>, 1, 1>;
    using gpioaen = FieldModel<reg, RccAddressPolicy<Address>, 0, 1>;
  };

public:
  using ahb1enr = Ahb1enrRegisterModel<uint32_t, RccBaseAddress + 0x00000030>;

/**
 * REGISTER AHB2ENR
 */
private:
  template<typename SizeType>
  class Ahb2enrRegisterUnion
  {
  public:
    union
    {
      SizeType value;
      BitFieldModel<SizeType, 7, 1> otgfsen;
    };
  };

private:
  template<typename SizeType, std::uintptr_t Address>
  class Ahb2enrRegisterModel : public RegisterModel<Ahb2enrRegisterUnion<SizeType>, RccAddressPolicy<Address>>
  {
  public:
    using reg = Ahb2enrRegisterUnion<SizeType>;

  public:
    using otgfsen = FieldModel<reg, RccAddressPolicy<Address>, 7, 1>;
  };

public:
  using ahb2enr = Ahb2enrRegisterModel<uint32_t, RccBaseAddress + 0x00000034>;

/**
 * REGISTER APB1ENR
 */
private:
  template<typename SizeType>
  class Apb1enrRegisterUnion
  {
  public:
    union
    {
      SizeType value;
      BitFieldModel<SizeType, 28, 1> pwren;
      BitFieldModel<SizeType, 23, 1> i2c3en;
      BitFieldModel<SizeType, 22, 1> i2c2en;
      BitFieldModel<SizeType, 21, 1> i2c1en;
      BitFieldModel<SizeType, 17, 1> usart2en;
      BitFieldModel<SizeType, 15, 1> spi3en;
      BitFieldModel<SizeType, 14, 1> spi2en;
      BitFieldModel<SizeType, 11, 1> wwdgen;
      BitFieldModel<SizeType, 3, 1> tim5en;
      BitFieldModel<SizeType, 2, 1> tim4en;
      BitFieldModel<SizeType, 1, 1> tim3en;
      BitFieldModel<SizeType, 0, 1> tim2en;
    };
  };

private:
  template<typename SizeType, std::uintptr_t Address>
  class Apb1enrRegisterModel : public RegisterModel<Apb1enrRegisterUnion<SizeType>, RccAddressPolicy<Address>>
  {
  public:
    using reg = Apb1enrRegisterUnion<SizeType>;

  public:
    using pwren = FieldModel<reg, RccAddressPolicy<Address>, 28, 1>;
    using i2c3en = FieldModel<reg, RccAddressPolicy<Address>, 23, 1>;
    using i2c2en = FieldModel<reg, RccAddressPolicy<Address>, 22, 1>;
    using i2c1en = FieldModel<reg, RccAddressPolicy<Address>, 21, 1>;
    using usart2en = FieldModel<reg, RccAddressPolicy<Address>, 17, 1>;
    using spi3en = FieldModel<reg, RccAddressPolicy<Address>, 15, 1>;
    using spi2en = FieldModel<reg, RccAddressPolicy<Address>, 14, 1>;
    using wwdgen = FieldModel<reg, RccAddressPolicy<Address>, 11, 1>;
    using tim5en = FieldModel<reg, RccAddressPolicy<Address>, 3, 1>;
    using tim4en = FieldModel<reg, RccAddressPolicy<Address>, 2, 1>;
    using tim3en = FieldModel<reg, RccAddressPolicy<Address>, 1, 1>;
    using tim2en = FieldModel<reg, RccAddressPolicy<Address>, 0, 1>;
  };

public:
  using apb1enr = Apb1enrRegisterModel<uint32_t, RccBaseAddress + 0x00000040>;

/**
 * REGISTER APB2ENR
 */
private:
  template<typename SizeType>
  class Apb2enrRegisterUnion
  {
  public:
    union
    {
      SizeType value;
      BitFieldModel<SizeType, 0, 1> tim1en;
      BitFieldModel<SizeType, 4, 1> usart1en;
      BitFieldModel<SizeType, 5, 1> usart6en;
      BitFieldModel<SizeType, 8, 1> adc1en;
      BitFieldModel<SizeType, 11, 1> sdioen;
      BitFieldModel<SizeType, 12, 1> spi1en;
      BitFieldModel<SizeType, 13, 1> spi4en;
      BitFieldModel<SizeType, 14, 1> syscfgen;
      BitFieldModel<SizeType, 16, 1> tim9en;
      BitFieldModel<SizeType, 17, 1> tim10en;
      BitFieldModel<SizeType, 18, 1> tim11en;
    };
  };

private:
  template<typename SizeType, std::uintptr_t Address>
  class Apb2enrRegisterModel : public RegisterModel<Apb2enrRegisterUnion<SizeType>, RccAddressPolicy<Address>>
  {
  public:
    using reg = Apb2enrRegisterUnion<SizeType>;

  public:
    using tim1en = FieldModel<reg, RccAddressPolicy<Address>, 0, 1>;
    using usart1en = FieldModel<reg, RccAddressPolicy<Address>, 4, 1>;
    using usart6en = FieldModel<reg, RccAddressPolicy<Address>, 5, 1>;
    using adc1en = FieldModel<reg, RccAddressPolicy<Address>, 8, 1>;
    using sdioen = FieldModel<reg, RccAddressPolicy<Address>, 11, 1>;
    using spi1en = FieldModel<reg, RccAddressPolicy<Address>, 12, 1>;
    using spi4en = FieldModel<reg, RccAddressPolicy<Address>, 13, 1>;
    using syscfgen = FieldModel<reg, RccAddressPolicy<Address>, 14, 1>;
    using tim9en = FieldModel<reg, RccAddressPolicy<Address>, 16, 1>;
    using tim10en = FieldModel<reg, RccAddressPolicy<Address>, 17, 1>;
    using tim11en = FieldModel<reg, RccAddressPolicy<Address>, 18, 1>;
  };

public:
  using apb2enr = Apb2enrRegisterModel<uint32_t, RccBaseAddress + 0x00000044>;

/**
 * REGISTER AHB1LPENR
 */
private:
  template<typename SizeType>
  class Ahb1lpenrRegisterUnion
  {
  public:
    union
    {
      SizeType value;
      BitFieldModel<SizeType, 22, 1> dma2lpen;
      BitFieldModel<SizeType, 21, 1> dma1lpen;
      BitFieldModel<SizeType, 16, 1> sram1lpen;
      BitFieldModel<SizeType, 15, 1> flitflpen;
      BitFieldModel<SizeType, 12, 1> crclpen;
      BitFieldModel<SizeType, 7, 1> gpiohlpen;
      BitFieldModel<SizeType, 4, 1> gpioelpen;
      BitFieldModel<SizeType, 3, 1> gpiodlpen;
      BitFieldModel<SizeType, 2, 1> gpioclpen;
      BitFieldModel<SizeType, 1, 1> gpioblpen;
      BitFieldModel<SizeType, 0, 1> gpioalpen;
    };
  };

private:
  template<typename SizeType, std::uintptr_t Address>
  class Ahb1lpenrRegisterModel : public RegisterModel<Ahb1lpenrRegisterUnion<SizeType>, RccAddressPolicy<Address>>
  {
  public:
    using reg = Ahb1lpenrRegisterUnion<SizeType>;

  public:
    using dma2lpen = FieldModel<reg, RccAddressPolicy<Address>, 22, 1>;
    using dma1lpen = FieldModel<reg, RccAddressPolicy<Address>, 21, 1>;
    using sram1lpen = FieldModel<reg, RccAddressPolicy<Address>, 16, 1>;
    using flitflpen = FieldModel<reg, RccAddressPolicy<Address>, 15, 1>;
    using crclpen = FieldModel<reg, RccAddressPolicy<Address>, 12, 1>;
    using gpiohlpen = FieldModel<reg, RccAddressPolicy<Address>, 7, 1>;
    using gpioelpen = FieldModel<reg, RccAddressPolicy<Address>, 4, 1>;
    using gpiodlpen = FieldModel<reg, RccAddressPolicy<Address>, 3, 1>;
    using gpioclpen = FieldModel<reg, RccAddressPolicy<Address>, 2, 1>;
    using gpioblpen = FieldModel<reg, RccAddressPolicy<Address>, 1, 1>;
    using gpioalpen = FieldModel<reg, RccAddressPolicy<Address>, 0, 1>;
  };

public:
  using ahb1lpenr = Ahb1lpenrRegisterModel<uint32_t, RccBaseAddress + 0x00000050>;

/**
 * REGISTER AHB2LPENR
 */
private:
  template<typename SizeType>
  class Ahb2lpenrRegisterUnion
  {
  public:
    union
    {
      SizeType value;
      BitFieldModel<SizeType, 7, 1> otgfslpen;
    };
  };

private:
  template<typename SizeType, std::uintptr_t Address>
  class Ahb2lpenrRegisterModel : public RegisterModel<Ahb2lpenrRegisterUnion<SizeType>, RccAddressPolicy<Address>>
  {
  public:
    using reg = Ahb2lpenrRegisterUnion<SizeType>;

  public:
    using otgfslpen = FieldModel<reg, RccAddressPolicy<Address>, 7, 1>;
  };

public:
  using ahb2lpenr = Ahb2lpenrRegisterModel<uint32_t, RccBaseAddress + 0x00000054>;

/**
 * REGISTER APB1LPENR
 */
private:
  template<typename SizeType>
  class Apb1lpenrRegisterUnion
  {
  public:
    union
    {
      SizeType value;
      BitFieldModel<SizeType, 28, 1> pwrlpen;
      BitFieldModel<SizeType, 23, 1> i2c3lpen;
      BitFieldModel<SizeType, 22, 1> i2c2lpen;
      BitFieldModel<SizeType, 21, 1> i2c1lpen;
      BitFieldModel<SizeType, 17, 1> usart2lpen;
      BitFieldModel<SizeType, 15, 1> spi3lpen;
      BitFieldModel<SizeType, 14, 1> spi2lpen;
      BitFieldModel<SizeType, 11, 1> wwdglpen;
      BitFieldModel<SizeType, 3, 1> tim5lpen;
      BitFieldModel<SizeType, 2, 1> tim4lpen;
      BitFieldModel<SizeType, 1, 1> tim3lpen;
      BitFieldModel<SizeType, 0, 1> tim2lpen;
    };
  };

private:
  template<typename SizeType, std::uintptr_t Address>
  class Apb1lpenrRegisterModel : public RegisterModel<Apb1lpenrRegisterUnion<SizeType>, RccAddressPolicy<Address>>
  {
  public:
    using reg = Apb1lpenrRegisterUnion<SizeType>;

  public:
    using pwrlpen = FieldModel<reg, RccAddressPolicy<Address>, 28, 1>;
    using i2c3lpen = FieldModel<reg, RccAddressPolicy<Address>, 23, 1>;
    using i2c2lpen = FieldModel<reg, RccAddressPolicy<Address>, 22, 1>;
    using i2c1lpen = FieldModel<reg, RccAddressPolicy<Address>, 21, 1>;
    using usart2lpen = FieldModel<reg, RccAddressPolicy<Address>, 17, 1>;
    using spi3lpen = FieldModel<reg, RccAddressPolicy<Address>, 15, 1>;
    using spi2lpen = FieldModel<reg, RccAddressPolicy<Address>, 14, 1>;
    using wwdglpen = FieldModel<reg, RccAddressPolicy<Address>, 11, 1>;
    using tim5lpen = FieldModel<reg, RccAddressPolicy<Address>, 3, 1>;
    using tim4lpen = FieldModel<reg, RccAddressPolicy<Address>, 2, 1>;
    using tim3lpen = FieldModel<reg, RccAddressPolicy<Address>, 1, 1>;
    using tim2lpen = FieldModel<reg, RccAddressPolicy<Address>, 0, 1>;
  };

public:
  using apb1lpenr = Apb1lpenrRegisterModel<uint32_t, RccBaseAddress + 0x00000060>;

/**
 * REGISTER APB2LPENR
 */
private:
  template<typename SizeType>
  class Apb2lpenrRegisterUnion
  {
  public:
    union
    {
      SizeType value;
      BitFieldModel<SizeType, 0, 1> tim1lpen;
      BitFieldModel<SizeType, 4, 1> usart1lpen;
      BitFieldModel<SizeType, 5, 1> usart6lpen;
      BitFieldModel<SizeType, 8, 1> adc1lpen;
      BitFieldModel<SizeType, 11, 1> sdiolpen;
      BitFieldModel<SizeType, 12, 1> spi1lpen;
      BitFieldModel<SizeType, 13, 1> spi4lpen;
      BitFieldModel<SizeType, 14, 1> syscfglpen;
      BitFieldModel<SizeType, 16, 1> tim9lpen;
      BitFieldModel<SizeType, 17, 1> tim10lpen;
      BitFieldModel<SizeType, 18, 1> tim11lpen;
    };
  };

private:
  template<typename SizeType, std::uintptr_t Address>
  class Apb2lpenrRegisterModel : public RegisterModel<Apb2lpenrRegisterUnion<SizeType>, RccAddressPolicy<Address>>
  {
  public:
    using reg = Apb2lpenrRegisterUnion<SizeType>;

  public:
    using tim1lpen = FieldModel<reg, RccAddressPolicy<Address>, 0, 1>;
    using usart1lpen = FieldModel<reg, RccAddressPolicy<Address>, 4, 1>;
    using usart6lpen = FieldModel<reg, RccAddressPolicy<Address>, 5, 1>;
    using adc1lpen = FieldModel<reg, RccAddressPolicy<Address>, 8, 1>;
    using sdiolpen = FieldModel<reg, RccAddressPolicy<Address>, 11, 1>;
    using spi1lpen = FieldModel<reg, RccAddressPolicy<Address>, 12, 1>;
    using spi4lpen = FieldModel<reg, RccAddressPolicy<Address>, 13, 1>;
    using syscfglpen = FieldModel<reg, RccAddressPolicy<Address>, 14, 1>;
    using tim9lpen = FieldModel<reg, RccAddressPolicy<Address>, 16, 1>;
    using tim10lpen = FieldModel<reg, RccAddressPolicy<Address>, 17, 1>;
    using tim11lpen = FieldModel<reg, RccAddressPolicy<Address>, 18, 1>;
  };

public:
  using apb2lpenr = Apb2lpenrRegisterModel<uint32_t, RccBaseAddress + 0x00000064>;

/**
 * REGISTER BDCR
 */
private:
  template<typename SizeType>
  class BdcrRegisterUnion
  {
  public:
    union
    {
      SizeType value;
      BitFieldModel<SizeType, 16, 1> bdrst;
      BitFieldModel<SizeType, 15, 1> rtcen;
      BitFieldModel<SizeType, 9, 1> rtcsel1;
      BitFieldModel<SizeType, 8, 1> rtcsel0;
      BitFieldModel<SizeType, 2, 1> lsebyp;
      BitFieldModel<SizeType, 1, 1> lserdy;
      BitFieldModel<SizeType, 0, 1> lseon;
    };
  };

private:
  template<typename SizeType, std::uintptr_t Address>
  class BdcrRegisterModel : public RegisterModel<BdcrRegisterUnion<SizeType>, RccAddressPolicy<Address>>
  {
  public:
    using reg = BdcrRegisterUnion<SizeType>;

  public:
    using bdrst = FieldModel<reg, RccAddressPolicy<Address>, 16, 1>;
    using rtcen = FieldModel<reg, RccAddressPolicy<Address>, 15, 1>;
    using rtcsel1 = FieldModel<reg, RccAddressPolicy<Address>, 9, 1>;
    using rtcsel0 = FieldModel<reg, RccAddressPolicy<Address>, 8, 1>;
    using lsebyp = FieldModel<reg, RccAddressPolicy<Address>, 2, 1>;
    using lserdy = FieldModel<reg, RccAddressPolicy<Address>, 1, 1>;
    using lseon = FieldModel<reg, RccAddressPolicy<Address>, 0, 1>;
  };

public:
  using bdcr = BdcrRegisterModel<uint32_t, RccBaseAddress + 0x00000070>;

/**
 * REGISTER CSR
 */
private:
  template<typename SizeType>
  class CsrRegisterUnion
  {
  public:
    union
    {
      SizeType value;
      BitFieldModel<SizeType, 31, 1> lpwrrstf;
      BitFieldModel<SizeType, 30, 1> wwdgrstf;
      BitFieldModel<SizeType, 29, 1> wdgrstf;
      BitFieldModel<SizeType, 28, 1> sftrstf;
      BitFieldModel<SizeType, 27, 1> porrstf;
      BitFieldModel<SizeType, 26, 1> padrstf;
      BitFieldModel<SizeType, 25, 1> borrstf;
      BitFieldModel<SizeType, 24, 1> rmvf;
      BitFieldModel<SizeType, 1, 1> lsirdy;
      BitFieldModel<SizeType, 0, 1> lsion;
    };
  };

private:
  template<typename SizeType, std::uintptr_t Address>
  class CsrRegisterModel : public RegisterModel<CsrRegisterUnion<SizeType>, RccAddressPolicy<Address>>
  {
  public:
    using reg = CsrRegisterUnion<SizeType>;

  public:
    using lpwrrstf = FieldModel<reg, RccAddressPolicy<Address>, 31, 1>;
    using wwdgrstf = FieldModel<reg, RccAddressPolicy<Address>, 30, 1>;
    using wdgrstf = FieldModel<reg, RccAddressPolicy<Address>, 29, 1>;
    using sftrstf = FieldModel<reg, RccAddressPolicy<Address>, 28, 1>;
    using porrstf = FieldModel<reg, RccAddressPolicy<Address>, 27, 1>;
    using padrstf = FieldModel<reg, RccAddressPolicy<Address>, 26, 1>;
    using borrstf = FieldModel<reg, RccAddressPolicy<Address>, 25, 1>;
    using rmvf = FieldModel<reg, RccAddressPolicy<Address>, 24, 1>;
    using lsirdy = FieldModel<reg, RccAddressPolicy<Address>, 1, 1>;
    using lsion = FieldModel<reg, RccAddressPolicy<Address>, 0, 1>;
  };

public:
  using csr = CsrRegisterModel<uint32_t, RccBaseAddress + 0x00000074>;

/**
 * REGISTER SSCGR
 */
private:
  template<typename SizeType>
  class SscgrRegisterUnion
  {
  public:
    union
    {
      SizeType value;
      BitFieldModel<SizeType, 31, 1> sscgen;
      BitFieldModel<SizeType, 30, 1> spreadsel;
      BitFieldModel<SizeType, 13, 15> incstep;
      BitFieldModel<SizeType, 0, 13> modper;
    };
  };

private:
  template<typename SizeType, std::uintptr_t Address>
  class SscgrRegisterModel : public RegisterModel<SscgrRegisterUnion<SizeType>, RccAddressPolicy<Address>>
  {
  public:
    using reg = SscgrRegisterUnion<SizeType>;

  public:
    using sscgen = FieldModel<reg, RccAddressPolicy<Address>, 31, 1>;
    using spreadsel = FieldModel<reg, RccAddressPolicy<Address>, 30, 1>;
    using incstep = FieldModel<reg, RccAddressPolicy<Address>, 13, 15>;
    using modper = FieldModel<reg, RccAddressPolicy<Address>, 0, 13>;
  };

public:
  using sscgr = SscgrRegisterModel<uint32_t, RccBaseAddress + 0x00000080>;

/**
 * REGISTER PLLI2SCFGR
 */
private:
  template<typename SizeType>
  class Plli2scfgrRegisterUnion
  {
  public:
    union
    {
      SizeType value;
      BitFieldModel<SizeType, 28, 3> plli2srx;
      BitFieldModel<SizeType, 6, 9> plli2snx;
    };
  };

private:
  template<typename SizeType, std::uintptr_t Address>
  class Plli2scfgrRegisterModel : public RegisterModel<Plli2scfgrRegisterUnion<SizeType>, RccAddressPolicy<Address>>
  {
  public:
    using reg = Plli2scfgrRegisterUnion<SizeType>;

  public:
    using plli2srx = FieldModel<reg, RccAddressPolicy<Address>, 28, 3>;
    using plli2snx = FieldModel<reg, RccAddressPolicy<Address>, 6, 9>;
  };

public:
  using plli2scfgr = Plli2scfgrRegisterModel<uint32_t, RccBaseAddress + 0x00000084>;


};

}

#endif /* DRAL_STM32F411_RCC_H */