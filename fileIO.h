#include <iomanip>
#include <iostream>
#include <fstream>
#include <string>

class fileIO {
public:
	fileIO(char*);
	~fileIO();
	std::string sGetLine(); //gets next line from input file
	void sSetLine(std::string); //sets information to output file
private:
	std::ifstream *m_fileI;
	std::ofstream *m_fileO;
};

