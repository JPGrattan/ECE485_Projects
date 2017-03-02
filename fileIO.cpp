#include "fileIO.h"
#include <iomanip>
#include <iostream>
#include <fstream>
#include <string>

fileIO::fileIO(char*argv[],int n)
{
	//open output file
	char*m_file = *argv[n];
	//assign *m_fileO
	//assign *m_fileI
}

fileIO::~fileIO()
{
	//delete dynamically allocated memory
	//delete *m_fileO;
	//delete *m_fileI;
}

std::string fileIO::sGetLine()
{
	std::string str;
	std::getline(*m_file, str)
	return str;
}

std::string fileIO::sSetLine()
{
	//writes single line to file
}

bool fileIO::open()
{
	std::ifstream *file(filename);
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
	*file.close();
}