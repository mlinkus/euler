#include <iostream>
#include <fstream>
#include <string>
#include <cmath>

int is_tri(unsigned int x)
{
	float val = ((pow(1+8*x, .5) - 1) / 2);
	if (val == (int)(val))
		return 1;
	else return 0;
}

int main()
{
	std::cout << " -----------\n"
		<< "Project Euler Problem #042 Solution\n"
		<< " -----------\n\n";

	// Open the file, check if it opened.
	std::ifstream Words ("042_words.txt", std::ifstream::in);

	if (Words.is_open())
	{
		std::cout << "File 042_words.txt opened successfully!\n";

		// Make a string, iterator, temp score for each line, and total tracker.
		std::string line;
		int i, LineScore, Total = 0;

		// For each line in the file, increment the line number and
		while ( getline (Words,line) )
		{
			// For each letter in the words, get the value by subtracting the A char and adding 1
			// to make it an integer.  Add it to the temporary line score.
			for (i=0, LineScore=0; i < line.length(); ++i)
			{
				LineScore += line[i] - 'A' + 1;
			}
			// If the word's score is a triangle number, count it.
			if (is_tri(LineScore))
				Total++;
		}

		// Close the file, output the sum of name scores.
		Words.close();
		std::cout << "Total Name Scores: " << Total << "\n";
	}

	// If the file does not open.
	else 
		std::cout << "ERROR: Unable to open 042_words.txt.\n";

	return 0;
}