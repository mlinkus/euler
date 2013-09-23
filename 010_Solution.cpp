#include <iostream>
#include <cmath>

int is_prime(int n)
{
	float n2 = 1;
	n2 = n;

	int max = 1;
	max = sqrt(n2);

	int test = 2;
	while (test <= max)
	{
		if ((n % test) == 0)
			return 0;
		test++;
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