#include <iostream>
#include <fstream>
#include <string>

int main()
{
	std::cout << " -----------\n"
		<< "Project Euler Problem #022 Solution\n"
		<< " -----------\n\n";

	// Open the file, check if it opened.
	std::ifstream Names ("022_names.txt", std::ifstream::in);

	if (Names.is_open())
	{
		std::cout << "File 022_names.txt opened successfully!\n";

		// Make a string, iterator, temp score for each line, line number, and sum of name scores.
		std::string line;
		int i, LineScore;
		int LineNum = 0;
		unsigned int NameScores = 0;

		// For each line in the file, increment the line number and
		while ( getline (Names,line) )
		{
			// For each letter in the name, get the value by subtracting the A char and adding 1
			// to make it an integer.  Add it to the temporary line score.
			for (i=0, LineScore=0; i < line.length(); ++i)
			{
				LineScore += line[i] - 'A' + 1;
			}
			// Multiply by the pre-incremented line number and add to the sum of name scores.
			NameScores += LineScore * ++LineNum;
		}

		// Close the file, output the sum of name scores.
		Names.close();
		std::cout << "Total Name Scores: " << NameScores << "\n";
	}

	// If the file does not open.
	else 
		std::cout << "ERROR: Unable to open 022_names.txt.\n";

	return 0;
}