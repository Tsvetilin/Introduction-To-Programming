#include <iostream>

int main()
{
	int n;
	std::cin >> n;
	int sum = 0;
	for (int a = 1; a <= n; a++)
	{
		for (int b = 1; b <= a; b++)
		{
			sum += b;
		}
	}
	std::cout << sum;
}