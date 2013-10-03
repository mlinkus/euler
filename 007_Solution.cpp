#include <iostream>

bool is_prime(int n)
{
	// Check if n is prime by seeing if numbers 2, ..., m divide it evenly.
	// We only need check up to the square root of n to see if it is prime.
	for(int test=2; test*test <= n; test++)
	{
		if ((n % test) == 0)
			return 0;
	}
	return 1;
}

int main()
{
	std::cout << " -----------\n"
		<< "Project Euler Problem #007 Solution\n"
		<< " -----------\n\n";

	for(int current=2, PrimeCount=0; PrimeCount < 10001; current++)
	{
		if (is_prime(current))
		{
			PrimeCount++;
			if(PrimeCount % 1000 == 1)
				std::cout << current << " is prime #" << PrimeCount << "\n";
		}
	}

	return 0;
}