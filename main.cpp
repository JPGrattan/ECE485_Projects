#include "fileIO.h"

int main(int argc, char* argv[])
{
	std::cout << "Argument count: " << argc << std::endl;
	for (int i = 0; i < argc; i++) {
		std::cout << "Passed argument(" << i << "): " << argv[i] << std::endl;
	}

	fileIO* oFile = new fileIO(argv[1]);
	std::cout << "Returned from constructor" << std::endl;
	//std::string firstLine = oFile->sGetLine();
	//std::string secondLine = oFile->sGetLine();
	//std::cout << "Line 1: " << firstLine << std::endl;
	//std::cout << "Line 2: " << secondLine << std::endl;
	delete oFile;
	return 0;
}