#include <iostream>

int main()
{
	std::cout << " -----------\n"
		<< "Project Euler Problem #019 Solution\n"
		<< " -----------\n\n";

	// Sunday is weekday 0, Monday is weekday 1, etc.
	// January 1st, 1901 was a Tuesday, so it starts at weekday = 2.
	int month, weekday = 2, sundays = 0;

	// Array of number of days in each month, January has 31, February has 28, etc.
	short int monthdays [13] = {0,31,28,31,30,31,30,31,31,30,31,30,31};

	// Proceed through the months until it ends at December 2000.
	for(short year = 1901; year <= 2000; year++)
	{
		// For each month, check the weekday it begins on and use the array of days in each month
		// and modular arithmetic to calculate the day of the week for the next first of the month.
		for(month=1; month <= 12; month++)
		{
			if (weekday == 0)
			{
				// If it's a Sunday, output it and increment the counter.
				std::cout << "Sunday " << month << "/" << year << "\n";
				sundays++;
			}
			// Leap year correction.
			if (month == 2 && (year % 4 == 0))
				weekday++;
			weekday = (weekday+monthdays[month]) % 7;
		}
	}
	
	std::cout << sundays << " first days of the month were Sunday from Jan-1-1901 to Dec-31-2000";

	return 0;
}