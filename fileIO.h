#include <iomanip>
#include <iostream>
#include <fstream>
#include <string>

class fileIO {
public:
	std::string sGetLine(); //gets next line from input file
	std::string sSetLine(); //sets information to output file
	fileIO(char*argv, int n);
	void open();
	void close();
	FILE *m_file;
};

