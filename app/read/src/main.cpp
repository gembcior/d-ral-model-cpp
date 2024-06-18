#include <cstdint>

int main()
{

  volatile uint32_t* const sram = reinterpret_cast<volatile uint32_t*>(0x4000'0000);
  *sram = 0x1234'5678;

  volatile uint32_t* const dummy = sram + 10;
  *dummy = 0xdead'beef;

  while (true) {
    asm volatile("nop");
  }

  return 0;
}
