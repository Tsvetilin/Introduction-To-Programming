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
	int n;
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
	removeElementInArrayAtIndex(array, n, index);

	//Exercise 2
	int n;
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
	createIntervalArray(array, result, n, a, b);

	//Exercise 3
	int n;
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

	std::cout << "Is your array symmetric? - " << isArraySymmetric(array, n) << std::endl;

	//Exercise 4
	int n;
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

	std::cout << findMaxLenOfSameElements(array, n) << std::endl;

	//Exercise 5
	int n;
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
	removeNegativeElementsFromArray(array, n);

	//Exercise 6
	int n;
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

	std::cout << isOneOfYourArraysSubsetOfTheOther(array, array1, n, n1) << std::endl;

	//Exercise 7 + Exercise 8 + Exercise 9
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
