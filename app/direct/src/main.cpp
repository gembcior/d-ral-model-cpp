#include "regs/alfa.h"
#include "regs/bravo.h"

using namespace dral;
using namespace dral::draltestdevice;

__attribute__((noinline)) void simple_register_read()
{
  using AppleReg = AlfaGroup::AppleRegister;
  [[maybe_unused]] auto output = AppleReg::read();
}

__attribute__((noinline)) void simple_register_write()
{
  using AppleReg = AlfaGroup::AppleRegister;
  AppleReg::write(0x1234'5678);
}

__attribute__((noinline)) void simple_field_read()
{
  using AppleReg = AlfaGroup::AppleRegister;
  [[maybe_unused]] uint32_t output = AppleReg::usbField::read();
}

__attribute__((noinline)) void simple_field_write()
{
  using AppleReg = AlfaGroup::AppleRegister;
  AppleReg::usbField::write(0x1234);
}

__attribute__((noinline)) void register_read_using_register_value_type()
{
  using AppleReg = AlfaGroup::AppleRegister;
  auto apple = AppleReg::read();
  [[maybe_unused]] auto usb = apple.get<apple.usb>();
}

__attribute__((noinline)) void register_write_using_register_value_type()
{
  using AppleReg = AlfaGroup::AppleRegister;
  auto apple = AppleReg::read();
  apple.set<apple.usb>(0x1234);

  AppleReg::write(apple);
}

__attribute__((noinline)) void simple_group_register_read()
{
  using BearReg = BravoGroup::BearXGroup::BearXRegister;
  using BearIndex = BravoGroup::BearXGroup::Index;
  [[maybe_unused]] auto output = BearReg::read(BearIndex::Bear1);
}

__attribute__((noinline)) void simple_group_register_write()
{
  using BearReg = BravoGroup::BearXGroup::BearXRegister;
  using BearIndex = BravoGroup::BearXGroup::Index;
  BearReg::write(0x1234'5678, BearIndex::Bear1);
}

__attribute__((noinline)) void group_register_read_using_register_value_type()
{
  using BearReg = BravoGroup::BearXGroup::BearXRegister;
  using BearIndex = BravoGroup::BearXGroup::Index;
  auto bear = BearReg::read(BearIndex::Bear1);
  [[maybe_unused]] auto kvm = bear.get<bear.tcp>();
}

__attribute__((noinline)) void group_register_write_using_register_value_type()
{
  using BearReg = BravoGroup::BearXGroup::BearXRegister;
  using BearIndex = BravoGroup::BearXGroup::Index;
  auto bear = BearReg::read(BravoGroup::BearXGroup::Index::Bear1);
  bear.set<bear.tcp>(0x1234);
  BearReg::write(bear, BearIndex::Bear1);
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
