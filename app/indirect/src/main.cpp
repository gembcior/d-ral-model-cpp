#include "regs/alfa.h"
#include "regs/bravo.h"
#include "regs/charlie.h"
#include "regs/delta_x.h"

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

__attribute__((noinline)) void simple_group_register_read()
{
  using BearReg = BravoGroup::BearXGroup::BearXRegister;
  using BearIndex = BravoGroup::BearXGroup::Index;
  [[maybe_unused]] auto output = indirectRead(BearReg::getAddress(BearIndex::Bear1));
}

__attribute__((noinline)) void simple_group_register_write()
{
  using BearReg = BravoGroup::BearXGroup::BearXRegister;
  using BearIndex = BravoGroup::BearXGroup::Index;
  indirectWrite(BearReg::getAddress(BearIndex::Bear1), 0x1234'5678);
}

__attribute__((noinline)) void group_register_read_using_register_value_type()
{
  using BearReg = BravoGroup::BearXGroup::BearXRegister;
  using BearIndex = BravoGroup::BearXGroup::Index;
  BearReg bear{ indirectRead(BearReg::getAddress(BearIndex::Bear1)) };
  [[maybe_unused]] auto tcp = bear.get<bear.tcp>();
}

__attribute__((noinline)) void group_register_write_using_register_value_type()
{
  using BearReg = BravoGroup::BearXGroup::BearXRegister;
  using BearIndex = BravoGroup::BearXGroup::Index;
  BearReg bear{ indirectRead(BearReg::getAddress(BearIndex::Bear1)) };
  bear.set<bear.tcp>(0x1234);
  indirectWrite(BearReg::getAddress(BearIndex::Bear1), bear.value());
}

__attribute__((noinline)) void register_value_type_access()
{
  using AppleReg = CharlieGroup::FruitsGroup::AppleRegister;
  using BananaReg = CharlieGroup::FruitsGroup::BananaRegister;

  auto apple = AppleReg{ indirectRead(AppleReg::getAddress()) };
  auto banana = BananaReg{};

  if (apple.get<apple.dp>()) {
    banana.set<banana.hdcp>(0x1234);
  } else {
    banana.set<banana.hdcp>(0x5678);
  }

  indirectWrite(BananaReg::getAddress(), banana.value());
}

__attribute__((noinline)) void iterate_over_group_register()
{
  using AppleReg = DeltaXGroup::AppleRegister;
  using DeltaIndex = DeltaXGroup::Index;

  auto apple = AppleReg{};
  apple.set<apple.usb>(0x1234);
  apple.set<apple.hdmi>(0x5678);
  apple.set<apple.dp>(1);

  for (auto index : DeltaIndex::All) {
    indirectWrite(AppleReg::getAddress(index), apple.value());
  }
}

int main()
{
  simple_register_read();
  simple_register_write();

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
