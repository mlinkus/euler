#include <iostream>
#include <fstream>
#include <cstring>
#include <cmath> // log
#include <cstdlib> // strtol

int main()
{
	std::cout << " -----------\n"
		<< "Project Euler Problem #099 Solution\n"
		<< " -----------\n\n";

	// Open the file, check if it opened.
	std::ifstream Powers ("099_powers.txt", std::ifstream::in);

	if (Powers.is_open())
	{
		std::cout << "File 099_powers.txt opened successfully!\n";

		// We will compare each a^b by looking at b*log(a).
		// Make a string, base and power, and something to track the largest b*log(a).
		std::string line;
		int Base, Power;
		double Largest = 1;

		// Input for parsing each line into bases and powers.
		char input[15];

		// For each line in the file, while tracking the line number
		for(int i=1; getline (Powers,line); i++ )
		{
			// Copy the string version of the line into input.
			std::strcpy(input, line.c_str());
			
			// The base is everything up to the comma.
			char *token = std::strtok(input, ",");
			Base = strtol(token,NULL,10);
			
			// Then the power is everything from there to the linebreak.
			token = std::strtok(NULL, "\n");
			Power = strtol(token,NULL,10);
			
			// If this base^power is the new largest, output it and store it.
			if ((double)(Power*log(Base)) > Largest)
			{
				std::cout << "New largest value at line " << i << ": " << Base << "^" << Power << "\n";
				Largest = (double)(Power*log(Base));
			}
		}

		// Close the file.
		Powers.close();
	}

	// If the file does not open.
	else 
		std::cout << "ERROR: Unable to open 099_powers.txt.\n";

	return 0;
}