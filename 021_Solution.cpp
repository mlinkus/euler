#include <iostream>
#include <cmath>

// A function for the sum of a number's divisors.
int divsum(int n)
{
	float n2 = n;
	int max = sqrt(n2);
	int sum = 1;

	// Divide by all numbers up to the square root of the number.
	// All numbers are divisible by 1, so we start at 2 and do not check 1.
	// If it is divisible, add that number and the quotient to the divisor sum.
	for(int test=2; test <= max; test++)
	{
		if ((n % test) == 0)
		{
			sum += test;
			if (test != n/test) sum += (n/test);
		}
	}

	return sum;
}

int main ()
{
	std::cout << " -----------\n"
		<< "Project Euler Problem #021 Solution\n"
		<< " -----------\n\n";

	short a=0, d_a=0, b=0, d_b=0;
	int AmicableSum = 0;

	// For each number from 1 to 10000...
	for(a=1; a < 10000; a++)
	{
		// ...get the sum of its divisors...
		b = d_a = divsum(a);
		if (d_a != a)
		{
			// ...and compare it to the sum of that number's divisors, b... 
			d_b = divsum(b);
			if (d_b == a)
			{
				// ...and output those numbers and add them to the sum if the divisors of b equals the original number.
				std::cout << a << " and " << b << " are amicable numbers.\n";
				AmicableSum += a;
			}
		}
	}
	
	std::cout << "Sum of amicable numbers under 10000: " << AmicableSum;

	return 0;
 }