#include "fileIO.h"
#include <iomanip>
#include <iostream>
#include <fstream>
#include <string>

fileIO::fileIO()
{
	//open output file
	//assign *m_fileO
	//assign *m_fileI
}

fileIO::~fileIO()
{
	//delete dynamically allocated memory
	//delete *m_fileO;
	//delete *m_fileI;
}

std::string fileIO::sGetLine(std::string filename)
{
	std::string str;
	std::getline(filename, str)
	return str;
}

std::string fileIO::sSetLine(*outputLine)
{
	//writes single line to file
}

bool fileIO::open(std::string filename)
{
	std::ifstream file(filename);
	if (!in) {
		std::cout << "Cannot open input file.\n";
		return 1;
	}
	else {
		return 0;
	}
}

void fileIO::close()
{
	file.close();
}