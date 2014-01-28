#include <iostream>

// Using Farey Sequences, see 073_Solution_Alt for slower bruteforce version.

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

	int count = 0;
	// Maximum denominator.
	int limit = 12000;
	// Lower limit numerator and denominator.
	int a = 1, b = 3;
	// Next neighbor of 1/3 to the left.
	int c = 4000, d = 11999;
	// Working variables, e and f are numerators and denominators of a fraction.
	int e = 0, f = 0, k = 0;

	// Find the next fraction in the Farey Sequence.  Proceed until we hit the upper limit.
	while(!(c == 1 && d == 2))
	{
		count++;
		k = (limit + b) / d;
		e = k*c - a;
		f = k*d - b;
		a = c;
		b = d;
		c = e;
		d = f;
	}
	
	std::cout << "Total fractions between 1/3 and 1/2: " << count;

	return 0;
 }