# Подготовка за контролно

### **1.** Да се напише програма, която приема двумерна матрица (MxN) с M редове и N колони (0 <= M, N <= 100), размери на двумерна подматрица квадрат (QxQ) (Q <= M и Q <= N). Да се изведе на конзолата най-малката сума на подматрица и съответващия му индекс.
**Пример:**
Вход:
```c++
4 3
16  3  2 
 5 10 11
 9  6  7
 4 15 14
2 
```
Изход:
```c++
26 (0,1)
```
Пояснение: (0,1) е елемента 3. 3 + 2 + 10 + 11 = 26

<br></br>
### **2.** Да се напише програма, която приема двумерна матрица (MxN) с M редове и N колони, (0<=M,N<=100). Да се изведат на конзолата координатите на тези стойности, които са най-малки спрямо колоната и реда си.
**Пример:**
Вход:
```c++
4 3
 3  4  1
10  2  8
 6  7 12
 1 11  2
```
Изход:
```c++
(3,0), (1,1), (0,2)
```
Пояснение: (3,0) на 3-ти ред и 0-ва колона е елемента 1. По ред 3 {1, 11, 2}: 1 e най-малкият елемент. По колона 0 {3, 10, 6, 1}: 1 също е най-малката стойност за реда си => Точка с координати (3,0) е търсена координата. Аналогично за (1,1)  и (0,2).

Решения:
#include<iostream>

const size_t MAX_SIZE_ROWS = 100;
const size_t MAX_SIZE_COLS = 100;
const int MAX_INT = 1000000;

void initialiseMatrix(int matrix[MAX_SIZE_ROWS][MAX_SIZE_COLS], int rows, int cols);
void printMatrix(int matrix[MAX_SIZE_ROWS][MAX_SIZE_COLS], int rows, int cols);

//Exercise 1
void findSmallestSum(int matrix[MAX_SIZE_ROWS][MAX_SIZE_COLS], int rows, int cols, int sizeSM);

//Exercise 2
void findCoordinatesOfSmallestElInRowAndCol(int matrix[MAX_SIZE_ROWS][MAX_SIZE_COLS], int rows, int cols);

void initialiseMatrix(int matrix[MAX_SIZE_ROWS][MAX_SIZE_COLS], int rows, int cols) {
	std::cout << "Initialise the elements in your matrix: ";
	for (size_t i = 0; i < rows; ++i) {
		for (size_t j = 0; j < cols; ++j) {
			std::cin >> matrix[i][j];
		}
	}
}

void printMatrix(int matrix[MAX_SIZE_ROWS][MAX_SIZE_COLS], int rows, int cols) {
	for (size_t i = 0; i < rows; ++i) {
		for (size_t j = 0; j < cols; ++j) {
			std::cout << matrix[i][j] << " ";
		}
		std::cout << std::endl;
	}
}

//Exercise 1
void findSmallestSum(int matrix[MAX_SIZE_ROWS][MAX_SIZE_COLS], int rows, int cols, int sizeSM) {
	int smallestSum = MAX_INT, currentSum = 0;
	int smallestSumIndexRow = 0, smallestSumIndexCol = 0;

	for (size_t i = 0; i <= rows - sizeSM; ++i) {
		for (size_t j = 0; j <= cols - sizeSM; ++j) {
			currentSum = 0;
			for (size_t f = 0; f < sizeSM; ++f) {
				for (size_t q = 0; q < sizeSM; ++q) {
					currentSum += matrix[i + f][j + q];
				}
			}

			if (currentSum < smallestSum) {
				smallestSum = currentSum;
				smallestSumIndexRow = i;
				smallestSumIndexCol = j;
			}
		}
	}

	std::cout << smallestSum << " (" << smallestSumIndexRow << ", " << smallestSumIndexCol << ")" << std::endl;
}

//Exercise 2
void findCoordinatesOfSmallestElInRowAndCol(int matrix[MAX_SIZE_ROWS][MAX_SIZE_COLS], int rows, int cols) {
	int smallestEl = MAX_INT;

	for (size_t i = 0; i < rows; ++i) {
		for (size_t j = 0; j < cols; ++j) {
			smallestEl = matrix[i][j];
			bool isMinInRow = true;
			bool isMinInCol = true;
			
			for (size_t f = 0; f < cols; ++f) {
				if (matrix[i][f] < smallestEl) {
					isMinInCol = false;
					break;
				}
			}

			for (size_t q = 0; q < rows; ++q) {
				if (matrix[q][j] < smallestEl) {
					isMinInRow = false;
					break;
				}
			}

			if (isMinInRow && isMinInCol) {
				std::cout << "(" << i << ", " << j << ") " << std::endl;
			}
		}
	}
}

int main() {
	int rows, cols;
	std::cout << "Enter the number of rows and columns in your matrix: ";
	std::cin >> rows >> cols;
	if (!std::cin || rows < 0 || cols < 0 || rows > MAX_SIZE_ROWS || cols > MAX_SIZE_COLS) {
		std::cerr << "Invalid input! The number of your rows and columns should be between 0 and 100!" << std::endl;
		return 1;
	}

	int matrix[MAX_SIZE_ROWS][MAX_SIZE_COLS];
	initialiseMatrix(matrix, rows, cols);
	std::cout << "Your printed matrix: " << std::endl;
	printMatrix(matrix, rows, cols);

	//Exercise 1
	int sizeSM;
	std::cout << "Enter the number of rows and columns in your square submatrix: ";
	std::cin >> sizeSM;
	if (!std::cin || sizeSM < 0 || sizeSM > rows || sizeSM > cols) {
		std::cerr << "Invalid input! The size of your submatrix should be between 0 and the dimentions of previous matrix!" << std::endl;
		return 1;
	}

	findSmallestSum(matrix, rows, cols, sizeSM);

	//Exercise 2
	findCoordinatesOfSmallestElInRowAndCol(matrix, rows, cols);

	return 0;
}
