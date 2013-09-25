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
		<< "Project Euler Problem #010 Solution\n"
		<< " -----------\n\n";

	unsigned __int64 PrimeSum = 0;

	// For each number less than two million, check if it's prime and add it to the sum if it is.
	
	for(int i=2; i < 2000000; i++)
	{
		if (IsPrime(i))
			PrimeSum += i;
	}
	
	std::cout << "Sum of primes below two million: " << PrimeSum;

	return 0;
}