#ifndef CMD_INSTRUCTIONS_HPP
#define CMD_INSTRUCTIONS_HPP

#include <string>
#include <vector>

class CMDInstruction {
 public:
  bool doInstruction(CMDInstruction instruction, std::vector<std::string>& args);
};

// need this to somehow intuitively get instructions and do instructions bsed on user input
// curr_idea = instruction parent class and child classes that are predetermined that include their own instructions defined

#endif  // CMD_INSTRUCTIONS_HPP