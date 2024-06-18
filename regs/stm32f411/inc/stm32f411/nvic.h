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

#ifndef DRAL_STM32F411_NVIC_H
#define DRAL_STM32F411_NVIC_H

#include "dral/bitfield_model.h"
#include "dral/group_address_policy.h"
#include "dral/layer_offset_policy.h"
#include "dral/register_model.h"

namespace dral::stm32f411 {

class Nvic
{
public:
  static constexpr uintptr_t NvicBaseAddress = 0xE000E100;

private:
  template<std::uintptr_t Address>
  using NvicAddressPolicy = GroupAddressPolicy<Address>;

/**
 * REGISTER ISPR0
 */
private:
  template<typename SizeType>
  class Ispr0RegisterUnion
  {
  public:
    union
    {
      SizeType value;
      BitFieldModel<SizeType, 0, 32> setpend;
    };
  };

private:
  template<typename SizeType, std::uintptr_t Address>
  class Ispr0RegisterModel : public RegisterModel<Ispr0RegisterUnion<SizeType>, NvicAddressPolicy<Address>>
  {
  public:
    using reg = Ispr0RegisterUnion<SizeType>;

  public:
    using setpend = FieldModel<reg, NvicAddressPolicy<Address>, 0, 32>;
  };

public:
  using ispr0 = Ispr0RegisterModel<uint32_t, NvicBaseAddress + 0x00000100>;

/**
 * REGISTER ISPR1
 */
private:
  template<typename SizeType>
  class Ispr1RegisterUnion
  {
  public:
    union
    {
      SizeType value;
      BitFieldModel<SizeType, 0, 32> setpend;
    };
  };

private:
  template<typename SizeType, std::uintptr_t Address>
  class Ispr1RegisterModel : public RegisterModel<Ispr1RegisterUnion<SizeType>, NvicAddressPolicy<Address>>
  {
  public:
    using reg = Ispr1RegisterUnion<SizeType>;

  public:
    using setpend = FieldModel<reg, NvicAddressPolicy<Address>, 0, 32>;
  };

public:
  using ispr1 = Ispr1RegisterModel<uint32_t, NvicBaseAddress + 0x00000104>;

/**
 * REGISTER IPR20
 */
private:
  template<typename SizeType>
  class Ipr20RegisterUnion
  {
  public:
    union
    {
      SizeType value;
    };
  };

private:
  template<typename SizeType, std::uintptr_t Address>
  class Ipr20RegisterModel : public RegisterModel<Ipr20RegisterUnion<SizeType>, NvicAddressPolicy<Address>>
  {
  public:
    using reg = Ipr20RegisterUnion<SizeType>;

  public:
  };

public:
  using ipr20 = Ipr20RegisterModel<uint32_t, NvicBaseAddress + 0x00000350>;

/**
 * REGISTER IPR21
 */
private:
  template<typename SizeType>
  class Ipr21RegisterUnion
  {
  public:
    union
    {
      SizeType value;
    };
  };

private:
  template<typename SizeType, std::uintptr_t Address>
  class Ipr21RegisterModel : public RegisterModel<Ipr21RegisterUnion<SizeType>, NvicAddressPolicy<Address>>
  {
  public:
    using reg = Ipr21RegisterUnion<SizeType>;

  public:
  };

public:
  using ipr21 = Ipr21RegisterModel<uint32_t, NvicBaseAddress + 0x00000354>;

/**
 * REGISTER IPR22
 */
private:
  template<typename SizeType>
  class Ipr22RegisterUnion
  {
  public:
    union
    {
      SizeType value;
    };
  };

private:
  template<typename SizeType, std::uintptr_t Address>
  class Ipr22RegisterModel : public RegisterModel<Ipr22RegisterUnion<SizeType>, NvicAddressPolicy<Address>>
  {
  public:
    using reg = Ipr22RegisterUnion<SizeType>;

  public:
  };

public:
  using ipr22 = Ipr22RegisterModel<uint32_t, NvicBaseAddress + 0x00000358>;


/**
 * GROUP ISER_X
 */
public:
  class IserX
  {
  public:
    static constexpr uintptr_t IserXBaseAddress = 0x00000000;

  private:
    enum class IserXIndex
    {
      Iser0,
      Iser1,
    };

  public:
    struct Index
    {
      using enum IserXIndex;
      static constexpr std::array All = {IserXIndex::Iser0, IserXIndex::Iser1};
    };

  private:
    using IserXLayerOffsetPolicy = LayerOffsetPolicy<IserXIndex, 0x00000004>;

    template<std::uintptr_t Address>
    using IserXAddressPolicy = GroupAddressPolicy<Address, std::tuple<IserXLayerOffsetPolicy>>;

  /**
   * REGISTER ISER_X
   */
  private:
    template<typename SizeType>
    class IserXRegisterUnion
    {
    public:
      union
      {
        SizeType value;
        BitFieldModel<SizeType, 0, 32> setena;
      };
    };

  private:
    template<typename SizeType, std::uintptr_t Address>
    class IserXRegisterModel : public RegisterModel<IserXRegisterUnion<SizeType>, IserXAddressPolicy<Address>>
    {
    public:
      using reg = IserXRegisterUnion<SizeType>;

    public:
      using setena = FieldModel<reg, IserXAddressPolicy<Address>, 0, 32>;
    };

  public:
    using iserX = IserXRegisterModel<uint32_t, NvicBaseAddress + IserXBaseAddress + 0x00000000>;


  };

/**
 * GROUP ICER_X
 */
public:
  class IcerX
  {
  public:
    static constexpr uintptr_t IcerXBaseAddress = 0x00000080;

  private:
    enum class IcerXIndex
    {
      Icer0,
      Icer1,
    };

  public:
    struct Index
    {
      using enum IcerXIndex;
      static constexpr std::array All = {IcerXIndex::Icer0, IcerXIndex::Icer1};
    };

  private:
    using IcerXLayerOffsetPolicy = LayerOffsetPolicy<IcerXIndex, 0x00000004>;

    template<std::uintptr_t Address>
    using IcerXAddressPolicy = GroupAddressPolicy<Address, std::tuple<IcerXLayerOffsetPolicy>>;

  /**
   * REGISTER ICER_X
   */
  private:
    template<typename SizeType>
    class IcerXRegisterUnion
    {
    public:
      union
      {
        SizeType value;
        BitFieldModel<SizeType, 0, 32> clrena;
      };
    };

  private:
    template<typename SizeType, std::uintptr_t Address>
    class IcerXRegisterModel : public RegisterModel<IcerXRegisterUnion<SizeType>, IcerXAddressPolicy<Address>>
    {
    public:
      using reg = IcerXRegisterUnion<SizeType>;

    public:
      using clrena = FieldModel<reg, IcerXAddressPolicy<Address>, 0, 32>;
    };

  public:
    using icerX = IcerXRegisterModel<uint32_t, NvicBaseAddress + IcerXBaseAddress + 0x00000000>;


  };

/**
 * GROUP ICPR_X
 */
public:
  class IcprX
  {
  public:
    static constexpr uintptr_t IcprXBaseAddress = 0x00000180;

  private:
    enum class IcprXIndex
    {
      Icpr0,
      Icpr1,
    };

  public:
    struct Index
    {
      using enum IcprXIndex;
      static constexpr std::array All = {IcprXIndex::Icpr0, IcprXIndex::Icpr1};
    };

  private:
    using IcprXLayerOffsetPolicy = LayerOffsetPolicy<IcprXIndex, 0x00000004>;

    template<std::uintptr_t Address>
    using IcprXAddressPolicy = GroupAddressPolicy<Address, std::tuple<IcprXLayerOffsetPolicy>>;

  /**
   * REGISTER ICPR_X
   */
  private:
    template<typename SizeType>
    class IcprXRegisterUnion
    {
    public:
      union
      {
        SizeType value;
        BitFieldModel<SizeType, 0, 32> clrpend;
      };
    };

  private:
    template<typename SizeType, std::uintptr_t Address>
    class IcprXRegisterModel : public RegisterModel<IcprXRegisterUnion<SizeType>, IcprXAddressPolicy<Address>>
    {
    public:
      using reg = IcprXRegisterUnion<SizeType>;

    public:
      using clrpend = FieldModel<reg, IcprXAddressPolicy<Address>, 0, 32>;
    };

  public:
    using icprX = IcprXRegisterModel<uint32_t, NvicBaseAddress + IcprXBaseAddress + 0x00000000>;


  };

/**
 * GROUP IABR_X
 */
public:
  class IabrX
  {
  public:
    static constexpr uintptr_t IabrXBaseAddress = 0x00000200;

  private:
    enum class IabrXIndex
    {
      Iabr0,
      Iabr1,
    };

  public:
    struct Index
    {
      using enum IabrXIndex;
      static constexpr std::array All = {IabrXIndex::Iabr0, IabrXIndex::Iabr1};
    };

  private:
    using IabrXLayerOffsetPolicy = LayerOffsetPolicy<IabrXIndex, 0x00000004>;

    template<std::uintptr_t Address>
    using IabrXAddressPolicy = GroupAddressPolicy<Address, std::tuple<IabrXLayerOffsetPolicy>>;

  /**
   * REGISTER IABR_X
   */
  private:
    template<typename SizeType>
    class IabrXRegisterUnion
    {
    public:
      union
      {
        SizeType value;
        BitFieldModel<SizeType, 0, 32> active;
      };
    };

  private:
    template<typename SizeType, std::uintptr_t Address>
    class IabrXRegisterModel : public RegisterModel<IabrXRegisterUnion<SizeType>, IabrXAddressPolicy<Address>>
    {
    public:
      using reg = IabrXRegisterUnion<SizeType>;

    public:
      using active = FieldModel<reg, IabrXAddressPolicy<Address>, 0, 32>;
    };

  public:
    using iabrX = IabrXRegisterModel<uint32_t, NvicBaseAddress + IabrXBaseAddress + 0x00000000>;


  };

/**
 * GROUP IPR_X
 */
public:
  class IprX
  {
  public:
    static constexpr uintptr_t IprXBaseAddress = 0x00000300;

  private:
    enum class IprXIndex
    {
      Ipr0,
      Ipr1,
      Ipr2,
      Ipr3,
      Ipr4,
      Ipr5,
      Ipr6,
      Ipr7,
      Ipr8,
      Ipr9,
      Ipr10,
      Ipr11,
      Ipr12,
      Ipr13,
      Ipr14,
      Ipr15,
      Ipr16,
      Ipr17,
      Ipr18,
      Ipr19,
    };

  public:
    struct Index
    {
      using enum IprXIndex;
      static constexpr std::array All = {IprXIndex::Ipr0, IprXIndex::Ipr1, IprXIndex::Ipr2, IprXIndex::Ipr3, IprXIndex::Ipr4, IprXIndex::Ipr5, IprXIndex::Ipr6, IprXIndex::Ipr7, IprXIndex::Ipr8, IprXIndex::Ipr9, IprXIndex::Ipr10, IprXIndex::Ipr11, IprXIndex::Ipr12, IprXIndex::Ipr13, IprXIndex::Ipr14, IprXIndex::Ipr15, IprXIndex::Ipr16, IprXIndex::Ipr17, IprXIndex::Ipr18, IprXIndex::Ipr19};
    };

  private:
    using IprXLayerOffsetPolicy = LayerOffsetPolicy<IprXIndex, 0x00000004>;

    template<std::uintptr_t Address>
    using IprXAddressPolicy = GroupAddressPolicy<Address, std::tuple<IprXLayerOffsetPolicy>>;

  /**
   * REGISTER IPR_X
   */
  private:
    template<typename SizeType>
    class IprXRegisterUnion
    {
    public:
      union
      {
        SizeType value;
        BitFieldModel<SizeType, 0, 8> iprN0;
        BitFieldModel<SizeType, 8, 8> iprN1;
        BitFieldModel<SizeType, 16, 8> iprN2;
        BitFieldModel<SizeType, 24, 8> iprN3;
      };
    };

  private:
    template<typename SizeType, std::uintptr_t Address>
    class IprXRegisterModel : public RegisterModel<IprXRegisterUnion<SizeType>, IprXAddressPolicy<Address>>
    {
    public:
      using reg = IprXRegisterUnion<SizeType>;

    public:
      using iprN0 = FieldModel<reg, IprXAddressPolicy<Address>, 0, 8>;
      using iprN1 = FieldModel<reg, IprXAddressPolicy<Address>, 8, 8>;
      using iprN2 = FieldModel<reg, IprXAddressPolicy<Address>, 16, 8>;
      using iprN3 = FieldModel<reg, IprXAddressPolicy<Address>, 24, 8>;
    };

  public:
    using iprX = IprXRegisterModel<uint32_t, NvicBaseAddress + IprXBaseAddress + 0x00000000>;


  };

};

}

#endif /* DRAL_STM32F411_NVIC_H */