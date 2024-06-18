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

#ifndef DRAL_STM32F411_OTG_FS_GLOBAL_H
#define DRAL_STM32F411_OTG_FS_GLOBAL_H

#include "dral/bitfield_model.h"
#include "dral/group_address_policy.h"
#include "dral/layer_offset_policy.h"
#include "dral/register_model.h"

namespace dral::stm32f411 {

class OtgFsGlobal
{
public:
  static constexpr uintptr_t OtgFsGlobalBaseAddress = 0x50000000;

private:
  template<std::uintptr_t Address>
  using OtgFsGlobalAddressPolicy = GroupAddressPolicy<Address>;

/**
 * REGISTER FS_GOTGCTL
 */
private:
  template<typename SizeType>
  class FsGotgctlRegisterUnion
  {
  public:
    union
    {
      SizeType value;
      BitFieldModel<SizeType, 0, 1> srqscs;
      BitFieldModel<SizeType, 1, 1> srq;
      BitFieldModel<SizeType, 4, 1> avaloen;
      BitFieldModel<SizeType, 6, 1> bvaloen;
      BitFieldModel<SizeType, 7, 1> bvaloval;
      BitFieldModel<SizeType, 8, 1> hngscs;
      BitFieldModel<SizeType, 9, 1> hnprq;
      BitFieldModel<SizeType, 10, 1> hshnpen;
      BitFieldModel<SizeType, 11, 1> dhnpen;
      BitFieldModel<SizeType, 16, 1> cidsts;
      BitFieldModel<SizeType, 17, 1> dbct;
      BitFieldModel<SizeType, 18, 1> asvld;
      BitFieldModel<SizeType, 19, 1> bsvld;
    };
  };

private:
  template<typename SizeType, std::uintptr_t Address>
  class FsGotgctlRegisterModel : public RegisterModel<FsGotgctlRegisterUnion<SizeType>, OtgFsGlobalAddressPolicy<Address>>
  {
  public:
    using reg = FsGotgctlRegisterUnion<SizeType>;

  public:
    using srqscs = FieldModel<reg, OtgFsGlobalAddressPolicy<Address>, 0, 1>;
    using srq = FieldModel<reg, OtgFsGlobalAddressPolicy<Address>, 1, 1>;
    using avaloen = FieldModel<reg, OtgFsGlobalAddressPolicy<Address>, 4, 1>;
    using bvaloen = FieldModel<reg, OtgFsGlobalAddressPolicy<Address>, 6, 1>;
    using bvaloval = FieldModel<reg, OtgFsGlobalAddressPolicy<Address>, 7, 1>;
    using hngscs = FieldModel<reg, OtgFsGlobalAddressPolicy<Address>, 8, 1>;
    using hnprq = FieldModel<reg, OtgFsGlobalAddressPolicy<Address>, 9, 1>;
    using hshnpen = FieldModel<reg, OtgFsGlobalAddressPolicy<Address>, 10, 1>;
    using dhnpen = FieldModel<reg, OtgFsGlobalAddressPolicy<Address>, 11, 1>;
    using cidsts = FieldModel<reg, OtgFsGlobalAddressPolicy<Address>, 16, 1>;
    using dbct = FieldModel<reg, OtgFsGlobalAddressPolicy<Address>, 17, 1>;
    using asvld = FieldModel<reg, OtgFsGlobalAddressPolicy<Address>, 18, 1>;
    using bsvld = FieldModel<reg, OtgFsGlobalAddressPolicy<Address>, 19, 1>;
  };

public:
  using fsGotgctl = FsGotgctlRegisterModel<uint32_t, OtgFsGlobalBaseAddress + 0x00000000>;

/**
 * REGISTER FS_GOTGINT
 */
private:
  template<typename SizeType>
  class FsGotgintRegisterUnion
  {
  public:
    union
    {
      SizeType value;
      BitFieldModel<SizeType, 2, 1> sedet;
      BitFieldModel<SizeType, 8, 1> srsschg;
      BitFieldModel<SizeType, 9, 1> hnsschg;
      BitFieldModel<SizeType, 17, 1> hngdet;
      BitFieldModel<SizeType, 18, 1> adtochg;
      BitFieldModel<SizeType, 19, 1> dbcdne;
    };
  };

private:
  template<typename SizeType, std::uintptr_t Address>
  class FsGotgintRegisterModel : public RegisterModel<FsGotgintRegisterUnion<SizeType>, OtgFsGlobalAddressPolicy<Address>>
  {
  public:
    using reg = FsGotgintRegisterUnion<SizeType>;

  public:
    using sedet = FieldModel<reg, OtgFsGlobalAddressPolicy<Address>, 2, 1>;
    using srsschg = FieldModel<reg, OtgFsGlobalAddressPolicy<Address>, 8, 1>;
    using hnsschg = FieldModel<reg, OtgFsGlobalAddressPolicy<Address>, 9, 1>;
    using hngdet = FieldModel<reg, OtgFsGlobalAddressPolicy<Address>, 17, 1>;
    using adtochg = FieldModel<reg, OtgFsGlobalAddressPolicy<Address>, 18, 1>;
    using dbcdne = FieldModel<reg, OtgFsGlobalAddressPolicy<Address>, 19, 1>;
  };

public:
  using fsGotgint = FsGotgintRegisterModel<uint32_t, OtgFsGlobalBaseAddress + 0x00000004>;

/**
 * REGISTER FS_GAHBCFG
 */
private:
  template<typename SizeType>
  class FsGahbcfgRegisterUnion
  {
  public:
    union
    {
      SizeType value;
      BitFieldModel<SizeType, 0, 1> gint;
      BitFieldModel<SizeType, 7, 1> txfelvl;
      BitFieldModel<SizeType, 8, 1> ptxfelvl;
    };
  };

private:
  template<typename SizeType, std::uintptr_t Address>
  class FsGahbcfgRegisterModel : public RegisterModel<FsGahbcfgRegisterUnion<SizeType>, OtgFsGlobalAddressPolicy<Address>>
  {
  public:
    using reg = FsGahbcfgRegisterUnion<SizeType>;

  public:
    using gint = FieldModel<reg, OtgFsGlobalAddressPolicy<Address>, 0, 1>;
    using txfelvl = FieldModel<reg, OtgFsGlobalAddressPolicy<Address>, 7, 1>;
    using ptxfelvl = FieldModel<reg, OtgFsGlobalAddressPolicy<Address>, 8, 1>;
  };

public:
  using fsGahbcfg = FsGahbcfgRegisterModel<uint32_t, OtgFsGlobalBaseAddress + 0x00000008>;

/**
 * REGISTER FS_GUSBCFG
 */
private:
  template<typename SizeType>
  class FsGusbcfgRegisterUnion
  {
  public:
    union
    {
      SizeType value;
      BitFieldModel<SizeType, 0, 3> tocal;
      BitFieldModel<SizeType, 6, 1> physel;
      BitFieldModel<SizeType, 8, 1> srpcap;
      BitFieldModel<SizeType, 9, 1> hnpcap;
      BitFieldModel<SizeType, 10, 4> trdt;
      BitFieldModel<SizeType, 29, 1> fhmod;
      BitFieldModel<SizeType, 30, 1> fdmod;
      BitFieldModel<SizeType, 31, 1> ctxpkt;
    };
  };

private:
  template<typename SizeType, std::uintptr_t Address>
  class FsGusbcfgRegisterModel : public RegisterModel<FsGusbcfgRegisterUnion<SizeType>, OtgFsGlobalAddressPolicy<Address>>
  {
  public:
    using reg = FsGusbcfgRegisterUnion<SizeType>;

  public:
    using tocal = FieldModel<reg, OtgFsGlobalAddressPolicy<Address>, 0, 3>;
    using physel = FieldModel<reg, OtgFsGlobalAddressPolicy<Address>, 6, 1>;
    using srpcap = FieldModel<reg, OtgFsGlobalAddressPolicy<Address>, 8, 1>;
    using hnpcap = FieldModel<reg, OtgFsGlobalAddressPolicy<Address>, 9, 1>;
    using trdt = FieldModel<reg, OtgFsGlobalAddressPolicy<Address>, 10, 4>;
    using fhmod = FieldModel<reg, OtgFsGlobalAddressPolicy<Address>, 29, 1>;
    using fdmod = FieldModel<reg, OtgFsGlobalAddressPolicy<Address>, 30, 1>;
    using ctxpkt = FieldModel<reg, OtgFsGlobalAddressPolicy<Address>, 31, 1>;
  };

public:
  using fsGusbcfg = FsGusbcfgRegisterModel<uint32_t, OtgFsGlobalBaseAddress + 0x0000000C>;

/**
 * REGISTER FS_GRSTCTL
 */
private:
  template<typename SizeType>
  class FsGrstctlRegisterUnion
  {
  public:
    union
    {
      SizeType value;
      BitFieldModel<SizeType, 0, 1> csrst;
      BitFieldModel<SizeType, 1, 1> hsrst;
      BitFieldModel<SizeType, 2, 1> fcrst;
      BitFieldModel<SizeType, 4, 1> rxfflsh;
      BitFieldModel<SizeType, 5, 1> txfflsh;
      BitFieldModel<SizeType, 6, 5> txfnum;
      BitFieldModel<SizeType, 31, 1> ahbidl;
    };
  };

private:
  template<typename SizeType, std::uintptr_t Address>
  class FsGrstctlRegisterModel : public RegisterModel<FsGrstctlRegisterUnion<SizeType>, OtgFsGlobalAddressPolicy<Address>>
  {
  public:
    using reg = FsGrstctlRegisterUnion<SizeType>;

  public:
    using csrst = FieldModel<reg, OtgFsGlobalAddressPolicy<Address>, 0, 1>;
    using hsrst = FieldModel<reg, OtgFsGlobalAddressPolicy<Address>, 1, 1>;
    using fcrst = FieldModel<reg, OtgFsGlobalAddressPolicy<Address>, 2, 1>;
    using rxfflsh = FieldModel<reg, OtgFsGlobalAddressPolicy<Address>, 4, 1>;
    using txfflsh = FieldModel<reg, OtgFsGlobalAddressPolicy<Address>, 5, 1>;
    using txfnum = FieldModel<reg, OtgFsGlobalAddressPolicy<Address>, 6, 5>;
    using ahbidl = FieldModel<reg, OtgFsGlobalAddressPolicy<Address>, 31, 1>;
  };

public:
  using fsGrstctl = FsGrstctlRegisterModel<uint32_t, OtgFsGlobalBaseAddress + 0x00000010>;

/**
 * REGISTER FS_GINTSTS
 */
private:
  template<typename SizeType>
  class FsGintstsRegisterUnion
  {
  public:
    union
    {
      SizeType value;
      BitFieldModel<SizeType, 0, 1> cmod;
      BitFieldModel<SizeType, 1, 1> mmis;
      BitFieldModel<SizeType, 2, 1> otgint;
      BitFieldModel<SizeType, 3, 1> sof;
      BitFieldModel<SizeType, 4, 1> rxflvl;
      BitFieldModel<SizeType, 5, 1> nptxfe;
      BitFieldModel<SizeType, 6, 1> ginakeff;
      BitFieldModel<SizeType, 7, 1> goutnakeff;
      BitFieldModel<SizeType, 10, 1> esusp;
      BitFieldModel<SizeType, 11, 1> usbsusp;
      BitFieldModel<SizeType, 12, 1> usbrst;
      BitFieldModel<SizeType, 13, 1> enumdne;
      BitFieldModel<SizeType, 14, 1> isoodrp;
      BitFieldModel<SizeType, 15, 1> eopf;
      BitFieldModel<SizeType, 18, 1> iepint;
      BitFieldModel<SizeType, 19, 1> oepint;
      BitFieldModel<SizeType, 20, 1> iisoixfr;
      BitFieldModel<SizeType, 21, 1> ipxfrIncompisoout;
      BitFieldModel<SizeType, 24, 1> hprtint;
      BitFieldModel<SizeType, 25, 1> hcint;
      BitFieldModel<SizeType, 26, 1> ptxfe;
      BitFieldModel<SizeType, 28, 1> cidschg;
      BitFieldModel<SizeType, 29, 1> discint;
      BitFieldModel<SizeType, 30, 1> srqint;
      BitFieldModel<SizeType, 31, 1> wkupint;
    };
  };

private:
  template<typename SizeType, std::uintptr_t Address>
  class FsGintstsRegisterModel : public RegisterModel<FsGintstsRegisterUnion<SizeType>, OtgFsGlobalAddressPolicy<Address>>
  {
  public:
    using reg = FsGintstsRegisterUnion<SizeType>;

  public:
    using cmod = FieldModel<reg, OtgFsGlobalAddressPolicy<Address>, 0, 1>;
    using mmis = FieldModel<reg, OtgFsGlobalAddressPolicy<Address>, 1, 1>;
    using otgint = FieldModel<reg, OtgFsGlobalAddressPolicy<Address>, 2, 1>;
    using sof = FieldModel<reg, OtgFsGlobalAddressPolicy<Address>, 3, 1>;
    using rxflvl = FieldModel<reg, OtgFsGlobalAddressPolicy<Address>, 4, 1>;
    using nptxfe = FieldModel<reg, OtgFsGlobalAddressPolicy<Address>, 5, 1>;
    using ginakeff = FieldModel<reg, OtgFsGlobalAddressPolicy<Address>, 6, 1>;
    using goutnakeff = FieldModel<reg, OtgFsGlobalAddressPolicy<Address>, 7, 1>;
    using esusp = FieldModel<reg, OtgFsGlobalAddressPolicy<Address>, 10, 1>;
    using usbsusp = FieldModel<reg, OtgFsGlobalAddressPolicy<Address>, 11, 1>;
    using usbrst = FieldModel<reg, OtgFsGlobalAddressPolicy<Address>, 12, 1>;
    using enumdne = FieldModel<reg, OtgFsGlobalAddressPolicy<Address>, 13, 1>;
    using isoodrp = FieldModel<reg, OtgFsGlobalAddressPolicy<Address>, 14, 1>;
    using eopf = FieldModel<reg, OtgFsGlobalAddressPolicy<Address>, 15, 1>;
    using iepint = FieldModel<reg, OtgFsGlobalAddressPolicy<Address>, 18, 1>;
    using oepint = FieldModel<reg, OtgFsGlobalAddressPolicy<Address>, 19, 1>;
    using iisoixfr = FieldModel<reg, OtgFsGlobalAddressPolicy<Address>, 20, 1>;
    using ipxfrIncompisoout = FieldModel<reg, OtgFsGlobalAddressPolicy<Address>, 21, 1>;
    using hprtint = FieldModel<reg, OtgFsGlobalAddressPolicy<Address>, 24, 1>;
    using hcint = FieldModel<reg, OtgFsGlobalAddressPolicy<Address>, 25, 1>;
    using ptxfe = FieldModel<reg, OtgFsGlobalAddressPolicy<Address>, 26, 1>;
    using cidschg = FieldModel<reg, OtgFsGlobalAddressPolicy<Address>, 28, 1>;
    using discint = FieldModel<reg, OtgFsGlobalAddressPolicy<Address>, 29, 1>;
    using srqint = FieldModel<reg, OtgFsGlobalAddressPolicy<Address>, 30, 1>;
    using wkupint = FieldModel<reg, OtgFsGlobalAddressPolicy<Address>, 31, 1>;
  };

public:
  using fsGintsts = FsGintstsRegisterModel<uint32_t, OtgFsGlobalBaseAddress + 0x00000014>;

/**
 * REGISTER FS_GINTMSK
 */
private:
  template<typename SizeType>
  class FsGintmskRegisterUnion
  {
  public:
    union
    {
      SizeType value;
      BitFieldModel<SizeType, 1, 1> mmism;
      BitFieldModel<SizeType, 2, 1> otgint;
      BitFieldModel<SizeType, 3, 1> sofm;
      BitFieldModel<SizeType, 4, 1> rxflvlm;
      BitFieldModel<SizeType, 5, 1> nptxfem;
      BitFieldModel<SizeType, 6, 1> ginakeffm;
      BitFieldModel<SizeType, 7, 1> gonakeffm;
      BitFieldModel<SizeType, 10, 1> esuspm;
      BitFieldModel<SizeType, 11, 1> usbsuspm;
      BitFieldModel<SizeType, 12, 1> usbrst;
      BitFieldModel<SizeType, 13, 1> enumdnem;
      BitFieldModel<SizeType, 14, 1> isoodrpm;
      BitFieldModel<SizeType, 15, 1> eopfm;
      BitFieldModel<SizeType, 17, 1> epmism;
      BitFieldModel<SizeType, 18, 1> iepint;
      BitFieldModel<SizeType, 19, 1> oepint;
      BitFieldModel<SizeType, 20, 1> iisoixfrm;
      BitFieldModel<SizeType, 21, 1> ipxfrmIisooxfrm;
      BitFieldModel<SizeType, 24, 1> prtim;
      BitFieldModel<SizeType, 25, 1> hcim;
      BitFieldModel<SizeType, 26, 1> ptxfem;
      BitFieldModel<SizeType, 28, 1> cidschgm;
      BitFieldModel<SizeType, 29, 1> discint;
      BitFieldModel<SizeType, 30, 1> srqim;
      BitFieldModel<SizeType, 31, 1> wuim;
    };
  };

private:
  template<typename SizeType, std::uintptr_t Address>
  class FsGintmskRegisterModel : public RegisterModel<FsGintmskRegisterUnion<SizeType>, OtgFsGlobalAddressPolicy<Address>>
  {
  public:
    using reg = FsGintmskRegisterUnion<SizeType>;

  public:
    using mmism = FieldModel<reg, OtgFsGlobalAddressPolicy<Address>, 1, 1>;
    using otgint = FieldModel<reg, OtgFsGlobalAddressPolicy<Address>, 2, 1>;
    using sofm = FieldModel<reg, OtgFsGlobalAddressPolicy<Address>, 3, 1>;
    using rxflvlm = FieldModel<reg, OtgFsGlobalAddressPolicy<Address>, 4, 1>;
    using nptxfem = FieldModel<reg, OtgFsGlobalAddressPolicy<Address>, 5, 1>;
    using ginakeffm = FieldModel<reg, OtgFsGlobalAddressPolicy<Address>, 6, 1>;
    using gonakeffm = FieldModel<reg, OtgFsGlobalAddressPolicy<Address>, 7, 1>;
    using esuspm = FieldModel<reg, OtgFsGlobalAddressPolicy<Address>, 10, 1>;
    using usbsuspm = FieldModel<reg, OtgFsGlobalAddressPolicy<Address>, 11, 1>;
    using usbrst = FieldModel<reg, OtgFsGlobalAddressPolicy<Address>, 12, 1>;
    using enumdnem = FieldModel<reg, OtgFsGlobalAddressPolicy<Address>, 13, 1>;
    using isoodrpm = FieldModel<reg, OtgFsGlobalAddressPolicy<Address>, 14, 1>;
    using eopfm = FieldModel<reg, OtgFsGlobalAddressPolicy<Address>, 15, 1>;
    using epmism = FieldModel<reg, OtgFsGlobalAddressPolicy<Address>, 17, 1>;
    using iepint = FieldModel<reg, OtgFsGlobalAddressPolicy<Address>, 18, 1>;
    using oepint = FieldModel<reg, OtgFsGlobalAddressPolicy<Address>, 19, 1>;
    using iisoixfrm = FieldModel<reg, OtgFsGlobalAddressPolicy<Address>, 20, 1>;
    using ipxfrmIisooxfrm = FieldModel<reg, OtgFsGlobalAddressPolicy<Address>, 21, 1>;
    using prtim = FieldModel<reg, OtgFsGlobalAddressPolicy<Address>, 24, 1>;
    using hcim = FieldModel<reg, OtgFsGlobalAddressPolicy<Address>, 25, 1>;
    using ptxfem = FieldModel<reg, OtgFsGlobalAddressPolicy<Address>, 26, 1>;
    using cidschgm = FieldModel<reg, OtgFsGlobalAddressPolicy<Address>, 28, 1>;
    using discint = FieldModel<reg, OtgFsGlobalAddressPolicy<Address>, 29, 1>;
    using srqim = FieldModel<reg, OtgFsGlobalAddressPolicy<Address>, 30, 1>;
    using wuim = FieldModel<reg, OtgFsGlobalAddressPolicy<Address>, 31, 1>;
  };

public:
  using fsGintmsk = FsGintmskRegisterModel<uint32_t, OtgFsGlobalBaseAddress + 0x00000018>;

/**
 * REGISTER FS_GRXFSIZ
 */
private:
  template<typename SizeType>
  class FsGrxfsizRegisterUnion
  {
  public:
    union
    {
      SizeType value;
      BitFieldModel<SizeType, 0, 16> rxfd;
    };
  };

private:
  template<typename SizeType, std::uintptr_t Address>
  class FsGrxfsizRegisterModel : public RegisterModel<FsGrxfsizRegisterUnion<SizeType>, OtgFsGlobalAddressPolicy<Address>>
  {
  public:
    using reg = FsGrxfsizRegisterUnion<SizeType>;

  public:
    using rxfd = FieldModel<reg, OtgFsGlobalAddressPolicy<Address>, 0, 16>;
  };

public:
  using fsGrxfsiz = FsGrxfsizRegisterModel<uint32_t, OtgFsGlobalBaseAddress + 0x00000024>;

/**
 * REGISTER FS_GNPTXFSIZ_DEVICE
 */
private:
  template<typename SizeType>
  class FsGnptxfsizDeviceRegisterUnion
  {
  public:
    union
    {
      SizeType value;
      BitFieldModel<SizeType, 0, 16> tx0fsa;
      BitFieldModel<SizeType, 16, 16> tx0fd;
    };
  };

private:
  template<typename SizeType, std::uintptr_t Address>
  class FsGnptxfsizDeviceRegisterModel : public RegisterModel<FsGnptxfsizDeviceRegisterUnion<SizeType>, OtgFsGlobalAddressPolicy<Address>>
  {
  public:
    using reg = FsGnptxfsizDeviceRegisterUnion<SizeType>;

  public:
    using tx0fsa = FieldModel<reg, OtgFsGlobalAddressPolicy<Address>, 0, 16>;
    using tx0fd = FieldModel<reg, OtgFsGlobalAddressPolicy<Address>, 16, 16>;
  };

public:
  using fsGnptxfsizDevice = FsGnptxfsizDeviceRegisterModel<uint32_t, OtgFsGlobalBaseAddress + 0x00000028>;

/**
 * REGISTER FS_GNPTXFSIZ_HOST
 */
private:
  template<typename SizeType>
  class FsGnptxfsizHostRegisterUnion
  {
  public:
    union
    {
      SizeType value;
      BitFieldModel<SizeType, 0, 16> nptxfsa;
      BitFieldModel<SizeType, 16, 16> nptxfd;
    };
  };

private:
  template<typename SizeType, std::uintptr_t Address>
  class FsGnptxfsizHostRegisterModel : public RegisterModel<FsGnptxfsizHostRegisterUnion<SizeType>, OtgFsGlobalAddressPolicy<Address>>
  {
  public:
    using reg = FsGnptxfsizHostRegisterUnion<SizeType>;

  public:
    using nptxfsa = FieldModel<reg, OtgFsGlobalAddressPolicy<Address>, 0, 16>;
    using nptxfd = FieldModel<reg, OtgFsGlobalAddressPolicy<Address>, 16, 16>;
  };

public:
  using fsGnptxfsizHost = FsGnptxfsizHostRegisterModel<uint32_t, OtgFsGlobalBaseAddress + 0x00000028>;

/**
 * REGISTER FS_GNPTXSTS
 */
private:
  template<typename SizeType>
  class FsGnptxstsRegisterUnion
  {
  public:
    union
    {
      SizeType value;
      BitFieldModel<SizeType, 0, 16> nptxfsav;
      BitFieldModel<SizeType, 16, 8> nptqxsav;
      BitFieldModel<SizeType, 24, 7> nptxqtop;
    };
  };

private:
  template<typename SizeType, std::uintptr_t Address>
  class FsGnptxstsRegisterModel : public RegisterModel<FsGnptxstsRegisterUnion<SizeType>, OtgFsGlobalAddressPolicy<Address>>
  {
  public:
    using reg = FsGnptxstsRegisterUnion<SizeType>;

  public:
    using nptxfsav = FieldModel<reg, OtgFsGlobalAddressPolicy<Address>, 0, 16>;
    using nptqxsav = FieldModel<reg, OtgFsGlobalAddressPolicy<Address>, 16, 8>;
    using nptxqtop = FieldModel<reg, OtgFsGlobalAddressPolicy<Address>, 24, 7>;
  };

public:
  using fsGnptxsts = FsGnptxstsRegisterModel<uint32_t, OtgFsGlobalBaseAddress + 0x0000002C>;

/**
 * REGISTER FS_GCCFG
 */
private:
  template<typename SizeType>
  class FsGccfgRegisterUnion
  {
  public:
    union
    {
      SizeType value;
      BitFieldModel<SizeType, 16, 1> pwrdwn;
      BitFieldModel<SizeType, 18, 1> vbusasen;
      BitFieldModel<SizeType, 19, 1> vbusbsen;
      BitFieldModel<SizeType, 20, 1> sofouten;
      BitFieldModel<SizeType, 21, 1> novbussens;
    };
  };

private:
  template<typename SizeType, std::uintptr_t Address>
  class FsGccfgRegisterModel : public RegisterModel<FsGccfgRegisterUnion<SizeType>, OtgFsGlobalAddressPolicy<Address>>
  {
  public:
    using reg = FsGccfgRegisterUnion<SizeType>;

  public:
    using pwrdwn = FieldModel<reg, OtgFsGlobalAddressPolicy<Address>, 16, 1>;
    using vbusasen = FieldModel<reg, OtgFsGlobalAddressPolicy<Address>, 18, 1>;
    using vbusbsen = FieldModel<reg, OtgFsGlobalAddressPolicy<Address>, 19, 1>;
    using sofouten = FieldModel<reg, OtgFsGlobalAddressPolicy<Address>, 20, 1>;
    using novbussens = FieldModel<reg, OtgFsGlobalAddressPolicy<Address>, 21, 1>;
  };

public:
  using fsGccfg = FsGccfgRegisterModel<uint32_t, OtgFsGlobalBaseAddress + 0x00000038>;

/**
 * REGISTER FS_CID
 */
private:
  template<typename SizeType>
  class FsCidRegisterUnion
  {
  public:
    union
    {
      SizeType value;
      BitFieldModel<SizeType, 0, 32> productId;
    };
  };

private:
  template<typename SizeType, std::uintptr_t Address>
  class FsCidRegisterModel : public RegisterModel<FsCidRegisterUnion<SizeType>, OtgFsGlobalAddressPolicy<Address>>
  {
  public:
    using reg = FsCidRegisterUnion<SizeType>;

  public:
    using productId = FieldModel<reg, OtgFsGlobalAddressPolicy<Address>, 0, 32>;
  };

public:
  using fsCid = FsCidRegisterModel<uint32_t, OtgFsGlobalBaseAddress + 0x0000003C>;

/**
 * REGISTER FS_HPTXFSIZ
 */
private:
  template<typename SizeType>
  class FsHptxfsizRegisterUnion
  {
  public:
    union
    {
      SizeType value;
      BitFieldModel<SizeType, 0, 16> ptxsa;
      BitFieldModel<SizeType, 16, 16> ptxfsiz;
    };
  };

private:
  template<typename SizeType, std::uintptr_t Address>
  class FsHptxfsizRegisterModel : public RegisterModel<FsHptxfsizRegisterUnion<SizeType>, OtgFsGlobalAddressPolicy<Address>>
  {
  public:
    using reg = FsHptxfsizRegisterUnion<SizeType>;

  public:
    using ptxsa = FieldModel<reg, OtgFsGlobalAddressPolicy<Address>, 0, 16>;
    using ptxfsiz = FieldModel<reg, OtgFsGlobalAddressPolicy<Address>, 16, 16>;
  };

public:
  using fsHptxfsiz = FsHptxfsizRegisterModel<uint32_t, OtgFsGlobalBaseAddress + 0x00000100>;


/**
 * GROUP FS_GRXSTS_X_DEVICE
 */
public:
  class FsGrxstsXDevice
  {
  public:
    static constexpr uintptr_t FsGrxstsXDeviceBaseAddress = 0x0000001C;

  private:
    enum class FsGrxstsXDeviceIndex
    {
      FsGrxstsrDevice,
      FsGrxstspDevice,
    };

  public:
    struct Index
    {
      using enum FsGrxstsXDeviceIndex;
      static constexpr std::array All = {FsGrxstsXDeviceIndex::FsGrxstsrDevice, FsGrxstsXDeviceIndex::FsGrxstspDevice};
    };

  private:
    using FsGrxstsXDeviceLayerOffsetPolicy = LayerOffsetPolicy<FsGrxstsXDeviceIndex, 0x00000004>;

    template<std::uintptr_t Address>
    using FsGrxstsXDeviceAddressPolicy = GroupAddressPolicy<Address, std::tuple<FsGrxstsXDeviceLayerOffsetPolicy>>;

  /**
   * REGISTER FS_GRXSTS_X_DEVICE
   */
  private:
    template<typename SizeType>
    class FsGrxstsXDeviceRegisterUnion
    {
    public:
      union
      {
        SizeType value;
        BitFieldModel<SizeType, 0, 4> epnum;
        BitFieldModel<SizeType, 4, 11> bcnt;
        BitFieldModel<SizeType, 15, 2> dpid;
        BitFieldModel<SizeType, 17, 4> pktsts;
        BitFieldModel<SizeType, 21, 4> frmnum;
      };
    };

  private:
    template<typename SizeType, std::uintptr_t Address>
    class FsGrxstsXDeviceRegisterModel : public RegisterModel<FsGrxstsXDeviceRegisterUnion<SizeType>, FsGrxstsXDeviceAddressPolicy<Address>>
    {
    public:
      using reg = FsGrxstsXDeviceRegisterUnion<SizeType>;

    public:
      using epnum = FieldModel<reg, FsGrxstsXDeviceAddressPolicy<Address>, 0, 4>;
      using bcnt = FieldModel<reg, FsGrxstsXDeviceAddressPolicy<Address>, 4, 11>;
      using dpid = FieldModel<reg, FsGrxstsXDeviceAddressPolicy<Address>, 15, 2>;
      using pktsts = FieldModel<reg, FsGrxstsXDeviceAddressPolicy<Address>, 17, 4>;
      using frmnum = FieldModel<reg, FsGrxstsXDeviceAddressPolicy<Address>, 21, 4>;
    };

  public:
    using fsGrxstsXDevice = FsGrxstsXDeviceRegisterModel<uint32_t, OtgFsGlobalBaseAddress + FsGrxstsXDeviceBaseAddress + 0x00000000>;


  };

/**
 * GROUP FS_GRXSTS_X_HOST
 */
public:
  class FsGrxstsXHost
  {
  public:
    static constexpr uintptr_t FsGrxstsXHostBaseAddress = 0x0000001C;

  private:
    enum class FsGrxstsXHostIndex
    {
      FsGrxstsrHost,
      FsGrxstspHost,
    };

  public:
    struct Index
    {
      using enum FsGrxstsXHostIndex;
      static constexpr std::array All = {FsGrxstsXHostIndex::FsGrxstsrHost, FsGrxstsXHostIndex::FsGrxstspHost};
    };

  private:
    using FsGrxstsXHostLayerOffsetPolicy = LayerOffsetPolicy<FsGrxstsXHostIndex, 0x00000004>;

    template<std::uintptr_t Address>
    using FsGrxstsXHostAddressPolicy = GroupAddressPolicy<Address, std::tuple<FsGrxstsXHostLayerOffsetPolicy>>;

  /**
   * REGISTER FS_GRXSTS_X_HOST
   */
  private:
    template<typename SizeType>
    class FsGrxstsXHostRegisterUnion
    {
    public:
      union
      {
        SizeType value;
        BitFieldModel<SizeType, 0, 4> epnum;
        BitFieldModel<SizeType, 4, 11> bcnt;
        BitFieldModel<SizeType, 15, 2> dpid;
        BitFieldModel<SizeType, 17, 4> pktsts;
        BitFieldModel<SizeType, 21, 4> frmnum;
      };
    };

  private:
    template<typename SizeType, std::uintptr_t Address>
    class FsGrxstsXHostRegisterModel : public RegisterModel<FsGrxstsXHostRegisterUnion<SizeType>, FsGrxstsXHostAddressPolicy<Address>>
    {
    public:
      using reg = FsGrxstsXHostRegisterUnion<SizeType>;

    public:
      using epnum = FieldModel<reg, FsGrxstsXHostAddressPolicy<Address>, 0, 4>;
      using bcnt = FieldModel<reg, FsGrxstsXHostAddressPolicy<Address>, 4, 11>;
      using dpid = FieldModel<reg, FsGrxstsXHostAddressPolicy<Address>, 15, 2>;
      using pktsts = FieldModel<reg, FsGrxstsXHostAddressPolicy<Address>, 17, 4>;
      using frmnum = FieldModel<reg, FsGrxstsXHostAddressPolicy<Address>, 21, 4>;
    };

  public:
    using fsGrxstsXHost = FsGrxstsXHostRegisterModel<uint32_t, OtgFsGlobalBaseAddress + FsGrxstsXHostBaseAddress + 0x00000000>;


  };

/**
 * GROUP FS_DIEPTXF_X
 */
public:
  class FsDieptxfX
  {
  public:
    static constexpr uintptr_t FsDieptxfXBaseAddress = 0x00000104;

  private:
    enum class FsDieptxfXIndex
    {
      FsDieptxf1,
      FsDieptxf2,
      FsDieptxf3,
    };

  public:
    struct Index
    {
      using enum FsDieptxfXIndex;
      static constexpr std::array All = {FsDieptxfXIndex::FsDieptxf1, FsDieptxfXIndex::FsDieptxf2, FsDieptxfXIndex::FsDieptxf3};
    };

  private:
    using FsDieptxfXLayerOffsetPolicy = LayerOffsetPolicy<FsDieptxfXIndex, 0x00000004>;

    template<std::uintptr_t Address>
    using FsDieptxfXAddressPolicy = GroupAddressPolicy<Address, std::tuple<FsDieptxfXLayerOffsetPolicy>>;

  /**
   * REGISTER FS_DIEPTXF_X
   */
  private:
    template<typename SizeType>
    class FsDieptxfXRegisterUnion
    {
    public:
      union
      {
        SizeType value;
        BitFieldModel<SizeType, 0, 16> ineptxsa;
        BitFieldModel<SizeType, 16, 16> ineptxfd;
      };
    };

  private:
    template<typename SizeType, std::uintptr_t Address>
    class FsDieptxfXRegisterModel : public RegisterModel<FsDieptxfXRegisterUnion<SizeType>, FsDieptxfXAddressPolicy<Address>>
    {
    public:
      using reg = FsDieptxfXRegisterUnion<SizeType>;

    public:
      using ineptxsa = FieldModel<reg, FsDieptxfXAddressPolicy<Address>, 0, 16>;
      using ineptxfd = FieldModel<reg, FsDieptxfXAddressPolicy<Address>, 16, 16>;
    };

  public:
    using fsDieptxfX = FsDieptxfXRegisterModel<uint32_t, OtgFsGlobalBaseAddress + FsDieptxfXBaseAddress + 0x00000000>;


  };

};

}

#endif /* DRAL_STM32F411_OTG_FS_GLOBAL_H */