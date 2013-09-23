#include <iostream>
#include <cmath>

int divsum(int n)
{
	float n2 = n;
	int max = sqrt(n2);
	int sum = 1;

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

	for(a=1; a < 10000; a++)
	{
		b = d_a = divsum(a);
		if (d_a != a)
		{
			d_b = divsum(b);
			if (d_b == a)
			{
				std::cout << a << " and " << b << " are amicable numbers.\n";
				AmicableSum += a;
			}
		}
	}
	
	std::cout << "Sum of amicable numbers under 10000: " << AmicableSum;

	return 0;
 }