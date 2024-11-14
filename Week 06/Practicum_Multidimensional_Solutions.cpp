#include <iostream>

const size_t ARRAY_SIZE = 20;

void writeMatrix(int arr[ARRAY_SIZE][ARRAY_SIZE], size_t n, size_t m)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			std::cin >> arr[i][j];
		}
	}
}

void readMatrix(int arr[ARRAY_SIZE][ARRAY_SIZE], size_t n, size_t m)
{
	for (size_t i = 0; i < n; i++)
	{
		for (size_t j = 0; j < m; j++)
		{
			std::cout << arr[i][j] << " ";
		}
		std::cout << "\n";
	}
}

// Ex. 1
int minElement(int arr[ARRAY_SIZE][ARRAY_SIZE], size_t n)
{
	int minElement = arr[0][0];
	for (size_t i = 0; i < n; i++)
	{
		for (size_t j = 0; j < n; j++)
		{
			if (minElement > arr[i][j])
				minElement = arr[i][j];
		}
	}
	return minElement;
}


// Ex. 2
void printDiagonals(int arr[ARRAY_SIZE][ARRAY_SIZE], size_t n)
{
	for (size_t i = 0; i < n; i++)
	{
		std::cout << arr[i][i] << " ";
	}
	std::cout << "\n";
	for (size_t i = 0; i < n; i++)
	{
		std::cout << arr[n - i - 1][i] << " ";
	}
}


// Ex. 3
void printZigZag(int arr[ARRAY_SIZE][ARRAY_SIZE], size_t n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (i % 2)
				std::cout << arr[i][n - j - 1] << " ";
			else
				std::cout << arr[i][j] << " ";
		}
		std::cout << "\n";
	}
}


// Ex. 4
bool isMatrixTriangle(int arr[ARRAY_SIZE][ARRAY_SIZE], size_t n)
{
	for (int i = 1; i < n; i++)
	{
		for (int j = 0; j < i; j++)
		{
			if (arr[i][j] != 0)
				return false;
		}
	}
	return true;
}


// Ex. 5
void transposeMatrix(int arr[ARRAY_SIZE][ARRAY_SIZE], size_t n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			std::cout << arr[j][i] << " ";
		}
		std::cout << "\n";
	}
}


// Ex. 6
bool isMatrixMagical(int arr[ARRAY_SIZE][ARRAY_SIZE], size_t n)
{
	int sum = 0, tempSum = 0;
	// Calculate major diagonal's sum
	for (size_t i = 0; i < n; i++)
	{
		sum += arr[i][i];
	}
	// Calculate minor diagonal's sum
	for (size_t i = 0; i < n; i++)
	{
		tempSum += arr[n - i - 1][i];
	}
	if (tempSum != sum)
		return false;

	// Calculate each row
	for (int i = 0; i < n; i++)
	{
		tempSum = 0;
		for (int j = 0; j < n; j++)
		{
			tempSum += arr[i][j];
		}
		if (tempSum != sum)
			return false;
	}
	// Calculate each column
	for (int i = 0; i < n; i++)
	{
		tempSum = 0;
		for (int j = 0; j < n; j++)
		{
			tempSum += arr[j][i];
		}
		if (tempSum != sum)
			return false;
	}
	return true;
}


// Ex. 7
void sumMatrix(int arr1[ARRAY_SIZE][ARRAY_SIZE], 
	int arr2[ARRAY_SIZE][ARRAY_SIZE], size_t n, size_t m)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			std::cout << arr1[i][j] + arr2[i][j] << " ";
		}
		std::cout << "\n";
	}
}

void scalerMultiplyMatrix(int arr[ARRAY_SIZE][ARRAY_SIZE], size_t n, size_t m, int scalar)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			std::cout << arr[i][j] * scalar << " ";
		}
		std::cout << "\n";
	}
}


// Ex. 8
void multiplyMatrix(int arr1[ARRAY_SIZE][ARRAY_SIZE], size_t n1, size_t m1,
	int arr2[ARRAY_SIZE][ARRAY_SIZE], size_t n2, size_t m2)
{
	for (int i = 0; i < n1; i++)
	{
		for (int j = 0; j < m2; j++)
		{
			int tempSum = 0;
			for (int k = 0; k < m1; k++)
			{
				tempSum += arr1[i][k] * arr2[k][j];
			}
			std::cout << tempSum << " ";
		}
		std::cout << "\n";
	}
}


// Ex. 9
void printSpiral(int arr[ARRAY_SIZE][ARRAY_SIZE], size_t n)
{
	int topBorder = 0, bottomBorder = n - 1;
	int leftBorder = 0, rightBorder = n - 1;
	while (topBorder <= bottomBorder && leftBorder <= rightBorder)
	{
		for (size_t i = leftBorder; i <= rightBorder; i++)
		{
			std::cout << arr[topBorder][i] << " ";
		}
		topBorder++;
		for (size_t i = topBorder; i <= bottomBorder; i++)
		{
			std::cout << arr[i][rightBorder] << " ";
		}
		rightBorder--;
		for (int i = rightBorder; i >= leftBorder; i--)
		{
			std::cout << arr[bottomBorder][i] << " ";
		}
		bottomBorder--;
		for (int i = bottomBorder; i >= topBorder; i--)
		{
			std::cout << arr[i][leftBorder] << " ";
		}
		leftBorder++;
	}
}


// Ex. 10
void flipMatrix(int arr[ARRAY_SIZE][ARRAY_SIZE], size_t n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			std::cout << arr[n - j - 1][i] << " ";
		}
		std::cout << "\n";
	}
}

int main()
{
	// Ex. 1
	/*size_t n;
	std::cin >> n;
	int arr[ARRAY_SIZE][ARRAY_SIZE];
	writeMatrix(arr, n, n);
	std::cout << minElement(arr, n);*/

	
	// Ex. 2
	/*size_t n;
	std::cin >> n;
	int arr[ARRAY_SIZE][ARRAY_SIZE];
	writeMatrix(arr, n, n);
	printDiagonals(arr, n);*/


	// Ex. 3
	/*size_t n;
	std::cin >> n;
	int arr[ARRAY_SIZE][ARRAY_SIZE];
	writeMatrix(arr, n, n);
	printZigZag(arr, n);*/


	// Ex. 4
	/*size_t n;
	std::cin >> n;
	int arr[ARRAY_SIZE][ARRAY_SIZE];
	writeMatrix(arr, n, n);
	std::cout << isMatrixTriangle(arr, n);*/


	// Ex. 5
	/*size_t n;
	std::cin >> n;
	int arr[ARRAY_SIZE][ARRAY_SIZE];
	writeMatrix(arr, n, n);
	transposeMatrix(arr, n);*/


	// Ex. 6
	/*size_t n;
	std::cin >> n;
	int arr[ARRAY_SIZE][ARRAY_SIZE];
	writeMatrix(arr, n, n);
	std::cout << isMatrixMagical(arr, n);*/


	// Ex. 7
	/*size_t n, m;
	std::cin >> n >> m;
	int arr1[ARRAY_SIZE][ARRAY_SIZE], arr2[ARRAY_SIZE][ARRAY_SIZE];
	writeMatrix(arr1, n, m); writeMatrix(arr2, n, m);
	sumMatrix(arr1, arr2, n, m);
	int scalar;
	std::cin >> scalar;
	scalerMultiplyMatrix(arr1, n, m, scalar);*/


	// Ex. 8
	/*size_t n1, m1, n2, m2;
	std::cin >> n1 >> m1 >> n2 >> m2;
	int arr1[ARRAY_SIZE][ARRAY_SIZE], arr2[ARRAY_SIZE][ARRAY_SIZE];
	writeMatrix(arr1, n1, m1); writeMatrix(arr2, n2, m2);
	multiplyMatrix(arr1, n1, m1, arr2, n2, m2);*/


	// Ex. 9
	/*size_t n;
	std::cin >> n;
	int arr[ARRAY_SIZE][ARRAY_SIZE];
	writeMatrix(arr, n, n);
	printSpiral(arr, n);*/


	// Ex. 10
	/*size_t n;
	std::cin >> n;
	int arr[ARRAY_SIZE][ARRAY_SIZE];
	writeMatrix(arr, n, n);
	flipMatrix(arr, n);*/
}
