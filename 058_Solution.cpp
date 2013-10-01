#include <iostream>
#include <cmath>

bool is_prime(int n)
{
	float MaxTemp = n;
	int max = floor(sqrt(MaxTemp));

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
		<< "Project Euler Problem #058 Solution\n"
		<< " -----------\n\n";

	int Primes=1, TotalTried=2, TryNext=5, d=2;

	// We calculate each number along the diagonal of the spiral and check for primality.
	// Continue until the ratio of primes to the total meets the condition.
	while(10*Primes >= TotalTried)
	{
		if (TotalTried % 4 == 0)
		{
			d += 2;
		}
		else
			Primes += is_prime(TryNext);
		TryNext += d;
		TotalTried++;
	}
	
	// Adjust in case d had just been incremented because the ratio was satisfied on a lower right corner.
	if (TotalTried % 4 == 1)
		std::cout << "Side Length: " << d-1;
	else
		std::cout << "Side Length: " << d+1;

	return 0;
}