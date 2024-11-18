#include <iostream>

const size_t ARRAY_SIZE = 10;

void writeArray(int* arr, size_t size)
{
	for (int i = 0; i < size; i++)
	{
		std::cin >> arr[i];
	}
}

size_t power(int base, int exponential)
{
	int result = 1;
	for (int i = 0; i < exponential; i++)
	{
		result *= base;
	}
	return result;
}

bool isSaw(int* arr, size_t size)
{
	for (int i = 1; i < size - 1; i++)
	{
		if (!((arr[i] <= arr[i - 1] && arr[i] <= arr[i + 1])
			|| (arr[i] >= arr[i - 1] && arr[i] >= arr[i + 1])))
		{
			return false;
		}
	}
	return true;
}

size_t numToArr(int number, int* arr)
{
	int digitCount = 0, tempNumber = number;
	while (tempNumber)
	{
		digitCount++;
		tempNumber /= 10;
	}

	for (int i = 0; i < digitCount; i++)
	{
		arr[i] = (number / power(10, digitCount - i - 1)) % 10;
	}

	return digitCount;
}

size_t getEvenElements(int* arr, size_t size, int* evenElements)
{
	int evenSize = 0;
	for (int i = 0; i < size; i++)
	{
		if (arr[i] % 2)
		{
			evenElements[evenSize++] = arr[i];
		}
	}
	return evenSize;
}

void writeMatrix(int matrix[][ARRAY_SIZE], int* numbers, size_t size)
{
	for (int i = 0; i < size; i++)
	{
		int arr[ARRAY_SIZE];
		size_t numSize = numToArr(numbers[i], arr);

		int evenElements[ARRAY_SIZE];
		size_t evenSize = getEvenElements(arr, numSize, evenElements);

		if (isSaw(arr, numSize))
		{
			for (size_t j = 0; j < numSize; j++)
			{
				matrix[i][j] = arr[j];
			}
		}
		else if (isSaw(evenElements, evenSize))
		{
			for (size_t j = 0; j < numSize; j++)
			{
				matrix[i][j] = arr[j];
			}
		}
		else
		{
			for (size_t j = 0; j < numSize; j++)
			{
				matrix[i][j] = arr[numSize - j - 1];
			}
		}
	}
}

int getSumOfDiagonal(int matrix[][ARRAY_SIZE], size_t row, size_t col)
{
	int sum = 0;
	for (int i = row, j = col; i < ARRAY_SIZE && j < ARRAY_SIZE; i++, j++)
	{
		sum += matrix[i][j];
	}
	return sum;
}

void checkNumSize(size_t& finalNum, int& finalNumSize)
{
	if (finalNumSize >= 10)
	{
		finalNumSize = 9;
		finalNum %= power(10, 9);
	}
}

size_t spiralNumber(int matrix[][ARRAY_SIZE])
{
	int topBorder = 0, leftBorder = 0;
	int bottomBorder = ARRAY_SIZE - 1, rightBorder = ARRAY_SIZE - 1;
	int previousNumber = matrix[0][0];
	size_t finalNum = 0;
	int finalNumSize = 0;
	while (topBorder <= bottomBorder && leftBorder <= rightBorder)
	{
		for (int i = leftBorder; i <= rightBorder; i++)
		{
			if (topBorder == 0 && i == 0)
				continue;

			if (previousNumber % 2 == 1)
			{
				// std::cout << finalNum << " " << finalNumSize << " ";
				checkNumSize(finalNum, finalNumSize);
				finalNum = finalNum * 10 + previousNumber;
				finalNumSize++;
				// std::cout << finalNum << " " << finalNumSize << "\n";
			}
			else if(getSumOfDiagonal(matrix, topBorder, i) % 2 == 1)
			{
				// std::cout << finalNum << " " << finalNumSize << " ";
				checkNumSize(finalNum, finalNumSize);
				finalNum = finalNum * 10 + matrix[topBorder][i];
				finalNumSize++;
				// std::cout << finalNum << " " << finalNumSize << "\n";
			}

			previousNumber = matrix[topBorder][i];
		}
		topBorder++;
		for (int i = topBorder; i <= bottomBorder; i++)
		{
			if (previousNumber % 2 == 1)
			{
				// std::cout << finalNum << " " << finalNumSize << " ";
				checkNumSize(finalNum, finalNumSize);
				finalNum = finalNum * 10 + previousNumber;
				finalNumSize++;
				// std::cout << finalNum << " " << finalNumSize << "\n";
			}
			else if (getSumOfDiagonal(matrix, i, rightBorder) % 2 == 1)
			{
				// std::cout << finalNum << " " << finalNumSize << " ";
				checkNumSize(finalNum, finalNumSize);
				finalNum = finalNum * 10 + matrix[i][rightBorder];
				finalNumSize++;
				// std::cout << finalNum << " " << finalNumSize << "\n";
			}

			previousNumber = matrix[i][rightBorder];
		}
		rightBorder--;
		for (int i = rightBorder; i >= leftBorder; i--)
		{
			if (previousNumber % 2 == 1)
			{
				std::cout << finalNum << " " << finalNumSize << " ";
				checkNumSize(finalNum, finalNumSize);
				finalNum = finalNum * 10 + previousNumber;
				finalNumSize++;
				std::cout << finalNum << " " << finalNumSize << "\n";
			}
			else if (getSumOfDiagonal(matrix, bottomBorder, i) % 2 == 1)
			{
				//std::cout << finalNum << " " << finalNumSize << " ";
				checkNumSize(finalNum, finalNumSize);
				finalNum = finalNum * 10 + matrix[topBorder][i];
				finalNumSize++;
				// std::cout << finalNum << " " << finalNumSize << "\n";
			}

			previousNumber = matrix[bottomBorder][i];
		}
		bottomBorder--;
		for (int i = bottomBorder; i >= topBorder; i--)
		{
			if (previousNumber % 2 == 1)
			{
				// std::cout << finalNum << " " << finalNumSize << " ";
				checkNumSize(finalNum, finalNumSize);
				finalNum = finalNum * 10 + previousNumber;
				finalNumSize++;
				// std::cout << finalNum << " " << finalNumSize << "\n";
			}
			else if (getSumOfDiagonal(matrix, i, leftBorder) % 2 == 1)
			{
				// std::cout << finalNum << " " << finalNumSize << " ";
				checkNumSize(finalNum, finalNumSize);
				finalNum = finalNum * 10 + matrix[topBorder][i];
				finalNumSize++;
				// std::cout << finalNum << " " << finalNumSize << "\n";
			}

			previousNumber = matrix[i][leftBorder];
		}
		leftBorder++;
	}
	return finalNum;
}

int main()
{
	// Main task
	/*size_t n;
	std::cin >> n;

	if (n > ARRAY_SIZE)
	{
		std::cerr << "Array too big!";
		return 1;
	}

	int arr[ARRAY_SIZE];
	writeArray(arr, n);

	std::cout << isSaw(arr, n);*/


	// Harder task
	/*size_t n;
	std::cin >> n;

	if (n > ARRAY_SIZE || n < 3)
	{
		std::cerr << "Invalid size!";
		return 1;
	}

	int numbers[ARRAY_SIZE];
	writeArray(numbers, n);

	int matrix[ARRAY_SIZE][ARRAY_SIZE] = {};
	writeMatrix(matrix, numbers, n);

	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			if (j != 0)
				std::cout << ", ";
			std::cout << matrix[i][j];
		}
		std::cout << "\n";
	}

	std::cout << spiralNumber(matrix);*/
}
