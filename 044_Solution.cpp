#include <iostream>
#include <cmath>
using namespace std;

// Function from Problem #45 to check if a number is pentagonal, derived from a quadratic.

int is_pent(unsigned __int64 x)
{
	double val = 0;
	val = (pow(1+24*x, .5) + 1) / 6;
	if (val == floor(val)) return 1;
	else return 0;
}

int main()
{
	cout << " -----------" << endl;
	cout << "Project Euler Problem #045 Solution" << endl;
	cout << " -----------" << endl << endl;

	long int Pj = 5, Pk = 1;
	int min = 999999999;

	// How do I know the minimum difference will be less than 999,999,999?  I don't, I guessed.
	// How do I know we will achieve the minimum in under 5000 pentagonal numbers?  Same thing.

	for(short j=2; j < 5000; j++)
	{
		// Find the jth pentagonal number.
		Pj = j*(3*j-1)/2;
		
		for(short k=1; k < j; k++)
		{
			// For every j in {1, 2, ..., j-1}, find the kth pentagonal number.
			Pk = k*(3*k-1)/2;

			// Then check if Pj + Pk and Pj - Pk are also pentagonal and if Pj - Pk is less than the minimum.
			if (is_pent(Pj + Pk) && is_pent(Pj - Pk) && ((Pj - Pk) < min))
			{
				min = Pj - Pk;
				std::cout << Pj << " - " << Pk << " = " << min << "\n";
			}
		}
	}

	return 0;
}