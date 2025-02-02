#include <iostream>

int* writeArray(size_t size)
{
	int* arr = new int[size];
	for (size_t i = 0; i < size; i++)
	{
		std::cin >> arr[i];
	}
	return arr;
}

void printArray(int* arr, size_t size)
{
	if (!arr) return;

	for (size_t i = 0; i < size; i++)
	{
		std::cout << arr[i] << " ";
	}
}

void copyArray(int* from, size_t size, int* to)
{
	if (!from || !to) return;

	for (size_t i = 0; i < size; i++)
	{
		to[i] = from[i];
	}
}

// Ex. 1
void printReverse(int* arr, size_t n)
{
	if (!arr) return;

	for (size_t i = 0; i < n; i++)
	{
		std::cout << arr[n - i - 1] << " ";
	}
}


// Ex. 2
int* divisibleNumbers(int* arr1, size_t len1, int* arr2, size_t len2, int k, size_t& resLength)
{
	if (!arr1 || !arr2) return nullptr;

	int* result = new int[len1 + len2];
	size_t count = 0;

	for (size_t i = 0; i < len1; i++)
	{
		if (arr1[i] % k)
			continue;

		result[count++] = arr1[i];
	}
	for (size_t i = 0; i < len2; i++)
	{
		if (arr2[i] % k)
			continue;

		result[count++] = arr2[i];
	}

	int* fixedResult = new int[count];
	for (size_t i = 0; i < count; i++)
	{
		fixedResult[i] = result[i];
	}
	delete[] result;

	resLength = count;
	return fixedResult;
}


// Ex. 3
int* cicleArr(int* arr, size_t n, size_t k)
{
	if (!arr) return nullptr;

	int* result = new int[n];
	copyArray(arr, n, result);

	for (size_t i = 0; i < k; i++)
	{
		int temp = result[n - 1];
		for (size_t j = 0; j < n - 1; j++)
			result[n - j - 1] = result[n - j - 2];
		result[0] = temp;
	}
	return result;
}


// Ex. 4
int* getDevisibleByNeighbors(int* arr, size_t size, size_t& resultSize)
{
	if (!arr) return nullptr;

	int* result = new int[size];
	size_t counter = 0;
	for (size_t i = 1; i < size - 1; i++)
	{
		if (!(arr[i] % arr[i - 1]) || !(arr[i] % arr[i + 1]))
			result[counter++] = arr[i];
	}

	int* fixedResult = new int[counter];
	copyArray(result, counter, fixedResult);
	delete[] result;

	resultSize = counter;
	return fixedResult;
}


// Ex. 5
char* concatLowerAndUpper(char* str1, char* str2)
{
	if (!str1 || !str2)return nullptr;

	char result[1000];
	size_t size = 0;
	while (*str1)
	{
		if ('a' <= *str1 && *str1 <= 'z')
		{
			result[size] = *str1;
			size++;
		}
		str1++;
	}
	while (*str2)
	{
		if ('A' <= *str2 && *str2 <= 'Z')
		{
			result[size] = *str2;
			size++;
		}
		str2++;
	}
	result[size++] = '\0';

	char* fixedResult = new char[size];
	for (size_t i = 0; i < size; i++)
	{
		fixedResult[i] = result[i];
	}

	return fixedResult;
}


// Ex. 6
size_t getSize(char* str)
{
	if (!str) return 0;

	size_t count = 0;
	while (*str)
	{
		count++;
		str++;
	}
	return count;
}

char* reverseStr(char* str, size_t size)
{
	if (!str) return nullptr;

	char* reversed = new char[size];
	for (size_t i = 0; i < size; i++)
	{
		reversed[size - i - 1] = str[i];
	}
	reversed[size] = '\0';
	return reversed;
}

char* getFirstAndLast(char* str)
{
	if (!str) return nullptr;

	char firstWord[100];
	size_t firstWordSize = 0;

	char* strPtr = str;
	while (*strPtr != ' ' && *strPtr)
	{
		firstWord[firstWordSize++] = *strPtr;
		strPtr++;
	}
	firstWord[firstWordSize] = '\0';

	char lastWord[100];
	size_t lastWordSize = 0;

	char* reversed = reverseStr(str, getSize(str));
	while (*reversed != ' ' && *reversed)
	{
		lastWord[lastWordSize++] = *reversed;
		reversed++;
	}
	lastWord[lastWordSize] = '\0';

	char* reversedLastWord = reverseStr(lastWord, lastWordSize);

	char* result = new char[firstWordSize + 1 + lastWordSize + 1];
	for (size_t i = 0; i < firstWordSize; i++)
	{
		result[i] = firstWord[i];
	}
	result[firstWordSize] = ' ';
	for (size_t i = 0; i < lastWordSize; i++)
	{
		result[firstWordSize + 1 + i] = reversedLastWord[i];
	}
	result[firstWordSize + 1 + lastWordSize] = '\0';

	return result;
}


// Ex. 7
void shiftRight(char* str)
{
	if (!str) return;

	char* strPtr = str;
	while (*strPtr)
	{
		strPtr++;
	}
	strPtr++;
	while (strPtr != str)
	{
		*strPtr = *(strPtr - 1);
		strPtr--;
	}
}

char* addSymAt(char* str, size_t* indexes, size_t n, char sym)
{
	if (!str || !indexes) return nullptr;

	size_t size = getSize(str);
	char* result = new char[size + n];

	for (size_t i = 0; i < size; i++)
	{
		result[i] = str[i];
	}
	result[size] = '\0';
	for (size_t i = 0; i < n; i++)
	{
		shiftRight(result + indexes[i]);
		*(result + indexes[i] + i) = sym;
	}

	return result;
}


// Ex. 8
int countOfPositiveBits(int n)
{
	int count = 0;
	while (n)
	{
		count += n & 1;
		n >>= 1;
	}
	return count;
}

int** getSubArrays(int* arr, size_t n)
{
	if (!arr) return nullptr;
	
	int** result = new int* [n * (n - 1) + 2];
	int limit = 1 << n;
	int mask = 1;
	while (mask < limit)
	{
		result[mask - 1] = new int[countOfPositiveBits(mask) + 1];
		int index = 0;
		int maskCopy = mask;
		size_t arrIndex = 0;
		while (maskCopy)
		{
			if (maskCopy & 1)
			{
				result[mask - 1][index++] = arr[arrIndex];
			}
			arrIndex++;
			maskCopy >>= 1;
		}
		result[mask - 1][index] = NULL;
		mask++;
	}
	result[n * (n - 1) + 1] = nullptr;

	return result;
}

int main()
{
	// Ex. 1
	/*size_t n;
	std::cin >> n;
	int* arr = new int[n];
	for (size_t i = 0; i < n; i++)
	{
		std::cin >> arr[i];
	}
	printReverse(arr, n);
	delete[] arr;*/


	// Ex. 2
	/*size_t n;
	std::cin >> n;
	int* arr1 = writeArray(n);
	size_t m;
	std::cin >> m;
	int* arr2 = writeArray(m);
	int k;
	std::cin >> k;

	size_t unionLength = 0;
	int* unionArr = divisibleNumbers(arr1, n, arr2, m, k, unionLength);
	printArray(unionArr, unionLength);
	delete[] arr1, arr2, unionArr;*/


	// Ex. 3
	/*size_t n;
	std::cin >> n;
	int* arr = writeArray(n);
	size_t k;
	std::cin >> k;
	int* result = cicleArr(arr, n, k);
	printArray(result, n);
	delete[] arr, result;*/


	// Ex. 4
	/*size_t n;
	std::cin >> n;
	int* arr = writeArray(n);
	size_t resLength = 0;
	int* result = getDevisibleByNeighbors(arr, n, resLength);
	printArray(result, resLength);
	delete[] arr, result;*/


	// Ex. 5
	/*char str1[1000], str2[1000];
	std::cin.getline(str1, 1000);
	std::cin.getline(str2, 1000);
	char* result = concatLowerAndUpper(str1, str2);
	std::cout << result;
	delete[] result;*/


	// Ex. 6
	/*char str[1024];
	std::cin.getline(str, 1024);
	char* result = getFirstAndLast(str);
	std::cout << result;
	delete[] result;*/


	// Ex. 7
	/*char str[1024];
	std::cin.getline(str, 1024);
	size_t n;
	std::cin >> n;
	size_t* indexes = new size_t[n];
	for (size_t i = 0; i < n; i++)
	{
		std::cin >> indexes[i];
	}
	char sym;
	std::cin >> sym;
	char* result = addSymAt(str, indexes, n, sym);
	std::cout << result;*/


	// Ex. 8
	/*size_t n;
	std::cin >> n;
	int* arr = writeArray(n);
	int** result = getSubArrays(arr, n);
	
	while (*result)
	{
		while (**result)
		{
			std::cout << **result << " ";
			(*result)++;
		}
		std::cout << std::endl;
		result++;
	}*/
}
