#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>

int main()
{
	std::cout << " -----------\n"
		<< "Project Euler Problem #029 Solution\n"
		<< " -----------\n\n";

	// Consider the unique powers as entries in a vector, make an empty vector.
	std::vector<double> Powers;

	for(short a=2; a <= 100; a++)
	{
		for(short b=2; b <= 100; b++)
		{
			// Add unique powers to the vector.
			if(std::find(Powers.begin(), Powers.end(), pow(a,b) ) == Powers.end())
				Powers.push_back (pow(a,b));
		}
	}
	
	std::cout << "Number of unique powers a^b for a, b <= 100: " << Powers.size() << "\n";

	return 0;
 }