#ifndef COMMAND_H_
#define COMMAND_H_

#include <string>

// Basic commands of CLI
class bCommand {
public:
	void clearConsole();
	void printHelp();
	void exitProgram();
	void listOfFiles();
	void movePath(string dirPath);
	void createDirectory(string newDirName);
	void outputFileContent();
	void searchFile(string fileName);
};

// Commands about files
class fCommand {
public:
	void createFile(string newFileName);
	void moveFile(string fileName);
	void deleteFile(string fileName);
	void makeACopyFile(string fileName);
	void makeACopyDir(string dirName);
	// void changeFileMode(); - NEXT TIME
	// void bundilingFile(); - NEXT TIME
	// void trFile(); - NEXT TIME
	
};

#endif 
