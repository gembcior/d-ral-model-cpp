#include "regs/alfa.h"
#include "regs/bravo.h"

using namespace dral;
using namespace dral::draltestdevice;

__attribute__((noinline)) void simple_register_read()
{
  [[maybe_unused]] auto output = AlfaGroup::AppleRegister::read();
}

__attribute__((noinline)) void simple_register_write()
{
  AlfaGroup::AppleRegister::write(0x1234'5678);
}

__attribute__((noinline)) void simple_field_read()
{
  [[maybe_unused]] uint32_t output = AlfaGroup::AppleRegister::usbField::read();
}

__attribute__((noinline)) void simple_field_write()
{
  AlfaGroup::AppleRegister::usbField::write(0x1234);
}

__attribute__((noinline)) void register_read_using_register_value_type()
{
  using AppleReg = AlfaGroup::AppleType;
  auto apple = AlfaGroup::AppleRegister::read();
  [[maybe_unused]] auto usb = apple.get<AppleReg::usb>();
}

__attribute__((noinline)) void register_write_using_register_value_type()
{
  using AppleReg = AlfaGroup::AppleType;
  auto apple = AlfaGroup::AppleRegister::read();
  apple.set<AppleReg::usb>(0x1234);

  AlfaGroup::AppleRegister::write(apple);
}

__attribute__((noinline)) void simple_group_register_read()
{
  [[maybe_unused]] auto output = BravoGroup::BearXGroup::BearXRegister::read(BravoGroup::BearXGroup::Index::Bear1);
}

__attribute__((noinline)) void simple_group_register_write()
{
  BravoGroup::BearXGroup::BearXRegister::write(0x1234'5678, BravoGroup::BearXGroup::Index::Bear1);
}

__attribute__((noinline)) void group_register_read_using_register_value_type()
{
  using BearReg = BravoGroup::BearXGroup::BearXType;
  auto bear = BravoGroup::BearXGroup::BearXRegister::read(BravoGroup::BearXGroup::Index::Bear1);
  [[maybe_unused]] auto kvm = bear.get<BearReg::tcp>();
}

__attribute__((noinline)) void group_register_write_using_register_value_type()
{
  using BearReg = BravoGroup::BearXGroup::BearXType;
  auto bear = BravoGroup::BearXGroup::BearXRegister::read(BravoGroup::BearXGroup::Index::Bear1);
  bear.set<BearReg::tcp>(0x1234);

  BravoGroup::BearXGroup::BearXRegister::write(bear, BravoGroup::BearXGroup::Index::Bear1);
}

int main()
{
  simple_register_read();
  simple_register_write();

  simple_field_read();
  simple_field_write();

  register_read_using_register_value_type();
  register_write_using_register_value_type();

  simple_group_register_read();
  simple_group_register_write();

  group_register_read_using_register_value_type();
  group_register_write_using_register_value_type();

  while (true) {
    asm volatile("nop");
  }

  return 0;
}
