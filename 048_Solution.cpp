#include <iostream>

int main()
{
	std::cout << " -----------\n"
		<< "Project Euler Problem #048 Solution\n"
		<< " -----------\n\n";

	unsigned __int64 LastTenDigits = 0;
	int remaining = 1;
	unsigned __int64 sum = 0;

	for(int i=1; i <= 1000; i++)
	{
		for(remaining=i, sum=i; remaining > 1; remaining--)
		{
			sum *= i;
			sum %= 10000000000;
		}
		LastTenDigits += sum;
		LastTenDigits %= 10000000000;
	}

	std::cout << "Last 10 digits of 1^1 + 2+2 + ... + 1000^1000 = " << LastTenDigits;

	return 0;
}