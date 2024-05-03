#include "command.h"
#include <filesystem>

using namespace std;
namespace fs = filesystem;
using namespace fs;

path currentPath = current_path();

void bCommand::help() {
	// print explain of commands
}

void bCommand::listOfCurrentDir() {
	for (const auto& entry : directory_iterator(currentPath)) {
		cout << entry.path().filename().string() << endl;
	}
}

void bCommand::movePath(string dirPath) {

}

void bCommand::createDirectoryOrFile(string newName) {

}

void bCommand::outputFileContent() {

}

void bCommand::searchFile(string fileName) {

}

void fCommand::createFile(string newFileName) {

}

void fCommand::moveFile(string fileName) {

}

void fCommand::deleteFile(string fileName) {

}

void fCommand::makeACopyFile(string fileName) {

}

void fCommand::makeACopyDir(string dirName) {

}

void hCommand::printhp() {
	cout << "This is explain window of Help command" << endl;
}

void hCommand::printlcf() {

}

void hCommand::printmp() {

}

void hCommand::printcd() {

}

void hCommand::printofc() {

}

void hCommand::printsf() {

}

void hCommand::printcf() {

}

void hCommand::printmf() {

}

void hCommand::printdf() {

}

void hCommand::printmcf() {

}

void hCommand::printmcd() {

}
