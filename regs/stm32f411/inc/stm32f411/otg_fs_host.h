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

#ifndef DRAL_STM32F411_OTG_FS_HOST_H
#define DRAL_STM32F411_OTG_FS_HOST_H

#include "dral/bitfield_model.h"
#include "dral/group_address_policy.h"
#include "dral/layer_offset_policy.h"
#include "dral/register_model.h"

namespace dral::stm32f411 {

class OtgFsHost
{
public:
  static constexpr uintptr_t OtgFsHostBaseAddress = 0x50000400;

private:
  template<std::uintptr_t Address>
  using OtgFsHostAddressPolicy = GroupAddressPolicy<Address>;

/**
 * REGISTER FS_HCFG
 */
private:
  template<typename SizeType>
  class FsHcfgRegisterUnion
  {
  public:
    union
    {
      SizeType value;
      BitFieldModel<SizeType, 0, 2> fslspcs;
      BitFieldModel<SizeType, 2, 1> fslss;
    };
  };

private:
  template<typename SizeType, std::uintptr_t Address>
  class FsHcfgRegisterModel : public RegisterModel<FsHcfgRegisterUnion<SizeType>, OtgFsHostAddressPolicy<Address>>
  {
  public:
    using reg = FsHcfgRegisterUnion<SizeType>;

  public:
    using fslspcs = FieldModel<reg, OtgFsHostAddressPolicy<Address>, 0, 2>;
    using fslss = FieldModel<reg, OtgFsHostAddressPolicy<Address>, 2, 1>;
  };

public:
  using fsHcfg = FsHcfgRegisterModel<uint32_t, OtgFsHostBaseAddress + 0x00000000>;

/**
 * REGISTER HFIR
 */
private:
  template<typename SizeType>
  class HfirRegisterUnion
  {
  public:
    union
    {
      SizeType value;
      BitFieldModel<SizeType, 0, 16> frivl;
    };
  };

private:
  template<typename SizeType, std::uintptr_t Address>
  class HfirRegisterModel : public RegisterModel<HfirRegisterUnion<SizeType>, OtgFsHostAddressPolicy<Address>>
  {
  public:
    using reg = HfirRegisterUnion<SizeType>;

  public:
    using frivl = FieldModel<reg, OtgFsHostAddressPolicy<Address>, 0, 16>;
  };

public:
  using hfir = HfirRegisterModel<uint32_t, OtgFsHostBaseAddress + 0x00000004>;

/**
 * REGISTER FS_HFNUM
 */
private:
  template<typename SizeType>
  class FsHfnumRegisterUnion
  {
  public:
    union
    {
      SizeType value;
      BitFieldModel<SizeType, 0, 16> frnum;
      BitFieldModel<SizeType, 16, 16> ftrem;
    };
  };

private:
  template<typename SizeType, std::uintptr_t Address>
  class FsHfnumRegisterModel : public RegisterModel<FsHfnumRegisterUnion<SizeType>, OtgFsHostAddressPolicy<Address>>
  {
  public:
    using reg = FsHfnumRegisterUnion<SizeType>;

  public:
    using frnum = FieldModel<reg, OtgFsHostAddressPolicy<Address>, 0, 16>;
    using ftrem = FieldModel<reg, OtgFsHostAddressPolicy<Address>, 16, 16>;
  };

public:
  using fsHfnum = FsHfnumRegisterModel<uint32_t, OtgFsHostBaseAddress + 0x00000008>;

/**
 * REGISTER FS_HPTXSTS
 */
private:
  template<typename SizeType>
  class FsHptxstsRegisterUnion
  {
  public:
    union
    {
      SizeType value;
      BitFieldModel<SizeType, 0, 16> ptxfsavl;
      BitFieldModel<SizeType, 16, 8> ptxqsav;
      BitFieldModel<SizeType, 24, 8> ptxqtop;
    };
  };

private:
  template<typename SizeType, std::uintptr_t Address>
  class FsHptxstsRegisterModel : public RegisterModel<FsHptxstsRegisterUnion<SizeType>, OtgFsHostAddressPolicy<Address>>
  {
  public:
    using reg = FsHptxstsRegisterUnion<SizeType>;

  public:
    using ptxfsavl = FieldModel<reg, OtgFsHostAddressPolicy<Address>, 0, 16>;
    using ptxqsav = FieldModel<reg, OtgFsHostAddressPolicy<Address>, 16, 8>;
    using ptxqtop = FieldModel<reg, OtgFsHostAddressPolicy<Address>, 24, 8>;
  };

public:
  using fsHptxsts = FsHptxstsRegisterModel<uint32_t, OtgFsHostBaseAddress + 0x00000010>;

/**
 * REGISTER HAINT
 */
private:
  template<typename SizeType>
  class HaintRegisterUnion
  {
  public:
    union
    {
      SizeType value;
      BitFieldModel<SizeType, 0, 16> haint;
    };
  };

private:
  template<typename SizeType, std::uintptr_t Address>
  class HaintRegisterModel : public RegisterModel<HaintRegisterUnion<SizeType>, OtgFsHostAddressPolicy<Address>>
  {
  public:
    using reg = HaintRegisterUnion<SizeType>;

  public:
    using haint = FieldModel<reg, OtgFsHostAddressPolicy<Address>, 0, 16>;
  };

public:
  using haint = HaintRegisterModel<uint32_t, OtgFsHostBaseAddress + 0x00000014>;

/**
 * REGISTER HAINTMSK
 */
private:
  template<typename SizeType>
  class HaintmskRegisterUnion
  {
  public:
    union
    {
      SizeType value;
      BitFieldModel<SizeType, 0, 16> haintm;
    };
  };

private:
  template<typename SizeType, std::uintptr_t Address>
  class HaintmskRegisterModel : public RegisterModel<HaintmskRegisterUnion<SizeType>, OtgFsHostAddressPolicy<Address>>
  {
  public:
    using reg = HaintmskRegisterUnion<SizeType>;

  public:
    using haintm = FieldModel<reg, OtgFsHostAddressPolicy<Address>, 0, 16>;
  };

public:
  using haintmsk = HaintmskRegisterModel<uint32_t, OtgFsHostBaseAddress + 0x00000018>;

/**
 * REGISTER FS_HPRT
 */
private:
  template<typename SizeType>
  class FsHprtRegisterUnion
  {
  public:
    union
    {
      SizeType value;
      BitFieldModel<SizeType, 0, 1> pcsts;
      BitFieldModel<SizeType, 1, 1> pcdet;
      BitFieldModel<SizeType, 2, 1> pena;
      BitFieldModel<SizeType, 3, 1> penchng;
      BitFieldModel<SizeType, 4, 1> poca;
      BitFieldModel<SizeType, 5, 1> pocchng;
      BitFieldModel<SizeType, 6, 1> pres;
      BitFieldModel<SizeType, 7, 1> psusp;
      BitFieldModel<SizeType, 8, 1> prst;
      BitFieldModel<SizeType, 10, 2> plsts;
      BitFieldModel<SizeType, 12, 1> ppwr;
      BitFieldModel<SizeType, 13, 4> ptctl;
      BitFieldModel<SizeType, 17, 2> pspd;
    };
  };

private:
  template<typename SizeType, std::uintptr_t Address>
  class FsHprtRegisterModel : public RegisterModel<FsHprtRegisterUnion<SizeType>, OtgFsHostAddressPolicy<Address>>
  {
  public:
    using reg = FsHprtRegisterUnion<SizeType>;

  public:
    using pcsts = FieldModel<reg, OtgFsHostAddressPolicy<Address>, 0, 1>;
    using pcdet = FieldModel<reg, OtgFsHostAddressPolicy<Address>, 1, 1>;
    using pena = FieldModel<reg, OtgFsHostAddressPolicy<Address>, 2, 1>;
    using penchng = FieldModel<reg, OtgFsHostAddressPolicy<Address>, 3, 1>;
    using poca = FieldModel<reg, OtgFsHostAddressPolicy<Address>, 4, 1>;
    using pocchng = FieldModel<reg, OtgFsHostAddressPolicy<Address>, 5, 1>;
    using pres = FieldModel<reg, OtgFsHostAddressPolicy<Address>, 6, 1>;
    using psusp = FieldModel<reg, OtgFsHostAddressPolicy<Address>, 7, 1>;
    using prst = FieldModel<reg, OtgFsHostAddressPolicy<Address>, 8, 1>;
    using plsts = FieldModel<reg, OtgFsHostAddressPolicy<Address>, 10, 2>;
    using ppwr = FieldModel<reg, OtgFsHostAddressPolicy<Address>, 12, 1>;
    using ptctl = FieldModel<reg, OtgFsHostAddressPolicy<Address>, 13, 4>;
    using pspd = FieldModel<reg, OtgFsHostAddressPolicy<Address>, 17, 2>;
  };

public:
  using fsHprt = FsHprtRegisterModel<uint32_t, OtgFsHostBaseAddress + 0x00000040>;


/**
 * GROUP FS_HCCHAR_X
 */
public:
  class FsHccharX
  {
  public:
    static constexpr uintptr_t FsHccharXBaseAddress = 0x00000100;

  private:
    enum class FsHccharXIndex
    {
      FsHcchar0,
      FsHcchar1,
      FsHcchar2,
      FsHcchar3,
      FsHcchar4,
      FsHcchar5,
      FsHcchar6,
      FsHcchar7,
    };

  public:
    struct Index
    {
      using enum FsHccharXIndex;
      static constexpr std::array All = {FsHccharXIndex::FsHcchar0, FsHccharXIndex::FsHcchar1, FsHccharXIndex::FsHcchar2, FsHccharXIndex::FsHcchar3, FsHccharXIndex::FsHcchar4, FsHccharXIndex::FsHcchar5, FsHccharXIndex::FsHcchar6, FsHccharXIndex::FsHcchar7};
    };

  private:
    using FsHccharXLayerOffsetPolicy = LayerOffsetPolicy<FsHccharXIndex, 0x00000020>;

    template<std::uintptr_t Address>
    using FsHccharXAddressPolicy = GroupAddressPolicy<Address, std::tuple<FsHccharXLayerOffsetPolicy>>;

  /**
   * REGISTER FS_HCCHAR_X
   */
  private:
    template<typename SizeType>
    class FsHccharXRegisterUnion
    {
    public:
      union
      {
        SizeType value;
        BitFieldModel<SizeType, 0, 11> mpsiz;
        BitFieldModel<SizeType, 11, 4> epnum;
        BitFieldModel<SizeType, 15, 1> epdir;
        BitFieldModel<SizeType, 17, 1> lsdev;
        BitFieldModel<SizeType, 18, 2> eptyp;
        BitFieldModel<SizeType, 20, 2> mcnt;
        BitFieldModel<SizeType, 22, 7> dad;
        BitFieldModel<SizeType, 29, 1> oddfrm;
        BitFieldModel<SizeType, 30, 1> chdis;
        BitFieldModel<SizeType, 31, 1> chena;
      };
    };

  private:
    template<typename SizeType, std::uintptr_t Address>
    class FsHccharXRegisterModel : public RegisterModel<FsHccharXRegisterUnion<SizeType>, FsHccharXAddressPolicy<Address>>
    {
    public:
      using reg = FsHccharXRegisterUnion<SizeType>;

    public:
      using mpsiz = FieldModel<reg, FsHccharXAddressPolicy<Address>, 0, 11>;
      using epnum = FieldModel<reg, FsHccharXAddressPolicy<Address>, 11, 4>;
      using epdir = FieldModel<reg, FsHccharXAddressPolicy<Address>, 15, 1>;
      using lsdev = FieldModel<reg, FsHccharXAddressPolicy<Address>, 17, 1>;
      using eptyp = FieldModel<reg, FsHccharXAddressPolicy<Address>, 18, 2>;
      using mcnt = FieldModel<reg, FsHccharXAddressPolicy<Address>, 20, 2>;
      using dad = FieldModel<reg, FsHccharXAddressPolicy<Address>, 22, 7>;
      using oddfrm = FieldModel<reg, FsHccharXAddressPolicy<Address>, 29, 1>;
      using chdis = FieldModel<reg, FsHccharXAddressPolicy<Address>, 30, 1>;
      using chena = FieldModel<reg, FsHccharXAddressPolicy<Address>, 31, 1>;
    };

  public:
    using fsHccharX = FsHccharXRegisterModel<uint32_t, OtgFsHostBaseAddress + FsHccharXBaseAddress + 0x00000000>;


  };

/**
 * GROUP FS_HCINT_X
 */
public:
  class FsHcintX
  {
  public:
    static constexpr uintptr_t FsHcintXBaseAddress = 0x00000108;

  private:
    enum class FsHcintXIndex
    {
      FsHcint0,
      FsHcint1,
      FsHcint2,
      FsHcint3,
      FsHcint4,
      FsHcint5,
      FsHcint6,
      FsHcint7,
    };

  public:
    struct Index
    {
      using enum FsHcintXIndex;
      static constexpr std::array All = {FsHcintXIndex::FsHcint0, FsHcintXIndex::FsHcint1, FsHcintXIndex::FsHcint2, FsHcintXIndex::FsHcint3, FsHcintXIndex::FsHcint4, FsHcintXIndex::FsHcint5, FsHcintXIndex::FsHcint6, FsHcintXIndex::FsHcint7};
    };

  private:
    using FsHcintXLayerOffsetPolicy = LayerOffsetPolicy<FsHcintXIndex, 0x00000020>;

    template<std::uintptr_t Address>
    using FsHcintXAddressPolicy = GroupAddressPolicy<Address, std::tuple<FsHcintXLayerOffsetPolicy>>;

  /**
   * REGISTER FS_HCINT_X
   */
  private:
    template<typename SizeType>
    class FsHcintXRegisterUnion
    {
    public:
      union
      {
        SizeType value;
        BitFieldModel<SizeType, 0, 1> xfrc;
        BitFieldModel<SizeType, 1, 1> chh;
        BitFieldModel<SizeType, 3, 1> stall;
        BitFieldModel<SizeType, 4, 1> nak;
        BitFieldModel<SizeType, 5, 1> ack;
        BitFieldModel<SizeType, 7, 1> txerr;
        BitFieldModel<SizeType, 8, 1> bberr;
        BitFieldModel<SizeType, 9, 1> frmor;
        BitFieldModel<SizeType, 10, 1> dterr;
      };
    };

  private:
    template<typename SizeType, std::uintptr_t Address>
    class FsHcintXRegisterModel : public RegisterModel<FsHcintXRegisterUnion<SizeType>, FsHcintXAddressPolicy<Address>>
    {
    public:
      using reg = FsHcintXRegisterUnion<SizeType>;

    public:
      using xfrc = FieldModel<reg, FsHcintXAddressPolicy<Address>, 0, 1>;
      using chh = FieldModel<reg, FsHcintXAddressPolicy<Address>, 1, 1>;
      using stall = FieldModel<reg, FsHcintXAddressPolicy<Address>, 3, 1>;
      using nak = FieldModel<reg, FsHcintXAddressPolicy<Address>, 4, 1>;
      using ack = FieldModel<reg, FsHcintXAddressPolicy<Address>, 5, 1>;
      using txerr = FieldModel<reg, FsHcintXAddressPolicy<Address>, 7, 1>;
      using bberr = FieldModel<reg, FsHcintXAddressPolicy<Address>, 8, 1>;
      using frmor = FieldModel<reg, FsHcintXAddressPolicy<Address>, 9, 1>;
      using dterr = FieldModel<reg, FsHcintXAddressPolicy<Address>, 10, 1>;
    };

  public:
    using fsHcintX = FsHcintXRegisterModel<uint32_t, OtgFsHostBaseAddress + FsHcintXBaseAddress + 0x00000000>;


  };

/**
 * GROUP FS_HCINTMSK_X
 */
public:
  class FsHcintmskX
  {
  public:
    static constexpr uintptr_t FsHcintmskXBaseAddress = 0x0000010C;

  private:
    enum class FsHcintmskXIndex
    {
      FsHcintmsk0,
      FsHcintmsk1,
      FsHcintmsk2,
      FsHcintmsk3,
      FsHcintmsk4,
      FsHcintmsk5,
      FsHcintmsk6,
      FsHcintmsk7,
    };

  public:
    struct Index
    {
      using enum FsHcintmskXIndex;
      static constexpr std::array All = {FsHcintmskXIndex::FsHcintmsk0, FsHcintmskXIndex::FsHcintmsk1, FsHcintmskXIndex::FsHcintmsk2, FsHcintmskXIndex::FsHcintmsk3, FsHcintmskXIndex::FsHcintmsk4, FsHcintmskXIndex::FsHcintmsk5, FsHcintmskXIndex::FsHcintmsk6, FsHcintmskXIndex::FsHcintmsk7};
    };

  private:
    using FsHcintmskXLayerOffsetPolicy = LayerOffsetPolicy<FsHcintmskXIndex, 0x00000020>;

    template<std::uintptr_t Address>
    using FsHcintmskXAddressPolicy = GroupAddressPolicy<Address, std::tuple<FsHcintmskXLayerOffsetPolicy>>;

  /**
   * REGISTER FS_HCINTMSK_X
   */
  private:
    template<typename SizeType>
    class FsHcintmskXRegisterUnion
    {
    public:
      union
      {
        SizeType value;
        BitFieldModel<SizeType, 0, 1> xfrcm;
        BitFieldModel<SizeType, 1, 1> chhm;
        BitFieldModel<SizeType, 3, 1> stallm;
        BitFieldModel<SizeType, 4, 1> nakm;
        BitFieldModel<SizeType, 5, 1> ackm;
        BitFieldModel<SizeType, 6, 1> nyet;
        BitFieldModel<SizeType, 7, 1> txerrm;
        BitFieldModel<SizeType, 8, 1> bberrm;
        BitFieldModel<SizeType, 9, 1> frmorm;
        BitFieldModel<SizeType, 10, 1> dterrm;
      };
    };

  private:
    template<typename SizeType, std::uintptr_t Address>
    class FsHcintmskXRegisterModel : public RegisterModel<FsHcintmskXRegisterUnion<SizeType>, FsHcintmskXAddressPolicy<Address>>
    {
    public:
      using reg = FsHcintmskXRegisterUnion<SizeType>;

    public:
      using xfrcm = FieldModel<reg, FsHcintmskXAddressPolicy<Address>, 0, 1>;
      using chhm = FieldModel<reg, FsHcintmskXAddressPolicy<Address>, 1, 1>;
      using stallm = FieldModel<reg, FsHcintmskXAddressPolicy<Address>, 3, 1>;
      using nakm = FieldModel<reg, FsHcintmskXAddressPolicy<Address>, 4, 1>;
      using ackm = FieldModel<reg, FsHcintmskXAddressPolicy<Address>, 5, 1>;
      using nyet = FieldModel<reg, FsHcintmskXAddressPolicy<Address>, 6, 1>;
      using txerrm = FieldModel<reg, FsHcintmskXAddressPolicy<Address>, 7, 1>;
      using bberrm = FieldModel<reg, FsHcintmskXAddressPolicy<Address>, 8, 1>;
      using frmorm = FieldModel<reg, FsHcintmskXAddressPolicy<Address>, 9, 1>;
      using dterrm = FieldModel<reg, FsHcintmskXAddressPolicy<Address>, 10, 1>;
    };

  public:
    using fsHcintmskX = FsHcintmskXRegisterModel<uint32_t, OtgFsHostBaseAddress + FsHcintmskXBaseAddress + 0x00000000>;


  };

/**
 * GROUP FS_HCTSIZ_X
 */
public:
  class FsHctsizX
  {
  public:
    static constexpr uintptr_t FsHctsizXBaseAddress = 0x00000110;

  private:
    enum class FsHctsizXIndex
    {
      FsHctsiz0,
      FsHctsiz1,
      FsHctsiz2,
      FsHctsiz3,
      FsHctsiz4,
      FsHctsiz5,
      FsHctsiz6,
      FsHctsiz7,
    };

  public:
    struct Index
    {
      using enum FsHctsizXIndex;
      static constexpr std::array All = {FsHctsizXIndex::FsHctsiz0, FsHctsizXIndex::FsHctsiz1, FsHctsizXIndex::FsHctsiz2, FsHctsizXIndex::FsHctsiz3, FsHctsizXIndex::FsHctsiz4, FsHctsizXIndex::FsHctsiz5, FsHctsizXIndex::FsHctsiz6, FsHctsizXIndex::FsHctsiz7};
    };

  private:
    using FsHctsizXLayerOffsetPolicy = LayerOffsetPolicy<FsHctsizXIndex, 0x00000020>;

    template<std::uintptr_t Address>
    using FsHctsizXAddressPolicy = GroupAddressPolicy<Address, std::tuple<FsHctsizXLayerOffsetPolicy>>;

  /**
   * REGISTER FS_HCTSIZ_X
   */
  private:
    template<typename SizeType>
    class FsHctsizXRegisterUnion
    {
    public:
      union
      {
        SizeType value;
        BitFieldModel<SizeType, 0, 19> xfrsiz;
        BitFieldModel<SizeType, 19, 10> pktcnt;
        BitFieldModel<SizeType, 29, 2> dpid;
      };
    };

  private:
    template<typename SizeType, std::uintptr_t Address>
    class FsHctsizXRegisterModel : public RegisterModel<FsHctsizXRegisterUnion<SizeType>, FsHctsizXAddressPolicy<Address>>
    {
    public:
      using reg = FsHctsizXRegisterUnion<SizeType>;

    public:
      using xfrsiz = FieldModel<reg, FsHctsizXAddressPolicy<Address>, 0, 19>;
      using pktcnt = FieldModel<reg, FsHctsizXAddressPolicy<Address>, 19, 10>;
      using dpid = FieldModel<reg, FsHctsizXAddressPolicy<Address>, 29, 2>;
    };

  public:
    using fsHctsizX = FsHctsizXRegisterModel<uint32_t, OtgFsHostBaseAddress + FsHctsizXBaseAddress + 0x00000000>;


  };

};

}

#endif /* DRAL_STM32F411_OTG_FS_HOST_H */