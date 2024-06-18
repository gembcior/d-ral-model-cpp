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

#ifndef DRAL_STM32F411_I2S3EXT_H
#define DRAL_STM32F411_I2S3EXT_H

#include "dral/bitfield_model.h"
#include "dral/group_address_policy.h"
#include "dral/layer_offset_policy.h"
#include "dral/register_model.h"

namespace dral::stm32f411 {

class I2s3ext
{
public:
  static constexpr uintptr_t I2s3extBaseAddress = 0x40004000;

private:
  template<std::uintptr_t Address>
  using I2s3extAddressPolicy = GroupAddressPolicy<Address>;

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
      BitFieldModel<SizeType, 15, 1> bidimode;
      BitFieldModel<SizeType, 14, 1> bidioe;
      BitFieldModel<SizeType, 13, 1> crcen;
      BitFieldModel<SizeType, 12, 1> crcnext;
      BitFieldModel<SizeType, 11, 1> dff;
      BitFieldModel<SizeType, 10, 1> rxonly;
      BitFieldModel<SizeType, 9, 1> ssm;
      BitFieldModel<SizeType, 8, 1> ssi;
      BitFieldModel<SizeType, 7, 1> lsbfirst;
      BitFieldModel<SizeType, 6, 1> spe;
      BitFieldModel<SizeType, 3, 3> br;
      BitFieldModel<SizeType, 2, 1> mstr;
      BitFieldModel<SizeType, 1, 1> cpol;
      BitFieldModel<SizeType, 0, 1> cpha;
    };
  };

private:
  template<typename SizeType, std::uintptr_t Address>
  class Cr1RegisterModel : public RegisterModel<Cr1RegisterUnion<SizeType>, I2s3extAddressPolicy<Address>>
  {
  public:
    using reg = Cr1RegisterUnion<SizeType>;

  public:
    using bidimode = FieldModel<reg, I2s3extAddressPolicy<Address>, 15, 1>;
    using bidioe = FieldModel<reg, I2s3extAddressPolicy<Address>, 14, 1>;
    using crcen = FieldModel<reg, I2s3extAddressPolicy<Address>, 13, 1>;
    using crcnext = FieldModel<reg, I2s3extAddressPolicy<Address>, 12, 1>;
    using dff = FieldModel<reg, I2s3extAddressPolicy<Address>, 11, 1>;
    using rxonly = FieldModel<reg, I2s3extAddressPolicy<Address>, 10, 1>;
    using ssm = FieldModel<reg, I2s3extAddressPolicy<Address>, 9, 1>;
    using ssi = FieldModel<reg, I2s3extAddressPolicy<Address>, 8, 1>;
    using lsbfirst = FieldModel<reg, I2s3extAddressPolicy<Address>, 7, 1>;
    using spe = FieldModel<reg, I2s3extAddressPolicy<Address>, 6, 1>;
    using br = FieldModel<reg, I2s3extAddressPolicy<Address>, 3, 3>;
    using mstr = FieldModel<reg, I2s3extAddressPolicy<Address>, 2, 1>;
    using cpol = FieldModel<reg, I2s3extAddressPolicy<Address>, 1, 1>;
    using cpha = FieldModel<reg, I2s3extAddressPolicy<Address>, 0, 1>;
  };

public:
  using cr1 = Cr1RegisterModel<uint32_t, I2s3extBaseAddress + 0x00000000>;

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
      BitFieldModel<SizeType, 7, 1> txeie;
      BitFieldModel<SizeType, 6, 1> rxneie;
      BitFieldModel<SizeType, 5, 1> errie;
      BitFieldModel<SizeType, 4, 1> frf;
      BitFieldModel<SizeType, 2, 1> ssoe;
      BitFieldModel<SizeType, 1, 1> txdmaen;
      BitFieldModel<SizeType, 0, 1> rxdmaen;
    };
  };

private:
  template<typename SizeType, std::uintptr_t Address>
  class Cr2RegisterModel : public RegisterModel<Cr2RegisterUnion<SizeType>, I2s3extAddressPolicy<Address>>
  {
  public:
    using reg = Cr2RegisterUnion<SizeType>;

  public:
    using txeie = FieldModel<reg, I2s3extAddressPolicy<Address>, 7, 1>;
    using rxneie = FieldModel<reg, I2s3extAddressPolicy<Address>, 6, 1>;
    using errie = FieldModel<reg, I2s3extAddressPolicy<Address>, 5, 1>;
    using frf = FieldModel<reg, I2s3extAddressPolicy<Address>, 4, 1>;
    using ssoe = FieldModel<reg, I2s3extAddressPolicy<Address>, 2, 1>;
    using txdmaen = FieldModel<reg, I2s3extAddressPolicy<Address>, 1, 1>;
    using rxdmaen = FieldModel<reg, I2s3extAddressPolicy<Address>, 0, 1>;
  };

public:
  using cr2 = Cr2RegisterModel<uint32_t, I2s3extBaseAddress + 0x00000004>;

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
      BitFieldModel<SizeType, 8, 1> tifrfe;
      BitFieldModel<SizeType, 7, 1> bsy;
      BitFieldModel<SizeType, 6, 1> ovr;
      BitFieldModel<SizeType, 5, 1> modf;
      BitFieldModel<SizeType, 4, 1> crcerr;
      BitFieldModel<SizeType, 3, 1> udr;
      BitFieldModel<SizeType, 2, 1> chside;
      BitFieldModel<SizeType, 1, 1> txe;
      BitFieldModel<SizeType, 0, 1> rxne;
    };
  };

private:
  template<typename SizeType, std::uintptr_t Address>
  class SrRegisterModel : public RegisterModel<SrRegisterUnion<SizeType>, I2s3extAddressPolicy<Address>>
  {
  public:
    using reg = SrRegisterUnion<SizeType>;

  public:
    using tifrfe = FieldModel<reg, I2s3extAddressPolicy<Address>, 8, 1>;
    using bsy = FieldModel<reg, I2s3extAddressPolicy<Address>, 7, 1>;
    using ovr = FieldModel<reg, I2s3extAddressPolicy<Address>, 6, 1>;
    using modf = FieldModel<reg, I2s3extAddressPolicy<Address>, 5, 1>;
    using crcerr = FieldModel<reg, I2s3extAddressPolicy<Address>, 4, 1>;
    using udr = FieldModel<reg, I2s3extAddressPolicy<Address>, 3, 1>;
    using chside = FieldModel<reg, I2s3extAddressPolicy<Address>, 2, 1>;
    using txe = FieldModel<reg, I2s3extAddressPolicy<Address>, 1, 1>;
    using rxne = FieldModel<reg, I2s3extAddressPolicy<Address>, 0, 1>;
  };

public:
  using sr = SrRegisterModel<uint32_t, I2s3extBaseAddress + 0x00000008>;

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
      BitFieldModel<SizeType, 0, 16> dr;
    };
  };

private:
  template<typename SizeType, std::uintptr_t Address>
  class DrRegisterModel : public RegisterModel<DrRegisterUnion<SizeType>, I2s3extAddressPolicy<Address>>
  {
  public:
    using reg = DrRegisterUnion<SizeType>;

  public:
    using dr = FieldModel<reg, I2s3extAddressPolicy<Address>, 0, 16>;
  };

public:
  using dr = DrRegisterModel<uint32_t, I2s3extBaseAddress + 0x0000000C>;

/**
 * REGISTER CRCPR
 */
private:
  template<typename SizeType>
  class CrcprRegisterUnion
  {
  public:
    union
    {
      SizeType value;
      BitFieldModel<SizeType, 0, 16> crcpoly;
    };
  };

private:
  template<typename SizeType, std::uintptr_t Address>
  class CrcprRegisterModel : public RegisterModel<CrcprRegisterUnion<SizeType>, I2s3extAddressPolicy<Address>>
  {
  public:
    using reg = CrcprRegisterUnion<SizeType>;

  public:
    using crcpoly = FieldModel<reg, I2s3extAddressPolicy<Address>, 0, 16>;
  };

public:
  using crcpr = CrcprRegisterModel<uint32_t, I2s3extBaseAddress + 0x00000010>;

/**
 * REGISTER RXCRCR
 */
private:
  template<typename SizeType>
  class RxcrcrRegisterUnion
  {
  public:
    union
    {
      SizeType value;
      BitFieldModel<SizeType, 0, 16> rxcrc;
    };
  };

private:
  template<typename SizeType, std::uintptr_t Address>
  class RxcrcrRegisterModel : public RegisterModel<RxcrcrRegisterUnion<SizeType>, I2s3extAddressPolicy<Address>>
  {
  public:
    using reg = RxcrcrRegisterUnion<SizeType>;

  public:
    using rxcrc = FieldModel<reg, I2s3extAddressPolicy<Address>, 0, 16>;
  };

public:
  using rxcrcr = RxcrcrRegisterModel<uint32_t, I2s3extBaseAddress + 0x00000014>;

/**
 * REGISTER TXCRCR
 */
private:
  template<typename SizeType>
  class TxcrcrRegisterUnion
  {
  public:
    union
    {
      SizeType value;
      BitFieldModel<SizeType, 0, 16> txcrc;
    };
  };

private:
  template<typename SizeType, std::uintptr_t Address>
  class TxcrcrRegisterModel : public RegisterModel<TxcrcrRegisterUnion<SizeType>, I2s3extAddressPolicy<Address>>
  {
  public:
    using reg = TxcrcrRegisterUnion<SizeType>;

  public:
    using txcrc = FieldModel<reg, I2s3extAddressPolicy<Address>, 0, 16>;
  };

public:
  using txcrcr = TxcrcrRegisterModel<uint32_t, I2s3extBaseAddress + 0x00000018>;

/**
 * REGISTER I2SCFGR
 */
private:
  template<typename SizeType>
  class I2scfgrRegisterUnion
  {
  public:
    union
    {
      SizeType value;
      BitFieldModel<SizeType, 11, 1> i2smod;
      BitFieldModel<SizeType, 10, 1> i2se;
      BitFieldModel<SizeType, 8, 2> i2scfg;
      BitFieldModel<SizeType, 7, 1> pcmsync;
      BitFieldModel<SizeType, 4, 2> i2sstd;
      BitFieldModel<SizeType, 3, 1> ckpol;
      BitFieldModel<SizeType, 1, 2> datlen;
      BitFieldModel<SizeType, 0, 1> chlen;
    };
  };

private:
  template<typename SizeType, std::uintptr_t Address>
  class I2scfgrRegisterModel : public RegisterModel<I2scfgrRegisterUnion<SizeType>, I2s3extAddressPolicy<Address>>
  {
  public:
    using reg = I2scfgrRegisterUnion<SizeType>;

  public:
    using i2smod = FieldModel<reg, I2s3extAddressPolicy<Address>, 11, 1>;
    using i2se = FieldModel<reg, I2s3extAddressPolicy<Address>, 10, 1>;
    using i2scfg = FieldModel<reg, I2s3extAddressPolicy<Address>, 8, 2>;
    using pcmsync = FieldModel<reg, I2s3extAddressPolicy<Address>, 7, 1>;
    using i2sstd = FieldModel<reg, I2s3extAddressPolicy<Address>, 4, 2>;
    using ckpol = FieldModel<reg, I2s3extAddressPolicy<Address>, 3, 1>;
    using datlen = FieldModel<reg, I2s3extAddressPolicy<Address>, 1, 2>;
    using chlen = FieldModel<reg, I2s3extAddressPolicy<Address>, 0, 1>;
  };

public:
  using i2scfgr = I2scfgrRegisterModel<uint32_t, I2s3extBaseAddress + 0x0000001C>;

/**
 * REGISTER I2SPR
 */
private:
  template<typename SizeType>
  class I2sprRegisterUnion
  {
  public:
    union
    {
      SizeType value;
      BitFieldModel<SizeType, 9, 1> mckoe;
      BitFieldModel<SizeType, 8, 1> odd;
      BitFieldModel<SizeType, 0, 8> i2sdiv;
    };
  };

private:
  template<typename SizeType, std::uintptr_t Address>
  class I2sprRegisterModel : public RegisterModel<I2sprRegisterUnion<SizeType>, I2s3extAddressPolicy<Address>>
  {
  public:
    using reg = I2sprRegisterUnion<SizeType>;

  public:
    using mckoe = FieldModel<reg, I2s3extAddressPolicy<Address>, 9, 1>;
    using odd = FieldModel<reg, I2s3extAddressPolicy<Address>, 8, 1>;
    using i2sdiv = FieldModel<reg, I2s3extAddressPolicy<Address>, 0, 8>;
  };

public:
  using i2spr = I2sprRegisterModel<uint32_t, I2s3extBaseAddress + 0x00000020>;


};

}

#endif /* DRAL_STM32F411_I2S3EXT_H */