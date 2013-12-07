#include <iostream>

int main()
{
	std::cout << " -----------\n"
		<< "Project Euler Problem #039 Solution\n"
		<< " -----------\n\n";

	// Side lengths of test triangles, right triangles, max right triangles.
	int a, b, c;
	short Rights, MostRights = 0;
	
	// For each perimeter 3, 4, ..., 1000
	for(int p = 3; p <= 1000; p++)
	{
		Rights = 0;
		// Longest side is half of the (perimeter minus one), rounded down.
		// Proceed while the longest side is one third the (perimeter plus one), rounded down.
		// (Note: Do not generate equilateral triangles because they are not right triangles.)
		for(a = (p - 1)/2; 3*a >= p + 1; a--)
		{
			// Second longest side starts equal to a.
			// Shortest side is perimeter - 2a.
			// Check it, then "move" one unit from the middle side and add it to the shortest.
			// Proceed until the shortest exceeds the middle side.
			for(b = a, c = p - 2*a; c <= b; b--, c++)
			{
				// Debug output to print ALL generated triangles.
				// std::cout << p << " - " << a << " " << b << " " << c << "\n";
				// Check if it's a right triangle.
				if (a*a == b*b + c*c)
				{
					// Debug output to print ALL right triangles.
					// std::cout << p << ": " << a << "^2 = " << b << "^2 + " << c << "^2\n";
					Rights++;
				}
			}
		}
		if (Rights > MostRights)
		{
			MostRights = Rights;
			std::cout << "New Maximum for perimeter " << p << ", " << Rights << " right triangles.\n";
		}
	}
	
	return 0;
}