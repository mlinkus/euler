#include <iostream>
#include <cmath>
using namespace std;

int is_tri(unsigned __int64 x)
{
	float val = 0;
	val = ((pow(1+8*x, .5) - 1) / 2);
	long int val2 = val;
	if (val == val2)
	{
		cout << x << " is triangular" << endl;
		return 1;
	}
	else return 0;
}

int is_pent(unsigned __int64 x)
{
	double val = 0;
	val = (pow(1+24*x, .5) + 1) / 6;
	if (val == floor(val))
	{
		cout << x << " is pentagonal" << endl;
		return 1;
	}
	else return 0;
}

int main()
{
	int n;
	unsigned __int64 hexnum;
	bool done = 0;

	cout << " -----------" << endl;
	cout << "Project Euler Problem #045 Solution" << endl;
	cout << " -----------" << endl << endl;
	
	cout << "Start at n = ?" << endl;
	cin >> n;

	// We go through each hexagonal number and test if it is pentagonal and triangular.
	while(!done)
	{
		hexnum = n * (2*n - 1);
		cout << "Trying " << hexnum << endl;
		// if (is_tri(hexnum) && is_pent(hexnum)) done = 1;
		// Note: Every hexagonal number is triangular, we only need check if it is pentagonal.
		// We'll just check if it's pentagonal FIRST and verify triangularity for posterity.
		if (is_pent(hexnum) && is_tri(hexnum)) done = 1;
		else n++;
	}

	cout << hexnum << endl;

	return 0;
}