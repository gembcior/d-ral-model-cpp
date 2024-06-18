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

#ifndef DRAL_STM32F411_SCB_H
#define DRAL_STM32F411_SCB_H

#include "dral/bitfield_model.h"
#include "dral/group_address_policy.h"
#include "dral/layer_offset_policy.h"
#include "dral/register_model.h"

namespace dral::stm32f411 {

class Scb
{
public:
  static constexpr uintptr_t ScbBaseAddress = 0xE000ED00;

private:
  template<std::uintptr_t Address>
  using ScbAddressPolicy = GroupAddressPolicy<Address>;

/**
 * REGISTER CPUID
 */
private:
  template<typename SizeType>
  class CpuidRegisterUnion
  {
  public:
    union
    {
      SizeType value;
      BitFieldModel<SizeType, 0, 4> revision;
      BitFieldModel<SizeType, 4, 12> partno;
      BitFieldModel<SizeType, 16, 4> constant;
      BitFieldModel<SizeType, 20, 4> variant;
      BitFieldModel<SizeType, 24, 8> implementer;
    };
  };

private:
  template<typename SizeType, std::uintptr_t Address>
  class CpuidRegisterModel : public RegisterModel<CpuidRegisterUnion<SizeType>, ScbAddressPolicy<Address>>
  {
  public:
    using reg = CpuidRegisterUnion<SizeType>;

  public:
    using revision = FieldModel<reg, ScbAddressPolicy<Address>, 0, 4>;
    using partno = FieldModel<reg, ScbAddressPolicy<Address>, 4, 12>;
    using constant = FieldModel<reg, ScbAddressPolicy<Address>, 16, 4>;
    using variant = FieldModel<reg, ScbAddressPolicy<Address>, 20, 4>;
    using implementer = FieldModel<reg, ScbAddressPolicy<Address>, 24, 8>;
  };

public:
  using cpuid = CpuidRegisterModel<uint32_t, ScbBaseAddress + 0x00000000>;

/**
 * REGISTER ICSR
 */
private:
  template<typename SizeType>
  class IcsrRegisterUnion
  {
  public:
    union
    {
      SizeType value;
      BitFieldModel<SizeType, 0, 9> vectactive;
      BitFieldModel<SizeType, 11, 1> rettobase;
      BitFieldModel<SizeType, 12, 7> vectpending;
      BitFieldModel<SizeType, 22, 1> isrpending;
      BitFieldModel<SizeType, 25, 1> pendstclr;
      BitFieldModel<SizeType, 26, 1> pendstset;
      BitFieldModel<SizeType, 27, 1> pendsvclr;
      BitFieldModel<SizeType, 28, 1> pendsvset;
      BitFieldModel<SizeType, 31, 1> nmipendset;
    };
  };

private:
  template<typename SizeType, std::uintptr_t Address>
  class IcsrRegisterModel : public RegisterModel<IcsrRegisterUnion<SizeType>, ScbAddressPolicy<Address>>
  {
  public:
    using reg = IcsrRegisterUnion<SizeType>;

  public:
    using vectactive = FieldModel<reg, ScbAddressPolicy<Address>, 0, 9>;
    using rettobase = FieldModel<reg, ScbAddressPolicy<Address>, 11, 1>;
    using vectpending = FieldModel<reg, ScbAddressPolicy<Address>, 12, 7>;
    using isrpending = FieldModel<reg, ScbAddressPolicy<Address>, 22, 1>;
    using pendstclr = FieldModel<reg, ScbAddressPolicy<Address>, 25, 1>;
    using pendstset = FieldModel<reg, ScbAddressPolicy<Address>, 26, 1>;
    using pendsvclr = FieldModel<reg, ScbAddressPolicy<Address>, 27, 1>;
    using pendsvset = FieldModel<reg, ScbAddressPolicy<Address>, 28, 1>;
    using nmipendset = FieldModel<reg, ScbAddressPolicy<Address>, 31, 1>;
  };

public:
  using icsr = IcsrRegisterModel<uint32_t, ScbBaseAddress + 0x00000004>;

/**
 * REGISTER VTOR
 */
private:
  template<typename SizeType>
  class VtorRegisterUnion
  {
  public:
    union
    {
      SizeType value;
      BitFieldModel<SizeType, 9, 21> tbloff;
    };
  };

private:
  template<typename SizeType, std::uintptr_t Address>
  class VtorRegisterModel : public RegisterModel<VtorRegisterUnion<SizeType>, ScbAddressPolicy<Address>>
  {
  public:
    using reg = VtorRegisterUnion<SizeType>;

  public:
    using tbloff = FieldModel<reg, ScbAddressPolicy<Address>, 9, 21>;
  };

public:
  using vtor = VtorRegisterModel<uint32_t, ScbBaseAddress + 0x00000008>;

/**
 * REGISTER AIRCR
 */
private:
  template<typename SizeType>
  class AircrRegisterUnion
  {
  public:
    union
    {
      SizeType value;
      BitFieldModel<SizeType, 0, 1> vectreset;
      BitFieldModel<SizeType, 1, 1> vectclractive;
      BitFieldModel<SizeType, 2, 1> sysresetreq;
      BitFieldModel<SizeType, 8, 3> prigroup;
      BitFieldModel<SizeType, 15, 1> endianess;
      BitFieldModel<SizeType, 16, 16> vectkeystat;
    };
  };

private:
  template<typename SizeType, std::uintptr_t Address>
  class AircrRegisterModel : public RegisterModel<AircrRegisterUnion<SizeType>, ScbAddressPolicy<Address>>
  {
  public:
    using reg = AircrRegisterUnion<SizeType>;

  public:
    using vectreset = FieldModel<reg, ScbAddressPolicy<Address>, 0, 1>;
    using vectclractive = FieldModel<reg, ScbAddressPolicy<Address>, 1, 1>;
    using sysresetreq = FieldModel<reg, ScbAddressPolicy<Address>, 2, 1>;
    using prigroup = FieldModel<reg, ScbAddressPolicy<Address>, 8, 3>;
    using endianess = FieldModel<reg, ScbAddressPolicy<Address>, 15, 1>;
    using vectkeystat = FieldModel<reg, ScbAddressPolicy<Address>, 16, 16>;
  };

public:
  using aircr = AircrRegisterModel<uint32_t, ScbBaseAddress + 0x0000000C>;

/**
 * REGISTER SCR
 */
private:
  template<typename SizeType>
  class ScrRegisterUnion
  {
  public:
    union
    {
      SizeType value;
      BitFieldModel<SizeType, 1, 1> sleeponexit;
      BitFieldModel<SizeType, 2, 1> sleepdeep;
      BitFieldModel<SizeType, 4, 1> seveonpend;
    };
  };

private:
  template<typename SizeType, std::uintptr_t Address>
  class ScrRegisterModel : public RegisterModel<ScrRegisterUnion<SizeType>, ScbAddressPolicy<Address>>
  {
  public:
    using reg = ScrRegisterUnion<SizeType>;

  public:
    using sleeponexit = FieldModel<reg, ScbAddressPolicy<Address>, 1, 1>;
    using sleepdeep = FieldModel<reg, ScbAddressPolicy<Address>, 2, 1>;
    using seveonpend = FieldModel<reg, ScbAddressPolicy<Address>, 4, 1>;
  };

public:
  using scr = ScrRegisterModel<uint32_t, ScbBaseAddress + 0x00000010>;

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
      BitFieldModel<SizeType, 0, 1> nonbasethrdena;
      BitFieldModel<SizeType, 1, 1> usersetmpend;
      BitFieldModel<SizeType, 3, 1> unalignTrp;
      BitFieldModel<SizeType, 4, 1> div0Trp;
      BitFieldModel<SizeType, 8, 1> bfhfnmign;
      BitFieldModel<SizeType, 9, 1> stkalign;
    };
  };

private:
  template<typename SizeType, std::uintptr_t Address>
  class CcrRegisterModel : public RegisterModel<CcrRegisterUnion<SizeType>, ScbAddressPolicy<Address>>
  {
  public:
    using reg = CcrRegisterUnion<SizeType>;

  public:
    using nonbasethrdena = FieldModel<reg, ScbAddressPolicy<Address>, 0, 1>;
    using usersetmpend = FieldModel<reg, ScbAddressPolicy<Address>, 1, 1>;
    using unalignTrp = FieldModel<reg, ScbAddressPolicy<Address>, 3, 1>;
    using div0Trp = FieldModel<reg, ScbAddressPolicy<Address>, 4, 1>;
    using bfhfnmign = FieldModel<reg, ScbAddressPolicy<Address>, 8, 1>;
    using stkalign = FieldModel<reg, ScbAddressPolicy<Address>, 9, 1>;
  };

public:
  using ccr = CcrRegisterModel<uint32_t, ScbBaseAddress + 0x00000014>;

/**
 * REGISTER SHPR1
 */
private:
  template<typename SizeType>
  class Shpr1RegisterUnion
  {
  public:
    union
    {
      SizeType value;
      BitFieldModel<SizeType, 0, 8> pri4;
      BitFieldModel<SizeType, 8, 8> pri5;
      BitFieldModel<SizeType, 16, 8> pri6;
    };
  };

private:
  template<typename SizeType, std::uintptr_t Address>
  class Shpr1RegisterModel : public RegisterModel<Shpr1RegisterUnion<SizeType>, ScbAddressPolicy<Address>>
  {
  public:
    using reg = Shpr1RegisterUnion<SizeType>;

  public:
    using pri4 = FieldModel<reg, ScbAddressPolicy<Address>, 0, 8>;
    using pri5 = FieldModel<reg, ScbAddressPolicy<Address>, 8, 8>;
    using pri6 = FieldModel<reg, ScbAddressPolicy<Address>, 16, 8>;
  };

public:
  using shpr1 = Shpr1RegisterModel<uint32_t, ScbBaseAddress + 0x00000018>;

/**
 * REGISTER SHPR2
 */
private:
  template<typename SizeType>
  class Shpr2RegisterUnion
  {
  public:
    union
    {
      SizeType value;
      BitFieldModel<SizeType, 24, 8> pri11;
    };
  };

private:
  template<typename SizeType, std::uintptr_t Address>
  class Shpr2RegisterModel : public RegisterModel<Shpr2RegisterUnion<SizeType>, ScbAddressPolicy<Address>>
  {
  public:
    using reg = Shpr2RegisterUnion<SizeType>;

  public:
    using pri11 = FieldModel<reg, ScbAddressPolicy<Address>, 24, 8>;
  };

public:
  using shpr2 = Shpr2RegisterModel<uint32_t, ScbBaseAddress + 0x0000001C>;

/**
 * REGISTER SHPR3
 */
private:
  template<typename SizeType>
  class Shpr3RegisterUnion
  {
  public:
    union
    {
      SizeType value;
      BitFieldModel<SizeType, 16, 8> pri14;
      BitFieldModel<SizeType, 24, 8> pri15;
    };
  };

private:
  template<typename SizeType, std::uintptr_t Address>
  class Shpr3RegisterModel : public RegisterModel<Shpr3RegisterUnion<SizeType>, ScbAddressPolicy<Address>>
  {
  public:
    using reg = Shpr3RegisterUnion<SizeType>;

  public:
    using pri14 = FieldModel<reg, ScbAddressPolicy<Address>, 16, 8>;
    using pri15 = FieldModel<reg, ScbAddressPolicy<Address>, 24, 8>;
  };

public:
  using shpr3 = Shpr3RegisterModel<uint32_t, ScbBaseAddress + 0x00000020>;

/**
 * REGISTER SHCSR
 */
private:
  template<typename SizeType>
  class ShcsrRegisterUnion
  {
  public:
    union
    {
      SizeType value;
      BitFieldModel<SizeType, 0, 1> memfaultact;
      BitFieldModel<SizeType, 1, 1> busfaultact;
      BitFieldModel<SizeType, 3, 1> usgfaultact;
      BitFieldModel<SizeType, 7, 1> svcallact;
      BitFieldModel<SizeType, 8, 1> monitoract;
      BitFieldModel<SizeType, 10, 1> pendsvact;
      BitFieldModel<SizeType, 11, 1> systickact;
      BitFieldModel<SizeType, 12, 1> usgfaultpended;
      BitFieldModel<SizeType, 13, 1> memfaultpended;
      BitFieldModel<SizeType, 14, 1> busfaultpended;
      BitFieldModel<SizeType, 15, 1> svcallpended;
      BitFieldModel<SizeType, 16, 1> memfaultena;
      BitFieldModel<SizeType, 17, 1> busfaultena;
      BitFieldModel<SizeType, 18, 1> usgfaultena;
    };
  };

private:
  template<typename SizeType, std::uintptr_t Address>
  class ShcsrRegisterModel : public RegisterModel<ShcsrRegisterUnion<SizeType>, ScbAddressPolicy<Address>>
  {
  public:
    using reg = ShcsrRegisterUnion<SizeType>;

  public:
    using memfaultact = FieldModel<reg, ScbAddressPolicy<Address>, 0, 1>;
    using busfaultact = FieldModel<reg, ScbAddressPolicy<Address>, 1, 1>;
    using usgfaultact = FieldModel<reg, ScbAddressPolicy<Address>, 3, 1>;
    using svcallact = FieldModel<reg, ScbAddressPolicy<Address>, 7, 1>;
    using monitoract = FieldModel<reg, ScbAddressPolicy<Address>, 8, 1>;
    using pendsvact = FieldModel<reg, ScbAddressPolicy<Address>, 10, 1>;
    using systickact = FieldModel<reg, ScbAddressPolicy<Address>, 11, 1>;
    using usgfaultpended = FieldModel<reg, ScbAddressPolicy<Address>, 12, 1>;
    using memfaultpended = FieldModel<reg, ScbAddressPolicy<Address>, 13, 1>;
    using busfaultpended = FieldModel<reg, ScbAddressPolicy<Address>, 14, 1>;
    using svcallpended = FieldModel<reg, ScbAddressPolicy<Address>, 15, 1>;
    using memfaultena = FieldModel<reg, ScbAddressPolicy<Address>, 16, 1>;
    using busfaultena = FieldModel<reg, ScbAddressPolicy<Address>, 17, 1>;
    using usgfaultena = FieldModel<reg, ScbAddressPolicy<Address>, 18, 1>;
  };

public:
  using shcsr = ShcsrRegisterModel<uint32_t, ScbBaseAddress + 0x00000024>;

/**
 * REGISTER CFSR_UFSR_BFSR_MMFSR
 */
private:
  template<typename SizeType>
  class CfsrUfsrBfsrMmfsrRegisterUnion
  {
  public:
    union
    {
      SizeType value;
      BitFieldModel<SizeType, 1, 1> iaccviol;
      BitFieldModel<SizeType, 3, 1> munstkerr;
      BitFieldModel<SizeType, 4, 1> mstkerr;
      BitFieldModel<SizeType, 5, 1> mlsperr;
      BitFieldModel<SizeType, 7, 1> mmarvalid;
      BitFieldModel<SizeType, 8, 1> ibuserr;
      BitFieldModel<SizeType, 9, 1> preciserr;
      BitFieldModel<SizeType, 10, 1> impreciserr;
      BitFieldModel<SizeType, 11, 1> unstkerr;
      BitFieldModel<SizeType, 12, 1> stkerr;
      BitFieldModel<SizeType, 13, 1> lsperr;
      BitFieldModel<SizeType, 15, 1> bfarvalid;
      BitFieldModel<SizeType, 16, 1> undefinstr;
      BitFieldModel<SizeType, 17, 1> invstate;
      BitFieldModel<SizeType, 18, 1> invpc;
      BitFieldModel<SizeType, 19, 1> nocp;
      BitFieldModel<SizeType, 24, 1> unaligned;
      BitFieldModel<SizeType, 25, 1> divbyzero;
    };
  };

private:
  template<typename SizeType, std::uintptr_t Address>
  class CfsrUfsrBfsrMmfsrRegisterModel : public RegisterModel<CfsrUfsrBfsrMmfsrRegisterUnion<SizeType>, ScbAddressPolicy<Address>>
  {
  public:
    using reg = CfsrUfsrBfsrMmfsrRegisterUnion<SizeType>;

  public:
    using iaccviol = FieldModel<reg, ScbAddressPolicy<Address>, 1, 1>;
    using munstkerr = FieldModel<reg, ScbAddressPolicy<Address>, 3, 1>;
    using mstkerr = FieldModel<reg, ScbAddressPolicy<Address>, 4, 1>;
    using mlsperr = FieldModel<reg, ScbAddressPolicy<Address>, 5, 1>;
    using mmarvalid = FieldModel<reg, ScbAddressPolicy<Address>, 7, 1>;
    using ibuserr = FieldModel<reg, ScbAddressPolicy<Address>, 8, 1>;
    using preciserr = FieldModel<reg, ScbAddressPolicy<Address>, 9, 1>;
    using impreciserr = FieldModel<reg, ScbAddressPolicy<Address>, 10, 1>;
    using unstkerr = FieldModel<reg, ScbAddressPolicy<Address>, 11, 1>;
    using stkerr = FieldModel<reg, ScbAddressPolicy<Address>, 12, 1>;
    using lsperr = FieldModel<reg, ScbAddressPolicy<Address>, 13, 1>;
    using bfarvalid = FieldModel<reg, ScbAddressPolicy<Address>, 15, 1>;
    using undefinstr = FieldModel<reg, ScbAddressPolicy<Address>, 16, 1>;
    using invstate = FieldModel<reg, ScbAddressPolicy<Address>, 17, 1>;
    using invpc = FieldModel<reg, ScbAddressPolicy<Address>, 18, 1>;
    using nocp = FieldModel<reg, ScbAddressPolicy<Address>, 19, 1>;
    using unaligned = FieldModel<reg, ScbAddressPolicy<Address>, 24, 1>;
    using divbyzero = FieldModel<reg, ScbAddressPolicy<Address>, 25, 1>;
  };

public:
  using cfsrUfsrBfsrMmfsr = CfsrUfsrBfsrMmfsrRegisterModel<uint32_t, ScbBaseAddress + 0x00000028>;

/**
 * REGISTER HFSR
 */
private:
  template<typename SizeType>
  class HfsrRegisterUnion
  {
  public:
    union
    {
      SizeType value;
      BitFieldModel<SizeType, 1, 1> vecttbl;
      BitFieldModel<SizeType, 30, 1> forced;
      BitFieldModel<SizeType, 31, 1> debugVt;
    };
  };

private:
  template<typename SizeType, std::uintptr_t Address>
  class HfsrRegisterModel : public RegisterModel<HfsrRegisterUnion<SizeType>, ScbAddressPolicy<Address>>
  {
  public:
    using reg = HfsrRegisterUnion<SizeType>;

  public:
    using vecttbl = FieldModel<reg, ScbAddressPolicy<Address>, 1, 1>;
    using forced = FieldModel<reg, ScbAddressPolicy<Address>, 30, 1>;
    using debugVt = FieldModel<reg, ScbAddressPolicy<Address>, 31, 1>;
  };

public:
  using hfsr = HfsrRegisterModel<uint32_t, ScbBaseAddress + 0x0000002C>;

/**
 * REGISTER MMFAR
 */
private:
  template<typename SizeType>
  class MmfarRegisterUnion
  {
  public:
    union
    {
      SizeType value;
      BitFieldModel<SizeType, 0, 32> mmfar;
    };
  };

private:
  template<typename SizeType, std::uintptr_t Address>
  class MmfarRegisterModel : public RegisterModel<MmfarRegisterUnion<SizeType>, ScbAddressPolicy<Address>>
  {
  public:
    using reg = MmfarRegisterUnion<SizeType>;

  public:
    using mmfar = FieldModel<reg, ScbAddressPolicy<Address>, 0, 32>;
  };

public:
  using mmfar = MmfarRegisterModel<uint32_t, ScbBaseAddress + 0x00000034>;

/**
 * REGISTER BFAR
 */
private:
  template<typename SizeType>
  class BfarRegisterUnion
  {
  public:
    union
    {
      SizeType value;
      BitFieldModel<SizeType, 0, 32> bfar;
    };
  };

private:
  template<typename SizeType, std::uintptr_t Address>
  class BfarRegisterModel : public RegisterModel<BfarRegisterUnion<SizeType>, ScbAddressPolicy<Address>>
  {
  public:
    using reg = BfarRegisterUnion<SizeType>;

  public:
    using bfar = FieldModel<reg, ScbAddressPolicy<Address>, 0, 32>;
  };

public:
  using bfar = BfarRegisterModel<uint32_t, ScbBaseAddress + 0x00000038>;

/**
 * REGISTER AFSR
 */
private:
  template<typename SizeType>
  class AfsrRegisterUnion
  {
  public:
    union
    {
      SizeType value;
      BitFieldModel<SizeType, 0, 32> impdef;
    };
  };

private:
  template<typename SizeType, std::uintptr_t Address>
  class AfsrRegisterModel : public RegisterModel<AfsrRegisterUnion<SizeType>, ScbAddressPolicy<Address>>
  {
  public:
    using reg = AfsrRegisterUnion<SizeType>;

  public:
    using impdef = FieldModel<reg, ScbAddressPolicy<Address>, 0, 32>;
  };

public:
  using afsr = AfsrRegisterModel<uint32_t, ScbBaseAddress + 0x0000003C>;


};

}

#endif /* DRAL_STM32F411_SCB_H */