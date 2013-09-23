#include <iostream>

int main ()
{
	std::cout << " -----------\n"
		<< "Project Euler Problem #017 Solution\n"
		<< " -----------\n\n";

	int sum=0, n=0;
	short i=0;
		
	for(i=1; i <= 1000; i++)
	// Commented code allows input of test individual numbers for individual letter sums.
//	while(i != 0)
	{
//		std::cin >> i;
//		sum = 0;
		n = i;
		if (n == 1000) { sum += 11; n = 0; } // onethousand
		if (n >= 900) { sum += 11; n -= 900; } // ninehundred
		if (n >= 800) { sum += 12; n -= 800; } // eighthundred
		if (n >= 700) { sum += 12; n -= 700; } // sevenhundred
		if (n >= 600) { sum += 10; n -= 600; } // sixhundred
		if (n >= 500) { sum += 11; n -= 500; } // fivehundred
		if (n >= 400) { sum += 11; n -= 400; } // fourhundred
		if (n >= 300) { sum += 12; n -= 300; } // threehundred
		if (n >= 200) { sum += 10; n -= 200; } // twohundred
		if (n >= 100) { sum += 10; n -= 100; } // onehundred
		if (i >= 100 && n != 0) { sum += 3; } // and
		if (n >= 90) { sum += 6; n -= 90; } // ninety
		if (n >= 80) { sum += 6; n -= 80; } // eighty
		if (n >= 70) { sum += 7; n -= 70; } // seventy
		if (n >= 60) { sum += 5; n -= 60; } // sixty
		if (n >= 50) { sum += 5; n -= 50; } // fifty
		if (n >= 40) { sum += 5; n -= 40; } // forty
		if (n >= 30) { sum += 6; n -= 30; } // thirty
		if (n >= 20) { sum += 6; n -= 20; } // twenty
		if (n == 19) { sum += 8; } // nineteen
		if (n == 18) { sum += 8; } // eighteen
		if (n == 17) { sum += 9; } // seventeen
		if (n == 16) { sum += 7; } // sixteen
		if (n == 15) { sum += 7; } // fifteen
		if (n == 14) { sum += 8; } // fourteen
		if (n == 13) { sum += 8; } // thirteen
		if (n == 12) { sum += 6; } // twelve
		if (n == 11) { sum += 6; } // eleven
		if (n == 10) { sum += 3; } // ten
		if (n == 9) { sum += 4; } // nine
		if (n == 8) { sum += 5; } // eight
		if (n == 7) { sum += 5; } // seven
		if (n == 6) { sum += 3; } // six
		if (n == 5) { sum += 4; } // five
		if (n == 4) { sum += 4; } // four
		if (n == 3) { sum += 5; } // three
		if (n == 2) { sum += 3; } // two
		if (n == 1) { sum += 3; } // one
//		std::cout << "Letters in " << i << ":" << sum << "\n";
	}
	
	std::cout << "Number Letter Sum: " << sum;

	return 0;
 }