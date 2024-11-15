#include "regs/alfa.h"

using namespace dral;

__attribute__((noinline)) void simple_register_read()
{
  [[maybe_unused]] auto output = draltestdevice::AlfaGroup::AppleRegister::read();
}

__attribute__((noinline)) void simple_register_write()
{
  draltestdevice::AlfaGroup::AppleRegister::write(0x1234'5678);
}

__attribute__((noinline)) void simple_field_read()
{
  [[maybe_unused]] uint32_t output = draltestdevice::AlfaGroup::AppleRegister::usbField::read();
}

__attribute__((noinline)) void simple_field_write()
{
  draltestdevice::AlfaGroup::AppleRegister::usbField::write(0x1234);
}

int main()
{
  simple_register_read();
  simple_register_write();

  simple_field_read();
  simple_field_write();

  while (true) {
    asm volatile("nop");
  }

  return 0;
}
