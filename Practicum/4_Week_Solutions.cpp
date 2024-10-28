
#include <iostream>

int absoluteValue(int number)
{
	return number < 0 ? number * -1 : number;
}

bool isDigit(char symbol)
{
	const int SMALLEST_NUMBER = '0';
	const int BIGGEST_NUMBER = '9';

	if ((int)symbol >= SMALLEST_NUMBER && (int)symbol <= BIGGEST_NUMBER)
	{
		return true;
	}

	return false;
}

char toUpper(char symbol)
{
	if (symbol >= 'a' && symbol <= 'z')
	{
		symbol -= ('a' - 'A');
	}

	return symbol;
}

char toLower(char symbol)
{
	if (symbol >= 'A' && symbol <= 'Z')
	{
		symbol += ('a' - 'A');
	}

	return symbol;
}

int toNumber(char symbol)
{
	if (symbol >= '0' && symbol <= '9')
	{
		symbol -= '0';
	}

	return symbol;
}

// Method zad 1

//int IsPrime(int n)
//{
//	if (n == 1)
//	{
//		return false;
//	}
//
//	if (n == 2 || n == 3)
//	{
//		return true;
//	}
//
//	if (n % 2 == 0 || n % 3 == 0)
//	{
//		return false;
//	}
//
//	int length = (int)sqrt(n);
//
//	for (int i = 5; i <= length; i += 6)
//	{
//		if (n % i == 0 || n % (i + 2) == 0)
//		{
//			return false;
//		}
//	}
//
//	return true;
//}

int main()
{
	// zad 1

	/*int a;
	std::cin >> a;

	std::cout << IsPrime(a);*/

	// zad 2

	/*unsigned long a;
	int b;

	std::cin >> a >> b;

	int counter = 0;

	while (a != 0)
	{
		if (a % 10 == b)
		{
			counter++;
		}

		a /= 10;
	}

	std::cout << counter;*/

	// zad 3

	/*const int MAX_INT_NUMBERS = 10;

	int a;
	std::cin >> a;

	int* numbers = new int[MAX_INT_NUMBERS];
	int length = 0;

	while (a != 0)
	{
		if (a % 10 != 0)
		{
			numbers[length] = a % 10;

			length++;
		}

		a /= 10;
	}

	for (size_t i = 0; i < length; i++)
	{
		for (size_t j = i; j < length; j++)
		{
			if (numbers[i] > numbers[j])
			{
				int swap = numbers[i];
				numbers[i] = numbers[j];
				numbers[j] = swap;
			}
		}
	}

	for (size_t i = 0; i < length; i++)
	{
		std::cout << numbers[i];
	}*/

	// zad 4

	/*int a;
	std::cin >> a;

	bool isFirstDigitZero = false;

	while (a != 0)
	{
		if (a % 10 != 0 || isFirstDigitZero)
		{
			std::cout << a % 10;

			isFirstDigitZero = true;
		}

		a /= 10;
	}*/

	// zad 5

	/*int k;
	std::cin >> k;

	int n, m;
	std::cin >> n >> m;

	bool checkWhiteSpace = false;

	for (int i = n; i < m; i++)
	{
		int number = i;

		bool isSpecialNumber = true;

		while (number != 0)
		{
			int devideNumber = number % 10;

			if (devideNumber != 0 && k % devideNumber == 0)
			{
				number /= 10;

				continue;
			}

			isSpecialNumber = false;

			break;
		}

		if (isSpecialNumber)
		{
			if (checkWhiteSpace)
			{
				std::cout << ' ';
			}

			std::cout << i;

			checkWhiteSpace = true;
		}
	}*/
}
