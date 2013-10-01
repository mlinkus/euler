#include <iostream>

int main()
{
	std::cout << " -----------\n"
		<< "Project Euler Problem #048 Solution\n"
		<< " -----------\n\n";

	unsigned __int64 LastTenDigits = 0;
	int remaining = 1;
	unsigned __int64 sum = 0;

	// For each i, we add i^i and do mod 10000000000 so it only tracks the last ten digits.
	for(int i=1; i <= 1000; i++)
	{
		// We do the exponentiation manually as well, only tracking the last ten digits.
		// Otherwise the numbers are too large for the data type.
		for(remaining=i, sum=i; remaining > 1; remaining--)
		{
			sum *= i;
			sum %= 10000000000;
		}
		LastTenDigits += sum;
		LastTenDigits %= 10000000000;
	}

	std::cout << "Last 10 digits of 1^1 + 2^2 + ... + 1000^1000 = " << LastTenDigits;

	return 0;
}