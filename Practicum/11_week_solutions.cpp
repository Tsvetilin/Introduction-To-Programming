#include <iostream>

void assignAutomaticallyValuesToArray(int*, int);
void assignManuallyValuesToArray(int*, int);
void printArr(int*, int);
bool isDivisibleBy(int, int);

// 1
int* reverseArr(int*, int);

// 2
int* getArrOfTheDivisibleNumsBy(int[], int[], int, int, int, int&);

int main()
{
	// 1
	/*size_t num = 0;
	std::cin >> num;

	int* arr = new int [num];
	assignAutomaticallyValuesToArray(arr, num);
	int* reversedArr = reverseArr(arr, num);
	printArr(reversedArr, num);

	delete[] reversedArr;
	delete[] arr;*/

	// 2
	/*size_t size1, size2;

	std::cin >> size1;
	int* arr1 = new int[size1];
	assignManuallyValuesToArray(arr1, size1);

	std::cin >> size2;
	int* arr2 = new int[size2];
	assignManuallyValuesToArray(arr2, size2);

	int divisor = 0;
	std::cin >> divisor;

	int resultSize;
	int* arrOfDividiblesNums = getArrOfTheDivisibleNumsBy(arr1, arr2, size1, size2, divisor, resultSize);
	printArr(arrOfDividiblesNums, resultSize);*/

	// 3
}

// 1
int* reverseArr(int* arr, int size)
{
	int* reversedArr = new int[size];
	for (size_t i = 0; i < size; i++) reversedArr[i] = arr[size - 1 - i];

	return reversedArr;
}

// 2
int* getArrOfTheDivisibleNumsBy(int arr1[], int arr2[], int size1, int size2, int divisor, int& resultSize)
{
	int notRealSizeOfResult = size1 + size2;
	int* result = new int[notRealSizeOfResult];
	size_t count = 0;

	for (size_t i = 0; i < size1; i++)
	{
		if (isDivisibleBy(arr1[i], divisor)) result[count++] = arr1[i];
	}

	for (size_t i = 0; i < size2; i++)
	{
		if (isDivisibleBy(arr2[i], divisor)) result[count++] = arr2[i];
	}

	resultSize = count;
	return result;
}

void assignAutomaticallyValuesToArray(int* arr, int size)
{
	for (size_t i = 0; i < size; i++) arr[i] = i + 1;
}

void printArr(int* arr, int size)
{
	for (size_t i = 0; i < size; i++)
	{
		std::cout << *(arr + i) << ' ';
	}
}



bool isDivisibleBy(int num, int divisor)
{
	if (num % divisor == 0) return true;
	return false;
}

void assignManuallyValuesToArray(int* arr, int size)
{
	for (size_t i = 0; i < size; i++)
	{
		std::cin >> arr[i];
	}
}
