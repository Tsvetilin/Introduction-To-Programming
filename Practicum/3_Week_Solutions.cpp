#include <iostream>

int main()
{
	// zad 1

	/*const int INPUT_MAX_VALUE = 256;

	int n;
	std::cin >> n;

	int m;
	std::cin >> m;

	if (n > INPUT_MAX_VALUE || m > INPUT_MAX_VALUE || n > m)
	{
		std::cout << "Invalid codes!";

		return 0;
	}

	for (int i = n; i < m; i++)
	{
		std::cout << (char)i << '\n';
	}*/

	// zad 2

	/*int a;
	std::cin >> a;

	int factorial = 1;

	for (int i = 2; i <= a; i++)
	{
		factorial *= i;
	}

	std::cout << factorial;*/

	// zad 3

	/*int n;
	std::cin >> n;

	int sum = 0;

	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			sum += j;
		}
	}

	std::cout << sum;*/

	// zad 4

	/*int n;
	std::cin >> n;

	int lastPossibleDevider = n / 2;

	for (int i = 1; i <= lastPossibleDevider; i++)
	{
		if (n % i == 0)
		{
			if (i == lastPossibleDevider)
			{
				std::cout << i;

				break;
			}

			std::cout << i << ' ';
		}
	}*/

	// zad 5

	/*int n;
	std::cin >> n;

	int a = 0;
	int b = 1;

	int length = n - 2;

	std::cout << a << ' ' << b;

	for (int i = 0; i < length; i++)
	{
		int c = a + b;

		a = b;
		b = c;

		if (i + 1 == length)
		{
			std::cout << c;

			break;
		}

		std::cout << c << ' ';
	}*/

	// zad 6

	/*int n;
	std::cin >> n;

	int a;

	int sum = 0;

	do
	{
		std::cin >> a;

		if (a % 2 == 0 && a < n)
		{
			sum += a;
		}

	} while (a != -1);

	std::cout << sum;*/

	// zad 7

	/*int m, n;
	std::cin >> m >> n;

	for (int i = m; i <= n; i++)
	{
		int sum = 0;

		int lastPossibleDevider = i / 2;

		for (int j = 1; j <= lastPossibleDevider; j++)
		{
			if (i % j == 0)
			{
				sum += j;
			}
		}

		if (sum == i)
		{
			if (i == n)
			{
				std::cout << i;

				break;
			}

			std::cout << i << '\n';
		}
	}*/

	// zad 8

	/*int n, m;
	std::cin >> n >> m;

	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= m; j++)
		{
			if (j == m)
			{
				std::cout << '(' << i << ", " << j << ')';

				break;
			}

			std::cout << '(' << i << ", " << j << ") ";
		}

		if (i != n)
		{
			std::cout << '\n';
		}
	}*/
}

