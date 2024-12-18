#include <iostream>

const size_t COMMAND_SIZE = 1024;
const size_t OPERATION_SIZE = COMMAND_SIZE / 4;
const size_t OPERATION_COUNT = COMMAND_SIZE / 3;
const size_t NUMBER_SIZE = 5;

size_t getLength(const char* str)
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

void strCopy(char* from, char* to)
{
	if (!from || !to) return;

	while (*from)
	{
		*to++ = *from++;
	}
	*to = '\0';
}

int strComp(const char* a, const char* b)
{
	if (!a || !b) return INT_MAX;

	while (*a && *b)
	{
		if (*a != *b)
			return *a - *b;
		a++;
		b++;
	}
	return *a - *b;
}

void freeMatrix(char** arr, size_t size)
{
	for (size_t i = 0; i < size; i++)
	{
		delete[] arr[i];
	}
	delete[] arr;
}

bool isDigit(const char sym)
{
	return '0' <= sym && sym <= '9';
}

int charToDigit(const char sym)
{
	if (isDigit(sym))
		return sym - '0';
	return sym;
}

int strToNum(const char* str)
{
	if (!str) return 0;

	int result = 0;
	size_t length = getLength(str);
	for (size_t i = 0, mult = 1; i < length; i++, mult *= 10)
	{
		result += charToDigit(str[length - i - 1]) * mult;
	}
	return result;
}

void swap(char& a, char& b)
{
	char temp = a;
	a = b;
	b = temp;
}

void reverse(char* str)
{
	size_t length = getLength(str);
	for (size_t i = 0; i < length / 2; i++)
	{
		swap(str[i], str[length - i - 1]);
	}
}

char numToChar(int num)
{
	if (0 <= num && num <= 9)
		return num + '0';
	return num;
}

char* numToStr(int num)
{
	char* result = new char[NUMBER_SIZE];
	char* resultPtr = result;
	while (num)
	{
		*resultPtr++ = numToChar(num % 10);
		num /= 10;
	}
	*resultPtr = '\0';
	reverse(result);
	
	char* fixedResult = new char[getLength(result) + 1];
	strCopy(result, fixedResult);
	delete[] result;

	return fixedResult;
}

void toLower(char* str)
{
	if (!str) return;

	while (*str)
	{
		if ('A' <= *str && *str <= 'Z')
			*str = *str - 'A' + 'a';
		str++;
	}
}

char** getOperations(char* command, size_t& count)
{
	if (!command) return nullptr;

	char** operations = new char*[OPERATION_COUNT];
	count = 0;
	size_t operationIndex = 0;
	char* tempStr = new char[OPERATION_SIZE];
	while (*command)
	{
		if (isDigit(*command))
		{
			if (!operationIndex)
			{
				command++;
				continue;
			}
			tempStr[operationIndex] = '\0';
			operations[count++] = tempStr;
			tempStr = new char[OPERATION_SIZE];
			operationIndex = 0;
			command++;
			continue;
		}
		tempStr[operationIndex++] = *command;
		command++;
	}
	if(operationIndex)
	{
		operations[count++] = tempStr;
		tempStr = new char[OPERATION_SIZE];
		operationIndex = 0;
	}

	char** fixedOperations = new char* [count];
	for (size_t i = 0; i < count; i++)
	{
		char* fixedOperation = new char[getLength(operations[i])];
		strCopy(operations[i], fixedOperation);
		fixedOperations[i] = fixedOperation;
	}
	freeMatrix(operations, count);
	delete[] tempStr;

	return fixedOperations;
}

int* getNumbers(char* command)
{
	if (!command) return nullptr;

	int* numbers = new int[OPERATION_COUNT];
	size_t count = 0;
	char* currNum = new char[NUMBER_SIZE];
	size_t currNumIndex = 0;
	bool isNewNumber = false;
	while (*command)
	{
		if (!isDigit(*command))
		{
			if (!isNewNumber)
			{
				command++;
				continue;
			}
			currNum[currNumIndex] = '\0';
			numbers[count++] = strToNum(currNum);
			delete[] currNum;
			currNum = new char[NUMBER_SIZE];
			currNumIndex = 0;
			isNewNumber = false;
			command++;
			continue;
		}
		currNum[currNumIndex++] = *command++;
		isNewNumber = true;
	}
	if (isNewNumber)
	{
		currNum[currNumIndex] = '\0';
		numbers[count++] = strToNum(currNum);
		delete[] currNum;
	}

	int* fixedNumbers = new int[count];
	for (size_t i = 0; i < count; i++)
	{
		fixedNumbers[i] = numbers[i];
	}
	delete[] numbers;

	return fixedNumbers;
}

int executeCommand(char* command)
{
	if (!command) return 0;

	toLower(command);
	size_t operationsCount = 0;
	char** operations = getOperations(command, operationsCount);
	int* digits = getNumbers(command);
	int result = digits[0];
	for (size_t i = 0; i < operationsCount; i++)
	{
		if (!strComp(operations[i], "add"))
		{
			result += digits[i + 1];
		}
		else if (!strComp(operations[i], "subtract"))
		{
			result -= digits[i + 1];
		}
		else if (!strComp(operations[i], "multiply"))
		{
			result *= digits[i + 1];
		}
		else if (!strComp(operations[i], "divide"))
		{
			if (digits[i + 1] == 0)
			{
				result = 0;
				continue;
			}
			result /= digits[i + 1];
		}
	}

	return result;
}

bool isInStart(const char* str, const char* search)
{
	if (!str || !search) return false;

	while (*str && *search)
	{
		if (*str != *search)
			return false;
		str++;
		search++;
	}
	return true;
}

char* createLastCommand(char* command, int* numbers, size_t operationsCount)
{
	if (!numbers || !command) return nullptr;

	char* result = new char[OPERATION_SIZE];
	char* resultPtr = result;
	char** strNumbers = new char* [operationsCount + 1];
	for (size_t i = 0; i < operationsCount + 1; i++)
	{
		strNumbers[i] = numToStr(numbers[i]);
	}

	size_t numIndex = 0;
	size_t elementIndex = 0;
	char possibleOperations[][10] = {
		{ "add" },
		{ "subtract" },
		{ "multiply" },
		{ "divide" }
	};
	unsigned short possibleOperationsCount = 4;
	while (*command)
	{
		while (strNumbers[numIndex][elementIndex] && *strNumbers[numIndex])
		{
			*resultPtr = strNumbers[numIndex][elementIndex++];
			resultPtr++;
		}
		numIndex++;
		elementIndex = 0;

		for (unsigned short i = 0; i < possibleOperationsCount; i++)
		{
			if (isInStart(command, possibleOperations[i]))
			{
				size_t operationLength = getLength(possibleOperations[i]);
				for (size_t j = 0; j < operationLength; j++)
				{
					*resultPtr = possibleOperations[i][j];
					resultPtr++;
				}
				command += operationLength;
				break;
			}
		}
	}
	while (strNumbers[numIndex][elementIndex])
	{
		*resultPtr = strNumbers[numIndex][elementIndex++];
		resultPtr++;
	}
	*resultPtr = '\0';

	char* fixedResult = new char[getLength(result) + 1];
	strCopy(result, fixedResult);
	freeMatrix(strNumbers, operationsCount + 1);

	return result;
}

int main()
{
	size_t n;
	std::cin >> n;
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

	char** commands = new char* [n + 1];
	for (size_t i = 0; i < n + 1; i++)
	{
		char temp[COMMAND_SIZE];
		std::cin.getline(temp, COMMAND_SIZE);

		commands[i] = new char[getLength(temp) + 1];
		strCopy(temp, commands[i]);
	}
	int kBit;
	std::cin >> kBit;
	size_t mask = size_t(1) << (kBit - 1);

	std::cout << "\n";
	int* numbers = new int[n];
	for (size_t i = 0; i < n; i++)
	{
		numbers[i] = executeCommand(commands[i]);
		std::cout << "Before changing bit: " << numbers[i] << " ";
		numbers[i] ^= mask;
		std::cout << "Before changing bit: " << numbers[i] << "\n";
	}

	char* lastCommand = createLastCommand(commands[n], numbers, n - 1);
	std::cout << "\n" << lastCommand << " : " << executeCommand(lastCommand) << "\n";
}
