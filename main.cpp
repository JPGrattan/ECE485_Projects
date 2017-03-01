#include "fileIO.h"
#include <iomanip>
#include <iostream>
#include <fstream>
#include <string>

int main(int argc, char*argv[])
{
	std::cout << "Argument count: " << argc << std::endl;
	for (int i = 0; i < argc; i++) {
		std::cout << "Passed argument(" << i << "): " << argv[i] << std::endl;
	}
	fileIO* file = new fileIO();
	std::string filename = argv[1];
	file->open(filename);
	std::string firstLine = file->sGetLine(filename);
	std::string secondLine = file->sGetLine(filename);
	std::cout << "Line 1: " << firstLine << std::endl;
	std::cout << "Line 2: " << secondLine << std::endl;
	file->close();
	return 0;
}