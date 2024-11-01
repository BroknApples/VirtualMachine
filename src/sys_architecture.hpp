#ifndef SYS_ARCHITECTURE_H
#define SYS_ARCHITECTURE_H

#define MEMORY_MAX 1 << 16 // 65,536 bits or 128KiB of memory in RAM

#include <iostream>
#include <array>

enum Registers {
  R0,
  R1,
  R2,
  R3,
  R4,
  R5,
  R6,
  R7,
  R8,
  R9,
  PC,
  REG_COUNT
};

class VirtualMachine {
 private:
  std::array<uint16_t, MEMORY_MAX> memory;
  std::array<uint16_t, REG_COUNT> registers;
  bool running = true;

 public:
  // Check if Virtual Machine is running
  inline bool running() { return running; } 

  bool checkFileStructure();
  void printIntroStatement();
};

#endif // SYS_ARCHITECTURE_H