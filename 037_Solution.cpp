#include <iostream>

bool is_prime(int n)
{
	// Exception for 1.
	if(n == 1)
		return 0;

	// Check if n is prime by seeing if numbers 2, ..., m divide it evenly.
	// We only need check up to the square root of n to see if it is prime.
	for(int test=2; test*test <= n; test++)
	{
		if ((n % test) == 0)
			return 0;
	}
	return 1;
}

bool is_trunc_prime(int n)
{
	int ncopy = n, mod = 1;

	while(ncopy > 0)
	{
		// Check n/10^i on the ith iteration of the loop. (Until n/10^i is 0.)
		ncopy /= 10;
		if(!is_prime(ncopy))
			return 0;

		// Check n mod 10^i on the ith iteration of the loop.
		mod *= 10;
		if(!is_prime(n % mod))
			return 0;
	}

	return 1;
}

int main ()
{
	std::cout << " -----------\n"
		<< "Project Euler Problem #037 Solution\n"
		<< " -----------\n\n";

	short TruncPrimes = 0;
	int i = 13, TruncSum = 0;
	
	while(TruncPrimes < 11)
	{
		// Check if the number is prime, and then if it's a truncatable prime.
		if(is_prime(i) && is_trunc_prime(i))
		{
			TruncPrimes++;
			TruncSum += i;
			std::cout << "Truncatable prime #" << TruncPrimes << " = " << i << "\n";
		}

		// Even numbers, 2+ digit numbers ending in 5, 1, and 9 are not prime.
		// Thus, only test numbers that end in 3 or 7.
		switch(i % 10)
		{
			case 3: i += 4; break;
			default: i += 6; break;
		}
		
		// std::cout << i << " ";
	}

	std::cout << "Sum of the truncatable primes: " << TruncSum << "\n";

	return 0;
 }