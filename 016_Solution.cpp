#include <iostream>

int main ()
{
	std::cout << " ----------- \n"
		<< "Project Euler Problem #016 Solution \n"
		<< " -----------\n\n";

	short power=1, i, carry=0, limit=1, digitsum=0;
	// 2^1000 is 302 digits long because floor(1000*log_10(2)) + 1 = 302.
	// So, 2^1000 is represented by an array of 302 single digits.
	short digits[302] = {2};

	std::cout << "Raise 2 to what power? \n";
	std::cin >> limit;

	// We start at 2^1 = 000...0002 and double it an input number of times.
	for(power=1; power < limit; power++)
	{
		// For each digit, double it by changing it to the digit it will be
		// and adding one to the next place if necessary.
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

	// Output all of the digits one at a time and add them to the digital sum.
	for(i=301; i >= 0; i--)
	{
		std::cout << digits[i];
		digitsum += digits[i];
	}
	std::cout << "\nSum of digits: " << digitsum;

	return 0;
 }