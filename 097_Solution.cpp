#include <iostream>

int main ()
{
	std::cout << " -----------\n"
		<< "Project Euler Problem #097 Solution\n"
		<< " -----------\n\n";

	short i, carry;
	int digits[10] = {1};
	int n=0;

	for(short multby=2; n <= 7830457; n++)
	{
		if (n == 7830457)
			multby = 28433;
		for(i=0, carry=0; i <= 9; i++)
		{
			digits[i] = (digits[i] * multby) + carry;
			carry = (digits[i] / 10);
			digits[i] %= 10;
		}
	}
	digits[0] += 1;

	std::cout << "Last ten digits of 28433*2^7830457+1 = ";

	for(i=9; i >= 0; i--)
	{
		std::cout << digits[i];
	}

	return 0;
}