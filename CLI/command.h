#ifndef COMMAND_H_
#define COMMAND_H_

#include <iostream>
#include <string>

using namespace std;

// Basic commands of CLI
class bCommand {
public:
	void help();
	void listOfCurrentDir();
	void movePath(string dirPath);
	void createDirectoryOrFile(string newName);
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

class hCommand {
public:
	void printhp();
	void printlcf();
	void printmp();
	void printcd();
	void printofc();
	void printsf();
	void printcf();
	void printmf();
	void printdf();
	void printmcf();
	void printmcd();
	// void printbf();
	// void printre();
	// void printtf();
};

#endif 
