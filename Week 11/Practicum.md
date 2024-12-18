#include <iostream>

//Declarations
//Exercise 1
int* printArrayBackwards(int* arr, int size);

//Exercise 2
int countElementsDividedByK(int* arr1, int* arr2, int size1, int size2, int k);
int* findArrWithNumsDividedByK(int* arr1, int size1, int* arr2, int size2, int k);

//Exercise 3
int* shiftArrayWithKPositions(int* arr, int size, int k);

//Exercise 4
int countElementsThatCanBeDivByAtLeastOneNeighbour(int* arr, int size);
int* arrWithElsThatCanBeDivByAtLeastOneNeighbour(int* arr, int size);

//Exercise 5
int findNewStrLen(const char* str1, int sizeStr1, const char* str2, int sizeStr2);
char* concateTwoStrings(const char* str1, int sizeStr1, const char* str2, int sizeStr2);

//Exercise 6
char* concatenateFirstAndLastWord(const char* input);

//Exercise 7
char* insertCharAtPositions(const char* input, const int* positions, int positionsCount, char S);

//Exercise 8
int* getSubarraySizes(int size, int totalSubarrays);
int* getSubarraySizes(int size, int totalSubarrays);
void printSubarrays(int** subarrays, int* subarraySizes, int totalSubarrays);
void printSubarrays(int** subarrays, int* subarraySizes, int totalSubarrays);
void freeMemory(int** subarrays, int* subarraySizes, int totalSubarrays);


//Definitions
//Exercise 1
int* printArrayBackwards(int* arr, int size) {
    int* newArr = new int[size];

    for (int i = size - 1; i >= 0; --i) {
        newArr[i] = arr[i];
        if (i == 0) {
            break;
        }
    }

    return newArr;
}

//Exercise 2
int countElementsDividedByK(int* arr1, int* arr2, int size1, int size2, int k) {
    int count = 0;
    for (int i = 0; i < size1; ++i) {
        if (arr1[i] % k == 0) {
            ++count;
        }
    }
    for (int j = 0; j < size2; ++j) {
        if (arr2[j] % k == 0) {
            ++count;
        }
    }

    return count;
}

int* findArrWithNumsDividedByK(int* arr1, int size1, int* arr2, int size2, int k) {
    int counter = countElementsDividedByK(arr1, arr2, size1, size2, k);
    int* newArr = new int[counter];
    int index = 0;

    for (int i = 0; i < size1; ++i) {
        if (arr1[i] % k == 0) {
            newArr[index++] = arr1[i];
        }
    }
    for (int j = 0; j < size2; ++j) {
        if (arr2[j] % k == 0) {
            newArr[index++] = arr2[j];
        }
    }

    return newArr;
}

//Exercise 3
int* shiftArrayWithKPositions(int* arr, int size, int k) {
    k = k % size;
    if (k < 0) {
        k += size;
    }

    int* shiftedArray = new int[size];

    for (int i = 0; i < size; i++) {
        int newIndex = (i + k) % size;
        shiftedArray[newIndex] = arr[i];
    }

    return shiftedArray;
}

//Exercise 4
int countElementsThatCanBeDivByAtLeastOneNeighbour(int* arr, int size) {
    int counter = 0;

    for (size_t i = 0; i < size; ++i) {
        if ((i > 0 && arr[i] % arr[i - 1] == 0) || (i < size - 1 && arr[i] % arr[i + 1] == 0)) {
            counter++;
        }
    }

    return counter;
}

int* arrWithElsThatCanBeDivByAtLeastOneNeighbour(int* arr, int size) {
    int count = countElementsThatCanBeDivByAtLeastOneNeighbour(arr, size);

    int* newArr = new int[count];

    for (size_t i = 0, j = 0; i < size; ++i) {
        if ((i > 0 && arr[i] % arr[i - 1] == 0) || (i < size - 1 && arr[i] % arr[i + 1] == 0)) {
            newArr[j++] = arr[i];
        }
    }

    return newArr;
}

//Exercise 5
bool isLowerCase(char c) {
    return c >= 'a' && c <= 'z';
}

bool isUpperCase(char c) {
    return c >= 'A' && c <= 'Z';
}

int findNewStrLen(const char* str1, int sizeStr1, const char* str2, int sizeStr2) {
    int counter = 0;

    for (int i = 0; i < sizeStr1; ++i) {
        if (isLowerCase(str1[i])) {
            counter++;
        }
    }

    for (int i = 0; i < sizeStr2; ++i) {
        if (isUpperCase(str2[i])) {
            counter++;
        }
    }

    return counter;
}

char* concateTwoStrings(const char* str1, int sizeStr1, const char* str2, int sizeStr2) {
    int newSize = findNewStrLen(str1, sizeStr1, str2, sizeStr2);

    if (newSize == 0) {
        return nullptr;
    }

    char* concatedString = new char[newSize + 1];

    int j = 0;

    for (int i = 0; i < sizeStr1; ++i) {
        if (isLowerCase(str1[i])) {
            concatedString[j] = str1[i];
            ++j;
        }
    }

    for (int i = 0; i < sizeStr2; ++i) {
        if (isUpperCase(str2[i])) {
            concatedString[j] = str2[i];
            ++j;
        }
    }

    concatedString[j] = '\0';

    return concatedString;
}

//Exercise 6
char* concatenateFirstAndLastWord(const char* input) {
    if (!input || *input == '\0') {
        return nullptr;
    }

    const char* firstWordStart = nullptr;
    const char* firstWordEnd = nullptr;
    const char* lastWordStart = nullptr;
    const char* lastWordEnd = nullptr;

    bool inWord = false;
    const char* current = input;

    while (*current != '\0') {
        if (*current == ' ' || *current == '\t' || *current == '\n') {
            inWord = false;
        }
        else {
            if (!inWord) {
                if (!firstWordStart) {
                    firstWordStart = current;
                }
                lastWordStart = current;
            }
            inWord = true;
            lastWordEnd = current;
        }
        ++current;
    }

    if (!firstWordStart || !lastWordStart) {
        return nullptr;
    }

    firstWordEnd = firstWordStart;
    while (firstWordEnd != lastWordEnd + 1 && *firstWordEnd != ' ' && *firstWordEnd != '\t' && *firstWordEnd != '\n') {
        ++firstWordEnd;
    }
    int firstWordLength = firstWordEnd - firstWordStart;

    lastWordEnd = lastWordStart;
    while (*lastWordEnd != '\0' && *lastWordEnd != ' ' && *lastWordEnd != '\t' && *lastWordEnd != '\n') {
        ++lastWordEnd;
    }
    int lastWordLength = lastWordEnd - lastWordStart;

    int newStringLength = firstWordLength + 1 + lastWordLength;
    char* result = new char[newStringLength + 1];

    for (int i = 0; i < firstWordLength; ++i) {
        result[i] = firstWordStart[i];
    }

    result[firstWordLength] = ' ';

    for (int i = 0; i < lastWordLength; ++i) {
        result[firstWordLength + 1 + i] = lastWordStart[i];
    }

    result[newStringLength] = '\0';

    return result;
}

//Exercise 7
char* insertCharAtPositions(const char* input, const int* positions, int positionsCount, char S) {
    if (!input || !positions || positionsCount < 0) {
        return nullptr;
    }

    int inputLength = 0;
    while (input[inputLength] != '\0') {
        ++inputLength;
    }

    int newLength = inputLength + positionsCount;

    char* result = new char[newLength + 1];

    int inputIndex = 0;
    int resultIndex = 0;

    for (int i = 0; i < newLength; ++i) {
        bool isInsertPosition = false;
        for (int j = 0; j < positionsCount; ++j) {
            if (positions[j] == resultIndex) {
                isInsertPosition = true;
                break;
            }
        }

        if (isInsertPosition) {
            result[resultIndex] = S;
        }
        else {
            result[resultIndex] = input[inputIndex];
            ++inputIndex;
        }
        ++resultIndex;
    }

    result[newLength] = '\0';

    return result;
}

//Exercise 8
int** generateSubarrays(int* arr, int size, int& totalSubarrays) {
    totalSubarrays = size * (size + 1) / 2;

    int** subarrays = new int* [totalSubarrays];

    int index = 0;
    for (int start = 0; start < size; ++start) {
        for (int end = start; end < size; ++end) {
            int subarraySize = end - start + 1;
            subarrays[index] = new int[subarraySize];
            for (int k = 0; k < subarraySize; ++k) {
                subarrays[index][k] = arr[start + k];
            }
            ++index;
        }
    }

    return subarrays;
}

int* getSubarraySizes(int size, int totalSubarrays) {
    int* sizes = new int[totalSubarrays];
    int index = 0;

    for (int start = 0; start < size; ++start) {
        for (int end = start; end < size; ++end) {
            sizes[index++] = end - start + 1;
        }
    }

    return sizes;
}

void printSubarrays(int** subarrays, int* subarraySizes, int totalSubarrays) {
    for (int i = 0; i < totalSubarrays; ++i) {
        std::cout << "[ ";
        for (int j = 0; j < subarraySizes[i]; ++j) {
            std::cout << subarrays[i][j] << " ";
        }
        std::cout << "]" << std::endl;
    }
}

void freeMemory(int** subarrays, int* subarraySizes, int totalSubarrays) {
    for (int i = 0; i < totalSubarrays; ++i) {
        delete[] subarrays[i];
    }
    delete[] subarrays;
    delete[] subarraySizes;
}


int main() {
    //Exercise 1
    /*int n;
    std::cout << "Enter the number of elements in your array: ";
    std::cin >> n;

    if (!std::cin || n <= 0) {
        std::cerr << "Invalid input! Please enter a positive integer." << std::endl;
        return 1;
    }

    int* arr = new int[n];
    std::cout << "Enter " << n << " elements:" << std::endl;

    for (int i = 0; i < n; ++i) {
        std::cin >> arr[i];
        if (!std::cin) {
            std::cerr << "Invalid input for array elements!" << std::endl;
            delete[] arr;
            return 1;
        }
    }

    std::cout << "Your array: " << std::endl;
    for (int i = 0; i < n; ++i) {
        std::cout << "arr[" << i << "]: " << arr[i] << std::endl;
    }

    std::cout << "Your array printed backwards: ";
    int* newArr = printArrayBackwards(arr, n);
    for(size_t i=0; i < n; ++i){
        std::cout << newArr[i] <<" ";
    }
    std::cout << std::endl;

    delete[] arr;
    delete[] newArr;*/

    //Exercise 2
    /*int size1, size2;
    std::cout << "Enter the size of your first array: ";
    std::cin >> size1;
    if (!std::cin || size1 < 0) {
        std::cerr << "Invalid input!" << std::endl;
        return 1;
    }

    std::cout << "Enter the elements in your first array: ";
    int* arr1 = new int[size1];
    for (size_t i = 0; i < size1; ++i) {
        std::cin >> arr1[i];
        if (!std::cin) {
            std::cout << "Invalid input!" << std::endl;
            return 1;
        }
    }

    std::cout << "Your first array: ";
    for (size_t i = 0; i < size1; ++i) {
        std::cout << arr1[i] << " ";
    }
    std::cout << std::endl;

    std::cout << "Enter the size of your second array: ";
    std::cin >> size2;
    if (!std::cin || size2 < 0) {
        std::cerr << "Invalid input!" << std::endl;
        return 1;
    }

    std::cout << "Enter the elements in your second array: ";
    int* arr2 = new int[size2];
    for (size_t i = 0; i < size2; ++i) {
        std::cin >> arr2[i];
        if (!std::cin) {
            std::cout << "Invalid input!" << std::endl;
            return 1;
        }
    }

    std::cout << "Your second array: ";
    for (size_t i = 0; i < size2; ++i) {
        std::cout << arr2[i] << " ";
    }
    std::cout << std::endl;

    std::cout << "Enter a number: ";
    int k;
    std::cin >> k;
    if (!std::cin) {
        std::cout << "Invalid input!" << std::endl;
        return 1;
    }

    int* result = findArrWithNumsDividedByK(arr1, size1, arr2, size2, k);

    std::cout << "Result array: ";
    int size = countElementsDividedByK(arr1, arr2, size1, size2, k);
    for (size_t i = 0; i < size; ++i) {
        std::cout << result[i] << " ";
    }

    std::cout << std::endl;

    delete[] arr1;
    delete[] arr2;
    delete[] result;*/

    //Exercise 3
    /*int size;
    std::cout << "Enter the size of your array: ";
    std::cin >> size;
    if (!std::cin || size < 0) {
        std::cerr << "Invalid input!" << std::endl;
        return 1;
    }
    int* arr = new int[size];
    std::cout << "Enter the elements in yourt array: ";
    for (size_t i = 0; i < size; ++i) {
        std::cin >> arr[i];
        if (!std::cin) {
            std::cerr << "Invalid input!" << std::endl;
            return 1;
        }
    }

    std::cout << "Original array: ";
    for (size_t i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    std::cout << "Enter the number of positions you want to shift your array with: ";
    int k;
    std::cin >> k;
    if (!std::cin) {
        std::cerr << "Invalid input!" << std::endl;
        return 1;
    }

    int* shiftedArr = shiftArrayWithKPositions(arr, size, k);
    for (size_t i = 0; i < size; ++i) {
        std::cout << shiftedArr[i] << " ";
    }

    delete[] arr;
    delete[] shiftedArr;*/

    //Exercise 4
    /*int size;
    std::cout << "Enter the size of your array: ";
    std::cin >> size;
    if (!std::cin || size < 0) {
        std::cerr << "Invalid input!" << std::endl;
        return 1;
    }

    int* arr = new int[size];
    std::cout << "Input the elements in your array: ";
    for (size_t i = 0; i < size; ++i) {
        std::cin >> arr[i];
        if (!std::cin) {
            std::cerr << "Invalid input!" << std::endl;
            return 1;
        }
    }

    std::cout << "Print elements in your array: ";
    for (size_t i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    int* result = arrWithElsThatCanBeDivByAtLeastOneNeighbour(arr, size);
    int resSize = countElementsThatCanBeDivByAtLeastOneNeighbour(arr, size);

    std::cout << "Print elements that can be divided by at leat one of their neighbours: ";
    for (size_t i = 0; i < resSize; ++i) {
        std::cout << result[i] << " ";
    }
    
    delete[] arr;
    delete[] result; */

    //Exercise 5
    /*int sizeStr1, sizeStr2;

    std::cout << "Enter the size of your first string: ";
    std::cin >> sizeStr1;
    if (!std::cin || sizeStr1 < 0) {
        std::cerr << "Invalid input!" << std::endl;
        return 1;
    }

    char* str1 = new char[sizeStr1 + 1];
    std::cout << "Input the elements in your first string: ";
    std::cin.ignore();
    std::cin.getline(str1, sizeStr1 + 1);
    std::cout << "Your first string: " << str1 << std::endl;

    std::cout << "Enter the size of your second string: ";
    std::cin >> sizeStr2;
    if (!std::cin || sizeStr2 < 0) {
        std::cerr << "Invalid input!" << std::endl;
        delete[] str1;
        return 1;
    }

    char* str2 = new char[sizeStr2 + 1];
    std::cout << "Input the elements in your second string: ";
    std::cin.ignore();
    std::cin.getline(str2, sizeStr2 + 1);
    std::cout << "Your second string: " << str2 << std::endl;

    char* newStr = concateTwoStrings(str1, sizeStr1, str2, sizeStr2);

    if (newStr) {
        std::cout << "Resulting concatenated string: " << newStr << std::endl;
        delete[] newStr;
    }
    else {
        std::cout << "No valid characters to concatenate!" << std::endl;
    }

    delete[] str1;
    delete[] str2;
    delete[] newStr;*/

    //Exercise 6
    /*int sizeStr;

    std::cout << "Enter the size of your string: ";
    std::cin >> sizeStr;
    if (!std::cin || sizeStr < 0) {
        std::cerr << "Invalid input!" << std::endl;
        return 1;
    }

    char* str = new char[sizeStr + 1];
    std::cout << "Input the elements in your string: ";
    std::cin.ignore();
    std::cin.getline(str, sizeStr + 1);
    std::cout << "Your string: " << str << std::endl;

    char* newStr = concatenateFirstAndLastWord(str);

    if (newStr) {
        std::cout << "Resulting concatenated string: " << newStr << std::endl;
        delete[] newStr;
    }
    else {
        std::cout << "No valid characters to concatenate!" << std::endl;
    }

    delete[] str;
    delete[] newStr;*/

    //Exercise 7
    /*int sizeStr;

    std::cout << "Enter the size of your string: ";
    std::cin >> sizeStr;
    if (!std::cin || sizeStr < 0) {
        std::cerr << "Invalid input!" << std::endl;
        return 1;
    }

    char* input = new char[sizeStr + 1];
    std::cout << "Input the elements in your string: ";
    std::cin.ignore();
    std::cin.getline(input, sizeStr + 1);
    std::cout << "Your string: " << input << std::endl;

    int positionsCount;
    std::cout << "Enter the number of positions: ";
    std::cin >> positionsCount;

    if (positionsCount < 0) {
        std::cerr << "Invalid number of positions!" << std::endl;
        return 1;
    }

    int* positions = new int[positionsCount];
    std::cout << "Enter the positions: ";
    for (int i = 0; i < positionsCount; ++i) {
        std::cin >> positions[i];
    }

    char S;
    std::cout << "Enter the character to insert: ";
    std::cin >> S;

    char* result = insertCharAtPositions(input, positions, positionsCount, S);

    if (result) {
        std::cout << "Result: " << result << std::endl;
        delete[] result;
    }
    else {
        std::cout << "Error creating the new string!" << std::endl;
    }

    delete[] positions;
    delete[] result;
    delete[] input;*/

    //Exercise 8
    /*int size;
    std::cout << "Enter the size of the array: ";
    std::cin >> size;

    if (!std::cin || size <= 0) {
        std::cerr << "Invalid array size!" << std::endl;
        return 1;
    }

    int* arr = new int[size];
    std::cout << "Enter the elements of the array: ";
    for (int i = 0; i < size; ++i) {
        std::cin >> arr[i];
    }

    int totalSubarrays;
    int** subarrays = generateSubarrays(arr, size, totalSubarrays);
    int* subarraySizes = getSubarraySizes(size, totalSubarrays);

    std::cout << "All non-empty subarrays:" << std::endl;
    printSubarrays(subarrays, subarraySizes, totalSubarrays);

    freeMemory(subarrays, subarraySizes, totalSubarrays);
    delete[] arr;*/

    return 0;
}
