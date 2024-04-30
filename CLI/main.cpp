#include <iostream>
#include <string>
#include <vector>
#include <filesystem>
#include "command.h"

using namespace std;
namespace fs = filesystem;
using namespace fs;

int main() {
	bCommand bc;
	fCommand fc;
	hCommand hc;

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
		
		if (!(tokens.empty())) {
			if (tokens[0] == "help") {
				if (tokens.size() >= 2 && tokens[1] == "/?") {
					hc.printhp();
				}
				else {
					bc.printHelp();
				}
			}
			else if (tokens[0] == "cc") {
				cout << "\033[2J\033[H";
			}
			else if (tokens[0] == "exit") {
				exit(0);
			}
			else if (tokens[0] == "lcf") {
				bc.listOfCurrentDir();
			}
			else if (tokens[0] == "mp") {
			}
			else if (tokens[0] == "cd") {
			}
			else if (tokens[0] == "ofc") {

			}
			else if (tokens[0] == "sf") {

			}
		}
		else {

		}

	}
	return 0;

}