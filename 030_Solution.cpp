#include <iostream>
#include <cmath>

int main()
{
	std::cout << " -----------\n"
		<< "Project Euler Problem #030 Solution\n"
		<< " -----------\n\n";

	int i, m, sum=0;
	short int digits [6];
	
	for(int n=2; n < 1000000; n++)
	{
		m = n;
		// Mod 10 = get digit, divide by 10 = remove ones place.
		for(i=5; i >= 0; i--)
		{
			digits[i] = (n % 10);
			n /= 10;
		}

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