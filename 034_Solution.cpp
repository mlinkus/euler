#include <iostream>

int fact(int x)
{
	int val = 1;
	while(x > 1)
	{
		val *= x;
		x--;
	}
	return val;
}

int main()
{
	std::cout << " -----------\n"
		<< "Project Euler Problem #034 Solution\n"
		<< " -----------\n\n";

	int check=0, sum=0, i, m;
	short int digits [6];
	
	for(int n=9; n < 1000000; n++)
	{
		m = n;
		// Mod 10 = get digit, divide by 10 = remove ones place.
		for(i=5; i >= 0; i--)
		{
			digits[i] = (n % 10);
			n /= 10;
		}

		// Sum of the factorials of the digits, subtract 1 for each leading zero.
		check = fact(digits[5]) + fact(digits[4]) + fact(digits[3]) + fact(digits[2]) + fact(digits[1]) + fact(digits[0]);
		if (m < 100000) check--;
		if (m < 10000) check--;
		if (m < 1000) check--;
		if (m < 100) check--;

		if (check == m)		
		{
			std::cout << m << "\n";
			sum += m;
		}
		n = m;
	}

	std::cout << "Sum: " << sum;

	return 0;
}