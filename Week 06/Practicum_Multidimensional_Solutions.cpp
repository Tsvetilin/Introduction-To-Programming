#include <iostream>

const size_t MAX_ARRAY_SIZE = 1000;

// zad 1

//void readInput(int& index)
//{
//	std::cin >> index;
//}
//
//void remove(int arr[], int& length, int index)
//{
//	bool isIndex = false;
//
//	arr[index] = 0;
//
//	for (size_t i = 0; i < length - 1; i++)
//	{
//		if (i == index)
//		{
//			isIndex = true;
//
//			while (i < length - 1)
//			{
//				arr[i] = arr[i + 1];
//
//				i++;
//			}
//
//			break;
//		}
//	}
//
//	length--;
//}
//
//void printResult(int arr[], int length)
//{
//	std::cout << arr[0];
//
//	for (size_t i = 1; i < length; i++)
//	{
//		std::cout << ' ' << arr[i];
//	}
//
//	std::cout << '\n';
//}
//
//void run()
//{
//	int arr[MAX_ARRAY_SIZE] = { 33, 1, 23, 8, 54, 5, 1, 6 };
//	int length = 8;
//
//	int index;
//	readInput(index);
//
//	remove(arr, length, index);
//
//	printResult(arr, length);
//}

// zad 2

//void readInput(int& a, int& b)
//{
//	std::cin >> a >> b;
//}
//
//void takeRange(int arr[], int arrResult[], int a, int& b, int length)
//{
//	if (length <= b)
//	{
//		b = length-1;
//	}
//
//	int rangeLength = b - a + 1;
//
//	for (size_t i = 0; i < length; i++)
//	{
//		if (i == a)
//		{
//			for (size_t j = 0; j < rangeLength; j++)
//			{
//				arrResult[j] = arr[i];
//
//				i++;
//			}
//		}
//	}
//}
//
//void printResult(int arr[], int length)
//{
//	std::cout << arr[0];
//
//	for (size_t i = 1; i < length; i++)
//	{
//		std::cout << ' ' << arr[i];
//	}
//
//	std::cout << '\n';
//}
//
//void run()
//{
//	int arr[MAX_ARRAY_SIZE] = { 5, 7, 1, 4, 3, 9, 10 };
//	int length = 7;
//
//	int a, b;
//	readInput(a, b);
//
//	int arrResult[MAX_ARRAY_SIZE];
//	takeRange(arr, arrResult, a, b, length);
//
//	printResult(arrResult, b - a + 1);
//}

// zad 3

//bool isPalindrom(int arr[], int length)
//{
//	int checkLength = length / 2;
//
//	for (size_t i = 0; i < checkLength; i++)
//	{
//		if (arr[i] != arr[length - i - 1])
//		{
//			return false;
//		}
//	}
//
//	return true;
//}
//
//void print(bool isPalindrom)
//{
//	std::cout << (isPalindrom ? "yes" : "no");
//}
//
//void run()
//{
//	int arr[MAX_ARRAY_SIZE] = { 1, 2, 3, 2, 1 };
//	int length = 5;
//
//	print(isPalindrom(arr, length));
//}

// zad 4

//int findLongestSequence(int arr[], int length)
//{
//	int longestSequence = 1;
//
//	int checkLength = length - 1;
//	int sequenceCount = 1;
//
//	for (size_t i = 0; i < checkLength; i++)
//	{
//		if (arr[i] == arr[i + 1])
//		{
//			sequenceCount++;
//
//			if (longestSequence < sequenceCount)
//			{
//				longestSequence = sequenceCount;
//			}
//		}
//		else
//		{
//			sequenceCount = 1;
//		}
//	}
//
//	return longestSequence;
//}
//
//void print(int n)
//{
//	std::cout << n;
//}
//
//void run()
//{
//	int arr[MAX_ARRAY_SIZE] = { 3, 3, 2, 2, 2, 5, 2, 2, 3, 3, 3 };
//	int length = 11;
//
//	print(findLongestSequence(arr, length));
//}

// zad 5

//void print(int arr[], int length)
//{
//	std::cout << arr[0];
//
//	for (size_t i = 1; i < length; i++)
//	{
//		std::cout << ' ' << arr[i];
//	}
//
//	std::cout << '\n';
//}
//
//void removeNegativeNumbers(int arr[], int& length)
//{
//	int numberOfRemoveElements = 0;
//
//	int trueIndex = length - 1;
//
//	for (int i = length - 1; i >= 0; i--)
//	{
//		if (arr[i] < 0)
//		{
//			int temp1 = arr[length - 1];
//
//			int checkLength = i + 1;
//
//			for (int j = length - 1; j >= checkLength; j--)
//			{
//				int temp2 = arr[j - 1];
//				arr[j - 1] = temp1;
//				temp1 = temp2;
//			}
//
//			arr[length - 1] = 0;
//
//			length--;
//		}
//	}
//}
//
//void run()
//{
//	int arr[MAX_ARRAY_SIZE] = { 1, -4, 4, -5, -9, 2, 10 };
//	int length = 7;
//
//	removeNegativeNumbers(arr, length);
//
//	print(arr, length);
//}

// zad 6

//bool isSubArray(int arr[], int arrLength, int subArr[], int subArrLength)
//{
//	int length = arrLength - subArrLength;
//
//	if (length < 0)
//	{
//		return false;
//	}
//
//	bool isSubArray = true;
//
//	if (length == 0)
//	{
//		for (size_t i = 0; i < subArrLength; i++)
//		{
//			if (arr[i] != subArr[i])
//			{
//				isSubArray = false;
//
//				break;
//			}
//		}
//	}
//
//	if (isSubArray)
//	{
//		return isSubArray;
//	}
//
//	isSubArray = false;
//
//	for (size_t i = 0; i < length; i++)
//	{
//		isSubArray = true;
//
//		int count = 0;
//
//		for (size_t j = 0; j < subArrLength; j++)
//		{
//			if (arr[i] != subArr[j])
//			{
//				isSubArray = false;
//
//				break;
//			}
//
//			i++;
//			count++;
//		}
//
//		i -= count;
//
//		if (isSubArray)
//		{
//			return isSubArray;
//		}
//	}
//
//	return isSubArray;
//}
//
//void print(bool result)
//{
//	std::cout << (result ? "true" : "false");
//}
//
//void run()
//{
//	int arr[MAX_ARRAY_SIZE] = { 1, 4, 4, 0, 4, 2 };
//	int arrLength = 6;
//
//	int subArr[MAX_ARRAY_SIZE] = { 4, 0, 4 };
//	int subArrLength = 3;
//
//	print(isSubArray(arr, arrLength, subArr, subArrLength));
//}

int main()
{
	run();
}
