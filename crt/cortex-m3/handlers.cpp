#include <cstdint>

extern "C"
{
  [[noreturn]] void DefaultHandler()
  {
    while (true) {
      asm volatile("nop");
    }
  }

  __attribute__((weak, alias("DefaultHandler"), noreturn, nothrow)) void ResetHandler();
  __attribute__((weak, alias("DefaultHandler"), noreturn, nothrow)) void NmiHandler();
  __attribute__((weak, alias("DefaultHandler"), noreturn, nothrow)) void HardFaultHandler();
  __attribute__((weak, alias("DefaultHandler"), noreturn, nothrow)) void MemManageHandler();
  __attribute__((weak, alias("DefaultHandler"), noreturn, nothrow)) void BusFaultHandler();
  __attribute__((weak, alias("DefaultHandler"), noreturn, nothrow)) void UsageFaultHandler();
  __attribute__((weak, alias("DefaultHandler"), noreturn, nothrow)) void SvCallHandler();
  __attribute__((weak, alias("DefaultHandler"), noreturn, nothrow)) void DebugMonitorHandler();
  __attribute__((weak, alias("DefaultHandler"), noreturn, nothrow)) void PendSvHandler();
  __attribute__((weak, alias("DefaultHandler"), noreturn, nothrow)) void SystickHandler();
  __attribute__((weak, alias("DefaultHandler"), noreturn, nothrow)) void DummyHandler();

  extern unsigned _estack;

  uint32_t __attribute__((section(".isr_vector"), used)) __isr_vectors[] = {
    reinterpret_cast<uint32_t>(&_estack),
    reinterpret_cast<uint32_t>(ResetHandler),
    reinterpret_cast<uint32_t>(NmiHandler),
    reinterpret_cast<uint32_t>(HardFaultHandler),
    reinterpret_cast<uint32_t>(MemManageHandler),
    reinterpret_cast<uint32_t>(BusFaultHandler),
    reinterpret_cast<uint32_t>(UsageFaultHandler),
    reinterpret_cast<uint32_t>(DummyHandler),
    reinterpret_cast<uint32_t>(DummyHandler),
    reinterpret_cast<uint32_t>(DummyHandler),
    reinterpret_cast<uint32_t>(DummyHandler),
    reinterpret_cast<uint32_t>(SvCallHandler),
    reinterpret_cast<uint32_t>(DebugMonitorHandler),
    reinterpret_cast<uint32_t>(DummyHandler),
    reinterpret_cast<uint32_t>(PendSvHandler),
    reinterpret_cast<uint32_t>(SystickHandler),
  };
}
