#include "fileIO.h"

fileIO::fileIO(char* file_str)
{
	m_fileI->open(file_str);
	if (!m_fileI)
	{
		/* Shoot out an error */
		std::cout << "Error opening trace file.";
	}
	else
	{
		m_fileO->open("output.txt");
		if (!m_fileO)
		{
			/* shoot out an error */
			std::cout << "Error creating output file.";
		}
		else
		{
			/* is there something to do? */
		}
	}
}

fileIO::~fileIO()
{
	m_fileI->close();
	m_fileO->close();

	//delete dynamically allocated memory
	delete m_fileI;
	delete m_fileO;
	m_fileI = NULL;
	m_fileO = NULL;
}

std::string fileIO::sGetLine()
{
	std::string str;
	std::getline(*m_fileI, str);
	return str;
}

void fileIO::sSetLine(std::string str)
{
	// eventually output a line
}