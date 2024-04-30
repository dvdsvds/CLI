#include <iostream>
#include <string>
#include <vector>
#include <filesystem>
#include "command.h"
#include "command_processor.h"

using namespace std;
namespace fs = filesystem;
using namespace fs;

int main() {
	CommandProcessor command_processor;

	while (1) {
		string command;
		cout << ">";
		getline(cin, command);

		istringstream iss(command);

		vector<string> tokens;
		string token;

		while (iss >> token) {
			tokens.push_back(token);
		}
		
		command_processor.ProcCommand(tokens);
	}
	return 0;

}