#include <iomanip>
#include <iostream>
#include <fstream>
#include <string>

class fileIO {
public:
	std::string sGetLine(std::string filename); //gets next line from input file
	std::string sSetLine(std::string outputLine); //sets information to output file
	fileIO(*argv);
	void open(std::string filename);
	void close();
	FILE *m_file;
};

