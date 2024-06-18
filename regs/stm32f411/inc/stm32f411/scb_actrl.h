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

#ifndef DRAL_STM32F411_SCB_ACTRL_H
#define DRAL_STM32F411_SCB_ACTRL_H

#include "dral/bitfield_model.h"
#include "dral/group_address_policy.h"
#include "dral/layer_offset_policy.h"
#include "dral/register_model.h"

namespace dral::stm32f411 {

class ScbActrl
{
public:
  static constexpr uintptr_t ScbActrlBaseAddress = 0xE000E008;

private:
  template<std::uintptr_t Address>
  using ScbActrlAddressPolicy = GroupAddressPolicy<Address>;

/**
 * REGISTER ACTRL
 */
private:
  template<typename SizeType>
  class ActrlRegisterUnion
  {
  public:
    union
    {
      SizeType value;
      BitFieldModel<SizeType, 0, 1> dismcycint;
      BitFieldModel<SizeType, 1, 1> disdefwbuf;
      BitFieldModel<SizeType, 2, 1> disfold;
      BitFieldModel<SizeType, 8, 1> disfpca;
      BitFieldModel<SizeType, 9, 1> disoofp;
    };
  };

private:
  template<typename SizeType, std::uintptr_t Address>
  class ActrlRegisterModel : public RegisterModel<ActrlRegisterUnion<SizeType>, ScbActrlAddressPolicy<Address>>
  {
  public:
    using reg = ActrlRegisterUnion<SizeType>;

  public:
    using dismcycint = FieldModel<reg, ScbActrlAddressPolicy<Address>, 0, 1>;
    using disdefwbuf = FieldModel<reg, ScbActrlAddressPolicy<Address>, 1, 1>;
    using disfold = FieldModel<reg, ScbActrlAddressPolicy<Address>, 2, 1>;
    using disfpca = FieldModel<reg, ScbActrlAddressPolicy<Address>, 8, 1>;
    using disoofp = FieldModel<reg, ScbActrlAddressPolicy<Address>, 9, 1>;
  };

public:
  using actrl = ActrlRegisterModel<uint32_t, ScbActrlBaseAddress + 0x00000000>;


};

}

#endif /* DRAL_STM32F411_SCB_ACTRL_H */