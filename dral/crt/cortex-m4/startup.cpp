extern int main();

extern "C"
{
  extern unsigned _sbss;
  extern unsigned _ebss;

  extern void __libc_init_array();

  void clearBss()
  {
    unsigned* dst = &_sbss;
    while (dst != &_ebss) {
      *dst = 0;
      dst++;
    }
  }

  __attribute__((noinline)) __attribute__((noreturn)) void exitHalt();
  void exitHalt()
  {
    while (true) {
      asm volatile("nop");
    }
  }

  [[noreturn]] void ResetHandler()
  {
    clearBss();
    __libc_init_array();
    main();
    exitHalt();
  }
}
