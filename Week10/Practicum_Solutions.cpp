#include <iostream>

const size_t SIZE = 1024;

void swap(char& a, char& b)
{
	char temp = a;
	a = b;
	b = temp;
}

void shiftLeft(char* str)
{
	if (!str) return;

	while (*str)
	{
		*str = *(str + 1);
		str++;
	}
}

size_t getSize(const char* str)
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

// Ex. 1
void myReverse(char* str)
{
	size_t strSize = getSize(str);

	for (size_t i = 0; i < strSize / 2; i++)
	{
		swap(str[i], str[strSize - i - 1]);
	}
}


// Ex. 2
bool isVowel(char sym)
{
	return sym == 'A' || sym == 'E' || sym == 'I' || sym == 'O' || sym == 'U' ||
		sym == 'a' || sym == 'e' || sym == 'i' || sym == 'o' || sym == 'u';
}

char toUpper(char sym)
{
	if ('a' <= sym && sym <= 'z')
	{
		return sym - 'a' + 'A';
	}
	return sym;
}

char toLower(char sym)
{
	if ('A' <= sym && sym <= 'Z')
	{
		return sym - 'A' + 'a';
	}
	return sym;
}

void vowelsToUpperConosantsToLower(char* str)
{
	if (!str) return;

	while (*str)
	{
		if (isVowel(*str))
		{
			*str = toUpper(*str);
			str++;
			continue;
		}
		if ('A' <= *str && *str <= 'Z')
		{
			*str = toLower(*str);
		}
		str++;
	}
}

// Ex. 3
bool isDigit(char sym)
{
	return '0' <= sym && sym <= '9';
}

void censorNumbers(char* str)
{
	if (!str) return;

	bool isCensored = false;
	while (*str)
	{
		if (isCensored)
		{
			if (isDigit(*str))
			{
				shiftLeft(str);
				continue;
			}
			isCensored = false;
			str++;
			continue;
		}
		if (isDigit(*str))
		{
			*str = '*';
			isCensored = true;
		}
		str++;
	}
}


// Ex. 4
int charCompare(const char a, const char b)
{
	return a - b;
}

void sortCharacters(const char* str, char* result)
{
	if (!str || !result) return;

	size_t strSize = getSize(str);
	for (size_t i = 0; i < strSize; i++)
	{
		result[i] = toLower(str[i]);
	}

	for (size_t i = 0; i < strSize - 1; i++)
	{
		size_t minIndex = i;
		for (size_t j = i + 1; j < strSize; j++)
		{
			if (charCompare(toLower(result[minIndex]), toLower(result[j])) > 0)
			{
				minIndex = j;
			}
		}
		swap(result[i], result[minIndex]);
	}
	result[strSize] = '\0';
}


// Ex. 5
void swap(int*& a, int*& b)
{
	int* temp = a;
	a = b;
	b = temp;
}


// Ex. 6
size_t getAllWords(char* str, char** words)
{
	if (!str) return 0;

	size_t wordIndex = 0, wordElement = 0;
	while (*str)
	{
		if (*str == ' ')
		{
			if (wordElement == 0)
			{
				str++;
				continue;
			}
			words[wordIndex][wordElement] = '\0';
			wordIndex++;
			wordElement = 0;
			str++;
			continue;
		}
		words[wordIndex][wordElement] = *str;
		wordElement++;
		str++;
	}
	if (wordElement > 0)
		words[wordIndex++][wordElement] = '\0';

	return wordIndex;
}

int main()
{
	// Ex. 1
	/*char str[SIZE];
	std::cin.getline(str, SIZE);
	myReverse(str);
	std::cout << str << std::endl;*/


	// Ex. 2
	/*char str[SIZE];
	std::cin.getline(str, SIZE);
	vowelsToUpperConosantsToLower(str);
	std::cout << str << std::endl;*/


	// Ex. 3
	/*char str[SIZE];
	std::cin.getline(str, SIZE);
	censoreNumbers(str);
	std::cout << str << std::endl;*/


	// Ex. 4
	/*char str[SIZE];
	std::cin.getline(str, SIZE);
	char result[SIZE];
	sortCharacters(str, result);
	std::cout << result << std::endl;*/


	// Ex. 5
	/*int* a = new int(5);
	int* b = new int(10);
	swap(a, b);
	std::cout << *a << " " << *b << std::endl;*/


	// Ex. 6
	/*const size_t STRING_SIZE = 10000;
	const size_t WORDS_COUNT = 100;

	char* str = new char[STRING_SIZE];
	std::cin.getline(str, STRING_SIZE);
	char** words = new char*[WORDS_COUNT];
	for (int i = 0; i < WORDS_COUNT; i++)
	{
		words[i] = new char[SIZE];
	}
	size_t wordsCount = getAllWords(str, words);

	for (size_t i = 0; i < wordsCount; i++)
	{
		std::cout << words[i] << "|\n";
	}

	delete[] str;
	for (size_t i = 0; i < WORDS_COUNT; i++)
	{
		delete[] words[i];
	}
	delete[] words;*/
}
