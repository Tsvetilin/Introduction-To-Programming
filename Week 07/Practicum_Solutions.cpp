#include <iostream>

const size_t ARRAY_SIZE = 10;

void writeArray(char* arr, size_t size)
{
	for (size_t i = 0; i < size; i++)
	{
		std::cin >> arr[i];
	}
}

void printArray(char* arr, size_t size)
{
	for (size_t i = 0; i < size; i++)
	{
		std::cout << arr[i] << " ";
	}
	std::cout << "\n";
}

void swap(char& a, char& b)
{
	char temp = a;
	a = b;
	b = temp;
}

int charToNum(char symbol)
{
	if ('0' <= symbol && symbol <= '9')
		return symbol - '0';
	else if ('A' <= symbol && symbol <= 'Z' || 'a' <= symbol && symbol <= 'z')
		return symbol - 'A' + 10;
	return -1;
}

char numToChar(int number)
{
	if (0 <= number && number <= 9)
		return number + '0';
	else if (charToNum('A') <= number && number <= charToNum('Z'))
		return number + 'A' - 10;
	return '\0';
}


// Ex. 1
void incrementOnce(char* arr, int size, int numSys)
{
	int i = size - 1;
	while (i >= 0)
	{
		int number = charToNum(arr[i]);
		if (number < numSys - 1)
		{
			arr[i] = numToChar(number + 1);
			break;
		}
		arr[i] = '0';
		i--;
	}
}


// Ex. 2
void decrementOnce(char* arr, int size, int numSys)
{
	int i = size - 1;
	while (i >= 0)
	{
		int number = charToNum(arr[i]);
		if (number > 0)
		{
			arr[i] = numToChar(number - 1);
			break;
		}
		arr[i] = numToChar(numSys - 1);
		i--;
	}
}


// Ex. 3
void sumNumSys(char* num1, char* num2, int size, int numSys, char* sumArray)
{
	int i = size - 1;
	int transfer = 0;
	while (i >= 0)
	{
		int sum = charToNum(num1[i]) + charToNum(num2[i]) + transfer;
		transfer = sum / numSys;
		sumArray[i] = numToChar(sum % numSys);
		i--;
	}
}


// Ex. 4
void reverse(char* arr, int size)
{
	for (int i = 0; i < size / 2; i++)
	{
		swap(arr[i], arr[size - i - 1]);
	}
}

void decToNumSys(unsigned num, int numSys, char* inNumSys, int& numLength)
{
	numLength = 0;
	while (num)
	{
		inNumSys[numLength] = numToChar(num % numSys);
		num /= numSys;
		numLength++;
	}

	reverse(inNumSys, numLength);
}

bool isPalindrome(unsigned num, int numSys)
{
	char arr[ARRAY_SIZE];
	int arrLength = 0;
	decToNumSys(num, numSys, arr, arrLength);

	printArray(arr, arrLength);
	for (int i = 0; i < arrLength / 2; i++)
	{
		if (arr[i] != arr[arrLength - i - 1])
		{
			return false;
		}
	}
	return true;
}


// Ex. 5
unsigned numSysToDec(char* arr, int size, int numSys)
{
	unsigned dec = 0;
	for (int i = size - 1, mult = 1; i >= 0; i--, mult *= numSys)
	{
		dec += charToNum(arr[i]) * mult;
	}
	return dec;
}

bool areEqualNumSys(char* num1, int size1, int numSys1,
	char* num2, int size2, int numSys2)
{
	unsigned dec1 = numSysToDec(num1, size1, numSys1);
	std::cout << dec1 << "\n";
	unsigned dec2 = numSysToDec(num2, size2, numSys2);
	std::cout << dec2 << "\n";

	return dec1 == dec2;
}


// Ex. LIVE DEMO
void fromToNumSys(char* from, int fromSize, int fromNumSys,
	char* to, int& toSize, int toNumSys)
{
	unsigned dec = numSysToDec(from, fromSize, fromNumSys);
	decToNumSys(dec, toNumSys, to, toSize);
}

int main()
{
	// Ex. 1
	/*size_t size;
	std::cin >> size;

	char arr[ARRAY_SIZE];
	writeArray(arr, size);

	int numSys;
	std::cin >> numSys;

	incrementOnce(arr, size, numSys);

	printArray(arr, size);*/


	// Ex. 2
	/*size_t size;
	std::cin >> size;

	char arr[ARRAY_SIZE];
	writeArray(arr, size);

	int numSys;
	std::cin >> numSys;

	decrementOnce(arr, size, numSys);

	printArray(arr, size);*/


	// Ex. 3
	/*size_t size;
	std::cin >> size;

	char num1[ARRAY_SIZE];
	writeArray(num1, size);

	char num2[ARRAY_SIZE];
	writeArray(num2, size);

	int numSys;
	std::cin >> numSys;

	char sum[ARRAY_SIZE];

	sumNumSys(num1, num2, size, numSys, sum);

	printArray(sum, size);*/


	// Ex. 4
	/*unsigned num;
	int numSys;
	std::cin >> num >> numSys;

	if (isPalindrome(num, numSys))
	{
		std::cout << "The number is a palindrome\n";
		return 0;
	}
	std::cout << "The number is NOT a palindrome\n";*/


	// Ex. 5
	/*size_t size1;
	std::cin >> size1;
	char num1[ARRAY_SIZE];
	writeArray(num1, size1);
	int numSys1;
	std::cin >> numSys1;

	size_t size2;
	std::cin >> size2;
	char num2[ARRAY_SIZE];
	writeArray(num2, size2);
	int numSys2;
	std::cin >> numSys2;

	std::cout << areEqualNumSys(num1, size1, numSys1, num2, size2, numSys2);*/

	
	// Ex. LIVE DEMO
	/*size_t fromSize;
	std::cin >> fromSize;
	char from[ARRAY_SIZE];
	writeArray(from, fromSize);
	int fromNumSys, toNumSys;
	std::cin >> fromNumSys >> toNumSys;

	char to[ARRAY_SIZE];
	int toSize = 0;
	fromToNumSys(from, fromSize, fromNumSys, to, toSize, toNumSys);
	printArray(to, toSize);*/
}
