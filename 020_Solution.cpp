#include <iostream>

int main ()
{
	std::cout << " -----------\n"
		<< "Project Euler Problem #020 Solution\n"
		<< " -----------\n\n";

	short i, carry, digitsum=0;
	short digits[158] = {1};

	for(short multby=1; multby <= 100; multby++)
	{
		for(i=0, carry=0; i <= 157; i++)
		{
			digits[i] = (digits[i] * multby) + carry;
			carry = (digits[i] / 10);
			digits[i] %= 10;
		}
	}

	std::cout << "100! = ";

	for(i=157; i >= 0; i--)
	{
		std::cout << digits[i];
		digitsum += digits[i];
	}
	std::cout << "\nSum of digits: " << digitsum << "\n";

	return 0;
}