#include <iostream>
#include <cmath>

bool IsPrime(int n)
{
	float n2 = 1;
	n2 = n;

	// Check if n is prime by checking if numbers 2, ..., floor(sqrt(n)) divide it evenly.
	int max = 1;
	max = sqrt(n2);

	for(int test=2; test <= max; test++)
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
	
	// Check if each number is prime until we reach 10001 primes.  Output every 1000 primes.

	for(int current=2, PrimeCount=0; PrimeCount < 10001; current++)
	{
		if (IsPrime(current))
		{
			PrimeCount++;
			if(PrimeCount % 1000 == 1)
				std::cout << current << " is prime #" << PrimeCount << "\n";
		}
	}

	return 0;
}