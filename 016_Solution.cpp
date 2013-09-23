#include <iostream>

int main ()
{
	std::cout << " ----------- \n"
		<< "Project Euler Problem #016 Solution \n"
		<< " -----------\n\n";

	short power=1, i, carry=0, limit=1, digitsum=0;
	short digits[302] = {2};

	std::cout << "Raise 2 to what power? \n";
	std::cin >> limit;

	for(power=1; power < limit; power++)
	{
		for(i=0, carry=0; i <= 301; i++)
		{
			switch(digits[i])
			{
			case 1: digits[i] = 2 + carry; carry = 0; break;
			case 2: digits[i] = 4 + carry; carry = 0; break;
			case 3: digits[i] = 6 + carry; carry = 0; break;
			case 4: digits[i] = 8 + carry; carry = 0; break;
			case 5: digits[i] = 0 + carry; carry = 1; break;
			case 6: digits[i] = 2 + carry; carry = 1; break;
			case 7: digits[i] = 4 + carry; carry = 1; break;
			case 8: digits[i] = 6 + carry; carry = 1; break;
			case 9: digits[i] = 8 + carry; carry = 1; break;
			default: digits[i] = carry; carry = 0;
			}
		}
	}

	std::cout << "2^" << limit << " = ";

	for(i=301; i >= 0; i--)
	{
		std::cout << digits[i];
		digitsum += digits[i];
	}
	std::cout << "\nSum of digits: " << digitsum;

	return 0;
 }