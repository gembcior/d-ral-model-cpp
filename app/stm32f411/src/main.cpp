#include "stm32f411/gpio_x.h"
#include "stm32f411/otg_fs_device.h"
#include "stm32f411/pwr.h"

int main()
{
  auto odr = dral::stm32f411::GpioX::odr::reg{};
  odr.odr0 = 1;
  odr.odr3 = 1;
  odr.odr7 = 0;
  dral::stm32f411::GpioX::odr::write(odr, dral::stm32f411::GpioX::Index::Gpioa);

  auto csr = dral::stm32f411::Pwr::csr::reg{};
  csr.vosrdy = 1;
  csr.pvdo = 1;
  dral::stm32f411::Pwr::csr::write(csr);

  static_assert(dral::stm32f411::Pwr::csr::getAddress() == 0x4000'7004);

  auto dtxfsts = dral::stm32f411::OtgFsDevice::DtxfstsX::dtxfstsX::reg{};
  dtxfsts.ineptfsav = 0x1;
  dral::stm32f411::OtgFsDevice::DtxfstsX::dtxfstsX::write(dtxfsts, dral::stm32f411::OtgFsDevice::DtxfstsX::Index::Dtxfsts3);

  while (true) {
    asm volatile("nop");
  }

  return 0;
}
