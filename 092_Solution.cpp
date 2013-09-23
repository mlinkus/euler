#include <iostream>

int rsds(int n)
{
	int sds = n;
	while (sds != 1 && sds != 89)
	{
		sds = 0;
		while (n)
		{
			sds += (n % 10)*(n % 10);
			n /= 10;
		}
		n = sds;
	}
	return sds;
}

int main()
{
	std::cout << " -----------\n"
		<< "Project Euler Problem #092 Solution\n"
		<< " -----------\n\n";

	int sum=0;

	for(int i=1; i < 10000000; i++)
	{
		if (rsds(i) == 89)
			sum++;
	}

	std::cout << "Answer:" << sum << "\n";

	return 0;
}