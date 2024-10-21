#include <iostream>

int main()
{
	// zad 1 
	/*const int MINIMUM_RANGE = 0, MAXIMUM_RANGE = 256;
	int start, end;
	std::cin >> start >> end;
	bool invalidRange = start < MINIMUM_RANGE || start > MAXIMUM_RANGE || end < MINIMUM_RANGE || end > MAXIMUM_RANGE;

	if (std::cin.bad() || invalidRange)
	{
		std::cerr << "Invalid codes!";
		return 1;
	}

	for (int i = start; i <= end; i++)
	{
		std::cout << i << " --> " << (char)i << std::endl;
	}*/

	// zad 2
	/*int n, factorial = 1;
	std::cin >> n;

	if (!std::cin || n < 0)
	{
		std::cerr << "Invalid number!";
		return 1;
	}

	for (int i = 2; i <= n; i++)
	{
		factorial *= i;
	}

	std::cout << "Factorial: " << factorial;*/

	// zad 3
	/*int n, totalSum = 0, tempSum;
	std::cin >> n;

	if (!std::cin || n <= 0)
	{
		std::cerr << "Invalid number!";
		return 1;
	}

	for (int i = 1; i <= n; i++)
	{
		tempSum = i * (i + 1) / 2;
		totalSum += tempSum;
	}

	std::cout << totalSum;*/

	// zad 4 
	//int n;
	//std::cin >> n;

	//if (!std::cin || n <= 0)
	//{
	//	std::cerr << "Invalid number!";
	//	return 1;
	//}

	//// на примера с 10, 10 не беше включено като делител, но според мен трябва да е inclusive
	//for (int i = 1; i <= n; i++)
	//{
	//	if (n % i == 0)
	//	{
	//		std::cout << i << " ";
	//	}
	//}

	// zad 5
	/*int n, a = 0, b = 1, c;
	std::cin >> n;

	if (!std::cin || n <= 0)
	{
		std::cerr << "Invalid number!";
		return 1;
	}

	std::cout << a << " ";

	if (n >= 2)
	{
		std::cout << b << " ";
	}

	for (int i = 2; i < n; i++)
	{
		c = a + b;
		std::cout << c << " ";
		a = b;
		b = c;
	}*/

	// zad 6 
	/*int n, currNum, sum = 0;
	std::cin >> n;

	if (!std::cin || n <= 0)
	{
		std::cerr << "Invalid number!";
		return 1;
	}

	while (true)
	{
		std::cin >> currNum;
		if (currNum == -1)
		{
			break;
		}

		if (currNum < n && currNum % 2 == 0)
		{
			sum += currNum;
		}
	}

	std::cout << sum;*/

	// zad 7
	/*int m, n;
	std::cin >> m >> n;

	if (std::cin.bad() || m <= 0 || n <= 0)
	{
		std::cerr << "Invalid number!";
		return 1;
	}

	for (int currNum = m; currNum <= n; currNum++)
	{
		int sumDivisors = 0;

		for (int currDivisor = 1; currDivisor < currNum; currDivisor++)
		{
			if (currNum % currDivisor == 0)
			{
				sumDivisors += currDivisor;
			}
		}

		if (currNum == sumDivisors)
		{
			std::cout << currNum << std::endl;
		}
	}*/

	// zad 8 
	/*int n, m;
	std::cin >> n >> m;

	if (std::cin.bad() || n <= 0 || m <= 0)
	{
		std::cerr << "Invalid number!";
		return 1;
	}

	for (int row = 1; row <= n; row++)
	{
		for (int col = 1; col <= m; col++)
		{
			std::cout << "(" << row << ", " << col << ") ";
		}

		std::cout << std::endl;
	}*/
}
