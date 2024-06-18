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

#ifndef DRAL_STM32F411_OTG_FS_DEVICE_H
#define DRAL_STM32F411_OTG_FS_DEVICE_H

#include "dral/bitfield_model.h"
#include "dral/group_address_policy.h"
#include "dral/layer_offset_policy.h"
#include "dral/register_model.h"

namespace dral::stm32f411 {

class OtgFsDevice
{
public:
  static constexpr uintptr_t OtgFsDeviceBaseAddress = 0x50000800;

private:
  template<std::uintptr_t Address>
  using OtgFsDeviceAddressPolicy = GroupAddressPolicy<Address>;

/**
 * REGISTER FS_DCFG
 */
private:
  template<typename SizeType>
  class FsDcfgRegisterUnion
  {
  public:
    union
    {
      SizeType value;
      BitFieldModel<SizeType, 0, 2> dspd;
      BitFieldModel<SizeType, 2, 1> nzlsohsk;
      BitFieldModel<SizeType, 4, 7> dad;
      BitFieldModel<SizeType, 11, 2> pfivl;
    };
  };

private:
  template<typename SizeType, std::uintptr_t Address>
  class FsDcfgRegisterModel : public RegisterModel<FsDcfgRegisterUnion<SizeType>, OtgFsDeviceAddressPolicy<Address>>
  {
  public:
    using reg = FsDcfgRegisterUnion<SizeType>;

  public:
    using dspd = FieldModel<reg, OtgFsDeviceAddressPolicy<Address>, 0, 2>;
    using nzlsohsk = FieldModel<reg, OtgFsDeviceAddressPolicy<Address>, 2, 1>;
    using dad = FieldModel<reg, OtgFsDeviceAddressPolicy<Address>, 4, 7>;
    using pfivl = FieldModel<reg, OtgFsDeviceAddressPolicy<Address>, 11, 2>;
  };

public:
  using fsDcfg = FsDcfgRegisterModel<uint32_t, OtgFsDeviceBaseAddress + 0x00000000>;

/**
 * REGISTER FS_DCTL
 */
private:
  template<typename SizeType>
  class FsDctlRegisterUnion
  {
  public:
    union
    {
      SizeType value;
      BitFieldModel<SizeType, 0, 1> rwusig;
      BitFieldModel<SizeType, 1, 1> sdis;
      BitFieldModel<SizeType, 2, 1> ginsts;
      BitFieldModel<SizeType, 3, 1> gonsts;
      BitFieldModel<SizeType, 4, 3> tctl;
      BitFieldModel<SizeType, 7, 1> sginak;
      BitFieldModel<SizeType, 8, 1> cginak;
      BitFieldModel<SizeType, 9, 1> sgonak;
      BitFieldModel<SizeType, 10, 1> cgonak;
      BitFieldModel<SizeType, 11, 1> poprgdne;
    };
  };

private:
  template<typename SizeType, std::uintptr_t Address>
  class FsDctlRegisterModel : public RegisterModel<FsDctlRegisterUnion<SizeType>, OtgFsDeviceAddressPolicy<Address>>
  {
  public:
    using reg = FsDctlRegisterUnion<SizeType>;

  public:
    using rwusig = FieldModel<reg, OtgFsDeviceAddressPolicy<Address>, 0, 1>;
    using sdis = FieldModel<reg, OtgFsDeviceAddressPolicy<Address>, 1, 1>;
    using ginsts = FieldModel<reg, OtgFsDeviceAddressPolicy<Address>, 2, 1>;
    using gonsts = FieldModel<reg, OtgFsDeviceAddressPolicy<Address>, 3, 1>;
    using tctl = FieldModel<reg, OtgFsDeviceAddressPolicy<Address>, 4, 3>;
    using sginak = FieldModel<reg, OtgFsDeviceAddressPolicy<Address>, 7, 1>;
    using cginak = FieldModel<reg, OtgFsDeviceAddressPolicy<Address>, 8, 1>;
    using sgonak = FieldModel<reg, OtgFsDeviceAddressPolicy<Address>, 9, 1>;
    using cgonak = FieldModel<reg, OtgFsDeviceAddressPolicy<Address>, 10, 1>;
    using poprgdne = FieldModel<reg, OtgFsDeviceAddressPolicy<Address>, 11, 1>;
  };

public:
  using fsDctl = FsDctlRegisterModel<uint32_t, OtgFsDeviceBaseAddress + 0x00000004>;

/**
 * REGISTER FS_DSTS
 */
private:
  template<typename SizeType>
  class FsDstsRegisterUnion
  {
  public:
    union
    {
      SizeType value;
      BitFieldModel<SizeType, 0, 1> suspsts;
      BitFieldModel<SizeType, 1, 2> enumspd;
      BitFieldModel<SizeType, 3, 1> eerr;
      BitFieldModel<SizeType, 8, 14> fnsof;
    };
  };

private:
  template<typename SizeType, std::uintptr_t Address>
  class FsDstsRegisterModel : public RegisterModel<FsDstsRegisterUnion<SizeType>, OtgFsDeviceAddressPolicy<Address>>
  {
  public:
    using reg = FsDstsRegisterUnion<SizeType>;

  public:
    using suspsts = FieldModel<reg, OtgFsDeviceAddressPolicy<Address>, 0, 1>;
    using enumspd = FieldModel<reg, OtgFsDeviceAddressPolicy<Address>, 1, 2>;
    using eerr = FieldModel<reg, OtgFsDeviceAddressPolicy<Address>, 3, 1>;
    using fnsof = FieldModel<reg, OtgFsDeviceAddressPolicy<Address>, 8, 14>;
  };

public:
  using fsDsts = FsDstsRegisterModel<uint32_t, OtgFsDeviceBaseAddress + 0x00000008>;

/**
 * REGISTER FS_DIEPMSK
 */
private:
  template<typename SizeType>
  class FsDiepmskRegisterUnion
  {
  public:
    union
    {
      SizeType value;
      BitFieldModel<SizeType, 0, 1> xfrcm;
      BitFieldModel<SizeType, 1, 1> epdm;
      BitFieldModel<SizeType, 3, 1> tom;
      BitFieldModel<SizeType, 4, 1> ittxfemsk;
      BitFieldModel<SizeType, 5, 1> inepnmm;
      BitFieldModel<SizeType, 6, 1> inepnem;
    };
  };

private:
  template<typename SizeType, std::uintptr_t Address>
  class FsDiepmskRegisterModel : public RegisterModel<FsDiepmskRegisterUnion<SizeType>, OtgFsDeviceAddressPolicy<Address>>
  {
  public:
    using reg = FsDiepmskRegisterUnion<SizeType>;

  public:
    using xfrcm = FieldModel<reg, OtgFsDeviceAddressPolicy<Address>, 0, 1>;
    using epdm = FieldModel<reg, OtgFsDeviceAddressPolicy<Address>, 1, 1>;
    using tom = FieldModel<reg, OtgFsDeviceAddressPolicy<Address>, 3, 1>;
    using ittxfemsk = FieldModel<reg, OtgFsDeviceAddressPolicy<Address>, 4, 1>;
    using inepnmm = FieldModel<reg, OtgFsDeviceAddressPolicy<Address>, 5, 1>;
    using inepnem = FieldModel<reg, OtgFsDeviceAddressPolicy<Address>, 6, 1>;
  };

public:
  using fsDiepmsk = FsDiepmskRegisterModel<uint32_t, OtgFsDeviceBaseAddress + 0x00000010>;

/**
 * REGISTER FS_DOEPMSK
 */
private:
  template<typename SizeType>
  class FsDoepmskRegisterUnion
  {
  public:
    union
    {
      SizeType value;
      BitFieldModel<SizeType, 0, 1> xfrcm;
      BitFieldModel<SizeType, 1, 1> epdm;
      BitFieldModel<SizeType, 3, 1> stupm;
      BitFieldModel<SizeType, 4, 1> otepdm;
    };
  };

private:
  template<typename SizeType, std::uintptr_t Address>
  class FsDoepmskRegisterModel : public RegisterModel<FsDoepmskRegisterUnion<SizeType>, OtgFsDeviceAddressPolicy<Address>>
  {
  public:
    using reg = FsDoepmskRegisterUnion<SizeType>;

  public:
    using xfrcm = FieldModel<reg, OtgFsDeviceAddressPolicy<Address>, 0, 1>;
    using epdm = FieldModel<reg, OtgFsDeviceAddressPolicy<Address>, 1, 1>;
    using stupm = FieldModel<reg, OtgFsDeviceAddressPolicy<Address>, 3, 1>;
    using otepdm = FieldModel<reg, OtgFsDeviceAddressPolicy<Address>, 4, 1>;
  };

public:
  using fsDoepmsk = FsDoepmskRegisterModel<uint32_t, OtgFsDeviceBaseAddress + 0x00000014>;

/**
 * REGISTER FS_DAINT
 */
private:
  template<typename SizeType>
  class FsDaintRegisterUnion
  {
  public:
    union
    {
      SizeType value;
      BitFieldModel<SizeType, 0, 16> iepint;
      BitFieldModel<SizeType, 16, 16> oepint;
    };
  };

private:
  template<typename SizeType, std::uintptr_t Address>
  class FsDaintRegisterModel : public RegisterModel<FsDaintRegisterUnion<SizeType>, OtgFsDeviceAddressPolicy<Address>>
  {
  public:
    using reg = FsDaintRegisterUnion<SizeType>;

  public:
    using iepint = FieldModel<reg, OtgFsDeviceAddressPolicy<Address>, 0, 16>;
    using oepint = FieldModel<reg, OtgFsDeviceAddressPolicy<Address>, 16, 16>;
  };

public:
  using fsDaint = FsDaintRegisterModel<uint32_t, OtgFsDeviceBaseAddress + 0x00000018>;

/**
 * REGISTER FS_DAINTMSK
 */
private:
  template<typename SizeType>
  class FsDaintmskRegisterUnion
  {
  public:
    union
    {
      SizeType value;
      BitFieldModel<SizeType, 0, 16> iepm;
      BitFieldModel<SizeType, 16, 16> oepm;
    };
  };

private:
  template<typename SizeType, std::uintptr_t Address>
  class FsDaintmskRegisterModel : public RegisterModel<FsDaintmskRegisterUnion<SizeType>, OtgFsDeviceAddressPolicy<Address>>
  {
  public:
    using reg = FsDaintmskRegisterUnion<SizeType>;

  public:
    using iepm = FieldModel<reg, OtgFsDeviceAddressPolicy<Address>, 0, 16>;
    using oepm = FieldModel<reg, OtgFsDeviceAddressPolicy<Address>, 16, 16>;
  };

public:
  using fsDaintmsk = FsDaintmskRegisterModel<uint32_t, OtgFsDeviceBaseAddress + 0x0000001C>;

/**
 * REGISTER DVBUSDIS
 */
private:
  template<typename SizeType>
  class DvbusdisRegisterUnion
  {
  public:
    union
    {
      SizeType value;
      BitFieldModel<SizeType, 0, 16> vbusdt;
    };
  };

private:
  template<typename SizeType, std::uintptr_t Address>
  class DvbusdisRegisterModel : public RegisterModel<DvbusdisRegisterUnion<SizeType>, OtgFsDeviceAddressPolicy<Address>>
  {
  public:
    using reg = DvbusdisRegisterUnion<SizeType>;

  public:
    using vbusdt = FieldModel<reg, OtgFsDeviceAddressPolicy<Address>, 0, 16>;
  };

public:
  using dvbusdis = DvbusdisRegisterModel<uint32_t, OtgFsDeviceBaseAddress + 0x00000028>;

/**
 * REGISTER DVBUSPULSE
 */
private:
  template<typename SizeType>
  class DvbuspulseRegisterUnion
  {
  public:
    union
    {
      SizeType value;
      BitFieldModel<SizeType, 0, 12> dvbusp;
    };
  };

private:
  template<typename SizeType, std::uintptr_t Address>
  class DvbuspulseRegisterModel : public RegisterModel<DvbuspulseRegisterUnion<SizeType>, OtgFsDeviceAddressPolicy<Address>>
  {
  public:
    using reg = DvbuspulseRegisterUnion<SizeType>;

  public:
    using dvbusp = FieldModel<reg, OtgFsDeviceAddressPolicy<Address>, 0, 12>;
  };

public:
  using dvbuspulse = DvbuspulseRegisterModel<uint32_t, OtgFsDeviceBaseAddress + 0x0000002C>;

/**
 * REGISTER DIEPEMPMSK
 */
private:
  template<typename SizeType>
  class DiepempmskRegisterUnion
  {
  public:
    union
    {
      SizeType value;
      BitFieldModel<SizeType, 0, 16> ineptxfem;
    };
  };

private:
  template<typename SizeType, std::uintptr_t Address>
  class DiepempmskRegisterModel : public RegisterModel<DiepempmskRegisterUnion<SizeType>, OtgFsDeviceAddressPolicy<Address>>
  {
  public:
    using reg = DiepempmskRegisterUnion<SizeType>;

  public:
    using ineptxfem = FieldModel<reg, OtgFsDeviceAddressPolicy<Address>, 0, 16>;
  };

public:
  using diepempmsk = DiepempmskRegisterModel<uint32_t, OtgFsDeviceBaseAddress + 0x00000034>;

/**
 * REGISTER FS_DIEPCTL0
 */
private:
  template<typename SizeType>
  class FsDiepctl0RegisterUnion
  {
  public:
    union
    {
      SizeType value;
      BitFieldModel<SizeType, 0, 2> mpsiz;
      BitFieldModel<SizeType, 15, 1> usbaep;
      BitFieldModel<SizeType, 17, 1> naksts;
      BitFieldModel<SizeType, 18, 2> eptyp;
      BitFieldModel<SizeType, 21, 1> stall;
      BitFieldModel<SizeType, 22, 4> txfnum;
      BitFieldModel<SizeType, 26, 1> cnak;
      BitFieldModel<SizeType, 27, 1> snak;
      BitFieldModel<SizeType, 30, 1> epdis;
      BitFieldModel<SizeType, 31, 1> epena;
    };
  };

private:
  template<typename SizeType, std::uintptr_t Address>
  class FsDiepctl0RegisterModel : public RegisterModel<FsDiepctl0RegisterUnion<SizeType>, OtgFsDeviceAddressPolicy<Address>>
  {
  public:
    using reg = FsDiepctl0RegisterUnion<SizeType>;

  public:
    using mpsiz = FieldModel<reg, OtgFsDeviceAddressPolicy<Address>, 0, 2>;
    using usbaep = FieldModel<reg, OtgFsDeviceAddressPolicy<Address>, 15, 1>;
    using naksts = FieldModel<reg, OtgFsDeviceAddressPolicy<Address>, 17, 1>;
    using eptyp = FieldModel<reg, OtgFsDeviceAddressPolicy<Address>, 18, 2>;
    using stall = FieldModel<reg, OtgFsDeviceAddressPolicy<Address>, 21, 1>;
    using txfnum = FieldModel<reg, OtgFsDeviceAddressPolicy<Address>, 22, 4>;
    using cnak = FieldModel<reg, OtgFsDeviceAddressPolicy<Address>, 26, 1>;
    using snak = FieldModel<reg, OtgFsDeviceAddressPolicy<Address>, 27, 1>;
    using epdis = FieldModel<reg, OtgFsDeviceAddressPolicy<Address>, 30, 1>;
    using epena = FieldModel<reg, OtgFsDeviceAddressPolicy<Address>, 31, 1>;
  };

public:
  using fsDiepctl0 = FsDiepctl0RegisterModel<uint32_t, OtgFsDeviceBaseAddress + 0x00000100>;

/**
 * REGISTER DOEPCTL0
 */
private:
  template<typename SizeType>
  class Doepctl0RegisterUnion
  {
  public:
    union
    {
      SizeType value;
      BitFieldModel<SizeType, 31, 1> epena;
      BitFieldModel<SizeType, 30, 1> epdis;
      BitFieldModel<SizeType, 27, 1> snak;
      BitFieldModel<SizeType, 26, 1> cnak;
      BitFieldModel<SizeType, 21, 1> stall;
      BitFieldModel<SizeType, 20, 1> snpm;
      BitFieldModel<SizeType, 18, 2> eptyp;
      BitFieldModel<SizeType, 17, 1> naksts;
      BitFieldModel<SizeType, 15, 1> usbaep;
      BitFieldModel<SizeType, 0, 2> mpsiz;
    };
  };

private:
  template<typename SizeType, std::uintptr_t Address>
  class Doepctl0RegisterModel : public RegisterModel<Doepctl0RegisterUnion<SizeType>, OtgFsDeviceAddressPolicy<Address>>
  {
  public:
    using reg = Doepctl0RegisterUnion<SizeType>;

  public:
    using epena = FieldModel<reg, OtgFsDeviceAddressPolicy<Address>, 31, 1>;
    using epdis = FieldModel<reg, OtgFsDeviceAddressPolicy<Address>, 30, 1>;
    using snak = FieldModel<reg, OtgFsDeviceAddressPolicy<Address>, 27, 1>;
    using cnak = FieldModel<reg, OtgFsDeviceAddressPolicy<Address>, 26, 1>;
    using stall = FieldModel<reg, OtgFsDeviceAddressPolicy<Address>, 21, 1>;
    using snpm = FieldModel<reg, OtgFsDeviceAddressPolicy<Address>, 20, 1>;
    using eptyp = FieldModel<reg, OtgFsDeviceAddressPolicy<Address>, 18, 2>;
    using naksts = FieldModel<reg, OtgFsDeviceAddressPolicy<Address>, 17, 1>;
    using usbaep = FieldModel<reg, OtgFsDeviceAddressPolicy<Address>, 15, 1>;
    using mpsiz = FieldModel<reg, OtgFsDeviceAddressPolicy<Address>, 0, 2>;
  };

public:
  using doepctl0 = Doepctl0RegisterModel<uint32_t, OtgFsDeviceBaseAddress + 0x00000300>;

/**
 * REGISTER DIEPTSIZ0
 */
private:
  template<typename SizeType>
  class Dieptsiz0RegisterUnion
  {
  public:
    union
    {
      SizeType value;
      BitFieldModel<SizeType, 19, 2> pktcnt;
      BitFieldModel<SizeType, 0, 7> xfrsiz;
    };
  };

private:
  template<typename SizeType, std::uintptr_t Address>
  class Dieptsiz0RegisterModel : public RegisterModel<Dieptsiz0RegisterUnion<SizeType>, OtgFsDeviceAddressPolicy<Address>>
  {
  public:
    using reg = Dieptsiz0RegisterUnion<SizeType>;

  public:
    using pktcnt = FieldModel<reg, OtgFsDeviceAddressPolicy<Address>, 19, 2>;
    using xfrsiz = FieldModel<reg, OtgFsDeviceAddressPolicy<Address>, 0, 7>;
  };

public:
  using dieptsiz0 = Dieptsiz0RegisterModel<uint32_t, OtgFsDeviceBaseAddress + 0x00000110>;

/**
 * REGISTER DOEPTSIZ0
 */
private:
  template<typename SizeType>
  class Doeptsiz0RegisterUnion
  {
  public:
    union
    {
      SizeType value;
      BitFieldModel<SizeType, 29, 2> stupcnt;
      BitFieldModel<SizeType, 19, 1> pktcnt;
      BitFieldModel<SizeType, 0, 7> xfrsiz;
    };
  };

private:
  template<typename SizeType, std::uintptr_t Address>
  class Doeptsiz0RegisterModel : public RegisterModel<Doeptsiz0RegisterUnion<SizeType>, OtgFsDeviceAddressPolicy<Address>>
  {
  public:
    using reg = Doeptsiz0RegisterUnion<SizeType>;

  public:
    using stupcnt = FieldModel<reg, OtgFsDeviceAddressPolicy<Address>, 29, 2>;
    using pktcnt = FieldModel<reg, OtgFsDeviceAddressPolicy<Address>, 19, 1>;
    using xfrsiz = FieldModel<reg, OtgFsDeviceAddressPolicy<Address>, 0, 7>;
  };

public:
  using doeptsiz0 = Doeptsiz0RegisterModel<uint32_t, OtgFsDeviceBaseAddress + 0x00000310>;

/**
 * REGISTER DOEPTSIZ1
 */
private:
  template<typename SizeType>
  class Doeptsiz1RegisterUnion
  {
  public:
    union
    {
      SizeType value;
      BitFieldModel<SizeType, 29, 2> rxdpidStupcnt;
      BitFieldModel<SizeType, 19, 10> pktcnt;
      BitFieldModel<SizeType, 0, 19> xfrsiz;
    };
  };

private:
  template<typename SizeType, std::uintptr_t Address>
  class Doeptsiz1RegisterModel : public RegisterModel<Doeptsiz1RegisterUnion<SizeType>, OtgFsDeviceAddressPolicy<Address>>
  {
  public:
    using reg = Doeptsiz1RegisterUnion<SizeType>;

  public:
    using rxdpidStupcnt = FieldModel<reg, OtgFsDeviceAddressPolicy<Address>, 29, 2>;
    using pktcnt = FieldModel<reg, OtgFsDeviceAddressPolicy<Address>, 19, 10>;
    using xfrsiz = FieldModel<reg, OtgFsDeviceAddressPolicy<Address>, 0, 19>;
  };

public:
  using doeptsiz1 = Doeptsiz1RegisterModel<uint32_t, OtgFsDeviceBaseAddress + 0x00000330>;

/**
 * REGISTER DOEPTSIZ2
 */
private:
  template<typename SizeType>
  class Doeptsiz2RegisterUnion
  {
  public:
    union
    {
      SizeType value;
      BitFieldModel<SizeType, 29, 2> rxdpidStupcnt;
      BitFieldModel<SizeType, 19, 10> pktcnt;
      BitFieldModel<SizeType, 0, 19> xfrsiz;
    };
  };

private:
  template<typename SizeType, std::uintptr_t Address>
  class Doeptsiz2RegisterModel : public RegisterModel<Doeptsiz2RegisterUnion<SizeType>, OtgFsDeviceAddressPolicy<Address>>
  {
  public:
    using reg = Doeptsiz2RegisterUnion<SizeType>;

  public:
    using rxdpidStupcnt = FieldModel<reg, OtgFsDeviceAddressPolicy<Address>, 29, 2>;
    using pktcnt = FieldModel<reg, OtgFsDeviceAddressPolicy<Address>, 19, 10>;
    using xfrsiz = FieldModel<reg, OtgFsDeviceAddressPolicy<Address>, 0, 19>;
  };

public:
  using doeptsiz2 = Doeptsiz2RegisterModel<uint32_t, OtgFsDeviceBaseAddress + 0x00000350>;

/**
 * REGISTER DOEPTSIZ3
 */
private:
  template<typename SizeType>
  class Doeptsiz3RegisterUnion
  {
  public:
    union
    {
      SizeType value;
      BitFieldModel<SizeType, 29, 2> rxdpidStupcnt;
      BitFieldModel<SizeType, 19, 10> pktcnt;
      BitFieldModel<SizeType, 0, 19> xfrsiz;
    };
  };

private:
  template<typename SizeType, std::uintptr_t Address>
  class Doeptsiz3RegisterModel : public RegisterModel<Doeptsiz3RegisterUnion<SizeType>, OtgFsDeviceAddressPolicy<Address>>
  {
  public:
    using reg = Doeptsiz3RegisterUnion<SizeType>;

  public:
    using rxdpidStupcnt = FieldModel<reg, OtgFsDeviceAddressPolicy<Address>, 29, 2>;
    using pktcnt = FieldModel<reg, OtgFsDeviceAddressPolicy<Address>, 19, 10>;
    using xfrsiz = FieldModel<reg, OtgFsDeviceAddressPolicy<Address>, 0, 19>;
  };

public:
  using doeptsiz3 = Doeptsiz3RegisterModel<uint32_t, OtgFsDeviceBaseAddress + 0x00000370>;


/**
 * GROUP DIEPCTL_X
 */
public:
  class DiepctlX
  {
  public:
    static constexpr uintptr_t DiepctlXBaseAddress = 0x00000120;

  private:
    enum class DiepctlXIndex
    {
      Diepctl1,
      Diepctl2,
      Diepctl3,
    };

  public:
    struct Index
    {
      using enum DiepctlXIndex;
      static constexpr std::array All = {DiepctlXIndex::Diepctl1, DiepctlXIndex::Diepctl2, DiepctlXIndex::Diepctl3};
    };

  private:
    using DiepctlXLayerOffsetPolicy = LayerOffsetPolicy<DiepctlXIndex, 0x00000020>;

    template<std::uintptr_t Address>
    using DiepctlXAddressPolicy = GroupAddressPolicy<Address, std::tuple<DiepctlXLayerOffsetPolicy>>;

  /**
   * REGISTER DIEPCTL_X
   */
  private:
    template<typename SizeType>
    class DiepctlXRegisterUnion
    {
    public:
      union
      {
        SizeType value;
        BitFieldModel<SizeType, 31, 1> epena;
        BitFieldModel<SizeType, 30, 1> epdis;
        BitFieldModel<SizeType, 29, 1> soddfrmSd1pid;
        BitFieldModel<SizeType, 28, 1> sevnfrmSd0pid;
        BitFieldModel<SizeType, 27, 1> snak;
        BitFieldModel<SizeType, 26, 1> cnak;
        BitFieldModel<SizeType, 22, 4> txfnum;
        BitFieldModel<SizeType, 21, 1> stall;
        BitFieldModel<SizeType, 18, 2> eptyp;
        BitFieldModel<SizeType, 17, 1> naksts;
        BitFieldModel<SizeType, 16, 1> eonumDpid;
        BitFieldModel<SizeType, 15, 1> usbaep;
        BitFieldModel<SizeType, 0, 11> mpsiz;
      };
    };

  private:
    template<typename SizeType, std::uintptr_t Address>
    class DiepctlXRegisterModel : public RegisterModel<DiepctlXRegisterUnion<SizeType>, DiepctlXAddressPolicy<Address>>
    {
    public:
      using reg = DiepctlXRegisterUnion<SizeType>;

    public:
      using epena = FieldModel<reg, DiepctlXAddressPolicy<Address>, 31, 1>;
      using epdis = FieldModel<reg, DiepctlXAddressPolicy<Address>, 30, 1>;
      using soddfrmSd1pid = FieldModel<reg, DiepctlXAddressPolicy<Address>, 29, 1>;
      using sevnfrmSd0pid = FieldModel<reg, DiepctlXAddressPolicy<Address>, 28, 1>;
      using snak = FieldModel<reg, DiepctlXAddressPolicy<Address>, 27, 1>;
      using cnak = FieldModel<reg, DiepctlXAddressPolicy<Address>, 26, 1>;
      using txfnum = FieldModel<reg, DiepctlXAddressPolicy<Address>, 22, 4>;
      using stall = FieldModel<reg, DiepctlXAddressPolicy<Address>, 21, 1>;
      using eptyp = FieldModel<reg, DiepctlXAddressPolicy<Address>, 18, 2>;
      using naksts = FieldModel<reg, DiepctlXAddressPolicy<Address>, 17, 1>;
      using eonumDpid = FieldModel<reg, DiepctlXAddressPolicy<Address>, 16, 1>;
      using usbaep = FieldModel<reg, DiepctlXAddressPolicy<Address>, 15, 1>;
      using mpsiz = FieldModel<reg, DiepctlXAddressPolicy<Address>, 0, 11>;
    };

  public:
    using diepctlX = DiepctlXRegisterModel<uint32_t, OtgFsDeviceBaseAddress + DiepctlXBaseAddress + 0x00000000>;


  };

/**
 * GROUP DOEPCTL_X
 */
public:
  class DoepctlX
  {
  public:
    static constexpr uintptr_t DoepctlXBaseAddress = 0x00000320;

  private:
    enum class DoepctlXIndex
    {
      Doepctl1,
      Doepctl2,
      Doepctl3,
    };

  public:
    struct Index
    {
      using enum DoepctlXIndex;
      static constexpr std::array All = {DoepctlXIndex::Doepctl1, DoepctlXIndex::Doepctl2, DoepctlXIndex::Doepctl3};
    };

  private:
    using DoepctlXLayerOffsetPolicy = LayerOffsetPolicy<DoepctlXIndex, 0x00000020>;

    template<std::uintptr_t Address>
    using DoepctlXAddressPolicy = GroupAddressPolicy<Address, std::tuple<DoepctlXLayerOffsetPolicy>>;

  /**
   * REGISTER DOEPCTL_X
   */
  private:
    template<typename SizeType>
    class DoepctlXRegisterUnion
    {
    public:
      union
      {
        SizeType value;
        BitFieldModel<SizeType, 31, 1> epena;
        BitFieldModel<SizeType, 30, 1> epdis;
        BitFieldModel<SizeType, 29, 1> soddfrmSd1pid;
        BitFieldModel<SizeType, 28, 1> sevnfrmSd0pid;
        BitFieldModel<SizeType, 27, 1> snak;
        BitFieldModel<SizeType, 26, 1> cnak;
        BitFieldModel<SizeType, 21, 1> stall;
        BitFieldModel<SizeType, 20, 1> snpm;
        BitFieldModel<SizeType, 18, 2> eptyp;
        BitFieldModel<SizeType, 17, 1> naksts;
        BitFieldModel<SizeType, 16, 1> eonumDpid;
        BitFieldModel<SizeType, 15, 1> usbaep;
        BitFieldModel<SizeType, 0, 11> mpsiz;
      };
    };

  private:
    template<typename SizeType, std::uintptr_t Address>
    class DoepctlXRegisterModel : public RegisterModel<DoepctlXRegisterUnion<SizeType>, DoepctlXAddressPolicy<Address>>
    {
    public:
      using reg = DoepctlXRegisterUnion<SizeType>;

    public:
      using epena = FieldModel<reg, DoepctlXAddressPolicy<Address>, 31, 1>;
      using epdis = FieldModel<reg, DoepctlXAddressPolicy<Address>, 30, 1>;
      using soddfrmSd1pid = FieldModel<reg, DoepctlXAddressPolicy<Address>, 29, 1>;
      using sevnfrmSd0pid = FieldModel<reg, DoepctlXAddressPolicy<Address>, 28, 1>;
      using snak = FieldModel<reg, DoepctlXAddressPolicy<Address>, 27, 1>;
      using cnak = FieldModel<reg, DoepctlXAddressPolicy<Address>, 26, 1>;
      using stall = FieldModel<reg, DoepctlXAddressPolicy<Address>, 21, 1>;
      using snpm = FieldModel<reg, DoepctlXAddressPolicy<Address>, 20, 1>;
      using eptyp = FieldModel<reg, DoepctlXAddressPolicy<Address>, 18, 2>;
      using naksts = FieldModel<reg, DoepctlXAddressPolicy<Address>, 17, 1>;
      using eonumDpid = FieldModel<reg, DoepctlXAddressPolicy<Address>, 16, 1>;
      using usbaep = FieldModel<reg, DoepctlXAddressPolicy<Address>, 15, 1>;
      using mpsiz = FieldModel<reg, DoepctlXAddressPolicy<Address>, 0, 11>;
    };

  public:
    using doepctlX = DoepctlXRegisterModel<uint32_t, OtgFsDeviceBaseAddress + DoepctlXBaseAddress + 0x00000000>;


  };

/**
 * GROUP DIEPINT_X
 */
public:
  class DiepintX
  {
  public:
    static constexpr uintptr_t DiepintXBaseAddress = 0x00000108;

  private:
    enum class DiepintXIndex
    {
      Diepint0,
      Diepint1,
      Diepint2,
      Diepint3,
    };

  public:
    struct Index
    {
      using enum DiepintXIndex;
      static constexpr std::array All = {DiepintXIndex::Diepint0, DiepintXIndex::Diepint1, DiepintXIndex::Diepint2, DiepintXIndex::Diepint3};
    };

  private:
    using DiepintXLayerOffsetPolicy = LayerOffsetPolicy<DiepintXIndex, 0x00000020>;

    template<std::uintptr_t Address>
    using DiepintXAddressPolicy = GroupAddressPolicy<Address, std::tuple<DiepintXLayerOffsetPolicy>>;

  /**
   * REGISTER DIEPINT_X
   */
  private:
    template<typename SizeType>
    class DiepintXRegisterUnion
    {
    public:
      union
      {
        SizeType value;
        BitFieldModel<SizeType, 7, 1> txfe;
        BitFieldModel<SizeType, 6, 1> inepne;
        BitFieldModel<SizeType, 4, 1> ittxfe;
        BitFieldModel<SizeType, 3, 1> toc;
        BitFieldModel<SizeType, 1, 1> epdisd;
        BitFieldModel<SizeType, 0, 1> xfrc;
      };
    };

  private:
    template<typename SizeType, std::uintptr_t Address>
    class DiepintXRegisterModel : public RegisterModel<DiepintXRegisterUnion<SizeType>, DiepintXAddressPolicy<Address>>
    {
    public:
      using reg = DiepintXRegisterUnion<SizeType>;

    public:
      using txfe = FieldModel<reg, DiepintXAddressPolicy<Address>, 7, 1>;
      using inepne = FieldModel<reg, DiepintXAddressPolicy<Address>, 6, 1>;
      using ittxfe = FieldModel<reg, DiepintXAddressPolicy<Address>, 4, 1>;
      using toc = FieldModel<reg, DiepintXAddressPolicy<Address>, 3, 1>;
      using epdisd = FieldModel<reg, DiepintXAddressPolicy<Address>, 1, 1>;
      using xfrc = FieldModel<reg, DiepintXAddressPolicy<Address>, 0, 1>;
    };

  public:
    using diepintX = DiepintXRegisterModel<uint32_t, OtgFsDeviceBaseAddress + DiepintXBaseAddress + 0x00000000>;


  };

/**
 * GROUP DOEPINT_X
 */
public:
  class DoepintX
  {
  public:
    static constexpr uintptr_t DoepintXBaseAddress = 0x00000308;

  private:
    enum class DoepintXIndex
    {
      Doepint0,
      Doepint1,
      Doepint2,
      Doepint3,
    };

  public:
    struct Index
    {
      using enum DoepintXIndex;
      static constexpr std::array All = {DoepintXIndex::Doepint0, DoepintXIndex::Doepint1, DoepintXIndex::Doepint2, DoepintXIndex::Doepint3};
    };

  private:
    using DoepintXLayerOffsetPolicy = LayerOffsetPolicy<DoepintXIndex, 0x00000020>;

    template<std::uintptr_t Address>
    using DoepintXAddressPolicy = GroupAddressPolicy<Address, std::tuple<DoepintXLayerOffsetPolicy>>;

  /**
   * REGISTER DOEPINT_X
   */
  private:
    template<typename SizeType>
    class DoepintXRegisterUnion
    {
    public:
      union
      {
        SizeType value;
        BitFieldModel<SizeType, 6, 1> b2bstup;
        BitFieldModel<SizeType, 4, 1> otepdis;
        BitFieldModel<SizeType, 3, 1> stup;
        BitFieldModel<SizeType, 1, 1> epdisd;
        BitFieldModel<SizeType, 0, 1> xfrc;
      };
    };

  private:
    template<typename SizeType, std::uintptr_t Address>
    class DoepintXRegisterModel : public RegisterModel<DoepintXRegisterUnion<SizeType>, DoepintXAddressPolicy<Address>>
    {
    public:
      using reg = DoepintXRegisterUnion<SizeType>;

    public:
      using b2bstup = FieldModel<reg, DoepintXAddressPolicy<Address>, 6, 1>;
      using otepdis = FieldModel<reg, DoepintXAddressPolicy<Address>, 4, 1>;
      using stup = FieldModel<reg, DoepintXAddressPolicy<Address>, 3, 1>;
      using epdisd = FieldModel<reg, DoepintXAddressPolicy<Address>, 1, 1>;
      using xfrc = FieldModel<reg, DoepintXAddressPolicy<Address>, 0, 1>;
    };

  public:
    using doepintX = DoepintXRegisterModel<uint32_t, OtgFsDeviceBaseAddress + DoepintXBaseAddress + 0x00000000>;


  };

/**
 * GROUP DIEPTSIZ_X
 */
public:
  class DieptsizX
  {
  public:
    static constexpr uintptr_t DieptsizXBaseAddress = 0x00000130;

  private:
    enum class DieptsizXIndex
    {
      Dieptsiz1,
      Dieptsiz2,
      Dieptsiz3,
    };

  public:
    struct Index
    {
      using enum DieptsizXIndex;
      static constexpr std::array All = {DieptsizXIndex::Dieptsiz1, DieptsizXIndex::Dieptsiz2, DieptsizXIndex::Dieptsiz3};
    };

  private:
    using DieptsizXLayerOffsetPolicy = LayerOffsetPolicy<DieptsizXIndex, 0x00000020>;

    template<std::uintptr_t Address>
    using DieptsizXAddressPolicy = GroupAddressPolicy<Address, std::tuple<DieptsizXLayerOffsetPolicy>>;

  /**
   * REGISTER DIEPTSIZ_X
   */
  private:
    template<typename SizeType>
    class DieptsizXRegisterUnion
    {
    public:
      union
      {
        SizeType value;
        BitFieldModel<SizeType, 29, 2> mcnt;
        BitFieldModel<SizeType, 19, 10> pktcnt;
        BitFieldModel<SizeType, 0, 19> xfrsiz;
      };
    };

  private:
    template<typename SizeType, std::uintptr_t Address>
    class DieptsizXRegisterModel : public RegisterModel<DieptsizXRegisterUnion<SizeType>, DieptsizXAddressPolicy<Address>>
    {
    public:
      using reg = DieptsizXRegisterUnion<SizeType>;

    public:
      using mcnt = FieldModel<reg, DieptsizXAddressPolicy<Address>, 29, 2>;
      using pktcnt = FieldModel<reg, DieptsizXAddressPolicy<Address>, 19, 10>;
      using xfrsiz = FieldModel<reg, DieptsizXAddressPolicy<Address>, 0, 19>;
    };

  public:
    using dieptsizX = DieptsizXRegisterModel<uint32_t, OtgFsDeviceBaseAddress + DieptsizXBaseAddress + 0x00000000>;


  };

/**
 * GROUP DTXFSTS_X
 */
public:
  class DtxfstsX
  {
  public:
    static constexpr uintptr_t DtxfstsXBaseAddress = 0x00000118;

  private:
    enum class DtxfstsXIndex
    {
      Dtxfsts0,
      Dtxfsts1,
      Dtxfsts2,
      Dtxfsts3,
    };

  public:
    struct Index
    {
      using enum DtxfstsXIndex;
      static constexpr std::array All = {DtxfstsXIndex::Dtxfsts0, DtxfstsXIndex::Dtxfsts1, DtxfstsXIndex::Dtxfsts2, DtxfstsXIndex::Dtxfsts3};
    };

  private:
    using DtxfstsXLayerOffsetPolicy = LayerOffsetPolicy<DtxfstsXIndex, 0x00000020>;

    template<std::uintptr_t Address>
    using DtxfstsXAddressPolicy = GroupAddressPolicy<Address, std::tuple<DtxfstsXLayerOffsetPolicy>>;

  /**
   * REGISTER DTXFSTS_X
   */
  private:
    template<typename SizeType>
    class DtxfstsXRegisterUnion
    {
    public:
      union
      {
        SizeType value;
        BitFieldModel<SizeType, 0, 16> ineptfsav;
      };
    };

  private:
    template<typename SizeType, std::uintptr_t Address>
    class DtxfstsXRegisterModel : public RegisterModel<DtxfstsXRegisterUnion<SizeType>, DtxfstsXAddressPolicy<Address>>
    {
    public:
      using reg = DtxfstsXRegisterUnion<SizeType>;

    public:
      using ineptfsav = FieldModel<reg, DtxfstsXAddressPolicy<Address>, 0, 16>;
    };

  public:
    using dtxfstsX = DtxfstsXRegisterModel<uint32_t, OtgFsDeviceBaseAddress + DtxfstsXBaseAddress + 0x00000000>;


  };

};

}

#endif /* DRAL_STM32F411_OTG_FS_DEVICE_H */