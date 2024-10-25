#include <iostream>

// method za zad 1

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

// method za zad 4

//void PrintTopAndBottom(int length)
//{
//	std::cout << "+ ";
//
//	for (int i = 0; i < length; i++)
//	{
//		std::cout << "- ";
//	}
//
//	std::cout << '+';
//}

int main()
{
	// zad 1

	/*int n;
	std::cin >> n;

	int* allPrimesToN = new int[n];
	int arrayLength = 0;

	for (int i = 1; i <= n; i++)
	{
		if (IsPrime(i))
		{
			allPrimesToN[arrayLength] = i;

			if (i == n)
			{
				break;
			}

			arrayLength++;
		}
	}

	bool checkNewRow = true;

	for (int i = 0; i < arrayLength; i++)
	{
		for (int j = i; j < arrayLength; j++)
		{
			if (allPrimesToN[i] + allPrimesToN[j] == n)
			{
				if (!checkNewRow)
				{
					std::cout << '\n';
				}

				std::cout << n << " = " << allPrimesToN[i] << " + " << allPrimesToN[j];

				checkNewRow = false;
			}
		}
	}*/

	// zad 2

	/*const double a0 = .5;

	int n;
	std::cin >> n;

	double a_n = (a0 * a0 + 1) / 2;

	for (int i = 1; i < n; i++)
	{
		a_n = (a_n * a_n + 1) / 2;
	}

	std::cout << a_n;*/

	// zad 3

	/*int n;
	std::cin >> n;

	bool checkNewRow = true;

	for (int i = 1; i <= n; i++)
	{
		bool checkWhiteSpace = true;

		if (!checkNewRow)
		{
			std::cout << '\n';
		}

		for (int j = 0; j < i; j++)
		{
			if (!checkWhiteSpace)
			{
				std::cout << ' ';
			}

			std::cout << '$';

			checkWhiteSpace = false;
		}

		checkNewRow = false;
	}*/

	// zad 4

	/*int n;
	std::cin >> n;

	int length = n - 2;

	PrintTopAndBottom(length);

	std::cout << '\n';

	for (int i = 0; i < length; i++)
	{
		std::cout << "| ";

		for (int j = 0; j < length; j++)
		{
			std::cout << "- ";
		}

		std::cout << "|\n";
	}

	PrintTopAndBottom(length);*/
}
