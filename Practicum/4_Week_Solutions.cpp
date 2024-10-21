
#include <iostream>

int IsPrime(int n)
{
	if (n == 1)
	{
		return false;
	}

	if (n % 2 == 0 || n % 3 == 0)
	{
		return true;
	}

	int length = sqrt(n);

	for (int i = 5; i <= length; i += 6)
	{
		if (n % i == 0 || n % (i + 2) == 0)
		{
			return false;
		}
	}

	return true;
}

int main()
{
	// zad 1

	int n;
	std::cin >> n;

	int size = sqrt(n);
	int* array = new int[size];
	int arrayLength = 0;

	for (int i = 1; i < 20; i++)
	{
		if (IsPrime(i))
		{
			array[arrayLength] = i;

			arrayLength++;
		}
	}

	for (int i = 0; i < arrayLength; i++)
	{
		for (int j = i; j < arrayLength; j++)
		{

		}
	}
}
