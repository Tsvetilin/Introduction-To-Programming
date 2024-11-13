//Github не ми позволява да създам два pull request-а към седмицата и качвайки решенията към едните задачи, изтрива другите.
//Затова качвам решенията на задачите и за едномерни и двумерни масиви заедно тук.

//Задачи за едномерни масиви
#include<iostream>

//Declarations
const size_t MAX_ARRAY_SIZE = 1000;

void swap(int a, int b);

void inputArray(int array[], size_t n);
void outputArray(int array[], size_t n);

//Exercise 1
void removeElementInArrayAtIndex(int array[], int& n, int index);

//Exercise 2
void createIntervalArray(int array[], int result[], int& n, int a, int b);

//Exercise 3
bool isArraySymmetric(int array[], int n);

//Exercise 4
int findMaxLenOfSameElements(int array[], int n);

//Exercise 5
void removeNegativeElementsFromArray(int array[], int n);

//Exercise 6
bool isOneOfYourArraysSubsetOfTheOther(int array[], int array1[], int n, int n1);

//Exercise 7
void selectSortArray(int array[], int n);
void sortMergedArrays(int array[], int array1[], int result[], int n, int n1);

//Exercise 8
void mergeUnsortedArrays(int arr1[], int arr2[], int result[], int n1, int n2);

//Exercise 9
void sortedIntersectionOfTwoArrays(int arr1[], int arr2[], int result[], int n1, int n2);

//Definitions
void swap(int a, int b) {
	int temp = a;
	a = b;
	b = temp;
}

void inputArray(int array[], size_t n) {
	std::cout << "Enter the elements in your array: ";
	for (size_t i = 0; i < n; ++i) {
		std::cin >> array[i];
	}
}

void outputArray(int array[], size_t n) {
	for (size_t i = 0; i < n; ++i) {
		std::cout << array[i] << " ";
	}
	std::cout << std::endl;
}

//Exercise 1
void removeElementInArrayAtIndex(int array[], int& n, int index) {
	int newArray[MAX_ARRAY_SIZE];

	for (size_t i = 0; i < index; ++i) {
		newArray[i] = array[i];
	}
	for (size_t i = index + 1; i < n; ++i) {
		newArray[i - 1] = array[i];
	}

	if (n - 1 <= MAX_ARRAY_SIZE) {
		outputArray(newArray, n - 1);
	}
	else {
		return;
	}
}

//Exercise 2
void createIntervalArray(int array[], int result[], int& n, int a, int b) {
	if (a > b) {
		swap(a, b);
	}

	int counter = 0;

	for (size_t i = 0; i < n; ++i) {
		if (array[i] >= a && array[i] <= b) {
			result[counter] = array[i];
			++counter;
		}
	}

	if (counter > 0) {
		outputArray(result, counter);
	}
	else {
		std::cout << "There are no elements in the interval [" << a << ", " << b << "]!" << std::endl;
	}
}

//Exercise 3
bool isArraySymmetric(int array[], int n) {
	for (size_t i = 0; i < n / 2; ++i) {
		if (array[i] != array[n - i - 1]) {
			return false;
		}
	}
	return true;
}

//Exercise 4
int findMaxLenOfSameElements(int array[], int n) {
	int maxCount = 0;
	int counter = 1;

	for (int i = 0; i < n - 1; ++i) {
		if (array[i] == array[i + 1]) {
			++counter;
		}
		else {
			if (maxCount < counter) {
				maxCount = counter;
			}
			counter = 1;
		}
	}

	if (maxCount < counter) {
		maxCount = counter;
	}

	return maxCount;
}

//Exercise 5
void removeNegativeElementsFromArray(int array[], int n) {
	int newArray[MAX_ARRAY_SIZE];
	int counter = 0;

	for (int i = 0, j = 0; i < n; ++i) {
		if (array[i] >= 0) {
			newArray[j] = array[i];
			++j;
			++counter;
		}
	}

	for (int i = 0; i < counter; ++i) {
		array[i] = newArray[i];
	}

	if (counter > 0) {
		outputArray(array, counter);
	}
	else {
		std::cout << "Your new array is empty!" << std::endl;
	}

}

//Exercise 6
bool isOneOfYourArraysSubsetOfTheOther(int array[], int array1[], int n, int n1) {
	for (size_t j = 0; j < n1; ++j) {
		bool foundElement = false;
		for (size_t i = 0; i < n; ++i) {
			if (array[i] == array1[j]) {
				foundElement = true;
				break;
			}
		}
		if (!foundElement) {
			return false;
		}
	}
	return true;
}

//Exercise 7
void selectSortArray(int array[], int n) {
	int minIndex;
	int min;

	for (size_t i = 0; i < n - 1; ++i) {
		minIndex = i;
		min = array[minIndex];
		for (size_t j = i + 1; j < n; ++j) {
			if (array[j] < min) {
				minIndex = j;
				min = array[minIndex];
			}
		}
		array[minIndex] = array[i];
		array[i] = min;
	}

	outputArray(array, n);
}


void sortMergedArrays(int array[], int array1[], int result[], int n, int n1) {
	for (size_t i = 0; i < n; ++i) {
		result[i] = array[i];
	}
	for (size_t j = 0; j < n1; ++j) {
		result[n + j] = array1[j];
	}

	selectSortArray(result, n + n1);
}

//Exercise 8
void mergeUnsortedArrays(int arr1[], int arr2[], int result[], int n1, int n2) {
	int unsortedResult[MAX_ARRAY_SIZE];

	for (size_t i = 0; i < n1; ++i) {
		unsortedResult[i] = arr1[i];
	}
	for (size_t j = 0; j < n2; ++j) {
		unsortedResult[n1 + j] = arr2[j];
	}

	int counter = 0;
	for (size_t i = 0; i < n1 + n2; ++i) {
		bool repeatsItself = false;
		for (size_t k = 0; k < counter; ++k) {
			if (result[k] == unsortedResult[i]) {
				repeatsItself = true;
				break;
			}
		}
		if (!repeatsItself) {
			result[counter++] = unsortedResult[i];
		}
	}

	selectSortArray(result, counter);
}

//Exercise 9
void sortedIntersectionOfTwoArrays(int arr1[], int arr2[], int result[], int n1, int n2) {
	int unsortedResult[MAX_ARRAY_SIZE];
	int counter = 0;

	for (size_t i = 0; i < n1; ++i) {
		unsortedResult[i] = arr1[i];
	}
	for (size_t j = 0; j < n2; ++j) {
		unsortedResult[n1 + j] = arr2[j];
	}

	for (size_t i = 0; i < n1 + n2; ++i) {
		bool isInArr1 = false;
		bool isInArr2 = false;

		for (size_t k = 0; k < n1; ++k) {
			if (arr1[k] == unsortedResult[i]) {
				isInArr1 = true;
				break;
			}
		}
		for (size_t k = 0; k < n2; ++k) {
			if (arr2[k] == unsortedResult[i]) {
				isInArr2 = true;
				break;
			}
		}

		if (isInArr1 && isInArr2) {
			bool isDuplicate = false;
			for (size_t m = 0; m < counter; ++m) {
				if (result[m] == unsortedResult[i]) {
					isDuplicate = true;
					break;
				}
			}
			if (!isDuplicate) {
				result[counter++] = unsortedResult[i];
			}
		}
	}

	selectSortArray(result, counter);
}

int main() {
	//Exercise 1
	/*int n;
	std::cout << "Enter the size of your array: ";
	std::cin >> n;
	if (!std::cin || n > MAX_ARRAY_SIZE || n < 0) {
		std::cerr << "Your input is incorrect!" << std::endl;
		return 1;
	}

	int array[MAX_ARRAY_SIZE];

	inputArray(array, n);
	std::cout << "The elements in your array are: ";
	outputArray(array, n);

	size_t index;
	std::cout << "Enter the index of the element you want removed: ";
	std::cin >> index;
	if (!std::cin || index > n) {
		std::cerr << "Your input is incorrect! Your index should be between 0 and the size of your array!" << std::endl;
	}

	std::cout << "Your new array is: ";
	removeElementInArrayAtIndex(array, n, index);*/

	//Exercise 2
	/*int n;
	std::cout << "Enter the size of your array: ";
	std::cin >> n;
	if (!std::cin || n < 0 || n > MAX_ARRAY_SIZE) {
		std::cerr << "Your input is incorrect!" << std::endl;
	}

	int array[MAX_ARRAY_SIZE];
	int result[MAX_ARRAY_SIZE];

	inputArray(array, n);
	outputArray(array, n);

	int a, b;
	std::cout << "Enter the beginning and end of your interval: ";
	std::cin >> a >> b;
	if (!std::cin) {
		std::cerr << "Your input is incorrect!" << std::endl;
		return 1;
	}

	std::cout << "Your new array is: ";
	createIntervalArray(array, result, n, a, b);*/

	//Exercise 3
	/*int n;
	std::cout << "Enter the size of your array: ";
	std::cin >> n;
	if (!std::cin || n < 0 || n > MAX_ARRAY_SIZE) {
		std::cerr << "Your input is incorrect!" << std::endl;
		return 1;
	}

	int array[MAX_ARRAY_SIZE];
	inputArray(array, n);
	std::cout << "The elements in your array are: ";
	outputArray(array, n);

	std::cout << "Is your array symmetric? - " << isArraySymmetric(array, n) << std::endl;*/

	//Exercise 4
	/*int n;
	std::cout << "Enter the size of your array: ";
	std::cin >> n;
	if (!std::cin || n < 0 || n > MAX_ARRAY_SIZE) {
		std::cerr << "Your input is incorrect!" << std::endl;
		return 1;
	}

	int array[MAX_ARRAY_SIZE];
	inputArray(array, n);
	std::cout << "The elements in your array are: ";
	outputArray(array, n);

	std::cout << findMaxLenOfSameElements(array, n) << std::endl;*/

	//Exercise 5
	/*int n;
	std::cout << "Enter the size of your array: ";
	std::cin >> n;
	if (!std::cin || n < 0 || n > MAX_ARRAY_SIZE) {
		std::cerr << "Your input is incorrect!" << std::endl;
		return 1;
	}

	int array[MAX_ARRAY_SIZE];
	inputArray(array, n);
	std::cout << "The elements in your array are: ";
	outputArray(array, n);

	std::cout << "Your new array is: ";
	removeNegativeElementsFromArray(array, n);*/

	//Exercise 6
	/*int n;
	std::cout << "Enter the size of your first array: ";
	std::cin >> n;
	if (!std::cin || n < 0 || n > MAX_ARRAY_SIZE) {
		std::cerr << "Your input is incorrect!" << std::endl;
		return 1;
	}

	int array[MAX_ARRAY_SIZE];
	inputArray(array, n);
	std::cout << "The elements in your array are: ";
	outputArray(array, n);

	int n1;
	std::cout << "Enter the size of your second array: ";
	std::cin >> n1;
	if (!std::cin || n < 0 || n > MAX_ARRAY_SIZE) {
		std::cerr << "Your input is incorrect!" << std::endl;
		return 1;
	}

	int array1[MAX_ARRAY_SIZE];
	inputArray(array1, n1);
	std::cout << "The elements in your array are: ";
	outputArray(array1, n1);

	std::cout << isOneOfYourArraysSubsetOfTheOther(array, array1, n, n1) << std::endl;*/

	//Exercise 7 + Exercise 8
    int n;
	std::cout << "Enter the size of your first array: ";
	std::cin >> n;
	if (!std::cin || n > MAX_ARRAY_SIZE || n < 0) {
		std::cerr << "Your input is incorrect!" << std::endl;
		return 1;
	}

	int array[MAX_ARRAY_SIZE];
	inputArray(array, n);
	std::cout << "Your first array is: ";
	outputArray(array, n);

	int n1;
	std::cout << "Enter the size of your second array: ";
	std::cin >> n1;
	if (!std::cin || n1 > MAX_ARRAY_SIZE || n1 < 0) {
		std::cerr << "Your input is incorrect!" << std::endl;
		return 1;
	}

	int array1[MAX_ARRAY_SIZE];
	inputArray(array1, n1);
	std::cout << "Your second array is: ";
	outputArray(array1, n1);

	int result[2 * MAX_ARRAY_SIZE];
	int resultSize = n + n1;
	std::cout << "Your merged and sorted array is: ";
	sortMergedArrays(array, array1, result, n, n1);
	std::cout << "Your merged and sorted array without repeating elements is: ";
	mergeUnsortedArrays(array, array1, result, n, n1);
	std::cout << "The sorted intersection of array 1 and array 2 is: ";
	sortedIntersectionOfTwoArrays(array, array1, result, n, n1);

	return 0;
}



//Задачи за двумерни масиви
#include<iostream>

const int MAX_SIZE_ROWS = 100;
const int MAX_SIZE_COLS = 100;

//Declarations
void inputElementsInMatrix(int matrix[MAX_SIZE_ROWS][MAX_SIZE_COLS], int rows, int cols);
void outputElementsInMatrix(int matrix[MAX_SIZE_ROWS][MAX_SIZE_COLS], int rows, int cols);
//Exercise 1
int findSmallestElement(int matrix[MAX_SIZE_ROWS][MAX_SIZE_COLS], int rows, int cols);
//Exercise 2
void printDiagonals(int matrix[MAX_SIZE_ROWS][MAX_SIZE_COLS], int rows, int cols);
//Exercise 3
void printMatrixInZigZag(int matrix[MAX_SIZE_ROWS][MAX_SIZE_COLS], int rows, int cols);
//Exercise 4
bool isMatrixTriangular(int matrix[MAX_SIZE_ROWS][MAX_SIZE_COLS], int rows, int cols);
//Exercise 5
void transposeMatrix(int matrix[MAX_SIZE_ROWS][MAX_SIZE_COLS], int rows, int cols);
//Exercise 6
bool isMatrixMagicalSquare(int matrix[MAX_SIZE_ROWS][MAX_SIZE_COLS], int rows, int cols);
//Exercise 7.1
void additionTwoMatrices(int matrix1[MAX_SIZE_ROWS][MAX_SIZE_COLS], int matrix2[MAX_SIZE_ROWS][MAX_SIZE_COLS], int rows12, int cols12);
//Exercise 7.2
void multiplyMatrixWithNumber(int matrix[MAX_SIZE_ROWS][MAX_SIZE_COLS], int rows, int cols, int k);
//Exercise 8
void multiplyTwoMatrices(int matrix1[MAX_SIZE_ROWS][MAX_SIZE_COLS], int matrix2[MAX_SIZE_ROWS][MAX_SIZE_COLS], int rows1, int cols1, int rows2, int cols2);
//Exercise 9
void printMatrixInASpiral(int matrix[MAX_SIZE_ROWS][MAX_SIZE_COLS], int rows, int cols);
//Exercise 10
void shiftMatrixRight(int matrix[MAX_SIZE_ROWS][MAX_SIZE_COLS], int rows, int cols);

//Definitions
void inputElementsInMatrix(int matrix[MAX_SIZE_ROWS][MAX_SIZE_COLS], int rows, int cols) {
	std::cout << "Enter the elements in your matrix: ";
	for (size_t i = 0; i < rows; ++i) {
		for (size_t j = 0; j < cols; ++j) {
			std::cin >> matrix[i][j];
		}
	}
}

void outputElementsInMatrix(int matrix[MAX_SIZE_ROWS][MAX_SIZE_COLS], int rows, int cols) {
	for (size_t i = 0; i < rows; ++i) {
		for (size_t j = 0; j < cols; ++j) {
			std::cout << matrix[i][j] << " ";
		}
		std::cout << std::endl;
	}
}

//Exercise 1
int findSmallestElement(int matrix[MAX_SIZE_ROWS][MAX_SIZE_COLS], int rows, int cols) {
	int smallestEl = matrix[0][0];

	for (size_t i = 0; i < rows; ++i) {
		for (size_t j = 0; j < cols; ++j) {
			if (matrix[i][j] < smallestEl) {
				smallestEl = matrix[i][j];
			}
		}
	}

	return smallestEl;
}

//Exercise 2
void printDiagonals(int matrix[MAX_SIZE_ROWS][MAX_SIZE_COLS], int rows, int cols) {
	std::cout << "Main diagonal: ";
	for (size_t i = 0; i < rows; ++i) {
		for (size_t j = 0; j < cols; ++j) {
			if (i == j) {
				std::cout << matrix[i][j] << " ";
			}
		}
	}
	std::cout << std::endl;

	std::cout << "Secondary diagonal: ";
	for (size_t i = 0; i < rows; ++i) {
		for (size_t j = 0; j < cols; ++j) {
			if (i + j == rows - 1) {
				std::cout << matrix[i][j] << " ";
			}
		}
	}
	std::cout << std::endl;
}

//Exercise 3
void printMatrixInZigZag(int matrix[MAX_SIZE_ROWS][MAX_SIZE_COLS], int rows, int cols) {
	std::cout << "Matrix printed in zig-zag manner: " << std::endl;
	for (int i = 0; i < rows; ++i) {
		if (i % 2 == 0) {
			for (size_t j = 0; j < cols; ++j) {
				std::cout << matrix[i][j] << " ";
			}
		}
		else {
			for (int j = cols - 1; j >= 0; --j) {
				std::cout << matrix[i][j] << " ";
			}
		}
		std::cout << std::endl;
	}
}

//Exercise 4
bool isMatrixTriangular(int matrix[MAX_SIZE_ROWS][MAX_SIZE_COLS], int rows, int cols) {
	bool isTriangular = false;

	for (size_t i = 0; i < rows; ++i) {
		for (size_t j = 0; j < cols; ++j) {
			if (i > j && matrix[i][j] == 0) {
				isTriangular = true;
			}
		}
	}

	return isTriangular;
}

//Exercise 5
void transposeMatrix(int matrix[MAX_SIZE_ROWS][MAX_SIZE_COLS], int rows, int cols) {
	std::cout << "Transposed matrix: " << std::endl;
	for (size_t j = 0; j < cols; ++j) {
		for (size_t i = 0; i < rows; ++i) {
			std::cout << matrix[i][j] << " ";
		}
		std::cout << std::endl;
	}
}

//Exercise 6
bool isMatrixMagicalSquare(int matrix[MAX_SIZE_ROWS][MAX_SIZE_COLS], int rows, int cols) {
	int sumMainDiag = 0, sumSecDiag = 0, sum = 0;

	for (size_t j = 0; j < cols; ++j) {
		sum += matrix[0][j];
	}

	for (size_t i = 0; i < rows; ++i) {
		int sumRows = 0;
		for (size_t j = 0; j < cols; ++j) {
			sumRows += matrix[i][j];
			if (i == j) {
				sumMainDiag += matrix[i][j];
			}
			if (i + j == rows - 1) {
				sumSecDiag += matrix[i][j];
			}
		}
		if (sumRows != sum) {
			return false;
		}
	}

	for (size_t j = 0; j < cols; ++j) {
		int sumCols = 0;
		for (size_t i = 0; i < rows; ++i) {
			sumCols += matrix[i][j];
		}
		if (sumCols != sum) {
			return false;
		}
	}

	if (sumMainDiag != sum || sumSecDiag != sum) {
		return false;
	}

	return true;
}

//Exercise 7.1
void additionTwoMatrices(int matrix1[MAX_SIZE_ROWS][MAX_SIZE_COLS], int matrix2[MAX_SIZE_ROWS][MAX_SIZE_COLS], int rows12, int cols12) {
	for (size_t i = 0; i < rows12; ++i) {
		for (size_t j = 0; j < cols12; ++j) {
			matrix1[i][j] += matrix2[i][j];
		}
	}

	outputElementsInMatrix(matrix1, rows12, cols12);
}

//Exercise 7.2
void multiplyMatrixWithNumber(int matrix[MAX_SIZE_ROWS][MAX_SIZE_COLS], int rows, int cols, int k) {
	for (size_t i = 0; i < rows; ++i) {
		for (size_t j = 0; j < cols; ++j) {
			matrix[i][j] = k * matrix[i][j];
		}
	}

	std::cout << "Your matrix multiplied with " << k << " is: " << std::endl;
	outputElementsInMatrix(matrix, rows, cols);
}

//Exercise 8
void multiplyTwoMatrices(int matrix1[MAX_SIZE_ROWS][MAX_SIZE_COLS], int matrix2[MAX_SIZE_ROWS][MAX_SIZE_COLS], int rows1, int cols1, int rows2, int cols2) {
	if (cols1 == rows2) {
		int matrixRes[MAX_SIZE_ROWS][MAX_SIZE_COLS] = {};

		for (size_t i = 0; i < rows1; ++i) {
			for (size_t j = 0; j < cols2; ++j) {
				for (size_t k = 0; k < cols1; ++k) {
					matrixRes[i][j] += matrix1[i][k] * matrix2[k][j];
				}
			}
		}

		std::cout << "Matrix1 X Matrix2: " << std::endl;
		outputElementsInMatrix(matrixRes, rows1, cols2);
	}
	else {
		std::cerr << "Invalid input!" << std::endl;
		return;
	}
}

//Exercise 9
void printMatrixInASpiral(int matrix[MAX_SIZE_ROWS][MAX_SIZE_COLS], int rows, int cols) {
	int top = 0, bottom = rows - 1, left = 0, right = cols - 1;

	while (top <= bottom && left <= right) {
		for (int i = left; i <= right; ++i) {
			std::cout << matrix[top][i] << " ";
		}
		++top;

		for (int i = top; i <= bottom; ++i) {
			std::cout << matrix[i][right] << " ";
		}
		--right;

		for (int i = right; i >= left; --i) {
			std::cout << matrix[bottom][i] << " ";
		}
		--bottom;

		for (int i = bottom; i >= top; --i) {
			std::cout << matrix[i][left] << " ";
		}
		++left;
	}
}

//Exercise 10
void shiftMatrixRight(int matrix[MAX_SIZE_ROWS][MAX_SIZE_COLS], int rows, int cols) {
	int rotatedMatrix[MAX_SIZE_ROWS][MAX_SIZE_COLS] = {};

	for (int i = 0; i < rows; ++i) {
		for (int j = 0; j < cols; ++j) {
			rotatedMatrix[j][rows - i - 1] = matrix[i][j];
		}
	}

	std::cout << "Rotated matrix: " << std::endl;
	outputElementsInMatrix(rotatedMatrix, rows, cols);
}

int main() {
	//Rectangular matrix - Ex 1 - 6, Ex 9, Ex 10
	int rows, cols;
	std::cout << "Enter the number of rows and columns in your matrix: ";
	std::cin >> rows >> cols;
	if (!std::cin || rows < 0 || rows > MAX_SIZE_ROWS || cols < 0 || cols > MAX_SIZE_COLS) {
		std::cerr << "Invalid input!" << std::endl;
		return 1;
	}

	int matrix[MAX_SIZE_ROWS][MAX_SIZE_COLS];
	inputElementsInMatrix(matrix, rows, cols);
	std::cout << "Your matrix: " << std::endl;
	outputElementsInMatrix(matrix, rows, cols);

	//Exercise 1
	std::cout << "The smallest element in your matrix is: " << findSmallestElement(matrix, rows, cols) << std::endl;

	//Exercise 3
	printMatrixInZigZag(matrix, rows, cols);

	//Exercise 5
	transposeMatrix(matrix, rows, cols);

  //Exercise 9
	//printMatrixInASpiral(matrix1, rows1, cols1);

 //Exercise 10
 shiftMatrixRight(matrix1, rows1, cols1);


	//Square matrix - Ex 1 - 6
	int n;
	std::cout << "Enter the size of your matrix: ";
	std::cin >> n;
	if (!std::cin || n > MAX_SIZE_ROWS || n < 0) {
		std::cerr << "Invalid input!" << std::endl;
		return 1;
	}

	int matrix[MAX_SIZE_ROWS][MAX_SIZE_COLS];
	inputElementsInMatrix(matrix, n, n);
	outputElementsInMatrix(matrix, n, n);

	//Exercise 2
	printDiagonals(matrix, n, n);

	//Exercise 3
	std::cout << "Is your matrix triangular? - " << std::boolalpha << isMatrixTriangular(matrix, n, n) << std::endl;

	//Exercise 6
	std::cout << "Is your matrix magical? - " << std::boolalpha << isMatrixMagicalSquare(matrix, n, n) << std::endl;*/

	//Exercise 7
	int rows12, cols12;
	std::cout << "Enter two values - the number of rows and the number of columns of your two matrices: ";
	std::cin >> rows12 >> cols12;
	if (!std::cin || rows12 < 0 || rows12 > MAX_SIZE_ROWS || cols12 < 0 || cols12 > MAX_SIZE_COLS) {
		std::cerr << "Incorrect input!" << std::endl;
		return 1;
	}

	int matrix1[MAX_SIZE_ROWS][MAX_SIZE_COLS], matrix2[MAX_SIZE_ROWS][MAX_SIZE_COLS];

	inputElementsInMatrix(matrix1, rows12, cols12);
	std::cout << "First matrix: " << std::endl;
	outputElementsInMatrix(matrix1, rows12, cols12);

	inputElementsInMatrix(matrix2, rows12, cols12);
	std::cout << "Second matrix: " << std::endl;
	outputElementsInMatrix(matrix2, rows12, cols12);

	std::cout << "The addition of matrix 1 and matrix 2: " << std::endl;
	additionTwoMatrices(matrix1, matrix2, rows12, cols12);

	int k;
	std::cout << "Enter a number you want to multiply your matrix with: ";
	std::cin >> k;
	if (!std::cin) {
		std::cerr << "Invalid input!" << std::endl;
		return 1;
	}

	multiplyMatrixWithNumber(matrix1, rows12, cols12, k);

	//Exercise 8
	int rows1, cols1, rows2, cols2;
	std::cout << "Enter the number of rows and columns in your first matrix: ";
	std::cin >> rows1 >> cols1;
	if (!std::cin || rows1 < 0 || rows1 > MAX_SIZE_ROWS || cols1 < 0 || cols1 > MAX_SIZE_COLS) {
		std::cerr << "Invalid input!" << std::endl;
		return 1;
	}

	int matrix1[MAX_SIZE_ROWS][MAX_SIZE_COLS];
	inputElementsInMatrix(matrix1, rows1, cols1);
	std::cout << "First matrix: " << std::endl;
	outputElementsInMatrix(matrix1, rows1, cols1);

	std::cout << "Enter the number of rows and columns in your second matrix: ";
	std::cin >> rows2 >> cols2;
	if (!std::cin || rows2 < 0 || rows2 > MAX_SIZE_ROWS || cols2 < 0 || cols2 > MAX_SIZE_COLS) {
		std::cerr << "Invalid input!" << std::endl;
		return 1;
	}
	int matrix2[MAX_SIZE_ROWS][MAX_SIZE_COLS];
	inputElementsInMatrix(matrix2, rows2, cols2);
	std::cout << "Second matrix: " << std::endl;
	outputElementsInMatrix(matrix2, rows2, cols2);

	multiplyTwoMatrices(matrix1, matrix2, rows1, cols1, rows2, cols2);

	return 0;
}
