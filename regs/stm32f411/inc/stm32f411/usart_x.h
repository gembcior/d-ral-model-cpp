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

#ifndef DRAL_STM32F411_USART_X_H
#define DRAL_STM32F411_USART_X_H

#include "dral/bitfield_model.h"
#include "dral/group_address_policy.h"
#include "dral/layer_offset_policy.h"
#include "dral/register_model.h"

namespace dral::stm32f411 {

class UsartX
{
public:
  static constexpr uintptr_t UsartXBaseAddress = 0x40004400;

private:
  enum class UsartXIndex
  {
    Usart2,
    Usart1,
    Usart6,
  };

public:
  struct Index
  {
    using enum UsartXIndex;
    static constexpr std::array All = {UsartXIndex::Usart2, UsartXIndex::Usart1, UsartXIndex::Usart6};
  };

private:
  using UsartXLayerOffsetPolicy = NonUniformLayerOffsetPolicy<UsartXIndex, std::integer_sequence<std::uintptr_t, 0x00000000, 0x0000CC00, 0x0000D000>>;

  template<std::uintptr_t Address>
  using UsartXAddressPolicy = GroupAddressPolicy<Address, std::tuple<UsartXLayerOffsetPolicy>>;

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
      BitFieldModel<SizeType, 9, 1> cts;
      BitFieldModel<SizeType, 8, 1> lbd;
      BitFieldModel<SizeType, 7, 1> txe;
      BitFieldModel<SizeType, 6, 1> tc;
      BitFieldModel<SizeType, 5, 1> rxne;
      BitFieldModel<SizeType, 4, 1> idle;
      BitFieldModel<SizeType, 3, 1> ore;
      BitFieldModel<SizeType, 2, 1> nf;
      BitFieldModel<SizeType, 1, 1> fe;
      BitFieldModel<SizeType, 0, 1> pe;
    };
  };

private:
  template<typename SizeType, std::uintptr_t Address>
  class SrRegisterModel : public RegisterModel<SrRegisterUnion<SizeType>, UsartXAddressPolicy<Address>>
  {
  public:
    using reg = SrRegisterUnion<SizeType>;

  public:
    using cts = FieldModel<reg, UsartXAddressPolicy<Address>, 9, 1>;
    using lbd = FieldModel<reg, UsartXAddressPolicy<Address>, 8, 1>;
    using txe = FieldModel<reg, UsartXAddressPolicy<Address>, 7, 1>;
    using tc = FieldModel<reg, UsartXAddressPolicy<Address>, 6, 1>;
    using rxne = FieldModel<reg, UsartXAddressPolicy<Address>, 5, 1>;
    using idle = FieldModel<reg, UsartXAddressPolicy<Address>, 4, 1>;
    using ore = FieldModel<reg, UsartXAddressPolicy<Address>, 3, 1>;
    using nf = FieldModel<reg, UsartXAddressPolicy<Address>, 2, 1>;
    using fe = FieldModel<reg, UsartXAddressPolicy<Address>, 1, 1>;
    using pe = FieldModel<reg, UsartXAddressPolicy<Address>, 0, 1>;
  };

public:
  using sr = SrRegisterModel<uint32_t, UsartXBaseAddress + 0x00000000>;

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
      BitFieldModel<SizeType, 0, 9> dr;
    };
  };

private:
  template<typename SizeType, std::uintptr_t Address>
  class DrRegisterModel : public RegisterModel<DrRegisterUnion<SizeType>, UsartXAddressPolicy<Address>>
  {
  public:
    using reg = DrRegisterUnion<SizeType>;

  public:
    using dr = FieldModel<reg, UsartXAddressPolicy<Address>, 0, 9>;
  };

public:
  using dr = DrRegisterModel<uint32_t, UsartXBaseAddress + 0x00000004>;

/**
 * REGISTER BRR
 */
private:
  template<typename SizeType>
  class BrrRegisterUnion
  {
  public:
    union
    {
      SizeType value;
      BitFieldModel<SizeType, 4, 12> divMantissa;
      BitFieldModel<SizeType, 0, 4> divFraction;
    };
  };

private:
  template<typename SizeType, std::uintptr_t Address>
  class BrrRegisterModel : public RegisterModel<BrrRegisterUnion<SizeType>, UsartXAddressPolicy<Address>>
  {
  public:
    using reg = BrrRegisterUnion<SizeType>;

  public:
    using divMantissa = FieldModel<reg, UsartXAddressPolicy<Address>, 4, 12>;
    using divFraction = FieldModel<reg, UsartXAddressPolicy<Address>, 0, 4>;
  };

public:
  using brr = BrrRegisterModel<uint32_t, UsartXBaseAddress + 0x00000008>;

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
      BitFieldModel<SizeType, 15, 1> over8;
      BitFieldModel<SizeType, 13, 1> ue;
      BitFieldModel<SizeType, 12, 1> m;
      BitFieldModel<SizeType, 11, 1> wake;
      BitFieldModel<SizeType, 10, 1> pce;
      BitFieldModel<SizeType, 9, 1> ps;
      BitFieldModel<SizeType, 8, 1> peie;
      BitFieldModel<SizeType, 7, 1> txeie;
      BitFieldModel<SizeType, 6, 1> tcie;
      BitFieldModel<SizeType, 5, 1> rxneie;
      BitFieldModel<SizeType, 4, 1> idleie;
      BitFieldModel<SizeType, 3, 1> te;
      BitFieldModel<SizeType, 2, 1> re;
      BitFieldModel<SizeType, 1, 1> rwu;
      BitFieldModel<SizeType, 0, 1> sbk;
    };
  };

private:
  template<typename SizeType, std::uintptr_t Address>
  class Cr1RegisterModel : public RegisterModel<Cr1RegisterUnion<SizeType>, UsartXAddressPolicy<Address>>
  {
  public:
    using reg = Cr1RegisterUnion<SizeType>;

  public:
    using over8 = FieldModel<reg, UsartXAddressPolicy<Address>, 15, 1>;
    using ue = FieldModel<reg, UsartXAddressPolicy<Address>, 13, 1>;
    using m = FieldModel<reg, UsartXAddressPolicy<Address>, 12, 1>;
    using wake = FieldModel<reg, UsartXAddressPolicy<Address>, 11, 1>;
    using pce = FieldModel<reg, UsartXAddressPolicy<Address>, 10, 1>;
    using ps = FieldModel<reg, UsartXAddressPolicy<Address>, 9, 1>;
    using peie = FieldModel<reg, UsartXAddressPolicy<Address>, 8, 1>;
    using txeie = FieldModel<reg, UsartXAddressPolicy<Address>, 7, 1>;
    using tcie = FieldModel<reg, UsartXAddressPolicy<Address>, 6, 1>;
    using rxneie = FieldModel<reg, UsartXAddressPolicy<Address>, 5, 1>;
    using idleie = FieldModel<reg, UsartXAddressPolicy<Address>, 4, 1>;
    using te = FieldModel<reg, UsartXAddressPolicy<Address>, 3, 1>;
    using re = FieldModel<reg, UsartXAddressPolicy<Address>, 2, 1>;
    using rwu = FieldModel<reg, UsartXAddressPolicy<Address>, 1, 1>;
    using sbk = FieldModel<reg, UsartXAddressPolicy<Address>, 0, 1>;
  };

public:
  using cr1 = Cr1RegisterModel<uint32_t, UsartXBaseAddress + 0x0000000C>;

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
      BitFieldModel<SizeType, 14, 1> linen;
      BitFieldModel<SizeType, 12, 2> stop;
      BitFieldModel<SizeType, 11, 1> clken;
      BitFieldModel<SizeType, 10, 1> cpol;
      BitFieldModel<SizeType, 9, 1> cpha;
      BitFieldModel<SizeType, 8, 1> lbcl;
      BitFieldModel<SizeType, 6, 1> lbdie;
      BitFieldModel<SizeType, 5, 1> lbdl;
      BitFieldModel<SizeType, 0, 4> add;
    };
  };

private:
  template<typename SizeType, std::uintptr_t Address>
  class Cr2RegisterModel : public RegisterModel<Cr2RegisterUnion<SizeType>, UsartXAddressPolicy<Address>>
  {
  public:
    using reg = Cr2RegisterUnion<SizeType>;

  public:
    using linen = FieldModel<reg, UsartXAddressPolicy<Address>, 14, 1>;
    using stop = FieldModel<reg, UsartXAddressPolicy<Address>, 12, 2>;
    using clken = FieldModel<reg, UsartXAddressPolicy<Address>, 11, 1>;
    using cpol = FieldModel<reg, UsartXAddressPolicy<Address>, 10, 1>;
    using cpha = FieldModel<reg, UsartXAddressPolicy<Address>, 9, 1>;
    using lbcl = FieldModel<reg, UsartXAddressPolicy<Address>, 8, 1>;
    using lbdie = FieldModel<reg, UsartXAddressPolicy<Address>, 6, 1>;
    using lbdl = FieldModel<reg, UsartXAddressPolicy<Address>, 5, 1>;
    using add = FieldModel<reg, UsartXAddressPolicy<Address>, 0, 4>;
  };

public:
  using cr2 = Cr2RegisterModel<uint32_t, UsartXBaseAddress + 0x00000010>;

/**
 * REGISTER CR3
 */
private:
  template<typename SizeType>
  class Cr3RegisterUnion
  {
  public:
    union
    {
      SizeType value;
      BitFieldModel<SizeType, 11, 1> onebit;
      BitFieldModel<SizeType, 10, 1> ctsie;
      BitFieldModel<SizeType, 9, 1> ctse;
      BitFieldModel<SizeType, 8, 1> rtse;
      BitFieldModel<SizeType, 7, 1> dmat;
      BitFieldModel<SizeType, 6, 1> dmar;
      BitFieldModel<SizeType, 5, 1> scen;
      BitFieldModel<SizeType, 4, 1> nack;
      BitFieldModel<SizeType, 3, 1> hdsel;
      BitFieldModel<SizeType, 2, 1> irlp;
      BitFieldModel<SizeType, 1, 1> iren;
      BitFieldModel<SizeType, 0, 1> eie;
    };
  };

private:
  template<typename SizeType, std::uintptr_t Address>
  class Cr3RegisterModel : public RegisterModel<Cr3RegisterUnion<SizeType>, UsartXAddressPolicy<Address>>
  {
  public:
    using reg = Cr3RegisterUnion<SizeType>;

  public:
    using onebit = FieldModel<reg, UsartXAddressPolicy<Address>, 11, 1>;
    using ctsie = FieldModel<reg, UsartXAddressPolicy<Address>, 10, 1>;
    using ctse = FieldModel<reg, UsartXAddressPolicy<Address>, 9, 1>;
    using rtse = FieldModel<reg, UsartXAddressPolicy<Address>, 8, 1>;
    using dmat = FieldModel<reg, UsartXAddressPolicy<Address>, 7, 1>;
    using dmar = FieldModel<reg, UsartXAddressPolicy<Address>, 6, 1>;
    using scen = FieldModel<reg, UsartXAddressPolicy<Address>, 5, 1>;
    using nack = FieldModel<reg, UsartXAddressPolicy<Address>, 4, 1>;
    using hdsel = FieldModel<reg, UsartXAddressPolicy<Address>, 3, 1>;
    using irlp = FieldModel<reg, UsartXAddressPolicy<Address>, 2, 1>;
    using iren = FieldModel<reg, UsartXAddressPolicy<Address>, 1, 1>;
    using eie = FieldModel<reg, UsartXAddressPolicy<Address>, 0, 1>;
  };

public:
  using cr3 = Cr3RegisterModel<uint32_t, UsartXBaseAddress + 0x00000014>;

/**
 * REGISTER GTPR
 */
private:
  template<typename SizeType>
  class GtprRegisterUnion
  {
  public:
    union
    {
      SizeType value;
      BitFieldModel<SizeType, 8, 8> gt;
      BitFieldModel<SizeType, 0, 8> psc;
    };
  };

private:
  template<typename SizeType, std::uintptr_t Address>
  class GtprRegisterModel : public RegisterModel<GtprRegisterUnion<SizeType>, UsartXAddressPolicy<Address>>
  {
  public:
    using reg = GtprRegisterUnion<SizeType>;

  public:
    using gt = FieldModel<reg, UsartXAddressPolicy<Address>, 8, 8>;
    using psc = FieldModel<reg, UsartXAddressPolicy<Address>, 0, 8>;
  };

public:
  using gtpr = GtprRegisterModel<uint32_t, UsartXBaseAddress + 0x00000018>;


};

}

#endif /* DRAL_STM32F411_USART_X_H */