#include <iostream>

const int ARRAY_SIZE = 1024;

void swap(int& a, int& b)
{
	int temp = a;
	a = b;
	b = temp;
}

int main()
{
	size_t n, m;
	std::cin >> n >> m;

	if (!std::cin)
	{
		std::cerr << "Invalid input!";
		return 1;
	}

	if (n + m > ARRAY_SIZE)
	{
		std::cerr << "Array sizes too big!";
		return 2;
	}

	int arr1[ARRAY_SIZE], arr2[ARRAY_SIZE];
	for (int i = 0; i < n; i++)
	{
		std::cin >> arr1[i];
	}
	for (int i = 0; i < m; i++)
	{
		std::cin >> arr2[i];
	}

	if (std::cin.bad())
	{
		std::cerr << "Couldn't read arrays' elements.";
		return 3;
	}

	int finalArray[ARRAY_SIZE];
	for (size_t i = 0; i < n; i++)
	{
		finalArray[i] = arr1[i];
	}
	for (size_t i = 0; i < m; i++)
	{
		finalArray[i + n] = arr2[i];
	}

	for (size_t i = 0; i < n + m; i++)
	{
		for (size_t j = 0; j < n + m - 1; j++)
		{
			if (finalArray[j] > finalArray[j + 1])
			{
				swap(finalArray[j], finalArray[j + 1]);
			}
		}
	}

	for (size_t i = 0; i < n + m; i++)
	{
		std::cout << finalArray[i] << " ";
	}
}
