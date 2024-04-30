#ifndef COMMAND_PROCESSOR_H
#define  COMMAND_PROCESSOR_H

#include <vector>
#include <string>
using namespace std;

class CommandProcessor {
public:
	void ProcCommand(const vector<string>& tokens);
};

#endif // !COMMAND_PROCESSOR_H
