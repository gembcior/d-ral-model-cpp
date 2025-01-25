#include "regs/alfa.h"
#include "regs/bravo.h"
#include "regs/charlie.h"
#include "regs/delta_x.h"

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
  [[maybe_unused]] auto tcp = bear.get<bear.tcp>();
}

__attribute__((noinline)) void group_register_write_using_register_value_type()
{
  using BearReg = BravoGroup::BearXGroup::BearXRegister;
  using BearIndex = BravoGroup::BearXGroup::Index;

  auto bear = BearReg::read(BravoGroup::BearXGroup::Index::Bear1);
  bear.set<bear.tcp>(0x1234);
  BearReg::write(bear, BearIndex::Bear1);
}

__attribute__((noinline)) void register_value_type_access()
{
  using AppleReg = CharlieGroup::FruitsGroup::AppleRegister;
  using BananaReg = CharlieGroup::FruitsGroup::BananaRegister;

  auto apple = AppleReg::read();
  auto banana = BananaReg::ValueType{};

  if (apple.get<apple.dp>()) {
    banana.set<banana.hdcp>(0x1234);
  } else {
    banana.set<banana.hdcp>(0x5678);
  }

  BananaReg::write(banana);
}

__attribute__((noinline)) void iterate_over_group_register()
{
  using AppleReg = DeltaXGroup::AppleRegister;
  using DeltaIndex = DeltaXGroup::Index;

  auto apple = AppleReg::ValueType{};
  apple.set<apple.usb>(0x1234);
  apple.set<apple.hdmi>(0x5678);
  apple.set<apple.dp>(1);

  for (auto index : DeltaIndex::All) {
    AppleReg::write(apple, index);
  }
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

  register_value_type_access();
  iterate_over_group_register();

  while (true) {
    asm volatile("nop");
  }

  return 0;
}
