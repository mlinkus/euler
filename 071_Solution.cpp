#include <iostream>

int main()
{
	std::cout << " -----------\n"
		<< "Project Euler Problem #071 Solution\n"
		<< " -----------\n\n";

	int best_n = 1, best_d = 3;

	// For each denominator d = 1, 2, ..., 1000000
	for(int n=0, d=1;d <= 1000000;d++)
	{
		// Get a numerator to make n/d near 3/7.
		for(n = d*3/7; n*7 < 3*d; n++)
		{
			// Only check fractions in lowest terms
			if((n != 0) && (d % n != 0))
			{
				// Is this approximation to 3/7 better?
				if(n*best_d - d*best_n > 0)
				{
					// If it is, it becomes the new best approximation.  Output it.
					best_n = n;
					best_d = d;
				}
			}
		}
	}
	
	std::cout << "Best approximation to 3/7: " << best_n << "/" << best_d;

	return 0;
 }