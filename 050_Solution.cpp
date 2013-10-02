#include <iostream>
#include <cmath>

bool is_prime(int n)
{
	// Check if n is prime by seeing if numbers 2, ..., m divide it evenly.
	// We only need check up to the square root of n to see if it is prime.
	int max = (int)sqrt((double)(n));

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
		<< "Project Euler Problem #050 Solution\n"
		<< " -----------\n\n";

	int PrimeSum = 0, Answer = 0, Terms = 0, MaxTerms = 0;
	const int Limit = 1000000;

	// For each j from 2 to the limit...
	for(int j=2; j < Limit; j++)
	{
		// If j is prime, start checking sums of consecutive primes starting from j
		if (is_prime(j))
		{
			// Start with a sequence of one prime, which is j
			PrimeSum = j;
			Terms = 1;
			// Test j+1, j+2, ... for primality until adding the next number would pass the limit
			for(int i=j+1; PrimeSum + i < Limit; i++)
			{
				// If the number is prime, add it to the sum and increment the number of terms
				if (is_prime(i))
				{
					Terms++;
					PrimeSum += i;
					// And if the sum is prime and we have more terms, record them
					if (is_prime(PrimeSum) && (Terms > MaxTerms))
						Answer = PrimeSum, MaxTerms = Terms;
				}
			}
		}
	}
	
	std::cout << Answer << " is a sum of " << MaxTerms << " consecutive prime numbers.";

	return 0;
}