#include <iostream>
#include <cmath>

int main()
{
	std::cout << " -----------\n"
		<< "Project Euler Problem #040 Solution\n"
		<< " -----------\n\n";

	int Product = 1;

	// Until we exceed the one million digits in Champernowne's constant
	for(int i=1, Digits=0, Output = 1; Digits <= 1000000; i++)
	{
		// Keep track of the digits used so far.
		Digits += (int)(log10(i)+1);

		// When we pass 10, 100, etc.
		if (Digits > pow(10,Output))
		{
			Output++;
			std::cout << Digits << " digits used at number " << i;
			
			// Use the most recent number appended to the constant to find the desired digit.
			int DigitTemp = i;
			
			// If we output the 1002nd digit, we need to move left twice.
			// Find this by taking mod 10 of the current amount of used digits.
			int DigitToGet = (Digits % 10);
			
			// Get that desired digit by dividing by ten, rounding down.
			while(DigitToGet >= 1)
			{
				DigitToGet--;
				DigitTemp /= 10;
			}
			
			// Then do mod 10 again to truncate everything to the left of what remains.
			DigitTemp %= 10;
			
			// This is the new number to multiply into the product.  Output.
			Product *= DigitTemp;
			std::cout << "\n  .. Multiply by " << DigitTemp << " for new product " << Product << "\n\n";
		}
	}

	std::cout << "\nProduct: " << Product;

	return 0;
 }