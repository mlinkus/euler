#include <iostream>

int main()
{
	std::cout << " -----------\n"
		<< "Project Euler Problem #033 Solution\n"
		<< " -----------\n\n";

	int numerator = 1, denominator=1;

	for(float n1=1, n2=1, d1=1, d2=1; n1 <= 9; n1++)
	{
		for(d1 = n2 = n1; n2 <= 9; d1++, n2++)
		{
			for(d2 = 1; d2<= 9; d2++)
			{
				if (((n1*10 + n2)/(d1*10 + d2) == (n1/d2)) && ((n1*10 + n2)/(d1*10 + d2) < 1))
				{
					numerator *= n1;
					denominator *= d2;
					std::cout << n1 << n2 << "/" << d1 << d2 << " = " << n1 << "/" << d2 << "\n";
				}
			}
		}
	}

	std::cout << numerator << "/" << denominator << " = 1/";
	denominator /= numerator;
	std::cout << denominator;

	return 0;
}