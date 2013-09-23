#include <iostream>

int main ()
{
	std::cout << " -----------\n"
		<< "Project Euler Problem #056 Solution\n"
		<< " -----------\n\n";

	short a, b, i, carry, DigitSum, MaxDigitSum=0;
	short digits[198] = {0};

	for(a=2; a < 100; a++)
	{
		std::fill(digits, digits + 198, 0);
		digits[0] = 1;
		for(b=1; b < 100; b++)
		{
			for(i=0, carry=0; i <= 197; i++)
			{
				digits[i] = (digits[i] * a) + carry;
				carry = (digits[i] / 10);
				digits[i] %= 10;
			}
			DigitSum = 0;
			for(i=197; i >= 0; i--) { DigitSum += digits[i]; }
			if (DigitSum > MaxDigitSum)
			{
				MaxDigitSum = DigitSum;
				std::cout << a << "^" << b << " -> " << MaxDigitSum << "\n";
			}
		}
	}

	std::cout << "\nMaximal Digital Sum: " << MaxDigitSum << "\n";

	return 0;
}