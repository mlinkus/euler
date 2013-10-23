#include <iostream>
#include <cmath>

int is_tri(unsigned __int64 x)
{
	double val = ((pow(1+8*x, .5) - 1) / 2);
	if (val == floor(val))
	{
		std::cout << x << " is triangular\n";
		return 1;
	}
	else return 0;
}

int is_pent(unsigned __int64 x)
{
	double val = (pow(1+24*x, .5) + 1) / 6;
	if (val == floor(val))
	{
		std::cout << x << " is pentagonal\n";
		return 1;
	}
	else return 0;
}

int main()
{
	std::cout << " -----------\n"
		<< "Project Euler Problem #045 Solution\n"
		<< " -----------\n\n";

	// Make an iterator for the nth hexagonal number and somewhere to store it.
	int n;
	unsigned __int64 hexnum;

	// Input a starting n, use this to test that 40755 (n = 143) meets the criteria.
	std::cout << "Start at n = ?  ";
	std::cin >> n;
	
	// Until we find a number that is both pentagonal and hexagonal...
	do {
		// Make each hexagonal number and output it.
		hexnum = n * (2*n - 1);
		std::cout << "Trying " << hexnum << "\n";
		n++;
	} while (!(is_pent(hexnum) && is_tri(hexnum)));
	
	// Note: Every hexagonal number is also triangular, we only need check if it is pentagonal.
	// We'll just check if it's pentagonal FIRST and verify triangularity for posterity.

	std::cout << hexnum << "\n";

	return 0;
}