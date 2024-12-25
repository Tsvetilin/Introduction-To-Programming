
#include <iostream>

const size_t SIZE = 100;

void read(int arr[], size_t length)
{
	for (size_t i = 0; i < length; i++)
	{
		std::cin >> arr[i];
	}
}

void print(int arr[], size_t length)
{
	for (size_t i = 0; i < length; i++)
	{
		std::cout << arr[i] << " ";
	}
	std::cout << std::endl;
}

void swap(int& i, int& j)
{
	int temp = i;
	i = j;
	j = temp;
}

void selectionSort(int arr[], size_t length)
{
	for(size_t i = 0; i < length - 1; i++)
	{
		size_t minIndex = i;
		for(size_t j = i; j < length; j++)
		{
			if(arr[j] < arr[minIndex])
			{
				minIndex = j;
			}
		}
		if(minIndex != i)
		{
			swap(arr[i], arr[minIndex]);
		}
	}
}

// 1
void removeIndex(int arr[], size_t& length, size_t index)
{
	for (size_t i = index; i < length - 1; i++)
	{
		arr[i] = arr[i + 1];
	}
	length--;
}

// 2
void filterArrayByRange(int arr[], int result[],size_t length, size_t& resultLength, size_t a, size_t b)
{
	if(a > b) return;
	if( a >= length) return;
	if (b >= length)
	{
		b = length - 1;
	}
	
	resultLength = 0;

	for (size_t i = a; i <= b; i++)
	{
		result[resultLength++] = arr[i];
	}
	
}


// 3
bool isSym(int arr[], size_t length)
{

	for (size_t i = 0; i < length / 2; i++)
	{
		if (arr[i] != arr[length - i - 1])
		{
			return false;
		}
		
	}
return true;
}

// 4
size_t longestEqualSequenceLength(int arr[], size_t length)
{
	int currentLength = 1;
	int maxLength = 1;

	for (size_t i = 0; i < length - 1; i++)
	{
		if(arr[i] == arr[i + 1])
		{
			currentLength++;
		}
		else
		{
			if(currentLength > maxLength)
			{
				maxLength = currentLength;
			}
			currentLength = 1;
		}
	}
	
	if (currentLength > maxLength) 
	{
        maxLength = currentLength;
    }

    return maxLength;
}

// 5
void filterNegativeNumbers(int arr[], size_t length, size_t &newLength)
{
	newLength = 0;
	for(size_t i = 0; i < length; i++)
	{
		if(arr[i] >= 0)
		{
			arr[newLength] = arr[i];
			newLength++;
		}
	}
}

// 6
bool isArr2ASubarrayOfArr1(int arr1[], int arr2[], size_t length1,size_t length2)
{
	if(length2 > length1)
	{
		return false;
	}

	 for (size_t i = 0; i <= length1 - length2; i++) {
        bool isSubarray = true;
        
        for (size_t j = 0; j < length2; j++) {
            if (arr1[i + j] != arr2[j]) {
                isSubarray = false;
                break;
            }
        }

        if (isSubarray) {
            return true;
        }
    }

    return false; 
}

// 7
void mergeSortedArrays(const int arr1[], size_t length1, const int arr2[], size_t length2, int result[], size_t& resultLength)
{
	size_t i = 0;
	size_t j = 0;
	resultLength = 0;

	// Check if array is sorted.
	for (i = 0; i < length1 - 1; i++)
	{
		if(arr1[i] > arr1[i + 1])
		{
			return;
		}
	}

	for (j = 0; j < length2 - 1; j++)
	{
		if(arr2[j] > arr2[j + 1])
		{
			return;
		}
	}

	i = 0; 
	j = 0;

	while(i < length1 && j < length2)
	{
		if(arr1[i] < arr2[j])
		{
			result[resultLength++] = arr1[i++];
		}
		else if(arr1[i] > arr2[j])
		{
			result[resultLength++] = arr2[j++];
		}
		else
		{
			result[resultLength++] = arr1[i++];
			j++;
		}
	}

	while(i < length1)
	{
		result[resultLength++] = arr1[i++];
	}

	while(j < length2)
	{
		result[resultLength++] = arr2[j++];
	}
}

// 8
void arraysUnion(int arr1[], size_t length1,int arr2[], size_t length2, int result[], size_t& newLength)
{
	selectionSort(arr1, length1); selectionSort(arr2, length2);
	size_t i = 0;
	size_t j = 0;
	size_t k = 0;

	while(i < length1 && j < length2)
	{
		if(i > 0 && arr1[i] == arr1[i - 1])
		{
			i++;
		}
		if(j > 0 && arr2[j] == arr2[j - 1])
		{
			j++;
		}
		if(arr1[i] < arr2[j])
		{
			result[k++] = arr1[i++];
		}
		else if(arr1[i] > arr2[j])
		{
			result[k++] = arr2[j++];
		}
		else
		{
			result[k++] = arr1[i++];
			// result[k++] = arr2[j++]; The difference compared to the previous task, without duplication.
			j++;
		}
		newLength++;
	}

	while(i < length1)
	{
		result[k++] = arr1[i++];
		newLength++;
	}

	while(j < length2)
	{
		result[k++] = arr2[j++];
		newLength++;
	}
}

// 9
void arraysIntersection(int arr1[], size_t length1, int arr2[], size_t length2, int result[], size_t& resultLength)
{
	selectionSort(arr1, length1); selectionSort(arr2, length2);
	size_t i = 0;
	size_t j = 0;
	size_t k = 0;

	while(i < length1 && j < length2)
	{
		if(arr1[i] < arr2[j])
		{
			i++;
		}
		else if(arr1[i] > arr2[j])
		{
			j++;
		}
		else
		{
			if(k == 0 || result[k - 1] != arr1[i])
			{
				result[k++] = arr1[i];
				resultLength++;
			}
			i++;
			j++;
		}
	}
}

int main()
{
	//1
	// int arr[] ={33, 1, 23, 8, 54, 5, 1, 6};
	// size_t length = sizeof(arr) / sizeof(arr[0]);
	// size_t index = 3;
	// removeIndex(arr, length, index);
	// print(arr, length);

	// 2
	// int arr[] = {5, 7, 1, 4, 3, 9, 10};
	// int result[SIZE];
	// size_t length = sizeof(arr) / sizeof(arr[0]);
	// size_t resultLength = 0;
	// size_t a = 2, b = 8;
	// filterArrayByRange(arr, result, length, resultLength, a, b);
	
	// print(result, resultLength);

	// 3
	// int arr[] = {1, 2, 3, 2, 1};
	// size_t length = sizeof(arr) / sizeof(arr[0]);
	// bool result = isSym(arr, length);

	// std::cout << (result ? "Yes" : "No") << std::endl;

	//4
	// int arr[] = {3, 3, 2, 2, 2, 5, 2, 2, 3, 3, 3};
	// size_t length = sizeof(arr) / sizeof(arr[0]);
	// std::cout << longestEqualSequenceLength(arr, length);

	// 5
	// int arr[] = {1, -4, 4, -5, -9, 2, 10};
	// size_t length = sizeof(arr) / sizeof(arr[0]);
	// size_t newLength = 0;
	// filterNegativeNumbers(arr, length, newLength);
	// print(arr, newLength);

	// 6
	// int arr1[] = {1, 4, 4, 0, 4, 2};
	// int arr2[] = {4, 0, 4};
	// size_t length1 = sizeof(arr1) / sizeof(arr1[0]);
	// size_t length2 = sizeof(arr2) / sizeof(arr2[0]);
	// bool result = isArr2ASubarrayOfArr1(arr1, arr2, length1, length2);

	// std::cout << (result ? "Yes" : "No") << std::endl;

	// 7
	// int arr1[] = {1, 5, 7, 8};
	// int arr2[] = {2, 3, 9};
	// int result[SIZE];
	// size_t length1 = sizeof(arr1) / sizeof(arr1[0]);
	// size_t length2 = sizeof(arr2) / sizeof(arr2[0]);
	// size_t resultLength = 0;
	// mergeSortedArrays(arr1, length1, arr2, length2, result, resultLength);

	// print(result, resultLength);

	// 8
	// int arr1[] = {1, 4, 5, 7, 8, 9};
    // int arr2[] = {2, 3, 4, 4, 7, 9};
    // size_t length1 = sizeof(arr1) / sizeof(arr1[0]);
    // size_t length2 = sizeof(arr2) / sizeof(arr2[0]);
    // int result[SIZE]; 
	// size_t resultLength = 0;
    // arraysUnion(arr1, length1, arr2, length2, result, resultLength);

	// print(result, resultLength);

	// 9
	// int arr1[] = {1, 4, 5, 7, 8, 9};
    // int arr2[] = {2, 3, 4, 4, 7, 9};
    // size_t length1 = sizeof(arr1) / sizeof(arr1[0]);
    // size_t length2 = sizeof(arr2) / sizeof(arr2[0]);
    // int result[SIZE];  // Allocate result array large enough to hold all elements
	// size_t resultLength = 0;
    // arraysIntersection(arr1, length1, arr2, length2, result, resultLength);

    // print(result, resultLength);

	return 0;
}
