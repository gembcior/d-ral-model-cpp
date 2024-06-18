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

#ifndef DRAL_STM32F411_SDIO_H
#define DRAL_STM32F411_SDIO_H

#include "dral/bitfield_model.h"
#include "dral/group_address_policy.h"
#include "dral/layer_offset_policy.h"
#include "dral/register_model.h"

namespace dral::stm32f411 {

class Sdio
{
public:
  static constexpr uintptr_t SdioBaseAddress = 0x40012C00;

private:
  template<std::uintptr_t Address>
  using SdioAddressPolicy = GroupAddressPolicy<Address>;

/**
 * REGISTER POWER
 */
private:
  template<typename SizeType>
  class PowerRegisterUnion
  {
  public:
    union
    {
      SizeType value;
      BitFieldModel<SizeType, 0, 2> pwrctrl;
    };
  };

private:
  template<typename SizeType, std::uintptr_t Address>
  class PowerRegisterModel : public RegisterModel<PowerRegisterUnion<SizeType>, SdioAddressPolicy<Address>>
  {
  public:
    using reg = PowerRegisterUnion<SizeType>;

  public:
    using pwrctrl = FieldModel<reg, SdioAddressPolicy<Address>, 0, 2>;
  };

public:
  using power = PowerRegisterModel<uint32_t, SdioBaseAddress + 0x00000000>;

/**
 * REGISTER CLKCR
 */
private:
  template<typename SizeType>
  class ClkcrRegisterUnion
  {
  public:
    union
    {
      SizeType value;
      BitFieldModel<SizeType, 14, 1> hwfcEn;
      BitFieldModel<SizeType, 13, 1> negedge;
      BitFieldModel<SizeType, 11, 2> widbus;
      BitFieldModel<SizeType, 10, 1> bypass;
      BitFieldModel<SizeType, 9, 1> pwrsav;
      BitFieldModel<SizeType, 8, 1> clken;
      BitFieldModel<SizeType, 0, 8> clkdiv;
    };
  };

private:
  template<typename SizeType, std::uintptr_t Address>
  class ClkcrRegisterModel : public RegisterModel<ClkcrRegisterUnion<SizeType>, SdioAddressPolicy<Address>>
  {
  public:
    using reg = ClkcrRegisterUnion<SizeType>;

  public:
    using hwfcEn = FieldModel<reg, SdioAddressPolicy<Address>, 14, 1>;
    using negedge = FieldModel<reg, SdioAddressPolicy<Address>, 13, 1>;
    using widbus = FieldModel<reg, SdioAddressPolicy<Address>, 11, 2>;
    using bypass = FieldModel<reg, SdioAddressPolicy<Address>, 10, 1>;
    using pwrsav = FieldModel<reg, SdioAddressPolicy<Address>, 9, 1>;
    using clken = FieldModel<reg, SdioAddressPolicy<Address>, 8, 1>;
    using clkdiv = FieldModel<reg, SdioAddressPolicy<Address>, 0, 8>;
  };

public:
  using clkcr = ClkcrRegisterModel<uint32_t, SdioBaseAddress + 0x00000004>;

/**
 * REGISTER ARG
 */
private:
  template<typename SizeType>
  class ArgRegisterUnion
  {
  public:
    union
    {
      SizeType value;
      BitFieldModel<SizeType, 0, 32> cmdarg;
    };
  };

private:
  template<typename SizeType, std::uintptr_t Address>
  class ArgRegisterModel : public RegisterModel<ArgRegisterUnion<SizeType>, SdioAddressPolicy<Address>>
  {
  public:
    using reg = ArgRegisterUnion<SizeType>;

  public:
    using cmdarg = FieldModel<reg, SdioAddressPolicy<Address>, 0, 32>;
  };

public:
  using arg = ArgRegisterModel<uint32_t, SdioBaseAddress + 0x00000008>;

/**
 * REGISTER CMD
 */
private:
  template<typename SizeType>
  class CmdRegisterUnion
  {
  public:
    union
    {
      SizeType value;
      BitFieldModel<SizeType, 14, 1> ceAtacmd;
      BitFieldModel<SizeType, 13, 1> nien;
      BitFieldModel<SizeType, 12, 1> encmdcompl;
      BitFieldModel<SizeType, 11, 1> sdiosuspend;
      BitFieldModel<SizeType, 10, 1> cpsmen;
      BitFieldModel<SizeType, 9, 1> waitpend;
      BitFieldModel<SizeType, 8, 1> waitint;
      BitFieldModel<SizeType, 6, 2> waitresp;
      BitFieldModel<SizeType, 0, 6> cmdindex;
    };
  };

private:
  template<typename SizeType, std::uintptr_t Address>
  class CmdRegisterModel : public RegisterModel<CmdRegisterUnion<SizeType>, SdioAddressPolicy<Address>>
  {
  public:
    using reg = CmdRegisterUnion<SizeType>;

  public:
    using ceAtacmd = FieldModel<reg, SdioAddressPolicy<Address>, 14, 1>;
    using nien = FieldModel<reg, SdioAddressPolicy<Address>, 13, 1>;
    using encmdcompl = FieldModel<reg, SdioAddressPolicy<Address>, 12, 1>;
    using sdiosuspend = FieldModel<reg, SdioAddressPolicy<Address>, 11, 1>;
    using cpsmen = FieldModel<reg, SdioAddressPolicy<Address>, 10, 1>;
    using waitpend = FieldModel<reg, SdioAddressPolicy<Address>, 9, 1>;
    using waitint = FieldModel<reg, SdioAddressPolicy<Address>, 8, 1>;
    using waitresp = FieldModel<reg, SdioAddressPolicy<Address>, 6, 2>;
    using cmdindex = FieldModel<reg, SdioAddressPolicy<Address>, 0, 6>;
  };

public:
  using cmd = CmdRegisterModel<uint32_t, SdioBaseAddress + 0x0000000C>;

/**
 * REGISTER RESPCMD
 */
private:
  template<typename SizeType>
  class RespcmdRegisterUnion
  {
  public:
    union
    {
      SizeType value;
      BitFieldModel<SizeType, 0, 6> respcmd;
    };
  };

private:
  template<typename SizeType, std::uintptr_t Address>
  class RespcmdRegisterModel : public RegisterModel<RespcmdRegisterUnion<SizeType>, SdioAddressPolicy<Address>>
  {
  public:
    using reg = RespcmdRegisterUnion<SizeType>;

  public:
    using respcmd = FieldModel<reg, SdioAddressPolicy<Address>, 0, 6>;
  };

public:
  using respcmd = RespcmdRegisterModel<uint32_t, SdioBaseAddress + 0x00000010>;

/**
 * REGISTER RESP1
 */
private:
  template<typename SizeType>
  class Resp1RegisterUnion
  {
  public:
    union
    {
      SizeType value;
      BitFieldModel<SizeType, 0, 32> cardstatus1;
    };
  };

private:
  template<typename SizeType, std::uintptr_t Address>
  class Resp1RegisterModel : public RegisterModel<Resp1RegisterUnion<SizeType>, SdioAddressPolicy<Address>>
  {
  public:
    using reg = Resp1RegisterUnion<SizeType>;

  public:
    using cardstatus1 = FieldModel<reg, SdioAddressPolicy<Address>, 0, 32>;
  };

public:
  using resp1 = Resp1RegisterModel<uint32_t, SdioBaseAddress + 0x00000014>;

/**
 * REGISTER RESP2
 */
private:
  template<typename SizeType>
  class Resp2RegisterUnion
  {
  public:
    union
    {
      SizeType value;
      BitFieldModel<SizeType, 0, 32> cardstatus2;
    };
  };

private:
  template<typename SizeType, std::uintptr_t Address>
  class Resp2RegisterModel : public RegisterModel<Resp2RegisterUnion<SizeType>, SdioAddressPolicy<Address>>
  {
  public:
    using reg = Resp2RegisterUnion<SizeType>;

  public:
    using cardstatus2 = FieldModel<reg, SdioAddressPolicy<Address>, 0, 32>;
  };

public:
  using resp2 = Resp2RegisterModel<uint32_t, SdioBaseAddress + 0x00000018>;

/**
 * REGISTER RESP3
 */
private:
  template<typename SizeType>
  class Resp3RegisterUnion
  {
  public:
    union
    {
      SizeType value;
      BitFieldModel<SizeType, 0, 32> cardstatus3;
    };
  };

private:
  template<typename SizeType, std::uintptr_t Address>
  class Resp3RegisterModel : public RegisterModel<Resp3RegisterUnion<SizeType>, SdioAddressPolicy<Address>>
  {
  public:
    using reg = Resp3RegisterUnion<SizeType>;

  public:
    using cardstatus3 = FieldModel<reg, SdioAddressPolicy<Address>, 0, 32>;
  };

public:
  using resp3 = Resp3RegisterModel<uint32_t, SdioBaseAddress + 0x0000001C>;

/**
 * REGISTER RESP4
 */
private:
  template<typename SizeType>
  class Resp4RegisterUnion
  {
  public:
    union
    {
      SizeType value;
      BitFieldModel<SizeType, 0, 32> cardstatus4;
    };
  };

private:
  template<typename SizeType, std::uintptr_t Address>
  class Resp4RegisterModel : public RegisterModel<Resp4RegisterUnion<SizeType>, SdioAddressPolicy<Address>>
  {
  public:
    using reg = Resp4RegisterUnion<SizeType>;

  public:
    using cardstatus4 = FieldModel<reg, SdioAddressPolicy<Address>, 0, 32>;
  };

public:
  using resp4 = Resp4RegisterModel<uint32_t, SdioBaseAddress + 0x00000020>;

/**
 * REGISTER DTIMER
 */
private:
  template<typename SizeType>
  class DtimerRegisterUnion
  {
  public:
    union
    {
      SizeType value;
      BitFieldModel<SizeType, 0, 32> datatime;
    };
  };

private:
  template<typename SizeType, std::uintptr_t Address>
  class DtimerRegisterModel : public RegisterModel<DtimerRegisterUnion<SizeType>, SdioAddressPolicy<Address>>
  {
  public:
    using reg = DtimerRegisterUnion<SizeType>;

  public:
    using datatime = FieldModel<reg, SdioAddressPolicy<Address>, 0, 32>;
  };

public:
  using dtimer = DtimerRegisterModel<uint32_t, SdioBaseAddress + 0x00000024>;

/**
 * REGISTER DLEN
 */
private:
  template<typename SizeType>
  class DlenRegisterUnion
  {
  public:
    union
    {
      SizeType value;
      BitFieldModel<SizeType, 0, 25> datalength;
    };
  };

private:
  template<typename SizeType, std::uintptr_t Address>
  class DlenRegisterModel : public RegisterModel<DlenRegisterUnion<SizeType>, SdioAddressPolicy<Address>>
  {
  public:
    using reg = DlenRegisterUnion<SizeType>;

  public:
    using datalength = FieldModel<reg, SdioAddressPolicy<Address>, 0, 25>;
  };

public:
  using dlen = DlenRegisterModel<uint32_t, SdioBaseAddress + 0x00000028>;

/**
 * REGISTER DCTRL
 */
private:
  template<typename SizeType>
  class DctrlRegisterUnion
  {
  public:
    union
    {
      SizeType value;
      BitFieldModel<SizeType, 11, 1> sdioen;
      BitFieldModel<SizeType, 10, 1> rwmod;
      BitFieldModel<SizeType, 9, 1> rwstop;
      BitFieldModel<SizeType, 8, 1> rwstart;
      BitFieldModel<SizeType, 4, 4> dblocksize;
      BitFieldModel<SizeType, 3, 1> dmaen;
      BitFieldModel<SizeType, 2, 1> dtmode;
      BitFieldModel<SizeType, 1, 1> dtdir;
      BitFieldModel<SizeType, 0, 1> dten;
    };
  };

private:
  template<typename SizeType, std::uintptr_t Address>
  class DctrlRegisterModel : public RegisterModel<DctrlRegisterUnion<SizeType>, SdioAddressPolicy<Address>>
  {
  public:
    using reg = DctrlRegisterUnion<SizeType>;

  public:
    using sdioen = FieldModel<reg, SdioAddressPolicy<Address>, 11, 1>;
    using rwmod = FieldModel<reg, SdioAddressPolicy<Address>, 10, 1>;
    using rwstop = FieldModel<reg, SdioAddressPolicy<Address>, 9, 1>;
    using rwstart = FieldModel<reg, SdioAddressPolicy<Address>, 8, 1>;
    using dblocksize = FieldModel<reg, SdioAddressPolicy<Address>, 4, 4>;
    using dmaen = FieldModel<reg, SdioAddressPolicy<Address>, 3, 1>;
    using dtmode = FieldModel<reg, SdioAddressPolicy<Address>, 2, 1>;
    using dtdir = FieldModel<reg, SdioAddressPolicy<Address>, 1, 1>;
    using dten = FieldModel<reg, SdioAddressPolicy<Address>, 0, 1>;
  };

public:
  using dctrl = DctrlRegisterModel<uint32_t, SdioBaseAddress + 0x0000002C>;

/**
 * REGISTER DCOUNT
 */
private:
  template<typename SizeType>
  class DcountRegisterUnion
  {
  public:
    union
    {
      SizeType value;
      BitFieldModel<SizeType, 0, 25> datacount;
    };
  };

private:
  template<typename SizeType, std::uintptr_t Address>
  class DcountRegisterModel : public RegisterModel<DcountRegisterUnion<SizeType>, SdioAddressPolicy<Address>>
  {
  public:
    using reg = DcountRegisterUnion<SizeType>;

  public:
    using datacount = FieldModel<reg, SdioAddressPolicy<Address>, 0, 25>;
  };

public:
  using dcount = DcountRegisterModel<uint32_t, SdioBaseAddress + 0x00000030>;

/**
 * REGISTER STA
 */
private:
  template<typename SizeType>
  class StaRegisterUnion
  {
  public:
    union
    {
      SizeType value;
      BitFieldModel<SizeType, 23, 1> ceataend;
      BitFieldModel<SizeType, 22, 1> sdioit;
      BitFieldModel<SizeType, 21, 1> rxdavl;
      BitFieldModel<SizeType, 20, 1> txdavl;
      BitFieldModel<SizeType, 19, 1> rxfifoe;
      BitFieldModel<SizeType, 18, 1> txfifoe;
      BitFieldModel<SizeType, 17, 1> rxfifof;
      BitFieldModel<SizeType, 16, 1> txfifof;
      BitFieldModel<SizeType, 15, 1> rxfifohf;
      BitFieldModel<SizeType, 14, 1> txfifohe;
      BitFieldModel<SizeType, 13, 1> rxact;
      BitFieldModel<SizeType, 12, 1> txact;
      BitFieldModel<SizeType, 11, 1> cmdact;
      BitFieldModel<SizeType, 10, 1> dbckend;
      BitFieldModel<SizeType, 9, 1> stbiterr;
      BitFieldModel<SizeType, 8, 1> dataend;
      BitFieldModel<SizeType, 7, 1> cmdsent;
      BitFieldModel<SizeType, 6, 1> cmdrend;
      BitFieldModel<SizeType, 5, 1> rxoverr;
      BitFieldModel<SizeType, 4, 1> txunderr;
      BitFieldModel<SizeType, 3, 1> dtimeout;
      BitFieldModel<SizeType, 2, 1> ctimeout;
      BitFieldModel<SizeType, 1, 1> dcrcfail;
      BitFieldModel<SizeType, 0, 1> ccrcfail;
    };
  };

private:
  template<typename SizeType, std::uintptr_t Address>
  class StaRegisterModel : public RegisterModel<StaRegisterUnion<SizeType>, SdioAddressPolicy<Address>>
  {
  public:
    using reg = StaRegisterUnion<SizeType>;

  public:
    using ceataend = FieldModel<reg, SdioAddressPolicy<Address>, 23, 1>;
    using sdioit = FieldModel<reg, SdioAddressPolicy<Address>, 22, 1>;
    using rxdavl = FieldModel<reg, SdioAddressPolicy<Address>, 21, 1>;
    using txdavl = FieldModel<reg, SdioAddressPolicy<Address>, 20, 1>;
    using rxfifoe = FieldModel<reg, SdioAddressPolicy<Address>, 19, 1>;
    using txfifoe = FieldModel<reg, SdioAddressPolicy<Address>, 18, 1>;
    using rxfifof = FieldModel<reg, SdioAddressPolicy<Address>, 17, 1>;
    using txfifof = FieldModel<reg, SdioAddressPolicy<Address>, 16, 1>;
    using rxfifohf = FieldModel<reg, SdioAddressPolicy<Address>, 15, 1>;
    using txfifohe = FieldModel<reg, SdioAddressPolicy<Address>, 14, 1>;
    using rxact = FieldModel<reg, SdioAddressPolicy<Address>, 13, 1>;
    using txact = FieldModel<reg, SdioAddressPolicy<Address>, 12, 1>;
    using cmdact = FieldModel<reg, SdioAddressPolicy<Address>, 11, 1>;
    using dbckend = FieldModel<reg, SdioAddressPolicy<Address>, 10, 1>;
    using stbiterr = FieldModel<reg, SdioAddressPolicy<Address>, 9, 1>;
    using dataend = FieldModel<reg, SdioAddressPolicy<Address>, 8, 1>;
    using cmdsent = FieldModel<reg, SdioAddressPolicy<Address>, 7, 1>;
    using cmdrend = FieldModel<reg, SdioAddressPolicy<Address>, 6, 1>;
    using rxoverr = FieldModel<reg, SdioAddressPolicy<Address>, 5, 1>;
    using txunderr = FieldModel<reg, SdioAddressPolicy<Address>, 4, 1>;
    using dtimeout = FieldModel<reg, SdioAddressPolicy<Address>, 3, 1>;
    using ctimeout = FieldModel<reg, SdioAddressPolicy<Address>, 2, 1>;
    using dcrcfail = FieldModel<reg, SdioAddressPolicy<Address>, 1, 1>;
    using ccrcfail = FieldModel<reg, SdioAddressPolicy<Address>, 0, 1>;
  };

public:
  using sta = StaRegisterModel<uint32_t, SdioBaseAddress + 0x00000034>;

/**
 * REGISTER ICR
 */
private:
  template<typename SizeType>
  class IcrRegisterUnion
  {
  public:
    union
    {
      SizeType value;
      BitFieldModel<SizeType, 23, 1> ceataendc;
      BitFieldModel<SizeType, 22, 1> sdioitc;
      BitFieldModel<SizeType, 10, 1> dbckendc;
      BitFieldModel<SizeType, 9, 1> stbiterrc;
      BitFieldModel<SizeType, 8, 1> dataendc;
      BitFieldModel<SizeType, 7, 1> cmdsentc;
      BitFieldModel<SizeType, 6, 1> cmdrendc;
      BitFieldModel<SizeType, 5, 1> rxoverrc;
      BitFieldModel<SizeType, 4, 1> txunderrc;
      BitFieldModel<SizeType, 3, 1> dtimeoutc;
      BitFieldModel<SizeType, 2, 1> ctimeoutc;
      BitFieldModel<SizeType, 1, 1> dcrcfailc;
      BitFieldModel<SizeType, 0, 1> ccrcfailc;
    };
  };

private:
  template<typename SizeType, std::uintptr_t Address>
  class IcrRegisterModel : public RegisterModel<IcrRegisterUnion<SizeType>, SdioAddressPolicy<Address>>
  {
  public:
    using reg = IcrRegisterUnion<SizeType>;

  public:
    using ceataendc = FieldModel<reg, SdioAddressPolicy<Address>, 23, 1>;
    using sdioitc = FieldModel<reg, SdioAddressPolicy<Address>, 22, 1>;
    using dbckendc = FieldModel<reg, SdioAddressPolicy<Address>, 10, 1>;
    using stbiterrc = FieldModel<reg, SdioAddressPolicy<Address>, 9, 1>;
    using dataendc = FieldModel<reg, SdioAddressPolicy<Address>, 8, 1>;
    using cmdsentc = FieldModel<reg, SdioAddressPolicy<Address>, 7, 1>;
    using cmdrendc = FieldModel<reg, SdioAddressPolicy<Address>, 6, 1>;
    using rxoverrc = FieldModel<reg, SdioAddressPolicy<Address>, 5, 1>;
    using txunderrc = FieldModel<reg, SdioAddressPolicy<Address>, 4, 1>;
    using dtimeoutc = FieldModel<reg, SdioAddressPolicy<Address>, 3, 1>;
    using ctimeoutc = FieldModel<reg, SdioAddressPolicy<Address>, 2, 1>;
    using dcrcfailc = FieldModel<reg, SdioAddressPolicy<Address>, 1, 1>;
    using ccrcfailc = FieldModel<reg, SdioAddressPolicy<Address>, 0, 1>;
  };

public:
  using icr = IcrRegisterModel<uint32_t, SdioBaseAddress + 0x00000038>;

/**
 * REGISTER MASK
 */
private:
  template<typename SizeType>
  class MaskRegisterUnion
  {
  public:
    union
    {
      SizeType value;
      BitFieldModel<SizeType, 23, 1> ceataendie;
      BitFieldModel<SizeType, 22, 1> sdioitie;
      BitFieldModel<SizeType, 21, 1> rxdavlie;
      BitFieldModel<SizeType, 20, 1> txdavlie;
      BitFieldModel<SizeType, 19, 1> rxfifoeie;
      BitFieldModel<SizeType, 18, 1> txfifoeie;
      BitFieldModel<SizeType, 17, 1> rxfifofie;
      BitFieldModel<SizeType, 16, 1> txfifofie;
      BitFieldModel<SizeType, 15, 1> rxfifohfie;
      BitFieldModel<SizeType, 14, 1> txfifoheie;
      BitFieldModel<SizeType, 13, 1> rxactie;
      BitFieldModel<SizeType, 12, 1> txactie;
      BitFieldModel<SizeType, 11, 1> cmdactie;
      BitFieldModel<SizeType, 10, 1> dbckendie;
      BitFieldModel<SizeType, 9, 1> stbiterrie;
      BitFieldModel<SizeType, 8, 1> dataendie;
      BitFieldModel<SizeType, 7, 1> cmdsentie;
      BitFieldModel<SizeType, 6, 1> cmdrendie;
      BitFieldModel<SizeType, 5, 1> rxoverrie;
      BitFieldModel<SizeType, 4, 1> txunderrie;
      BitFieldModel<SizeType, 3, 1> dtimeoutie;
      BitFieldModel<SizeType, 2, 1> ctimeoutie;
      BitFieldModel<SizeType, 1, 1> dcrcfailie;
      BitFieldModel<SizeType, 0, 1> ccrcfailie;
    };
  };

private:
  template<typename SizeType, std::uintptr_t Address>
  class MaskRegisterModel : public RegisterModel<MaskRegisterUnion<SizeType>, SdioAddressPolicy<Address>>
  {
  public:
    using reg = MaskRegisterUnion<SizeType>;

  public:
    using ceataendie = FieldModel<reg, SdioAddressPolicy<Address>, 23, 1>;
    using sdioitie = FieldModel<reg, SdioAddressPolicy<Address>, 22, 1>;
    using rxdavlie = FieldModel<reg, SdioAddressPolicy<Address>, 21, 1>;
    using txdavlie = FieldModel<reg, SdioAddressPolicy<Address>, 20, 1>;
    using rxfifoeie = FieldModel<reg, SdioAddressPolicy<Address>, 19, 1>;
    using txfifoeie = FieldModel<reg, SdioAddressPolicy<Address>, 18, 1>;
    using rxfifofie = FieldModel<reg, SdioAddressPolicy<Address>, 17, 1>;
    using txfifofie = FieldModel<reg, SdioAddressPolicy<Address>, 16, 1>;
    using rxfifohfie = FieldModel<reg, SdioAddressPolicy<Address>, 15, 1>;
    using txfifoheie = FieldModel<reg, SdioAddressPolicy<Address>, 14, 1>;
    using rxactie = FieldModel<reg, SdioAddressPolicy<Address>, 13, 1>;
    using txactie = FieldModel<reg, SdioAddressPolicy<Address>, 12, 1>;
    using cmdactie = FieldModel<reg, SdioAddressPolicy<Address>, 11, 1>;
    using dbckendie = FieldModel<reg, SdioAddressPolicy<Address>, 10, 1>;
    using stbiterrie = FieldModel<reg, SdioAddressPolicy<Address>, 9, 1>;
    using dataendie = FieldModel<reg, SdioAddressPolicy<Address>, 8, 1>;
    using cmdsentie = FieldModel<reg, SdioAddressPolicy<Address>, 7, 1>;
    using cmdrendie = FieldModel<reg, SdioAddressPolicy<Address>, 6, 1>;
    using rxoverrie = FieldModel<reg, SdioAddressPolicy<Address>, 5, 1>;
    using txunderrie = FieldModel<reg, SdioAddressPolicy<Address>, 4, 1>;
    using dtimeoutie = FieldModel<reg, SdioAddressPolicy<Address>, 3, 1>;
    using ctimeoutie = FieldModel<reg, SdioAddressPolicy<Address>, 2, 1>;
    using dcrcfailie = FieldModel<reg, SdioAddressPolicy<Address>, 1, 1>;
    using ccrcfailie = FieldModel<reg, SdioAddressPolicy<Address>, 0, 1>;
  };

public:
  using mask = MaskRegisterModel<uint32_t, SdioBaseAddress + 0x0000003C>;

/**
 * REGISTER FIFOCNT
 */
private:
  template<typename SizeType>
  class FifocntRegisterUnion
  {
  public:
    union
    {
      SizeType value;
      BitFieldModel<SizeType, 0, 24> fifocount;
    };
  };

private:
  template<typename SizeType, std::uintptr_t Address>
  class FifocntRegisterModel : public RegisterModel<FifocntRegisterUnion<SizeType>, SdioAddressPolicy<Address>>
  {
  public:
    using reg = FifocntRegisterUnion<SizeType>;

  public:
    using fifocount = FieldModel<reg, SdioAddressPolicy<Address>, 0, 24>;
  };

public:
  using fifocnt = FifocntRegisterModel<uint32_t, SdioBaseAddress + 0x00000048>;

/**
 * REGISTER FIFO
 */
private:
  template<typename SizeType>
  class FifoRegisterUnion
  {
  public:
    union
    {
      SizeType value;
      BitFieldModel<SizeType, 0, 32> fifodata;
    };
  };

private:
  template<typename SizeType, std::uintptr_t Address>
  class FifoRegisterModel : public RegisterModel<FifoRegisterUnion<SizeType>, SdioAddressPolicy<Address>>
  {
  public:
    using reg = FifoRegisterUnion<SizeType>;

  public:
    using fifodata = FieldModel<reg, SdioAddressPolicy<Address>, 0, 32>;
  };

public:
  using fifo = FifoRegisterModel<uint32_t, SdioBaseAddress + 0x00000080>;


};

}

#endif /* DRAL_STM32F411_SDIO_H */