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

#ifndef DRAL_STM32F411_DMA_X_H
#define DRAL_STM32F411_DMA_X_H

#include "dral/bitfield_model.h"
#include "dral/group_address_policy.h"
#include "dral/layer_offset_policy.h"
#include "dral/register_model.h"

namespace dral::stm32f411 {

class DmaX
{
public:
  static constexpr uintptr_t DmaXBaseAddress = 0x40026000;

private:
  enum class DmaXIndex
  {
    Dma1,
    Dma2,
  };

public:
  struct Index
  {
    using enum DmaXIndex;
    static constexpr std::array All = {DmaXIndex::Dma1, DmaXIndex::Dma2};
  };

private:
  using DmaXLayerOffsetPolicy = LayerOffsetPolicy<DmaXIndex, 0x00000400>;

  template<std::uintptr_t Address>
  using DmaXAddressPolicy = GroupAddressPolicy<Address, std::tuple<DmaXLayerOffsetPolicy>>;

/**
 * REGISTER LISR
 */
private:
  template<typename SizeType>
  class LisrRegisterUnion
  {
  public:
    union
    {
      SizeType value;
      BitFieldModel<SizeType, 27, 1> tcif3;
      BitFieldModel<SizeType, 26, 1> htif3;
      BitFieldModel<SizeType, 25, 1> teif3;
      BitFieldModel<SizeType, 24, 1> dmeif3;
      BitFieldModel<SizeType, 22, 1> feif3;
      BitFieldModel<SizeType, 21, 1> tcif2;
      BitFieldModel<SizeType, 20, 1> htif2;
      BitFieldModel<SizeType, 19, 1> teif2;
      BitFieldModel<SizeType, 18, 1> dmeif2;
      BitFieldModel<SizeType, 16, 1> feif2;
      BitFieldModel<SizeType, 11, 1> tcif1;
      BitFieldModel<SizeType, 10, 1> htif1;
      BitFieldModel<SizeType, 9, 1> teif1;
      BitFieldModel<SizeType, 8, 1> dmeif1;
      BitFieldModel<SizeType, 6, 1> feif1;
      BitFieldModel<SizeType, 5, 1> tcif0;
      BitFieldModel<SizeType, 4, 1> htif0;
      BitFieldModel<SizeType, 3, 1> teif0;
      BitFieldModel<SizeType, 2, 1> dmeif0;
      BitFieldModel<SizeType, 0, 1> feif0;
    };
  };

private:
  template<typename SizeType, std::uintptr_t Address>
  class LisrRegisterModel : public RegisterModel<LisrRegisterUnion<SizeType>, DmaXAddressPolicy<Address>>
  {
  public:
    using reg = LisrRegisterUnion<SizeType>;

  public:
    using tcif3 = FieldModel<reg, DmaXAddressPolicy<Address>, 27, 1>;
    using htif3 = FieldModel<reg, DmaXAddressPolicy<Address>, 26, 1>;
    using teif3 = FieldModel<reg, DmaXAddressPolicy<Address>, 25, 1>;
    using dmeif3 = FieldModel<reg, DmaXAddressPolicy<Address>, 24, 1>;
    using feif3 = FieldModel<reg, DmaXAddressPolicy<Address>, 22, 1>;
    using tcif2 = FieldModel<reg, DmaXAddressPolicy<Address>, 21, 1>;
    using htif2 = FieldModel<reg, DmaXAddressPolicy<Address>, 20, 1>;
    using teif2 = FieldModel<reg, DmaXAddressPolicy<Address>, 19, 1>;
    using dmeif2 = FieldModel<reg, DmaXAddressPolicy<Address>, 18, 1>;
    using feif2 = FieldModel<reg, DmaXAddressPolicy<Address>, 16, 1>;
    using tcif1 = FieldModel<reg, DmaXAddressPolicy<Address>, 11, 1>;
    using htif1 = FieldModel<reg, DmaXAddressPolicy<Address>, 10, 1>;
    using teif1 = FieldModel<reg, DmaXAddressPolicy<Address>, 9, 1>;
    using dmeif1 = FieldModel<reg, DmaXAddressPolicy<Address>, 8, 1>;
    using feif1 = FieldModel<reg, DmaXAddressPolicy<Address>, 6, 1>;
    using tcif0 = FieldModel<reg, DmaXAddressPolicy<Address>, 5, 1>;
    using htif0 = FieldModel<reg, DmaXAddressPolicy<Address>, 4, 1>;
    using teif0 = FieldModel<reg, DmaXAddressPolicy<Address>, 3, 1>;
    using dmeif0 = FieldModel<reg, DmaXAddressPolicy<Address>, 2, 1>;
    using feif0 = FieldModel<reg, DmaXAddressPolicy<Address>, 0, 1>;
  };

public:
  using lisr = LisrRegisterModel<uint32_t, DmaXBaseAddress + 0x00000000>;

/**
 * REGISTER HISR
 */
private:
  template<typename SizeType>
  class HisrRegisterUnion
  {
  public:
    union
    {
      SizeType value;
      BitFieldModel<SizeType, 27, 1> tcif7;
      BitFieldModel<SizeType, 26, 1> htif7;
      BitFieldModel<SizeType, 25, 1> teif7;
      BitFieldModel<SizeType, 24, 1> dmeif7;
      BitFieldModel<SizeType, 22, 1> feif7;
      BitFieldModel<SizeType, 21, 1> tcif6;
      BitFieldModel<SizeType, 20, 1> htif6;
      BitFieldModel<SizeType, 19, 1> teif6;
      BitFieldModel<SizeType, 18, 1> dmeif6;
      BitFieldModel<SizeType, 16, 1> feif6;
      BitFieldModel<SizeType, 11, 1> tcif5;
      BitFieldModel<SizeType, 10, 1> htif5;
      BitFieldModel<SizeType, 9, 1> teif5;
      BitFieldModel<SizeType, 8, 1> dmeif5;
      BitFieldModel<SizeType, 6, 1> feif5;
      BitFieldModel<SizeType, 5, 1> tcif4;
      BitFieldModel<SizeType, 4, 1> htif4;
      BitFieldModel<SizeType, 3, 1> teif4;
      BitFieldModel<SizeType, 2, 1> dmeif4;
      BitFieldModel<SizeType, 0, 1> feif4;
    };
  };

private:
  template<typename SizeType, std::uintptr_t Address>
  class HisrRegisterModel : public RegisterModel<HisrRegisterUnion<SizeType>, DmaXAddressPolicy<Address>>
  {
  public:
    using reg = HisrRegisterUnion<SizeType>;

  public:
    using tcif7 = FieldModel<reg, DmaXAddressPolicy<Address>, 27, 1>;
    using htif7 = FieldModel<reg, DmaXAddressPolicy<Address>, 26, 1>;
    using teif7 = FieldModel<reg, DmaXAddressPolicy<Address>, 25, 1>;
    using dmeif7 = FieldModel<reg, DmaXAddressPolicy<Address>, 24, 1>;
    using feif7 = FieldModel<reg, DmaXAddressPolicy<Address>, 22, 1>;
    using tcif6 = FieldModel<reg, DmaXAddressPolicy<Address>, 21, 1>;
    using htif6 = FieldModel<reg, DmaXAddressPolicy<Address>, 20, 1>;
    using teif6 = FieldModel<reg, DmaXAddressPolicy<Address>, 19, 1>;
    using dmeif6 = FieldModel<reg, DmaXAddressPolicy<Address>, 18, 1>;
    using feif6 = FieldModel<reg, DmaXAddressPolicy<Address>, 16, 1>;
    using tcif5 = FieldModel<reg, DmaXAddressPolicy<Address>, 11, 1>;
    using htif5 = FieldModel<reg, DmaXAddressPolicy<Address>, 10, 1>;
    using teif5 = FieldModel<reg, DmaXAddressPolicy<Address>, 9, 1>;
    using dmeif5 = FieldModel<reg, DmaXAddressPolicy<Address>, 8, 1>;
    using feif5 = FieldModel<reg, DmaXAddressPolicy<Address>, 6, 1>;
    using tcif4 = FieldModel<reg, DmaXAddressPolicy<Address>, 5, 1>;
    using htif4 = FieldModel<reg, DmaXAddressPolicy<Address>, 4, 1>;
    using teif4 = FieldModel<reg, DmaXAddressPolicy<Address>, 3, 1>;
    using dmeif4 = FieldModel<reg, DmaXAddressPolicy<Address>, 2, 1>;
    using feif4 = FieldModel<reg, DmaXAddressPolicy<Address>, 0, 1>;
  };

public:
  using hisr = HisrRegisterModel<uint32_t, DmaXBaseAddress + 0x00000004>;

/**
 * REGISTER LIFCR
 */
private:
  template<typename SizeType>
  class LifcrRegisterUnion
  {
  public:
    union
    {
      SizeType value;
      BitFieldModel<SizeType, 27, 1> ctcif3;
      BitFieldModel<SizeType, 26, 1> chtif3;
      BitFieldModel<SizeType, 25, 1> cteif3;
      BitFieldModel<SizeType, 24, 1> cdmeif3;
      BitFieldModel<SizeType, 22, 1> cfeif3;
      BitFieldModel<SizeType, 21, 1> ctcif2;
      BitFieldModel<SizeType, 20, 1> chtif2;
      BitFieldModel<SizeType, 19, 1> cteif2;
      BitFieldModel<SizeType, 18, 1> cdmeif2;
      BitFieldModel<SizeType, 16, 1> cfeif2;
      BitFieldModel<SizeType, 11, 1> ctcif1;
      BitFieldModel<SizeType, 10, 1> chtif1;
      BitFieldModel<SizeType, 9, 1> cteif1;
      BitFieldModel<SizeType, 8, 1> cdmeif1;
      BitFieldModel<SizeType, 6, 1> cfeif1;
      BitFieldModel<SizeType, 5, 1> ctcif0;
      BitFieldModel<SizeType, 4, 1> chtif0;
      BitFieldModel<SizeType, 3, 1> cteif0;
      BitFieldModel<SizeType, 2, 1> cdmeif0;
      BitFieldModel<SizeType, 0, 1> cfeif0;
    };
  };

private:
  template<typename SizeType, std::uintptr_t Address>
  class LifcrRegisterModel : public RegisterModel<LifcrRegisterUnion<SizeType>, DmaXAddressPolicy<Address>>
  {
  public:
    using reg = LifcrRegisterUnion<SizeType>;

  public:
    using ctcif3 = FieldModel<reg, DmaXAddressPolicy<Address>, 27, 1>;
    using chtif3 = FieldModel<reg, DmaXAddressPolicy<Address>, 26, 1>;
    using cteif3 = FieldModel<reg, DmaXAddressPolicy<Address>, 25, 1>;
    using cdmeif3 = FieldModel<reg, DmaXAddressPolicy<Address>, 24, 1>;
    using cfeif3 = FieldModel<reg, DmaXAddressPolicy<Address>, 22, 1>;
    using ctcif2 = FieldModel<reg, DmaXAddressPolicy<Address>, 21, 1>;
    using chtif2 = FieldModel<reg, DmaXAddressPolicy<Address>, 20, 1>;
    using cteif2 = FieldModel<reg, DmaXAddressPolicy<Address>, 19, 1>;
    using cdmeif2 = FieldModel<reg, DmaXAddressPolicy<Address>, 18, 1>;
    using cfeif2 = FieldModel<reg, DmaXAddressPolicy<Address>, 16, 1>;
    using ctcif1 = FieldModel<reg, DmaXAddressPolicy<Address>, 11, 1>;
    using chtif1 = FieldModel<reg, DmaXAddressPolicy<Address>, 10, 1>;
    using cteif1 = FieldModel<reg, DmaXAddressPolicy<Address>, 9, 1>;
    using cdmeif1 = FieldModel<reg, DmaXAddressPolicy<Address>, 8, 1>;
    using cfeif1 = FieldModel<reg, DmaXAddressPolicy<Address>, 6, 1>;
    using ctcif0 = FieldModel<reg, DmaXAddressPolicy<Address>, 5, 1>;
    using chtif0 = FieldModel<reg, DmaXAddressPolicy<Address>, 4, 1>;
    using cteif0 = FieldModel<reg, DmaXAddressPolicy<Address>, 3, 1>;
    using cdmeif0 = FieldModel<reg, DmaXAddressPolicy<Address>, 2, 1>;
    using cfeif0 = FieldModel<reg, DmaXAddressPolicy<Address>, 0, 1>;
  };

public:
  using lifcr = LifcrRegisterModel<uint32_t, DmaXBaseAddress + 0x00000008>;

/**
 * REGISTER HIFCR
 */
private:
  template<typename SizeType>
  class HifcrRegisterUnion
  {
  public:
    union
    {
      SizeType value;
      BitFieldModel<SizeType, 27, 1> ctcif7;
      BitFieldModel<SizeType, 26, 1> chtif7;
      BitFieldModel<SizeType, 25, 1> cteif7;
      BitFieldModel<SizeType, 24, 1> cdmeif7;
      BitFieldModel<SizeType, 22, 1> cfeif7;
      BitFieldModel<SizeType, 21, 1> ctcif6;
      BitFieldModel<SizeType, 20, 1> chtif6;
      BitFieldModel<SizeType, 19, 1> cteif6;
      BitFieldModel<SizeType, 18, 1> cdmeif6;
      BitFieldModel<SizeType, 16, 1> cfeif6;
      BitFieldModel<SizeType, 11, 1> ctcif5;
      BitFieldModel<SizeType, 10, 1> chtif5;
      BitFieldModel<SizeType, 9, 1> cteif5;
      BitFieldModel<SizeType, 8, 1> cdmeif5;
      BitFieldModel<SizeType, 6, 1> cfeif5;
      BitFieldModel<SizeType, 5, 1> ctcif4;
      BitFieldModel<SizeType, 4, 1> chtif4;
      BitFieldModel<SizeType, 3, 1> cteif4;
      BitFieldModel<SizeType, 2, 1> cdmeif4;
      BitFieldModel<SizeType, 0, 1> cfeif4;
    };
  };

private:
  template<typename SizeType, std::uintptr_t Address>
  class HifcrRegisterModel : public RegisterModel<HifcrRegisterUnion<SizeType>, DmaXAddressPolicy<Address>>
  {
  public:
    using reg = HifcrRegisterUnion<SizeType>;

  public:
    using ctcif7 = FieldModel<reg, DmaXAddressPolicy<Address>, 27, 1>;
    using chtif7 = FieldModel<reg, DmaXAddressPolicy<Address>, 26, 1>;
    using cteif7 = FieldModel<reg, DmaXAddressPolicy<Address>, 25, 1>;
    using cdmeif7 = FieldModel<reg, DmaXAddressPolicy<Address>, 24, 1>;
    using cfeif7 = FieldModel<reg, DmaXAddressPolicy<Address>, 22, 1>;
    using ctcif6 = FieldModel<reg, DmaXAddressPolicy<Address>, 21, 1>;
    using chtif6 = FieldModel<reg, DmaXAddressPolicy<Address>, 20, 1>;
    using cteif6 = FieldModel<reg, DmaXAddressPolicy<Address>, 19, 1>;
    using cdmeif6 = FieldModel<reg, DmaXAddressPolicy<Address>, 18, 1>;
    using cfeif6 = FieldModel<reg, DmaXAddressPolicy<Address>, 16, 1>;
    using ctcif5 = FieldModel<reg, DmaXAddressPolicy<Address>, 11, 1>;
    using chtif5 = FieldModel<reg, DmaXAddressPolicy<Address>, 10, 1>;
    using cteif5 = FieldModel<reg, DmaXAddressPolicy<Address>, 9, 1>;
    using cdmeif5 = FieldModel<reg, DmaXAddressPolicy<Address>, 8, 1>;
    using cfeif5 = FieldModel<reg, DmaXAddressPolicy<Address>, 6, 1>;
    using ctcif4 = FieldModel<reg, DmaXAddressPolicy<Address>, 5, 1>;
    using chtif4 = FieldModel<reg, DmaXAddressPolicy<Address>, 4, 1>;
    using cteif4 = FieldModel<reg, DmaXAddressPolicy<Address>, 3, 1>;
    using cdmeif4 = FieldModel<reg, DmaXAddressPolicy<Address>, 2, 1>;
    using cfeif4 = FieldModel<reg, DmaXAddressPolicy<Address>, 0, 1>;
  };

public:
  using hifcr = HifcrRegisterModel<uint32_t, DmaXBaseAddress + 0x0000000C>;

/**
 * REGISTER S0CR
 */
private:
  template<typename SizeType>
  class S0crRegisterUnion
  {
  public:
    union
    {
      SizeType value;
      BitFieldModel<SizeType, 25, 3> chsel;
      BitFieldModel<SizeType, 23, 2> mburst;
      BitFieldModel<SizeType, 21, 2> pburst;
      BitFieldModel<SizeType, 19, 1> ct;
      BitFieldModel<SizeType, 18, 1> dbm;
      BitFieldModel<SizeType, 16, 2> pl;
      BitFieldModel<SizeType, 15, 1> pincos;
      BitFieldModel<SizeType, 13, 2> msize;
      BitFieldModel<SizeType, 11, 2> psize;
      BitFieldModel<SizeType, 10, 1> minc;
      BitFieldModel<SizeType, 9, 1> pinc;
      BitFieldModel<SizeType, 8, 1> circ;
      BitFieldModel<SizeType, 6, 2> dir;
      BitFieldModel<SizeType, 5, 1> pfctrl;
      BitFieldModel<SizeType, 4, 1> tcie;
      BitFieldModel<SizeType, 3, 1> htie;
      BitFieldModel<SizeType, 2, 1> teie;
      BitFieldModel<SizeType, 1, 1> dmeie;
      BitFieldModel<SizeType, 0, 1> en;
    };
  };

private:
  template<typename SizeType, std::uintptr_t Address>
  class S0crRegisterModel : public RegisterModel<S0crRegisterUnion<SizeType>, DmaXAddressPolicy<Address>>
  {
  public:
    using reg = S0crRegisterUnion<SizeType>;

  public:
    using chsel = FieldModel<reg, DmaXAddressPolicy<Address>, 25, 3>;
    using mburst = FieldModel<reg, DmaXAddressPolicy<Address>, 23, 2>;
    using pburst = FieldModel<reg, DmaXAddressPolicy<Address>, 21, 2>;
    using ct = FieldModel<reg, DmaXAddressPolicy<Address>, 19, 1>;
    using dbm = FieldModel<reg, DmaXAddressPolicy<Address>, 18, 1>;
    using pl = FieldModel<reg, DmaXAddressPolicy<Address>, 16, 2>;
    using pincos = FieldModel<reg, DmaXAddressPolicy<Address>, 15, 1>;
    using msize = FieldModel<reg, DmaXAddressPolicy<Address>, 13, 2>;
    using psize = FieldModel<reg, DmaXAddressPolicy<Address>, 11, 2>;
    using minc = FieldModel<reg, DmaXAddressPolicy<Address>, 10, 1>;
    using pinc = FieldModel<reg, DmaXAddressPolicy<Address>, 9, 1>;
    using circ = FieldModel<reg, DmaXAddressPolicy<Address>, 8, 1>;
    using dir = FieldModel<reg, DmaXAddressPolicy<Address>, 6, 2>;
    using pfctrl = FieldModel<reg, DmaXAddressPolicy<Address>, 5, 1>;
    using tcie = FieldModel<reg, DmaXAddressPolicy<Address>, 4, 1>;
    using htie = FieldModel<reg, DmaXAddressPolicy<Address>, 3, 1>;
    using teie = FieldModel<reg, DmaXAddressPolicy<Address>, 2, 1>;
    using dmeie = FieldModel<reg, DmaXAddressPolicy<Address>, 1, 1>;
    using en = FieldModel<reg, DmaXAddressPolicy<Address>, 0, 1>;
  };

public:
  using s0cr = S0crRegisterModel<uint32_t, DmaXBaseAddress + 0x00000010>;


/**
 * GROUP S_X_NDTR
 */
public:
  class SXNdtr
  {
  public:
    static constexpr uintptr_t SXNdtrBaseAddress = 0x00000014;

  private:
    enum class SXNdtrIndex
    {
      S0ndtr,
      S1ndtr,
      S2ndtr,
      S3ndtr,
      S4ndtr,
      S5ndtr,
      S6ndtr,
      S7ndtr,
    };

  public:
    struct Index
    {
      using enum SXNdtrIndex;
      static constexpr std::array All = {SXNdtrIndex::S0ndtr, SXNdtrIndex::S1ndtr, SXNdtrIndex::S2ndtr, SXNdtrIndex::S3ndtr, SXNdtrIndex::S4ndtr, SXNdtrIndex::S5ndtr, SXNdtrIndex::S6ndtr, SXNdtrIndex::S7ndtr};
    };

  private:
    using SXNdtrLayerOffsetPolicy = LayerOffsetPolicy<SXNdtrIndex, 0x00000018>;

    template<std::uintptr_t Address>
    using SXNdtrAddressPolicy = GroupAddressPolicy<Address, std::tuple<SXNdtrLayerOffsetPolicy>>;

  /**
   * REGISTER S_X_NDTR
   */
  private:
    template<typename SizeType>
    class SXNdtrRegisterUnion
    {
    public:
      union
      {
        SizeType value;
        BitFieldModel<SizeType, 0, 16> ndt;
      };
    };

  private:
    template<typename SizeType, std::uintptr_t Address>
    class SXNdtrRegisterModel : public RegisterModel<SXNdtrRegisterUnion<SizeType>, SXNdtrAddressPolicy<Address>>
    {
    public:
      using reg = SXNdtrRegisterUnion<SizeType>;

    public:
      using ndt = FieldModel<reg, SXNdtrAddressPolicy<Address>, 0, 16>;
    };

  public:
    using sXNdtr = SXNdtrRegisterModel<uint32_t, DmaXBaseAddress + SXNdtrBaseAddress + 0x00000000>;


  };

/**
 * GROUP S_X_M0AR
 */
public:
  class SXM0ar
  {
  public:
    static constexpr uintptr_t SXM0arBaseAddress = 0x0000001C;

  private:
    enum class SXM0arIndex
    {
      S0m0ar,
      S1m0ar,
      S2m0ar,
      S3m0ar,
      S4m0ar,
      S5m0ar,
      S6m0ar,
      S7m0ar,
    };

  public:
    struct Index
    {
      using enum SXM0arIndex;
      static constexpr std::array All = {SXM0arIndex::S0m0ar, SXM0arIndex::S1m0ar, SXM0arIndex::S2m0ar, SXM0arIndex::S3m0ar, SXM0arIndex::S4m0ar, SXM0arIndex::S5m0ar, SXM0arIndex::S6m0ar, SXM0arIndex::S7m0ar};
    };

  private:
    using SXM0arLayerOffsetPolicy = LayerOffsetPolicy<SXM0arIndex, 0x00000018>;

    template<std::uintptr_t Address>
    using SXM0arAddressPolicy = GroupAddressPolicy<Address, std::tuple<SXM0arLayerOffsetPolicy>>;

  /**
   * REGISTER S_X_M0AR
   */
  private:
    template<typename SizeType>
    class SXM0arRegisterUnion
    {
    public:
      union
      {
        SizeType value;
        BitFieldModel<SizeType, 0, 32> m0a;
      };
    };

  private:
    template<typename SizeType, std::uintptr_t Address>
    class SXM0arRegisterModel : public RegisterModel<SXM0arRegisterUnion<SizeType>, SXM0arAddressPolicy<Address>>
    {
    public:
      using reg = SXM0arRegisterUnion<SizeType>;

    public:
      using m0a = FieldModel<reg, SXM0arAddressPolicy<Address>, 0, 32>;
    };

  public:
    using sXM0ar = SXM0arRegisterModel<uint32_t, DmaXBaseAddress + SXM0arBaseAddress + 0x00000000>;


  };

/**
 * GROUP S_X_FCR
 */
public:
  class SXFcr
  {
  public:
    static constexpr uintptr_t SXFcrBaseAddress = 0x00000024;

  private:
    enum class SXFcrIndex
    {
      S0fcr,
      S1fcr,
      S2fcr,
      S3fcr,
      S4fcr,
      S5fcr,
      S6fcr,
      S7fcr,
    };

  public:
    struct Index
    {
      using enum SXFcrIndex;
      static constexpr std::array All = {SXFcrIndex::S0fcr, SXFcrIndex::S1fcr, SXFcrIndex::S2fcr, SXFcrIndex::S3fcr, SXFcrIndex::S4fcr, SXFcrIndex::S5fcr, SXFcrIndex::S6fcr, SXFcrIndex::S7fcr};
    };

  private:
    using SXFcrLayerOffsetPolicy = LayerOffsetPolicy<SXFcrIndex, 0x00000018>;

    template<std::uintptr_t Address>
    using SXFcrAddressPolicy = GroupAddressPolicy<Address, std::tuple<SXFcrLayerOffsetPolicy>>;

  /**
   * REGISTER S_X_FCR
   */
  private:
    template<typename SizeType>
    class SXFcrRegisterUnion
    {
    public:
      union
      {
        SizeType value;
        BitFieldModel<SizeType, 7, 1> feie;
        BitFieldModel<SizeType, 3, 3> fs;
        BitFieldModel<SizeType, 2, 1> dmdis;
        BitFieldModel<SizeType, 0, 2> fth;
      };
    };

  private:
    template<typename SizeType, std::uintptr_t Address>
    class SXFcrRegisterModel : public RegisterModel<SXFcrRegisterUnion<SizeType>, SXFcrAddressPolicy<Address>>
    {
    public:
      using reg = SXFcrRegisterUnion<SizeType>;

    public:
      using feie = FieldModel<reg, SXFcrAddressPolicy<Address>, 7, 1>;
      using fs = FieldModel<reg, SXFcrAddressPolicy<Address>, 3, 3>;
      using dmdis = FieldModel<reg, SXFcrAddressPolicy<Address>, 2, 1>;
      using fth = FieldModel<reg, SXFcrAddressPolicy<Address>, 0, 2>;
    };

  public:
    using sXFcr = SXFcrRegisterModel<uint32_t, DmaXBaseAddress + SXFcrBaseAddress + 0x00000000>;


  };

/**
 * GROUP S_X_PAR
 */
public:
  class SXPar
  {
  public:
    static constexpr uintptr_t SXParBaseAddress = 0x00000018;

  private:
    enum class SXParIndex
    {
      S0par,
      S1par,
      S2par,
      S3par,
      S4par,
      S5par,
      S6par,
      S7par,
    };

  public:
    struct Index
    {
      using enum SXParIndex;
      static constexpr std::array All = {SXParIndex::S0par, SXParIndex::S1par, SXParIndex::S2par, SXParIndex::S3par, SXParIndex::S4par, SXParIndex::S5par, SXParIndex::S6par, SXParIndex::S7par};
    };

  private:
    using SXParLayerOffsetPolicy = LayerOffsetPolicy<SXParIndex, 0x00000018>;

    template<std::uintptr_t Address>
    using SXParAddressPolicy = GroupAddressPolicy<Address, std::tuple<SXParLayerOffsetPolicy>>;

  /**
   * REGISTER S_X_PAR
   */
  private:
    template<typename SizeType>
    class SXParRegisterUnion
    {
    public:
      union
      {
        SizeType value;
        BitFieldModel<SizeType, 0, 32> pa;
      };
    };

  private:
    template<typename SizeType, std::uintptr_t Address>
    class SXParRegisterModel : public RegisterModel<SXParRegisterUnion<SizeType>, SXParAddressPolicy<Address>>
    {
    public:
      using reg = SXParRegisterUnion<SizeType>;

    public:
      using pa = FieldModel<reg, SXParAddressPolicy<Address>, 0, 32>;
    };

  public:
    using sXPar = SXParRegisterModel<uint32_t, DmaXBaseAddress + SXParBaseAddress + 0x00000000>;


  };

/**
 * GROUP S_X_M1AR
 */
public:
  class SXM1ar
  {
  public:
    static constexpr uintptr_t SXM1arBaseAddress = 0x00000020;

  private:
    enum class SXM1arIndex
    {
      S0m1ar,
      S1m1ar,
      S2m1ar,
      S3m1ar,
      S4m1ar,
      S5m1ar,
      S6m1ar,
      S7m1ar,
    };

  public:
    struct Index
    {
      using enum SXM1arIndex;
      static constexpr std::array All = {SXM1arIndex::S0m1ar, SXM1arIndex::S1m1ar, SXM1arIndex::S2m1ar, SXM1arIndex::S3m1ar, SXM1arIndex::S4m1ar, SXM1arIndex::S5m1ar, SXM1arIndex::S6m1ar, SXM1arIndex::S7m1ar};
    };

  private:
    using SXM1arLayerOffsetPolicy = LayerOffsetPolicy<SXM1arIndex, 0x00000018>;

    template<std::uintptr_t Address>
    using SXM1arAddressPolicy = GroupAddressPolicy<Address, std::tuple<SXM1arLayerOffsetPolicy>>;

  /**
   * REGISTER S_X_M1AR
   */
  private:
    template<typename SizeType>
    class SXM1arRegisterUnion
    {
    public:
      union
      {
        SizeType value;
        BitFieldModel<SizeType, 0, 32> m1a;
      };
    };

  private:
    template<typename SizeType, std::uintptr_t Address>
    class SXM1arRegisterModel : public RegisterModel<SXM1arRegisterUnion<SizeType>, SXM1arAddressPolicy<Address>>
    {
    public:
      using reg = SXM1arRegisterUnion<SizeType>;

    public:
      using m1a = FieldModel<reg, SXM1arAddressPolicy<Address>, 0, 32>;
    };

  public:
    using sXM1ar = SXM1arRegisterModel<uint32_t, DmaXBaseAddress + SXM1arBaseAddress + 0x00000000>;


  };

/**
 * GROUP S_X_CR
 */
public:
  class SXCr
  {
  public:
    static constexpr uintptr_t SXCrBaseAddress = 0x00000028;

  private:
    enum class SXCrIndex
    {
      S1cr,
      S2cr,
      S3cr,
      S4cr,
      S5cr,
      S6cr,
      S7cr,
    };

  public:
    struct Index
    {
      using enum SXCrIndex;
      static constexpr std::array All = {SXCrIndex::S1cr, SXCrIndex::S2cr, SXCrIndex::S3cr, SXCrIndex::S4cr, SXCrIndex::S5cr, SXCrIndex::S6cr, SXCrIndex::S7cr};
    };

  private:
    using SXCrLayerOffsetPolicy = LayerOffsetPolicy<SXCrIndex, 0x00000018>;

    template<std::uintptr_t Address>
    using SXCrAddressPolicy = GroupAddressPolicy<Address, std::tuple<SXCrLayerOffsetPolicy>>;

  /**
   * REGISTER S_X_CR
   */
  private:
    template<typename SizeType>
    class SXCrRegisterUnion
    {
    public:
      union
      {
        SizeType value;
        BitFieldModel<SizeType, 25, 3> chsel;
        BitFieldModel<SizeType, 23, 2> mburst;
        BitFieldModel<SizeType, 21, 2> pburst;
        BitFieldModel<SizeType, 20, 1> ack;
        BitFieldModel<SizeType, 19, 1> ct;
        BitFieldModel<SizeType, 18, 1> dbm;
        BitFieldModel<SizeType, 16, 2> pl;
        BitFieldModel<SizeType, 15, 1> pincos;
        BitFieldModel<SizeType, 13, 2> msize;
        BitFieldModel<SizeType, 11, 2> psize;
        BitFieldModel<SizeType, 10, 1> minc;
        BitFieldModel<SizeType, 9, 1> pinc;
        BitFieldModel<SizeType, 8, 1> circ;
        BitFieldModel<SizeType, 6, 2> dir;
        BitFieldModel<SizeType, 5, 1> pfctrl;
        BitFieldModel<SizeType, 4, 1> tcie;
        BitFieldModel<SizeType, 3, 1> htie;
        BitFieldModel<SizeType, 2, 1> teie;
        BitFieldModel<SizeType, 1, 1> dmeie;
        BitFieldModel<SizeType, 0, 1> en;
      };
    };

  private:
    template<typename SizeType, std::uintptr_t Address>
    class SXCrRegisterModel : public RegisterModel<SXCrRegisterUnion<SizeType>, SXCrAddressPolicy<Address>>
    {
    public:
      using reg = SXCrRegisterUnion<SizeType>;

    public:
      using chsel = FieldModel<reg, SXCrAddressPolicy<Address>, 25, 3>;
      using mburst = FieldModel<reg, SXCrAddressPolicy<Address>, 23, 2>;
      using pburst = FieldModel<reg, SXCrAddressPolicy<Address>, 21, 2>;
      using ack = FieldModel<reg, SXCrAddressPolicy<Address>, 20, 1>;
      using ct = FieldModel<reg, SXCrAddressPolicy<Address>, 19, 1>;
      using dbm = FieldModel<reg, SXCrAddressPolicy<Address>, 18, 1>;
      using pl = FieldModel<reg, SXCrAddressPolicy<Address>, 16, 2>;
      using pincos = FieldModel<reg, SXCrAddressPolicy<Address>, 15, 1>;
      using msize = FieldModel<reg, SXCrAddressPolicy<Address>, 13, 2>;
      using psize = FieldModel<reg, SXCrAddressPolicy<Address>, 11, 2>;
      using minc = FieldModel<reg, SXCrAddressPolicy<Address>, 10, 1>;
      using pinc = FieldModel<reg, SXCrAddressPolicy<Address>, 9, 1>;
      using circ = FieldModel<reg, SXCrAddressPolicy<Address>, 8, 1>;
      using dir = FieldModel<reg, SXCrAddressPolicy<Address>, 6, 2>;
      using pfctrl = FieldModel<reg, SXCrAddressPolicy<Address>, 5, 1>;
      using tcie = FieldModel<reg, SXCrAddressPolicy<Address>, 4, 1>;
      using htie = FieldModel<reg, SXCrAddressPolicy<Address>, 3, 1>;
      using teie = FieldModel<reg, SXCrAddressPolicy<Address>, 2, 1>;
      using dmeie = FieldModel<reg, SXCrAddressPolicy<Address>, 1, 1>;
      using en = FieldModel<reg, SXCrAddressPolicy<Address>, 0, 1>;
    };

  public:
    using sXCr = SXCrRegisterModel<uint32_t, DmaXBaseAddress + SXCrBaseAddress + 0x00000000>;


  };

};

}

#endif /* DRAL_STM32F411_DMA_X_H */