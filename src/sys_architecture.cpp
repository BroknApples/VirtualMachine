#include "sys_architecture.hpp"

/**
 * @brief Checks if this is the first run of the program by searching the file structure of the program
 */
bool VirtualMachine::checkFileStructure() {

}

/**
 * @brief statement to be printed when first opening the Virtual Machine
 */
void VirtualMachine::printIntroStatement() {
  std::cout << ("*******************************************************************\n");
  std::cout << ("                          Virtual Machine                          \n");
  std::cout << ("*******************************************************************\n");
}