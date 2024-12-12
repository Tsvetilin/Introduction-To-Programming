#include <iostream>

const int ARRAY_SIZE = 128;

void swap(int& a, int& b)
{
    int temp = a;
    a = b;
    b = temp;
}

void writeArray(int* arr, int length)
{
    for (size_t i = 0; i < length; i++)
    {
        std::cin >> arr[i];
    }
}

void printArray(int* arr, size_t length)
{
    for (size_t i = 0; i < length; i++)
    {
        std::cout << arr[i] << " ";
    }
    std::cout << "\n";
}

void selectionSort(int* arr, size_t len)
{
    for (int i = 0; i < len - 1; i++)
    {
        size_t minIndex = i;
        for (int j = i; j < len; j++)
        {
            if (arr[minIndex] > arr[j])
            {
                minIndex = j;
            }
        }
        if (minIndex != i)
            swap(arr[i], arr[minIndex]);
    }
}

// Ex. 1
void removeAt(int* arr, size_t& length, size_t index)
{
    for (int i = index; i < length - 1; i++)
    {
        arr[i] = arr[i + 1];
    }
    length -= 1;
}


// Ex. 2
int fillIndex(int* arr, size_t length, int* result, size_t from, size_t to)
{
    if (to < 0)
        return 0;
    int resultLength = 0;
    if (length < to)
    {
        for (size_t i = from; i < length; i++)
        {
            result[i - from] = arr[i];
            resultLength++;
        }
        return resultLength;
    }
    for (size_t i = from; i <= to; i++)
    {
        result[i - from] = arr[i];
        resultLength++;
    }

    return resultLength;
}


// Ex. 3
bool isPalindrome(int* arr, size_t length)
{
    int reverseArr[ARRAY_SIZE];
    for (int i = 0, j = length - 1; i < length && j >= 0; i++, j--)
    {
        reverseArr[i] = arr[j];
    }

    for (int i = 0; i < length; i++)
    {
        if (arr[i] != reverseArr[i])
            return false;
    }
    return true;
}


// Ex. 4
int longestSequence(int* arr, size_t length)
{
    int max = 0, current = 1;
    for (int i = 1; i < length; i++)
    {
        if (arr[i] == arr[i - 1])
        {
            current++;
            continue;
        }
        if (max < current)
        {
            swap(max, current);
        }
        current = 1;
    }
    return max > current ? max : current;
}


// Ex. 5
void removeNegative(int* arr, size_t& length)
{
    for (size_t i = 0; i < length; i++)
    {
        if (arr[i] < 0)
        {
            removeAt(arr, length, i);
            i--;
        }
    }
}


// Ex. 6
bool isSubArray(int* arr, size_t arrLength, int* subArray, size_t subArrayLength)
{
    for (int i = 0; i < arrLength - subArrayLength + 1; i++)
    {
        bool isSubArray = true;
        for (int j = 0; j < subArrayLength; j++)
        {
            if (subArray[j] != arr[i + j])
            {
                isSubArray = false;
                break;
            }
        }
        if (isSubArray)
            return true;
    }
    return false;
}


// Ex. 7
void mergeSort(int* arr1, size_t len1, int* arr2, size_t len2, int* result, size_t& resultLength)
{
    size_t resultIndex = 0, arr1Index = 0, arr2Index = 0;
    while (arr1Index < len1 && arr2Index < len2)
    {
        if (arr1[arr1Index] < arr2[arr2Index])
        {
            result[resultIndex++] = arr1[arr1Index++];
        }
        else
        {
            result[resultIndex++] = arr2[arr2Index++];
        }
        resultLength++;
    }

    while (arr1Index < len1)
    {
        result[resultIndex++] = arr1[arr1Index++];
        resultLength++;
    }
    while (arr2Index < len2)
    {
        result[resultIndex++] = arr2[arr2Index++];
        resultLength++;
    }
}


// Ex. 8
void arraysUnion(int* arr1, size_t len1, int* arr2, size_t len2, int* result, size_t& resultLength)
{
    selectionSort(arr1, len1); selectionSort(arr2, len2);
    size_t resultIndex = 0, arr1Index = 0, arr2Index = 0;
    while (arr1Index < len1 && arr2Index < len2)
    {
        if (arr1[arr1Index] < arr2[arr2Index])
        {
            if (resultIndex == 0 || result[resultIndex - 1] != arr1[arr1Index])
            {
                result[resultIndex++] = arr1[arr1Index];
                resultLength++;
            }
            arr1Index++;
        }
        else if(arr2[arr2Index] < arr1[arr1Index])
        {
            if (resultIndex == 0 || result[resultIndex - 1] != arr2[arr2Index])
            {
                result[resultIndex++] = arr2[arr2Index];
                resultLength++;
            }
            arr2Index++;
        }
        else
        {
            if (resultIndex == 0 || result[resultIndex - 1] != arr1[arr1Index])
            {
                result[resultIndex++] = arr1[arr1Index];
                resultLength++;
            }
            arr1Index++;
            arr2Index++;
        }
    }

    while (arr1Index < len1)
    {
        if (resultIndex == 0 || result[resultIndex - 1] != arr1[arr1Index])
        {
            result[resultIndex++] = arr1[arr1Index];
            resultLength++;
        }
        arr1Index++;
    }
    while (arr2Index < len2)
    {
        if (resultIndex == 0 || result[resultIndex - 1] != arr2[arr2Index])
        {
            result[resultIndex++] = arr2[arr2Index];
            resultLength++;
        }
        arr2Index++;
    }
}


// Ex. 9
void arraysSection(int* arr1, size_t len1, int* arr2, size_t len2, int* result, size_t& resultLength)
{
    selectionSort(arr1, len1); selectionSort(arr2, len2);
    size_t resultIndex = 0, arr1Index = 0, arr2Index = 0;
    while (arr1Index < len1 && arr2Index < len2)
    {
        if (arr1[arr1Index] < arr2[arr2Index])
        {   
            arr1Index++;
        }
        else if(arr2[arr2Index] < arr1[arr1Index])
        {
            arr2Index++;
        }
        else
        {
            if (resultIndex == 0 || result[resultIndex - 1] != arr1[arr1Index])
            {
                result[resultIndex++] = arr1[arr1Index];
                resultLength++;
            }
            arr1Index++;
            arr2Index++;
        }
    }
}

int main()
{
    // Ex. 1
    /*size_t length;
    std::cin >> length;

    int arr[ARRAY_SIZE];
    writeArray(arr, length);

    size_t index;
    std::cin >> index;
    removeAt(arr, length, index);

    printArray(arr, length);*/


    // Ex. 2
    /*size_t length;
    std::cin >> length;

    int arr[ARRAY_SIZE], result[ARRAY_SIZE];
    writeArray(arr, length);

    size_t from, to;
    std::cin >> from >> to;
    size_t resultLength = fillIndex(arr, length, result, from, to);
    printArray(result, resultLength);*/


    // Ex. 3
    /*size_t length;
    std::cin >> length;
    int arr[ARRAY_SIZE];
    writeArray(arr, length);

    if(isPalindrome(arr, length))
        std::cout << "yes";
    else
        std::cout << "no";*/


    // Ex. 4
    /*size_t length;
    std::cin >> length;
    int arr[ARRAY_SIZE];
    writeArray(arr, length);
    std::cout << longestSequence(arr, length);*/


    // Ex. 5
    /*size_t length;
    std::cin >> length;
    int arr[ARRAY_SIZE];
    writeArray(arr, length);
    removeNegative(arr, length);
    printArray(arr, length);*/


    // Ex. 6
    /*size_t arrLength, subArrayLength;
    std::cin >> arrLength >> subArrayLength;
    int arr[ARRAY_SIZE], subArray[ARRAY_SIZE];
    writeArray(arr, arrLength); writeArray(subArray, subArrayLength);
    std::cout << isSubArray(arr, arrLength, subArray, subArrayLength);*/


    // Ex. 7
    /*size_t len1, len2;
    std::cin >> len1 >> len2;
    int arr1[ARRAY_SIZE], arr2[ARRAY_SIZE];
    writeArray(arr1, len1); writeArray(arr2, len2);
    int result[ARRAY_SIZE];
    size_t resultLength = 0;
    mergeSort(arr1, len1, arr2, len2, result, resultLength);
    printArray(result, resultLength);*/


    // Ex. 8
    /*size_t len1, len2;
    std::cin >> len1 >> len2;
    int arr1[ARRAY_SIZE], arr2[ARRAY_SIZE];
    writeArray(arr1, len1); writeArray(arr2, len2);
    int result[ARRAY_SIZE];
    size_t resultLength = 0;
    arraysUnion(arr1, len1, arr2, len2, result, resultLength);
    printArray(result, resultLength);*/


    // Ex. 9
    /*size_t len1, len2;
    std::cin >> len1 >> len2;
    int arr1[ARRAY_SIZE], arr2[ARRAY_SIZE];
    writeArray(arr1, len1); writeArray(arr2, len2);
    int result[ARRAY_SIZE];
    size_t resultLength = 0;
    arraysSection(arr1, len1, arr2, len2, result, resultLength);
    printArray(result, resultLength);*/
}
