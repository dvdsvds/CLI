#include <iostream>

#include "command.h"
#include "command_processor.h"

using namespace std;

void CommandProcessor::ProcCommand(const vector<string>& tokens) {
	bCommand bc;
	fCommand fc;
	hCommand hc;

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
}