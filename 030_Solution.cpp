#include <iostream>
#include <cmath>

int main()
{
	std::cout << " -----------\n"
		<< "Project Euler Problem #030 Solution\n"
		<< " -----------\n\n";

	int i, m, sum=0;
	// We consider each digit of the numbers from 2 to 999999 as an array of single digits.
	short int digits [6];

	for(int n=2; n < 1000000; n++)
	{
		// We get the digits through the modulus and repeated division by 10.
		// First, copy the number for checking later and to preserve n.
		// Repeatedly store the last digit, truncate the last digit, then increment the place counter.
		m = n;
		for(i=5; i >= 0; i--)
		{
			digits[i] = (n % 10);
			n /= 10;
		}

		// Check if the fifth powers of the digits equal the number we're checking.
		// If it does, output that number and add it to the sum.
		if ((pow(digits[5],5) + pow(digits[4],5) + pow(digits[3],5) + pow(digits[2],5) + pow(digits[1],5) + pow(digits[0],5)) == m )
		{
			std::cout << m << "\n";
			sum += m;
		}
		n = m;
	}

	std::cout << "Sum: " << sum;

	return 0;
}