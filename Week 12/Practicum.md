#include<iostream>

//Задачи с функция от по-висок ред
//Exercise 1
int findStrLen(const char* str);
bool isCapitalLetter(char ch);
bool isDigit(char ch);
int countMatching(const char* str, bool (*predicate)(char ch));

//Задачи с рекурсия
//Exercise 2
int fibonacciNums(int n);
//Exercise 3

//Exercise 1
bool isCapitalLetter(char ch) {
	return (ch >= 'A' && ch <= 'Z');
}

bool isWhitespace(char ch) {
	return ch == ' ';
}

bool isDigit(char ch) {
	return (ch >= '0' && ch <= '9');
}

int findStrLen(const char* str) {
	if (str == nullptr) {
		return 0;
	}

	int counter = 0;

	while (*str != '\0') {
		counter++;
		str++;
	}

	return counter;
}

int countMatching(const char* str, bool(*predicate)(char ch)) {
	int counter = 0;
	int strLen = findStrLen(str);
	if (!str || !predicate) {
		return -1;
	}

	for (size_t i = 0; i < strLen; ++i) {
		if (predicate(str[i])) {
			counter++;
		}
	}

	return counter;
}

//Exercise 2
int fibonacciNums(int n) {
	if (n <= 1) {
		return n;
	}

	return fibonacciNums(n - 1) + fibonacciNums(n - 2);
}

//int countFor1 = 0;
//const int arrDynamicOptSize = 10000;
//long long* arrDynamicOpt = nullptr;
//
//long long* getArrDynamicOpt() {
//	if (!arrDynamicOpt) {
//		arrDynamicOpt = new long long[arrDynamicOptSize]{ -1 };
//	}
//
//	return arrDynamicOpt;
//}
//
//long long fib(int num) {
//	long long* arr = arrDynamicOpt();
//	long long valueResult;
//	if (arr[num] != -1) {
//		return arr[num];
//	}
//	if (num == 0) {
//		return arr[num] = 0;
//	}
//	if (num == 1) {
//		return arr[num] = 1;
//	}
//
//	return arr[num] = fib(num - 1) + fib(num - 2);
//}

//Exercise 3
const double EPSILONE = 1e-6;

double mySqrt(double num, double currentStepNumber=-1) {
	double result;
	if (currentStepNumber == -1) {
    	result = (num + num / num) / 2;
	}
	else {
		result = (num + num / currentStepNumber) / 2;
	}

	if (abs(result - currentStepNumber) < EPSILONE) {
		return result;
	}

	return mySqrt(num, result);
}

int countOccurrences(const char* str, char c) {
	if (*str == '\0') {
		return 0;
	}
	return (*str == c) + countOccurrences(str + 1, c);
}

//Exercise 5
bool findPath(int** maze, int x, int y, int n, int m, bool** visited) {
	if (x < 0 || y < 0 || x >= n || y >= m) {
		return false;
	}

	if (maze[x][y] == 0 || visited[x][y]) {
		return false;
	}

	if (x == n - 1 && y == m - 1) {
		return true;
	}

	visited[x][y] = true;

	if (findPath(maze, x + 1, y, n, m, visited) || findPath(maze, x - 1, y, n, m, visited) || findPath(maze, x, y + 1, n, m, visited) || findPath(maze, x, y - 1, n, m, visited)) {
		return true;
	}

	visited[x][y] = false;
	return false;
}

//
int binarySearch(int arr[], int left, int right, int target) {
	if (left > right) {
		return -1;
	}

	int mid = left + (right - left) / 2;

	if (arr[mid] == target) {
		return mid;
	}

	if (arr[mid] > target) {
		return binarySearch(arr, left, mid - 1, target);
	}

	return binarySearch(arr, mid + 1, right, target);
}

//
void find2x2Matrix(int** matrix, int n, int& resultX, int& resultY) {
	int left = 0, right = n - 1;
	int top = 0, bottom = n - 1;

	while (right - left > 1 || bottom - top > 1) {
		int midRow = top + (bottom - top) / 2;
		int midCol = left + (right - left) / 2;

		bool topLeft = matrix[top][left];
		bool topRight = matrix[top][midCol];
		bool bottomLeft = matrix[midRow][left];
		bool bottomRight = matrix[midRow][midCol];

		if ((topLeft + topRight + bottomLeft + bottomRight) > 0 &&
			(topLeft + topRight + bottomLeft + bottomRight) < 4) {
			resultX = top;
			resultY = left;
			return;
		}

		if (topLeft && topRight) {
			top = midRow + 1;
		}
		else if (bottomLeft && bottomRight) {
			bottom = midRow;
		}
		else if (topLeft && bottomLeft) {
			left = midCol + 1;
		}
		else {
			right = midCol;
		}
	}

	resultX = top;
	resultY = left;
}

//
int longestIncreasingSubsequence(int arr[], int n) {
	int* sec = new int[n];

	for (int i = 0; i < n; ++i) {
		sec[i] = 1;
	}

	for (int i = 1; i < n; ++i) {
		for (int j = 0; j < i; ++j) {
			if (arr[i] > arr[j]) {
				sec[i] = sec[j] + 1;
			}
		}
	}

	int maxLength = sec[0];
	for (int i = 1; i < n; ++i) {
		if (sec[i] > maxLength) {
			maxLength = sec[i];
		}
	}

	delete[] sec;

	return maxLength;
}


int main() {
	//Exercise 1
	/*char str[] = "I am a Businesswoman 123";
	std::cout << countMatching(str, isCapitalLetter) << std::endl;
	std::cout << countMatching(str, isDigit) << std::endl;
	std::cout << countMatching(str, isWhitespace) << std::endl;
	std::cout << countMatching(str, [](char ch) {return ch == 'a'; }) << std::endl;
	std::cout << countMatching(str, nullptr) << std::endl;*/

	//Exercise 2
	//std::cout << "Enter the value of N: ";
	//int n;
	//std::cin >> n;

	//for (size_t i = 0; i < 20; ++i) {
	//	std::cout << fibonacciNums(i) << " ";
	//}
	//std::cout << std::endl;

	////std::cout << fibonacciNums(n) << std::endl;

	//Exercise 3 - ДОВЪРШИ
	/*int x, s;
	std::cin >> x >> s;
	std::cout << findSqrt(x, s);*/

	//Exercise 4
	/*char symbol;
	std::cout << "Enter the symbol you are looking for: ";
	std::cin >> symbol;

	int len;
	std::cout << "Enter the length of your string: ";
	std::cin >> len;
	if (!std::cin || len < 0) {
		std::cerr << "Invalid string length!" << std::endl;
		return 1;
	}

	char* str = new char[len + 1];
	for (size_t i = 0; i < len; ++i) {
		std::cin >> str[i];
	}

	std::cout << countOccurrences(str, symbol) << std::endl;*/

	//Exercise 5
	int n, m;
	std::cout << "Enter the dimentions of your matrix: ";
	std::cin >> n >> m;
	if (!std::cin || n < 0 || m < 0) {
		std::cerr << "Invalid input!" << std::endl;
		return -1;
	}

	int** maze = new int* [n];
	bool** visited = new bool* [n];
	for (int i = 0; i < n; i++) {
		maze[i] = new int[m];
		visited[i] = new bool[m]();
	}

	std::cout << "Draw the labyrinth (1 for empty space, 0 for wall):" << std::endl;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			std::cin >> maze[i][j];
		}
	}

	if (findPath(maze, 0, 0, n, m, visited)) {
		std::cout << "There is a way from (0, 0) to (" << n - 1 << ", " << m - 1 << ")." << std::endl;
	}
	else {
		std::cout << "There is no way from (0, 0) to (" << n - 1 << ", " << m - 1 << ")." << std::endl;
	}

	for (int i = 0; i < n; i++) {
		delete[] maze[i];
		delete[] visited[i];
	}
	delete[] maze;
	delete[] visited;

	//
	int n, target;
	std::cout << "Enter the size of the array: ";
	std::cin >> n;
	if (!std::cin || n < 0) {
		std::cerr << "Invalid input!" << std::endl;
		return 1;
	}

	int* arr = new int[n];
	std::cout << "Enter a sorted array: ";
	for (int i = 0; i < n; i++) {
		std::cin >> arr[i];
	}

	std::cout << "Enter the element you are looking for: ";
	std::cin >> target;

	int index = binarySearch(arr, 0, n - 1, target);

	if (index != -1) {
		std::cout << "The element is at position: " << index << std::endl;
	}
	else {
		std::cout << "The element is not found." << std::endl;
	}

	delete[] arr;

	//
	int n;
	std::cout << "Enter the size of the array: ";
	std::cin >> n;
	if (!std::cin || n < 0) {
		std::cerr << "Invalid input!" << std::endl;
		return 1;
	}

	int** matrix = new int* [n];
	for (int i = 0; i < n; ++i) {
		matrix[i] = new int[n];
	}

	std::cout << "Enter the elements in your matrix: " << std::endl;
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < n; ++j) {
			std::cin >> matrix[i][j];
			if (!std::cin) {
				std::cerr << "Invalid input!" << std::endl;
				return 1;
			}
		}
	}

	int resultX, resultY;
	find2x2Matrix(matrix, n, resultX, resultY);

	std::cout << resultX << " " << resultY << std::endl;

	for (int i = 0; i < n; ++i) {
		delete[] matrix[i];
	}
	delete[] matrix;

	//
	int n;
	std::cout << "Enter the number of elements: ";
	std::cin >> n;
	if (!std::cin || n < 0) {
		std::cerr << "Invalid input!" << std::endl;
		return 1;
	}
	int* arr = new int[n];

	std::cout << "Enter the elements of the array: ";
	for (int i = 0; i < n; ++i) {
		std::cin >> arr[i];
		if (!std::cin) {
			std::cerr << "Invalid input!" << std::endl;
			return 1;
		}
	}

	std::cout << "Length of Longest Increasing Subsequence: " << longestIncreasingSubsequence(arr, n) << std::endl;

	return 0;
}
