#include <iostream>

int gcd(int a, int b)
{
	if (b == 0)
		return a;
	else
		return gcd(b, a % b);
}

int main()
{
	std::cout << " -----------\n"
		<< "Project Euler Problem #073 Solution\n"
		<< " -----------\n\n";

	int fractions = 0;
	
	// For each denominator d = 1, 2, ..., 12000
	for(int n=1, d=2; d <= 12000;d++)
	{
		// Get a numerator to make n/d just above 1/3, proceed until n/d >= 1/2
		for(n = (d*1/3 + 1); n*2 < d; n++)
		{
			if (gcd(d, n) == 1)
				fractions++;
		}
	}
	
	std::cout << "Total fractions between 1/3 and 1/2: " << fractions;

	return 0;
 }