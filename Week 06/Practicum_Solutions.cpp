// practicum7.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

void insertionSort(int arr[], int n)
{
	int i, key, j;
	for (i = 1; i < n; i++) {
		key = arr[i];
		j = i - 1;

		while (j >= 0 && arr[j] > key) {
			arr[j + 1] = arr[j];
			j = j - 1;
		}
		arr[j + 1] = key;
	}
}

int main()
{
	//1
	/*const int ARRAY_SIZE = 1024;

	size_t n, index;
	std:: cin >> n;

	int arr[ARRAY_SIZE];
	for (size_t i = 0; i < n; i++)
	{
		std::cin >> arr[i];
	}

	std::cin >> index;

	for (size_t i = 0; i < n; i++)
	{
		if (i != index)
		{
			std::cout << arr[i] << " ";
		}
	}*/

	//2
	/*const int ARRAY_SIZE = 1024;

	size_t n, a, b;
	std::cin >> n;

	int arr[ARRAY_SIZE];
	for (size_t i = 0; i < n; i++)
	{
		std::cin >> arr[i];
	}

	std::cin >> a >> b;

	for (size_t i = 0; i < n; i++)
	{
		if (i >= a && i <= b)
		{
			std::cout << arr[i] << " ";
		}
	}*/

	//3
	/*const int ARRAY_SIZE = 1024;

	size_t n;
	std::cin >> n;

	int arr[ARRAY_SIZE];
	for (size_t i = 0; i < n; i++)
	{
		std::cin >> arr[i];
	}

	bool isPalindrome = true;
	for (size_t i = 0; i < n/2; i++)
	{
		if (arr[i] != arr[n-1 - i])
		{
			isPalindrome = false;
		}
	}

	if (isPalindrome)
	{
		std::cout << "yes";
	}
	else
	{
		std::cout << "no";
	}*/

	//4
	/*const int ARRAY_SIZE = 1024;

	size_t n;
	std::cin >> n;

	int arr[ARRAY_SIZE];
	for (size_t i = 0; i < n; i++)
	{
		std::cin >> arr[i];
	}

	int maxLength = 0, currentLength = 0;

	for (size_t i = 0; i < n; i++)
	{
		currentLength = 1;

		for (size_t j = i; j < n-1; j++)
		{
			if (arr[j] == arr[j + 1])
			{
				currentLength++;
			}
			else
			{
				break;
			}
		}
		if (currentLength > maxLength)
		{
			maxLength = currentLength;
		}
	}

	std::cout << maxLength;*/

	//5
	/*const int ARRAY_SIZE = 1024;

	size_t n, j = 0;
	std::cin >> n;

	int arr[ARRAY_SIZE];
	int arrNew[ARRAY_SIZE];
	for (size_t i = 0; i < n; i++)
	{
		std::cin >> arr[i];
	}


	for (size_t i = 0; i < n; i++)
	{
		if (arr[i] >= 0)
		{
			arrNew[j++] = arr[i];
		}
	}

	for (size_t i = 0; i < j; i++)
	{
		std::cout << arrNew[i]<<" ";
	}*/

	//6
	/*const int ARRAY_SIZE = 1024;
	
	size_t n,m;
	std::cin >> n>>m;
	
	std::cout << "First Array: " << std::endl;

	int arr[ARRAY_SIZE];
	for (size_t i = 0; i < n; i++)
	{
		std::cin >> arr[i];
	}

	std::cout << "Second Array: " << std::endl;

	int arr2[ARRAY_SIZE];
	for (size_t i = 0; i < m; i++)
	{
		std::cin >> arr2[i];
	}

	bool containsInCurArr = true;
	bool containsInArr = false;
	for (size_t i = 0; i <n; i++)
	{
		containsInCurArr = true;
		for (size_t j = 0; j < m; j++)
		{
			if (arr[i+j] != arr2[j])
			{
				containsInCurArr = false;
				break;
			}
			if (j == m - 1)
			{
				containsInArr = true;
			}
		}
		if (containsInArr)
		{
			break;
		}
	}
	
	std::cout << (containsInArr==1 ? "true" : "false");*/

	//7 and 8 already written

	//9
	/*const int ARRAY_SIZE = 1024;
	
	size_t n, m;
	std::cin >> n >> m;
	 
	std::cout << "First Array: " << std::endl;

	int arr[ARRAY_SIZE];
	for (size_t i = 0; i < n; i++)
	{
		std::cin >> arr[i];
	}
	
	std::cout << "Second Array: " << std::endl;
	
	int arr2[ARRAY_SIZE];
	for (size_t i = 0; i < m; i++)
	{
		std::cin >> arr2[i];
	}
	
	
	int arr3[ARRAY_SIZE];
	int count = 0;

	for (size_t i = 0; i < n; i++)
	{
		for (size_t j = 0; j < m; j++)
		{
			if (arr[i] == arr2[j])
			{
				arr3[count++] = arr[i];
				break;
			}
		}
	}
	insertionSort(arr3, count);
	for (size_t i = 0; i < count; i++)
	{
		std::cout<<arr3[i]<<" ";
	}*/
	
	
		
}

