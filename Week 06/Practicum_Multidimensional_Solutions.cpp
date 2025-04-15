#include <iostream>

const size_t ARRAY_SIZE = 20;

void readMatrix(int arr[ARRAY_SIZE][ARRAY_SIZE], size_t n, size_t m)
{
    for (size_t i = 0; i < n; i++)
    {
        for (size_t j = 0; j < m; j++)
        {
            std::cin >> arr[i][j];
        }
    }
}

void printMatrix(int arr[ARRAY_SIZE][ARRAY_SIZE], size_t n, size_t m)
{
    for (size_t i = 0; i < n; i++)
    {
        for (size_t j = 0; j < m; j++)
        {
            std::cout << arr[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

// 1
int findMinElement(int arr[ARRAY_SIZE][ARRAY_SIZE], size_t n)
{
    int minElement = arr[0][0];
    for (size_t i = 0; i < n; i++)
    {
        for (size_t j = 0; j < n; j++)
        {
            if(minElement > arr[i][j])
            {
                minElement = arr[i][j];
            }
        }
    }

    return minElement;
}

// 2
void printDiagonals(int arr[ARRAY_SIZE][ARRAY_SIZE], size_t n)
{
    for (size_t i = 0; i < n; i++)
    {
        std::cout << arr[i][i] << " ";
    }
    std::cout << std::endl;

    for (size_t i = 0; i < n; i++)
    {
        std::cout << arr[n - 1 - i][i] << " ";
    }
    std::cout << std::endl;
}

// 3
void printZigZag(int arr[ARRAY_SIZE][ARRAY_SIZE], size_t n)
{
    for (size_t i = 0; i < n; i++)
    {
        for (size_t j = 0; j < n; j++)
        {
            std::cout << arr[i][j] << " ";
        }
        std::cout << std::endl;

        i++;

        if(i < n)
        {
            for (size_t j = 0; j < n; j++)
            {
                std::cout << arr[i][n - 1 -j] << " ";
            }
            std::cout << std::endl;
        }
    }
}

// 4
bool isMatrixTriangle(int arr[ARRAY_SIZE][ARRAY_SIZE], size_t n)
{
    for (size_t i = 1; i < n; i++)
    {
        for (size_t j = 0; j < i; j++)
        {
            if(arr[i][j] != 0)
            {
                return false;
            }
        }
    }

    return true;
}

// 5
void printTransposedMatrix(int arr[ARRAY_SIZE][ARRAY_SIZE], size_t n)
{
    for (size_t i = 0; i < n; i++)
    {
        for (size_t j = 0; j < n; j++)
        {
            std::cout << arr[j][i] << " ";
        }
        std::cout << std::endl;
    }
}

// 6
bool isMatrixMagical(int arr[ARRAY_SIZE][ARRAY_SIZE], size_t n)
{
    int sum = 0;
    int tempSum = 0;
    
    // major diagonal
    for (size_t i = 0; i < n; i++)
    {
        sum += arr[i][i];
    }

    // minor diagonal
    for (size_t i = 0; i < n; i++)
    {
        tempSum += arr[n - 1 - i][i];
    }

    if (sum != tempSum)
    {
        return false;
    }

    // each row
    for (size_t i = 0; i < n; i++)
    {
        tempSum = 0;

        for (size_t j = 0; j < n; j++)
        {
            tempSum += arr[i][j];
        }

        if (tempSum != sum)
        {
            return false;
        }
    }

    // each column
    for (size_t i = 0; i < n; i++)
    {
        tempSum = 0;
        for (size_t j = 0; j < n; j++)
        {
            tempSum += arr[j][i];
        }

        if (tempSum != sum)
        {
            return false;
        }
    }
    
    return true;
}

// 7
void sumMatrixes(int arr1[ARRAY_SIZE][ARRAY_SIZE], int arr2[ARRAY_SIZE][ARRAY_SIZE], size_t n, size_t m)
{
    for (size_t i = 0; i < n; i++)
    {
        for (size_t j = 0; j < m; j++)
        {
            std::cout << arr1[i][j] + arr2[i][j] << " ";
        }
        std::cout << std::endl;
    }

}

void scalarMatrixMultiplication(int arr[ARRAY_SIZE][ARRAY_SIZE], size_t n, size_t m, int scalar)
{
    for (size_t i = 0; i < n; i++)
    {
        for (size_t j = 0; j < m; j++)
        {
            std::cout << scalar * arr[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

// 8
void multiplyMatrixes(int arr1[ARRAY_SIZE][ARRAY_SIZE], size_t n1, size_t m1, int arr2[ARRAY_SIZE][ARRAY_SIZE], size_t n2, size_t m2)
{
    if (m1 != n2)
    {
        return;
    }

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
		std::cout << std::endl;
	}
}

// 9
void printSpiral(int arr[ARRAY_SIZE][ARRAY_SIZE], size_t n, size_t m)
{
    if(n == 0 || m == 0) return;

    int topBorder = 0, bottomBorder = n - 1;
    int leftBorder = 0, rightBorder = m - 1;

    while (topBorder <= bottomBorder && leftBorder <= rightBorder)
	{
        for (size_t i = leftBorder; i <= rightBorder; i++)
        {
            std::cout << arr[topBorder][i] << " ";
        }
        ++topBorder;

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

// 10
void flipMatrix(int arr[ARRAY_SIZE][ARRAY_SIZE], size_t n)
{
    for(size_t i = 0; i < n; i++)
    {
        for(size_t j = 0; j < n; j++)
        {
            std::cout << arr[n - 1 - j][i] << " ";
        }
        std::cout << std::endl;
    }
}

int main()
{
    // 1
    // size_t n;
	// std::cin >> n;
	// int arr[ARRAY_SIZE][ARRAY_SIZE];
	// readMatrix(arr, n, n);
	// std::cout << findMinElement(arr, n);

    // 2
    // size_t n = 0;
    // std::cin >> n;
    // int arr[ARRAY_SIZE][ARRAY_SIZE];
    // readMatrix(arr, n, n);
    // printDiagonals(arr, n);

    // 3
    // size_t n = 0;
    // std::cin >> n;
    // int arr[ARRAY_SIZE][ARRAY_SIZE];
    // readMatrix(arr, n, n);
    // printZigZag(arr, n);

    // 4
    // size_t n = 0;
    // std::cin >> n;
    // int arr[ARRAY_SIZE][ARRAY_SIZE];
    // readMatrix(arr, n, n);
    // std::cout << isMatrixTriangle(arr, n);

    // 5
    // size_t n = 0;
    // std::cin >> n;
    // int arr[ARRAY_SIZE][ARRAY_SIZE];
    // readMatrix(arr, n, n);
    // printTransposedMatrix(arr, n);

    // 6
    // size_t n = 0;
    // std::cin >> n;
    // int arr[ARRAY_SIZE][ARRAY_SIZE];
    // readMatrix(arr, n, n);
    // std::cout << isMatrixMagical(arr, n);

    // 7.1
    // size_t n = 0;
    // size_t m = 0;
    // std::cin >> n >> m;
    // int arr1[ARRAY_SIZE][ARRAY_SIZE];
    // int arr2[ARRAY_SIZE][ARRAY_SIZE];
    // readMatrix(arr1, n, m);
    // readMatrix(arr2, n, m);
    // sumMatrixes(arr1, arr2, n, m);

    // 7.2
    // size_t n = 0;
    // size_t m = 0;
    // int scalar = 0;
    // std::cin >> scalar >> n >> m;
    // int arr1[ARRAY_SIZE][ARRAY_SIZE];
    // readMatrix(arr1, n, m);
    // scalarMatrixMultiplication(arr1, n, m, scalar);

    // 8
    // size_t n1 = 0;
    // size_t m1 = 0;
    // size_t n2 = 0;
    // size_t m2 = 0;
    // std::cout << "Enter n1 and m1: "; 
    // std::cin >> n1 >> m1;
    // std::cout << "Enter n2 and m2: "; 
    // std::cin >> n2 >> m2;
    // int arr1[ARRAY_SIZE][ARRAY_SIZE];
    // int arr2[ARRAY_SIZE][ARRAY_SIZE];
    // std::cout << "Enter the first matrix: "; 
    // readMatrix(arr1, n1, m1);
    // std::cout << "Enter the second matrix: "; 
    // readMatrix(arr2, n2, m2);
    // multiplyMatrixes(arr1, n1, m1, arr2, n2, m2);

    // 9
    // size_t n = 0;
    // size_t m = 0;
    // std::cin >> n >> m;
    // int arr[ARRAY_SIZE][ARRAY_SIZE];
    // readMatrix(arr, n, m);
    // printSpiral(arr, n , m);

    // 10
    // size_t n = 0;
    // std::cin >> n;
    // int arr[ARRAY_SIZE][ARRAY_SIZE];
    // readMatrix(arr, n, n);
    // flipMatrix(arr, n);

    return 0;
}
