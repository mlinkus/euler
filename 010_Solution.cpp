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
		<< "Project Euler Problem #010 Solution\n"
		<< " -----------\n\n";

	unsigned __int64 PrimeSum = 0;

	for(int i=2; i < 2000000; i++)
	{
		if (is_prime(i))
			PrimeSum += i;
	}
	
	std::cout << "Sum of primes below two million: " << PrimeSum;

	return 0;
}