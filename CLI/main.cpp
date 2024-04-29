#include <iostream>
#include <string>
#include <vector>
#include <filesystem>
#include "command.h"

using namespace std;
namespace fs = filesystem;
using namespace fs;

int main() {

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
		
		if (!tokens.empty()) {
			if (tokens[0] == "help") {
				
			}

		}
		else {

		}

	}
	return 0;

}