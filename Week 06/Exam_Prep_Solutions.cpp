#include <iostream>

const size_t ARRAY_SIZE = 100;

void writeMatrix(int matrix[][ARRAY_SIZE], size_t n, size_t m)
{
	for (size_t i = 0; i < n; i++)
	{
		for (size_t j = 0; j < m; j++)
		{
			std::cin >> matrix[i][j];
		}
	}
}

void smallestSubMatrix(int matrix[][ARRAY_SIZE], size_t n, size_t m, size_t subMatrixSize)
{
	int smallestSum = -1, minRow = -1, minCol = -1;
	for (int i = 0; i < n - subMatrixSize + 1; i++)
	{
		for (int j = 0; j < m - subMatrixSize + 1; j++)
		{
			int tempSum = 0;
			for (int k = i; k < i + subMatrixSize; k++)
			{
				for (int l = j; l < j + subMatrixSize; l++)
				{
					tempSum += matrix[k][l];
				}
			}
			if (tempSum < smallestSum || smallestSum == -1)
			{
				smallestSum = tempSum;
				minRow = i;
				minCol = j;
			}
		}
	}
	if (smallestSum != -1)
	{
		std::cout << smallestSum << " (" << minRow << "," << minCol << ")\n";
	}
}

bool isSmallestInRow(int matrix[][ARRAY_SIZE], size_t columns, size_t x, size_t y)
{
	for (int i = 0; i < columns; i++)
	{
		if (matrix[x][y] > matrix[x][i])
			return false;
	}
	return true;
}

bool isSmallestInColumn(int matrix[][ARRAY_SIZE], size_t rows, size_t x, size_t y)
{
	for (int i = 0; i < rows; i++)
	{
		if (matrix[x][y] > matrix[i][y])
			return false;
	}
	return true;
}

void smallestInRowAndCol(int matrix[][ARRAY_SIZE], size_t n, size_t m)
{
	size_t rowIndexes[ARRAY_SIZE];
	size_t colIndexes[ARRAY_SIZE];
	size_t rowColIndex = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (isSmallestInRow(matrix, m, i, j) && isSmallestInColumn(matrix, n, i, j))
			{
				rowIndexes[rowColIndex] = i;
				colIndexes[rowColIndex] = j;
				rowColIndex++;
			}
		}
	}
	for (int i = rowColIndex - 1; i >= 0; i--)
	{
		if (i != rowColIndex - 1)
			std::cout << ", ";
		std::cout << "(" << rowIndexes[i] << "," << colIndexes[i] << ")";
	}
}

int main()
{
	// Ex. 1
	/*size_t n, m;
	std::cin >> n >> m;

	if (n < 0 || n > ARRAY_SIZE || m < 0 || m > ARRAY_SIZE)
	{
		std::cerr << "Invalid array sizes!";
		return 1;
	}

	int matrix[ARRAY_SIZE][ARRAY_SIZE];
	writeMatrix(matrix, n, m);

	size_t subMatrixSize;
	std::cin >> subMatrixSize;

	smallestSubMatrix(matrix, n, m, subMatrixSize);*/


	// Ex. 2
	size_t n, m;
	std::cin >> n >> m;

	if (n < 0 || n > ARRAY_SIZE || m < 0 || m > ARRAY_SIZE)
	{
		std::cerr << "Invalid array sizes!";
		return 1;
	}

	int matrix[ARRAY_SIZE][ARRAY_SIZE];
	writeMatrix(matrix, n, m);

	smallestInRowAndCol(matrix, n, m);
}
