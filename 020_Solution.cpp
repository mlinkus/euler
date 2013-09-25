#include <iostream>

int main ()
{
	std::cout << " -----------\n"
		<< "Project Euler Problem #020 Solution\n"
		<< " -----------\n\n";

	short i, carry, digitsum=0;
	// 100! is 158 digits long because floor(log_10(100!)) + 1 = 158.
	// So, 100! is represented by an array of 158 single digits.
	short digits[158] = {1};

	// For the numbers 1, 2, ..., 100, multiply each digit in the array by the number.
	// Then add anything that would carry from the previous step.
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

	// Output all of the digits one at a time and add them to the digital sum.
	for(i=157; i >= 0; i--)
	{
		std::cout << digits[i];
		digitsum += digits[i];
	}
	std::cout << "\nSum of digits: " << digitsum << "\n";

	return 0;
}