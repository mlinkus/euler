#include <iostream>

bool OddDigits(int n)
{
	// Check if it's odd, (the last digit is odd), divide by 10, which rounds down, and repeat.
	// Stop if we get an even number and return 0, otherwise return 1.
	while (n != 0)
	{
		if (n % 2 == 0)
			return 0;
		n /= 10;
	}
	return 1;
}

int main ()
{
	std::cout << " -----------\n"
		<< "Project Euler Problem #145 Solution\n"
		<< " -----------\n\n";

	long int number = 10, reverse = 0, Reversibles = 0;

	for(int n=10; n<1000000000; n++)
	{
		// If there's a trailing zero, skip it.
		if (n % 10 == 0) n++;

		// Copy the number for the digit reversal.
		number = n;

		// Reverse the digits by starting at zero, multiplying by 10 and adding the last digit of the number.
		// Truncate the number using division by 10 and repeat until the number is zero.
		reverse = 0;
		while (number != 0)
		{
			reverse *= 10;
			reverse += (number % 10);
			number /= 10;
		}

		// OddDigits will return 1 for a reversible number, 0 if not.
		// So we add OddDigits(n + reverse) to the answer sum.

		/* DEBUG OUTPUT SHOWS THE SUMS.
		if (OddDigits(n + reverse))
		{
			std::cout << n << " + " << reverse << " = " << n + reverse << "\n";
		}
		*/

		Reversibles += OddDigits(n + reverse);
	}

	std::cout << "Amount of Reversible Numbers below 1,000,000,000: " << Reversibles << "\n";

	return 0;
}