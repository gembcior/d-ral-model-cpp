#include "regs/alfa.h"
#include "regs/bravo.h"

using namespace dral;
using namespace dral::draltestdevice;

uint32_t indirectRead(uintptr_t address)
{
  return *reinterpret_cast<volatile uint32_t*>(address);
}

void indirectWrite(uintptr_t address, uint32_t value)
{
  *reinterpret_cast<volatile uint32_t*>(address) = value;
}

__attribute__((noinline)) void simple_register_read()
{
  [[maybe_unused]] auto output = indirectRead(AlfaGroup::AppleRegister::getAddress());
}

__attribute__((noinline)) void simple_register_write()
{
  indirectWrite(AlfaGroup::AppleRegister::getAddress(), 0x1234'5678);
}

__attribute__((noinline)) void register_read_using_register_value_type()
{
  using AppleReg = AlfaGroup::AppleRegister;
  AppleReg apple{ indirectRead(AppleReg::getAddress()) };
  [[maybe_unused]] auto usb = apple.get<apple.usb>();
}

__attribute__((noinline)) void register_write_using_register_value_type()
{
  using AppleReg = AlfaGroup::AppleRegister;
  AppleReg apple{ indirectRead(AppleReg::getAddress()) };
  apple.set<apple.usb>(0x1234);

  indirectWrite(AppleReg::getAddress(), apple.value());
}

int main()
{
  simple_register_read();
  simple_register_write();

  register_read_using_register_value_type();
  register_write_using_register_value_type();

  while (true) {
    asm volatile("nop");
  }

  return 0;
}
