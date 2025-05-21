#include <iostream>

const size_t RESIZE_FACTOR = 2;

size_t strLen(const char* str)
{
	if (str == nullptr)
	{
		return 0;
	}

	size_t count = 0;

	while (*str)
	{
		str++;
		count++;
	}

	return count;
}

char* strCopy(const char* str)
{
	if (str == nullptr)
	{
		return nullptr;
	}

	size_t lenStr = strLen(str);
	char* result = new char[lenStr + 1];

	for (size_t i = 0; i < lenStr; i++)
	{
		result[i] = str[i];
	}

	result[lenStr] = '\0';

	return result;
}

char* readString()
{
	const size_t STR_SIZE = 1024 + 1;
	char str[STR_SIZE];
	std::cin.getline(str, STR_SIZE);
	return strCopy(str);
}

int** createMatrix(size_t n, size_t m)
{
	int** matrix = new int* [n];
	for (size_t i = 0; i < n; i++)
	{
		matrix[i] = new int[m];
	}
	return matrix;
}

void readMatrix(int* const* const matrix, size_t n, size_t m)
{
	if (matrix == nullptr)
	{
		return;
	}

	for (size_t i = 0; i < n; i++)
	{
		for (size_t j = 0; j < m; j++)
		{
			std::cin >> matrix[i][j];
		}
	}
}

void printMatrix(int** matrix, size_t n, size_t m)
{
	if (matrix == nullptr)
	{
		return;
	}

	for (size_t i = 0; i < n; i++)
	{
		// if matrix[i] is nullptr ?
		for (size_t j = 0; j < m; j++)
		{
			std::cout << matrix[i][j] << " ";
		}
		std::cout << std::endl;
	}
}

void freeMatrix(int** matrix, size_t n)
{
	if (matrix == nullptr)
	{
		return;
	}

	for (size_t i = 0; i < n; i++)
	{
		delete[] matrix[i];
	}

	delete[] matrix;
}

void transposeMatrix(int**& matrix, int n, int m)
{
	if (matrix == nullptr)
	{
		return;
	}

	int** newMatrix = createMatrix(m, n);

	for (size_t i = 0; i < n; i++)
	{
		for (size_t j = 0; j < m; j++)
		{
			newMatrix[j][i] = matrix[i][j];
		}
	}

	freeMatrix(matrix, n);
	matrix = newMatrix;
}

int* readArray(size_t n)
{
	int* result = new int[n];

	for (size_t i = 0; i < n; i++)
	{
		std::cin >> result[i];
	}

	return result;
}

int** getAllSubsequences(const int* arr, size_t n, size_t k, size_t& resultCount)
{
	if (k > n || arr == nullptr)
	{
		return nullptr;
	}

	const size_t seqCount = n + 1 - k;

	int** subseqs = new int* [seqCount];
	for (size_t i = 0; i < seqCount; i++)
	{
		subseqs[i] = new int[k];
		for (size_t j = 0; j < k; j++)
		{
			subseqs[i][j] = arr[i + j];
		}
	}

	resultCount = seqCount;
	return subseqs;
}

void resizeIfNecessary(int**& arr, size_t count, size_t& size)
{
	if (count != size)
	{
		return;
	}

	size *= RESIZE_FACTOR;
	int** newArr = new int* [size];
	for (size_t i = 0; i < count; i++)
	{
		newArr[i] = arr[i];
	}

	delete[] arr;
	arr = newArr;
}

void resizeIfNecessary(char**& arr, size_t count, size_t& size)
{
	if (count != size)
	{
		return;
	}

	size *= RESIZE_FACTOR;
	char** newArr = new char* [size];
	for (size_t i = 0; i < count; i++)
	{
		newArr[i] = arr[i];
	}

	delete[] arr;
	arr = newArr;
}

// TODO: maybe not working in all cases
int** getAllSubsequencesWithSumK(const int* arr, size_t n, size_t k, size_t& resultCount)
{
	if (k > n || arr == nullptr)
	{
		return nullptr;
	}

	size_t currentSize = 10;
	size_t currentCount = 0;
	int** subseqs = new int* [currentSize];

	for (size_t i = 0; i < n; i++)
	{
		size_t currentSum = 0;
		size_t j = 0;
		for (; j < n - i; j++)
		{
			currentSum += arr[i + j];
			if (currentSum > k)
			{
				break;
			}
		}

		if (currentSum <= k)
		{
			currentCount++;
			resizeIfNecessary(subseqs, currentCount, currentSize);
			subseqs[currentCount - 1] = new int[j + 1];
			subseqs[currentCount - 1][0] = j;
			for (size_t p = 0; p < j; p++)
			{
				subseqs[currentCount - 1][p + 1] = arr[i + p];
			}
		}
	}

	resultCount = currentCount;
	return subseqs;
}

size_t countOneBits(size_t num)
{
	size_t count = 0;
	while (num)
	{
		count += num & 1;
		num = (num >> 1);
	}

	return count;
}

int** getAllSubsets(const int* arr, size_t n, size_t& resultCount)
{
	if ( arr == nullptr)
	{
		return nullptr;
	}

	const size_t subsetsCount = 1 << n;

	int** subsets = new int* [subsetsCount];

	for (size_t currentSubsetMask = 0; currentSubsetMask < subsetsCount; currentSubsetMask++)
	{
		size_t currentSetSize = countOneBits(currentSubsetMask);
		subsets[currentSubsetMask] = new int[currentSetSize + 1];
		subsets[currentSubsetMask][0] = currentSetSize;

		// TODO: Add elements to the subset (subsets[currentSubsetMask] elements)
	}

	resultCount = subsetsCount;
	return subsets;
}

bool contains(const char* str, char c)
{
	while (*str)
	{
		if (*str == c)
		{
			return true;
		}
		str++;
	}

	return false;
}

char* substring(const char* str, size_t startIndex, size_t count)
{
	if (str == nullptr)
	{
		return nullptr;
	}

	size_t ogStringLen = strLen(str);

	if (startIndex + count > ogStringLen)
	{
		return nullptr;
	}

	char* result = new char[count + 1];

	for (size_t i = 0; i < count; i++)
	{
		result[i] = str[i + startIndex];
	}
	result[count] = '\0';

	return result;
}

char** split(const char* str, const char* separators, bool removeEmptyEntries = false)
{
	if (str == nullptr || separators == nullptr)
	{
		return nullptr;
	}

	size_t lenStr = strLen(str);

	size_t currentSize = 10;
	size_t currentCount = 0;
	char** splits = new char* [currentSize];
	
	int lastSeparatorIndex = -1;
	for (size_t i = 0; i < lenStr + 1; i++)
	{
		if (contains(separators, str[i]) || i == lenStr)
		{
			char* current = substring(str, lastSeparatorIndex + 1, i - lastSeparatorIndex - 1);

			lastSeparatorIndex = i;

			if (removeEmptyEntries && strLen(current) == 0)
			{
				delete[] current;
				continue;
			}

			currentCount++;
			resizeIfNecessary(splits, currentCount, currentSize);
			splits[currentCount - 1] = current;
		}
	}

	currentCount++;
	resizeIfNecessary(splits, currentCount, currentSize);
	splits[currentCount - 1] = nullptr;
	
	return splits;
}

int main()
{
	//char* str = readString();
	//std::cout << str;
	//delete[] str;
	

	//size_t n, m;
	//std::cin >> n >> m;
	//int** matrix = createMatrix(n, m);
	//readMatrix(matrix, n, m);
	//transposeMatrix(matrix, n, m);
	//printMatrix(matrix, m, n);
	//freeMatrix(matrix, m);


	//size_t n;
	//std::cin >> n;
	//int* arr = readArray(n);
	//
	//size_t k;
	//std::cin >> k;
	//
	//size_t subseqCount;
	//int** subseqs = getAllSubsequences(arr, n, k, subseqCount);

	
	char* str = readString();
	char** splits = split(str, " ", true);
	while (*splits != nullptr)
	{
		std::cout << *splits << std::endl;
		splits++;
	}
	
	delete[] str;

	while (*splits)
	{
		delete[] *splits;
		splits++;
	}

	delete[] splits;
}