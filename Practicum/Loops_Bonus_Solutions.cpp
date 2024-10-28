#include <iostream>

int main()
{
	// zad 1
	/*int n;
	std::cin >> n;

	if (!std::cin || n < 0)
	{
		std::cerr << "Invalid number";
		return 1;
	}

	for (int firstNum = 2; firstNum < n; firstNum++)
	{
		bool isPrimeFirst = true;
		if (firstNum < 2) isPrimeFirst = false;
		for (int i = 2; i <= sqrt(firstNum); i++)
		{
			if (firstNum % i == 0)
			{
				isPrimeFirst = false;
				break;
			}
		}

		if (!isPrimeFirst) continue;

		int secondNum = n - firstNum;
		bool isPrimeSecond = true;
		if (secondNum < 2) isPrimeSecond = false;
		for (int i = 2; i <= sqrt(secondNum); i++)
		{
			if (secondNum % i == 0)
			{
				isPrimeSecond = false;
				break;
			}
		}

		if (isPrimeSecond)
		{
			std::cout << n << " = " << firstNum << " + " << secondNum << std::endl;
		}
	}*/

	// zad 2
	/*int n;
	double a = 0.5;
	std::cin >> n;

	if (!std::cin || n < 0)
	{
		std::cerr << "Invalid number";
		return 1;
	}

	for (int i = 0; i < n; i++)
	{
		a = (a * a + 1) / 2;
	}
	std::cout << "a_n = " << a;*/

	// zad 3
	/*int n;
	std::cin >> n;

	if (!std::cin || n < 0)
	{
		std::cerr << "Invalid number";
		return 1;
	}

	for (int row = 1; row <= n; row++)
	{
		for (int col = 1; col <= row; col++)
		{
			std::cout << "$ ";
		}
		std::cout << std::endl;
	}*/

	// zad 4
	/*int n;
	std::cin >> n;

	if (!std::cin || n < 0)
	{
		std::cerr << "Invalid number";
		return 1;
	}

	for (int i = 1; i <= n; i++)
	{
		char borderSymbol = (i == 1 || i == n) ? '+' : '|';

		std::cout << borderSymbol << " ";
		for (int hyphen = 0; hyphen < n - 2; hyphen++)
			std::cout << "- ";
		std::cout << borderSymbol << std::endl;
	}*/

	// zad 5
	/*int n;
	std::cin >> n;
	if (!std::cin || n < 0)
	{
		std::cerr << "Invalid number";
		return 1;
	}
	const int ROWS = 2 * n - 1;

	for (int row = 1; row <= ROWS; row++)
	{
		int numbersOnSide = (row > n) ? ROWS + 1 - row : row;
		int symbolCount = 3 * n - 2 * numbersOnSide;
		char symbol = (row == n) ? '-' : ' ';

		for (int i = 1; i <= numbersOnSide; i++)
			std::cout << i << " ";

		for (int i = 0; i < symbolCount; i++)
			std::cout << symbol << " ";

		for (int i = numbersOnSide; i >= 1; i--)
			std::cout << i << " ";

		std::cout << std::endl;
	}*/

	// zad 6
	//int n;
	//std::cin >> n;
	//if (!std::cin || n < 0)
	//{
	//	std::cerr << "Invalid number";
	//	return 1;
	//}

	//const int ROWS = n * 2 + 3;
	//const int ROW_LENGTH = n + 2;
	//const int MIDDLE_ROW = n + 2; // same as ROW_LENGTH but separate for readability
	//const int X_COUNT = (n % 2 == 0) ? 2 : 1;
	//const int WHITESPACE_COUNT = ROW_LENGTH - X_COUNT - 2;

	//for (int row = 1; row <= ROWS; row++)
	//{
	//	// top and bottom row
	//	if (row == 1 || row == ROWS)
	//	{
	//		for (int i = 0; i < ROW_LENGTH; i++)
	//			std::cout << "#";
	//		std::cout << std::endl;
	//		continue;
	//	}

	//	std::cout << "#";

	//	if (row == MIDDLE_ROW)
	//	{
	//		for (int i = 0; i < WHITESPACE_COUNT / 2; i++)
	//			std::cout << " ";
	//		for (int i = 0; i < X_COUNT; i++)
	//			std::cout << "X";
	//		for (int i = 0; i < WHITESPACE_COUNT / 2; i++)
	//			std::cout << " ";
	//	}
	//	else
	//	{
	//		int startingNum = (row <= MIDDLE_ROW) ? row - 1 : ROWS - row;
	//		for (int col = 1; col <= n; col++)
	//		{
	//			std::cout << startingNum;
	//			// resetva se kum 1 ako nadvishi n
	//			startingNum = (startingNum % n) + 1; 
	//		}
	//	}

	//	std::cout << "#" << std::endl;
	//}

	// zad 7
	/*int n, currNum;
	std::cin >> n;
	if (!std::cin || n < 0)
	{
		std::cerr << "Invalid number";
		return 1;
	}

	for (int row = 1; row <= n; row++)
	{
		for (int col = 1; col <= n; col++)
		{
			if (col % 2 != 0)
				currNum = (col - 1) * n + row;
			else
				currNum = col * n - row + 1;

			std::cout << currNum << " ";
		}

		std::cout << std::endl;
	}*/

	// zad 8
	/*int n, currNum;
	std::cin >> n;
	if (!std::cin || n < 0)
	{
		std::cerr << "Invalid number";
		return 1;
	}

	for (int row = 1; row <= n; row++)
	{
		for (int col = 1; col <= n; col++)
		{
			if (row % 2 != 0)
				currNum = (row - 1) * n + col;
			else
				currNum = row * n - col + 1;

			std::cout << currNum << " ";
		}

		std::cout << std::endl;
	}*/
}
