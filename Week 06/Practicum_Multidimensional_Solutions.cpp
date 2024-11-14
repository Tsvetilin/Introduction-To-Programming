#include <iostream>
const int ARR_SIZE = 100;

void findMinEl(int arr[][ARR_SIZE], int length)   //Ex.1
{
	int minEl = arr[0][0];
	for (size_t i = 0; i < length; i++)
	{
		for (size_t j = 0; j < length; j++)
		{
			if (minEl >= arr[i][j])minEl = arr[i][j];

		}
	}
	std::cout << minEl;
}
void printDiagonals(int arr[][ARR_SIZE], int length)  //Ex.2
{
	for (size_t i = 0; i < length; i++) //main Diagonal
	{
		std::cout << arr[i][i] << " ";
	}

	for (int i = length-1; i >= 0; i--)  //second Diagonal
	{
		std::cout << arr[length-1-i][i] << " ";
	}
}
void zigzagRead(int arr[][ARR_SIZE], int length)  //EX.3
{
	for (size_t i = 0; i < length; i++)
	{
		if (i % 2 == 0) 
		{
			for (size_t j = 0; j < length; j++)
			{
				std::cout << arr[i][j] << " ";
			}
			std::cout << std::endl;
		}
		else
		{
			for (size_t j = 0; j < length; j++)
			{
				std::cout << arr[i][length-1-j] << " ";
			}
			std::cout << std::endl;
		}
	}
}
void checkIfTriangleMatrix(int arr[][ARR_SIZE], int length) //Ex.4
{
	bool isTrue = true;
	for (size_t i = 0; i < length; i++)
	{
		for (size_t j = 0; j < i; j++)
		{
			if (arr[i][j] != 0)
			{
				isTrue = false;
				break;
			}
		}
	}
	std::cout << isTrue;
}
void transponateMatrix(int arr[][ARR_SIZE], int length)  //EX.5
{
	for (size_t i = 0; i < length; i++)
	{
		for (size_t j = 0; j < length; j++)
		{
			std::cout << arr[j][i] << " ";
		}
		std::cout << std::endl;
	}
}
void checkIfMagicalSquare(int arr[][ARR_SIZE], int length) //Ex.6
{
	bool isMagic = true;
	int sumRows=0, sumCols=0, sumMainDiagonal=0, sumSecDiagonal=0, currRowSum = 0, currColSum = 0;
	for (size_t i = 0; i < length; i++)
	{
		for (size_t j = 0; j < length; j++)
		{
			currRowSum += arr[i][j];
			currColSum += arr[j][i];
		}

		if (i == 0) 
		{
			sumRows = currRowSum;
			sumCols = currColSum;
		}
		else if (currRowSum != sumRows || currColSum != sumCols || currRowSum != currColSum)
		{
			isMagic = false;
			break;
		}

		sumMainDiagonal += arr[i][i];
		sumSecDiagonal += arr[i][length - 1 - i];


		currRowSum = 0;
		currColSum = 0;
	}

	if (!(sumRows == sumCols && sumCols == sumMainDiagonal && sumMainDiagonal == sumSecDiagonal))
	{
		isMagic = false;
	}

	std::cout << isMagic<<"// sum= "<<sumCols;
}
void sumMatrix() //Ex.7.1
{
	int rows, cols;
	std::cin >> rows >> cols;
	int arr1[ARR_SIZE][ARR_SIZE] = {};
	int arr2[ARR_SIZE][ARR_SIZE] = {};

	for (size_t i = 0; i < rows; i++)
	{
		for (size_t j = 0; j < cols; j++)
		{
			std::cin >> arr1[i][j];
		}
	}
	for (size_t i = 0; i < rows; i++)
	{
		for (size_t j = 0; j < cols; j++)
		{
			std::cin >> arr2[i][j];
		}
	}

	for (size_t i = 0; i < rows; i++)
	{
		for (size_t j = 0; j < cols; j++)
		{
			std::cout << arr1[i][j] + arr2[i][j] << " ";
		}
		std::cout << std::endl;
	}
}
void multiplyMatrixByNum() //Ex.7.2
{
	int rows, cols, multiplyer = 0;;
	std::cin >> rows >> cols;
	int arr[ARR_SIZE][ARR_SIZE] = {};
	for (size_t i = 0; i < rows; i++)
	{
		for (size_t j = 0; j < cols; j++)
		{
			std::cin >> arr[i][j];
		}
	}
	std::cin >> multiplyer;
	for (size_t i = 0; i < rows; i++)
	{
		for (size_t j = 0; j < cols; j++)
		{
			std::cout << multiplyer * (arr[i][j])<< " ";
		}
		std::cout << std::endl;
	}
}
void multiplyTwoMatrixes()  //Ex.8
{
	int rows1, cols1, rows2, cols2;
	std::cin >> rows1 >> cols1 >> rows2 >> cols2;
	int arr1[ARR_SIZE][ARR_SIZE] = {};
	int arr2[ARR_SIZE][ARR_SIZE] = {};
	int arr3[ARR_SIZE * 2][ARR_SIZE * 2] = {};
	if (cols1 != rows2)return;

	for (size_t i = 0; i < rows1; i++)
	{
		for (size_t j = 0; j < cols1; j++)
		{
			std::cin >> arr1[i][j];
		}
	}
	for (size_t i = 0; i < rows2; i++)
	{
		for (size_t j = 0; j < cols2; j++)
		{
			std::cin >> arr2[i][j];
		}
	}
	int currSum;
	for (size_t i = 0; i < rows1; i++)
	{
		for (size_t j = 0; j < cols2; j++)
		{
			currSum = 0;
			for (size_t k = 0; k < cols1; k++)
			{
				currSum += arr1[i][k] * arr2[k][j];
			}
			std::cout << currSum<<" ";
		}
		std::cout <<" \n";
	}
}
void printSpiralMatrix(int arr[][ARR_SIZE], int length)		//Ex.9
{
	int leftborder = 0, rightboder = length - 1, topBorder = 0, bottomBorder = length - 1;
	while (leftborder <= rightboder && topBorder <= bottomBorder)
	{
		for (size_t i = leftborder; i <= rightboder; i++)
		{
			std::cout << arr[topBorder][i]<<" ";
		}
		topBorder++;
		for (size_t i = topBorder; i <= bottomBorder; i++)
		{
			std::cout << arr[i][rightboder]<<" ";
		}
		rightboder--;
		for (int i = rightboder; i >= leftborder; i--)
		{
			std::cout << arr[bottomBorder][i]<<" ";
		}
		bottomBorder--;
		for (int i = bottomBorder; i >= topBorder; i--)
		{
			std::cout << arr[i][leftborder]<<" ";
		}
		leftborder++;
	}	
}
void turnToRight(int arr[][ARR_SIZE], int length)	//Ex.10
{
	int newArr[ARR_SIZE][ARR_SIZE] = {};
	for (size_t i = 0; i < length; i++)
	{
		for (size_t j = 0; j < length; j++)
		{
			newArr[i][j] = arr[j][i];
		}
	}
	for (size_t i = 0; i < length; i++)
	{
		for (int j = length-1; j >= 0; j--)
		{
			std::cout << newArr[i][j]<<" ";
		}
		std::cout << std::endl;
	}
}

int main()
{
	int length;
	std::cin >> length;
	int arr[ARR_SIZE][ARR_SIZE] = {};

	for (size_t i = 0; i < length; i++)
	{
		for (size_t j = 0; j < length; j++)
		{
			std::cin >> arr[i][j];
		}
	}


			//Ex.1
	/*findMinEl(arr, length);*/

			//Ex.2
	/*printDiagonals(arr, length);*/

			//Ex.3
	/*zigzagRead(arr, length);*/

			//Ex.4
	/*checkIfTriangleMatrix(arr, length);*/

			//EX.5
	/*transponateMatrix(arr, length);*/

			//Ex.6
	/*checkIfMagicalSquare(arr, length);*/

			//Ex.7     
	//sumMatrix();			//--mahnete purvata chast s cheteneto na matricata, ako moje : )
	//multiplyMatrixByNum();		//--mahnete purvata chast s cheteneto na matricata, ako moje : )
		
			//Ex.8
	//multiplyTwoMatrixes();			//--mahnete purvata chast s cheteneto na matricata, ako moje : )

			//Ex.9
	/*printSpiralMatrix(arr, length);*/

			//Ex.10
	/*turnToRight(arr,length);*/				//--mahnete purvata chast s cheteneto na matricata, ako moje : )

}
