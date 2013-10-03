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
		<< "Project Euler Problem #027 Solution\n"
		<< " -----------\n\n";

	int maxn = 0, product = 0;

	// For each a = -999, -998, ..., 998, 999...
	for(int a = -999; a <= 999; a++)
	{
		// And for each b = -999, -998, ..., 998, 999...
		for(int b = -999; b <= 999; b++)
		{
			// Start at n=0, check that n^2 + an + b is positive and prime.
			for(int n = 0; n*n+a*n+b > 0 && is_prime(n*n+a*n+b); n++)
			{
				// If it is for more n than our previous max, output and record the product.
				if (n > maxn)
				{
					std::cout << "n^2 + " << a << "n + " << b << " produces a sequence of " << n << " primes.\n";
					maxn = n;
					product = a*b;
				}
			}
		}
	}
	
	std::cout << "Product: " << product;

	return 0;
 }