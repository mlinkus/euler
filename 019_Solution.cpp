#include <iostream>

int main()
{
	std::cout << " -----------\n"
		<< "Project Euler Problem #019 Solution\n"
		<< " -----------\n\n";

	int month, weekday = 2, sundays = 0;
	short int monthdays [13] = {0,31,28,31,30,31,30,31,31,30,31,30,31};

	for(short year = 1901; year <= 2000; year++)
	{
		for(month=1; month <= 12; month++)
		{
			if (weekday == 0)
			{
				std::cout << "Sunday " << month << "/" << year << "\n";
				sundays++;
			}
			if (month == 2 && (year % 4 == 0))
				weekday++;
			weekday = (weekday+monthdays[month]) % 7;
		}
	}
	
	std::cout << sundays << " first days of the month were Sunday from Jan-1-1901 to Dec-31-2000";

	return 0;
}