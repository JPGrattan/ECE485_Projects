#include "fileIO.h"

fileIO::fileIO(char *file_str)
{
	std::cout << &file_str[0];

	m_fileI->open("trace.txt");
	//std::cout << m_fileI;
	if (!*m_fileI)
	{
		/* Shoot out an error */
		std::cout << "Error opening trace file.";
	}
	else
	{
		m_fileO->open("output.txt");
		if (!*m_fileO)
		{
			/* shoot out an error */
			std::cout << "Error creating output file.";
		}
		else
		{
			std::cout << "File loaded.";
		}
	}
}

fileIO::~fileIO()
{
	m_fileI->close();
	m_fileO->close();

	//delete dynamically allocated memory
	//delete m_fileI;
	//delete m_fileO;
	//m_fileI = NULL;
	//m_fileO = NULL;
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