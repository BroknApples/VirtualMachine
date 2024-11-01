// prgoram will run my own python like programming langauage natively
#include "sys_architecture.hpp"

int main(int argc, char* argv[]) {
  VirtualMachine vm;

 if(!vm.checkFileStructure()) {
  // do something here
 }

  vm.printIntroStatement();
  while(vm.running()) {
    // dir_rag.printStatement();
  }

  return 0;
}