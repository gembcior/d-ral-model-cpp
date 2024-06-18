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

#ifndef DRAL_STM32F411_I2C_X_H
#define DRAL_STM32F411_I2C_X_H

#include "dral/bitfield_model.h"
#include "dral/group_address_policy.h"
#include "dral/layer_offset_policy.h"
#include "dral/register_model.h"

namespace dral::stm32f411 {

class I2cX
{
public:
  static constexpr uintptr_t I2cXBaseAddress = 0x40005400;

private:
  enum class I2cXIndex
  {
    I2c1,
    I2c2,
    I2c3,
  };

public:
  struct Index
  {
    using enum I2cXIndex;
    static constexpr std::array All = {I2cXIndex::I2c1, I2cXIndex::I2c2, I2cXIndex::I2c3};
  };

private:
  using I2cXLayerOffsetPolicy = LayerOffsetPolicy<I2cXIndex, 0x00000400>;

  template<std::uintptr_t Address>
  using I2cXAddressPolicy = GroupAddressPolicy<Address, std::tuple<I2cXLayerOffsetPolicy>>;

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
      BitFieldModel<SizeType, 15, 1> swrst;
      BitFieldModel<SizeType, 13, 1> alert;
      BitFieldModel<SizeType, 12, 1> pec;
      BitFieldModel<SizeType, 11, 1> pos;
      BitFieldModel<SizeType, 10, 1> ack;
      BitFieldModel<SizeType, 9, 1> stop;
      BitFieldModel<SizeType, 8, 1> start;
      BitFieldModel<SizeType, 7, 1> nostretch;
      BitFieldModel<SizeType, 6, 1> engc;
      BitFieldModel<SizeType, 5, 1> enpec;
      BitFieldModel<SizeType, 4, 1> enarp;
      BitFieldModel<SizeType, 3, 1> smbtype;
      BitFieldModel<SizeType, 1, 1> smbus;
      BitFieldModel<SizeType, 0, 1> pe;
    };
  };

private:
  template<typename SizeType, std::uintptr_t Address>
  class Cr1RegisterModel : public RegisterModel<Cr1RegisterUnion<SizeType>, I2cXAddressPolicy<Address>>
  {
  public:
    using reg = Cr1RegisterUnion<SizeType>;

  public:
    using swrst = FieldModel<reg, I2cXAddressPolicy<Address>, 15, 1>;
    using alert = FieldModel<reg, I2cXAddressPolicy<Address>, 13, 1>;
    using pec = FieldModel<reg, I2cXAddressPolicy<Address>, 12, 1>;
    using pos = FieldModel<reg, I2cXAddressPolicy<Address>, 11, 1>;
    using ack = FieldModel<reg, I2cXAddressPolicy<Address>, 10, 1>;
    using stop = FieldModel<reg, I2cXAddressPolicy<Address>, 9, 1>;
    using start = FieldModel<reg, I2cXAddressPolicy<Address>, 8, 1>;
    using nostretch = FieldModel<reg, I2cXAddressPolicy<Address>, 7, 1>;
    using engc = FieldModel<reg, I2cXAddressPolicy<Address>, 6, 1>;
    using enpec = FieldModel<reg, I2cXAddressPolicy<Address>, 5, 1>;
    using enarp = FieldModel<reg, I2cXAddressPolicy<Address>, 4, 1>;
    using smbtype = FieldModel<reg, I2cXAddressPolicy<Address>, 3, 1>;
    using smbus = FieldModel<reg, I2cXAddressPolicy<Address>, 1, 1>;
    using pe = FieldModel<reg, I2cXAddressPolicy<Address>, 0, 1>;
  };

public:
  using cr1 = Cr1RegisterModel<uint32_t, I2cXBaseAddress + 0x00000000>;

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
      BitFieldModel<SizeType, 12, 1> last;
      BitFieldModel<SizeType, 11, 1> dmaen;
      BitFieldModel<SizeType, 10, 1> itbufen;
      BitFieldModel<SizeType, 9, 1> itevten;
      BitFieldModel<SizeType, 8, 1> iterren;
      BitFieldModel<SizeType, 0, 6> freq;
    };
  };

private:
  template<typename SizeType, std::uintptr_t Address>
  class Cr2RegisterModel : public RegisterModel<Cr2RegisterUnion<SizeType>, I2cXAddressPolicy<Address>>
  {
  public:
    using reg = Cr2RegisterUnion<SizeType>;

  public:
    using last = FieldModel<reg, I2cXAddressPolicy<Address>, 12, 1>;
    using dmaen = FieldModel<reg, I2cXAddressPolicy<Address>, 11, 1>;
    using itbufen = FieldModel<reg, I2cXAddressPolicy<Address>, 10, 1>;
    using itevten = FieldModel<reg, I2cXAddressPolicy<Address>, 9, 1>;
    using iterren = FieldModel<reg, I2cXAddressPolicy<Address>, 8, 1>;
    using freq = FieldModel<reg, I2cXAddressPolicy<Address>, 0, 6>;
  };

public:
  using cr2 = Cr2RegisterModel<uint32_t, I2cXBaseAddress + 0x00000004>;

/**
 * REGISTER OAR1
 */
private:
  template<typename SizeType>
  class Oar1RegisterUnion
  {
  public:
    union
    {
      SizeType value;
      BitFieldModel<SizeType, 15, 1> addmode;
      BitFieldModel<SizeType, 8, 2> add10;
      BitFieldModel<SizeType, 1, 7> add7;
      BitFieldModel<SizeType, 0, 1> add0;
    };
  };

private:
  template<typename SizeType, std::uintptr_t Address>
  class Oar1RegisterModel : public RegisterModel<Oar1RegisterUnion<SizeType>, I2cXAddressPolicy<Address>>
  {
  public:
    using reg = Oar1RegisterUnion<SizeType>;

  public:
    using addmode = FieldModel<reg, I2cXAddressPolicy<Address>, 15, 1>;
    using add10 = FieldModel<reg, I2cXAddressPolicy<Address>, 8, 2>;
    using add7 = FieldModel<reg, I2cXAddressPolicy<Address>, 1, 7>;
    using add0 = FieldModel<reg, I2cXAddressPolicy<Address>, 0, 1>;
  };

public:
  using oar1 = Oar1RegisterModel<uint32_t, I2cXBaseAddress + 0x00000008>;

/**
 * REGISTER OAR2
 */
private:
  template<typename SizeType>
  class Oar2RegisterUnion
  {
  public:
    union
    {
      SizeType value;
      BitFieldModel<SizeType, 1, 7> add2;
      BitFieldModel<SizeType, 0, 1> endual;
    };
  };

private:
  template<typename SizeType, std::uintptr_t Address>
  class Oar2RegisterModel : public RegisterModel<Oar2RegisterUnion<SizeType>, I2cXAddressPolicy<Address>>
  {
  public:
    using reg = Oar2RegisterUnion<SizeType>;

  public:
    using add2 = FieldModel<reg, I2cXAddressPolicy<Address>, 1, 7>;
    using endual = FieldModel<reg, I2cXAddressPolicy<Address>, 0, 1>;
  };

public:
  using oar2 = Oar2RegisterModel<uint32_t, I2cXBaseAddress + 0x0000000C>;

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
      BitFieldModel<SizeType, 0, 8> dr;
    };
  };

private:
  template<typename SizeType, std::uintptr_t Address>
  class DrRegisterModel : public RegisterModel<DrRegisterUnion<SizeType>, I2cXAddressPolicy<Address>>
  {
  public:
    using reg = DrRegisterUnion<SizeType>;

  public:
    using dr = FieldModel<reg, I2cXAddressPolicy<Address>, 0, 8>;
  };

public:
  using dr = DrRegisterModel<uint32_t, I2cXBaseAddress + 0x00000010>;

/**
 * REGISTER SR1
 */
private:
  template<typename SizeType>
  class Sr1RegisterUnion
  {
  public:
    union
    {
      SizeType value;
      BitFieldModel<SizeType, 15, 1> smbalert;
      BitFieldModel<SizeType, 14, 1> timeout;
      BitFieldModel<SizeType, 12, 1> pecerr;
      BitFieldModel<SizeType, 11, 1> ovr;
      BitFieldModel<SizeType, 10, 1> af;
      BitFieldModel<SizeType, 9, 1> arlo;
      BitFieldModel<SizeType, 8, 1> berr;
      BitFieldModel<SizeType, 7, 1> txe;
      BitFieldModel<SizeType, 6, 1> rxne;
      BitFieldModel<SizeType, 4, 1> stopf;
      BitFieldModel<SizeType, 3, 1> add10;
      BitFieldModel<SizeType, 2, 1> btf;
      BitFieldModel<SizeType, 1, 1> addr;
      BitFieldModel<SizeType, 0, 1> sb;
    };
  };

private:
  template<typename SizeType, std::uintptr_t Address>
  class Sr1RegisterModel : public RegisterModel<Sr1RegisterUnion<SizeType>, I2cXAddressPolicy<Address>>
  {
  public:
    using reg = Sr1RegisterUnion<SizeType>;

  public:
    using smbalert = FieldModel<reg, I2cXAddressPolicy<Address>, 15, 1>;
    using timeout = FieldModel<reg, I2cXAddressPolicy<Address>, 14, 1>;
    using pecerr = FieldModel<reg, I2cXAddressPolicy<Address>, 12, 1>;
    using ovr = FieldModel<reg, I2cXAddressPolicy<Address>, 11, 1>;
    using af = FieldModel<reg, I2cXAddressPolicy<Address>, 10, 1>;
    using arlo = FieldModel<reg, I2cXAddressPolicy<Address>, 9, 1>;
    using berr = FieldModel<reg, I2cXAddressPolicy<Address>, 8, 1>;
    using txe = FieldModel<reg, I2cXAddressPolicy<Address>, 7, 1>;
    using rxne = FieldModel<reg, I2cXAddressPolicy<Address>, 6, 1>;
    using stopf = FieldModel<reg, I2cXAddressPolicy<Address>, 4, 1>;
    using add10 = FieldModel<reg, I2cXAddressPolicy<Address>, 3, 1>;
    using btf = FieldModel<reg, I2cXAddressPolicy<Address>, 2, 1>;
    using addr = FieldModel<reg, I2cXAddressPolicy<Address>, 1, 1>;
    using sb = FieldModel<reg, I2cXAddressPolicy<Address>, 0, 1>;
  };

public:
  using sr1 = Sr1RegisterModel<uint32_t, I2cXBaseAddress + 0x00000014>;

/**
 * REGISTER SR2
 */
private:
  template<typename SizeType>
  class Sr2RegisterUnion
  {
  public:
    union
    {
      SizeType value;
      BitFieldModel<SizeType, 8, 8> pec;
      BitFieldModel<SizeType, 7, 1> dualf;
      BitFieldModel<SizeType, 6, 1> smbhost;
      BitFieldModel<SizeType, 5, 1> smbdefault;
      BitFieldModel<SizeType, 4, 1> gencall;
      BitFieldModel<SizeType, 2, 1> tra;
      BitFieldModel<SizeType, 1, 1> busy;
      BitFieldModel<SizeType, 0, 1> msl;
    };
  };

private:
  template<typename SizeType, std::uintptr_t Address>
  class Sr2RegisterModel : public RegisterModel<Sr2RegisterUnion<SizeType>, I2cXAddressPolicy<Address>>
  {
  public:
    using reg = Sr2RegisterUnion<SizeType>;

  public:
    using pec = FieldModel<reg, I2cXAddressPolicy<Address>, 8, 8>;
    using dualf = FieldModel<reg, I2cXAddressPolicy<Address>, 7, 1>;
    using smbhost = FieldModel<reg, I2cXAddressPolicy<Address>, 6, 1>;
    using smbdefault = FieldModel<reg, I2cXAddressPolicy<Address>, 5, 1>;
    using gencall = FieldModel<reg, I2cXAddressPolicy<Address>, 4, 1>;
    using tra = FieldModel<reg, I2cXAddressPolicy<Address>, 2, 1>;
    using busy = FieldModel<reg, I2cXAddressPolicy<Address>, 1, 1>;
    using msl = FieldModel<reg, I2cXAddressPolicy<Address>, 0, 1>;
  };

public:
  using sr2 = Sr2RegisterModel<uint32_t, I2cXBaseAddress + 0x00000018>;

/**
 * REGISTER CCR
 */
private:
  template<typename SizeType>
  class CcrRegisterUnion
  {
  public:
    union
    {
      SizeType value;
      BitFieldModel<SizeType, 15, 1> fS;
      BitFieldModel<SizeType, 14, 1> duty;
      BitFieldModel<SizeType, 0, 12> ccr;
    };
  };

private:
  template<typename SizeType, std::uintptr_t Address>
  class CcrRegisterModel : public RegisterModel<CcrRegisterUnion<SizeType>, I2cXAddressPolicy<Address>>
  {
  public:
    using reg = CcrRegisterUnion<SizeType>;

  public:
    using fS = FieldModel<reg, I2cXAddressPolicy<Address>, 15, 1>;
    using duty = FieldModel<reg, I2cXAddressPolicy<Address>, 14, 1>;
    using ccr = FieldModel<reg, I2cXAddressPolicy<Address>, 0, 12>;
  };

public:
  using ccr = CcrRegisterModel<uint32_t, I2cXBaseAddress + 0x0000001C>;

/**
 * REGISTER TRISE
 */
private:
  template<typename SizeType>
  class TriseRegisterUnion
  {
  public:
    union
    {
      SizeType value;
      BitFieldModel<SizeType, 0, 6> trise;
    };
  };

private:
  template<typename SizeType, std::uintptr_t Address>
  class TriseRegisterModel : public RegisterModel<TriseRegisterUnion<SizeType>, I2cXAddressPolicy<Address>>
  {
  public:
    using reg = TriseRegisterUnion<SizeType>;

  public:
    using trise = FieldModel<reg, I2cXAddressPolicy<Address>, 0, 6>;
  };

public:
  using trise = TriseRegisterModel<uint32_t, I2cXBaseAddress + 0x00000020>;


};

}

#endif /* DRAL_STM32F411_I2C_X_H */