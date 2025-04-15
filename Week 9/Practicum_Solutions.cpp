#include <iostream>

size_t getSize(const char* str)
{
	size_t count = 0;
	while (*str)
	{
		count++;
		str++;
	}
	return count;
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

void shiftRight(char* str)
{
	if (!str) return;

	char* end = str + getSize(str) + 1;
	while (end != str)
	{
		*end = *(end - 1);
		end--;
	}
}

// Ex. 1
void removeSymbol(char* str, const char sym)
{
	if (!str) return;

	while (*str)
	{
		if (*str == sym)
			shiftLeft(str);
		str++;
	}
}


// Ex. 2
bool areSame(const char* str1, const char* str2)
{
	if (!str1 || !str2) return false;

	while (*str1 && *str2)
	{
		if (*str1 != *str2)
			return false;
		str1++;
		str2++;
	}
	if (*str2 == '\0')
		return true;
	return false;
}

void insert(char* str, const char* text)
{
	int textSize = getSize(text);
	for (int i = 0; i < textSize; i++)
	{
		shiftRight(str);
	}

	for (int i = 0; i < textSize; i++)
	{
		*str = *text;
		str++;
		text++;
	}
}

void replace(char* str, const char* where, const char* what)
{
	if (!str) return;

	int whereSize = getSize(where);
	while (*str)
	{
		if (!areSame(str, where))
		{
			while (*str != ' ')
			{
				str++;
			}
			str++;
			continue;
		}

		for (int i = 0; i < whereSize; i++)
		{
			shiftLeft(str);
		}
		insert(str, what);
		str++;
	}
}


// Ex. 3
void toUpper(char* str)
{
	if (!str) return;

	while (*str)
	{
		if ('a' <= *str && *str <= 'z')
			*str = *str - 'a' + 'A';
		str++;
	}
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


// Ex. 4
void countOfDigits(char* str)
{
	if (!str) return;

	int digits[10] = {};
	while (*str)
	{
		if ('0' <= *str && *str <= '9')
			digits[*str - '0']++;
		str++;
	}

	bool isFirst = true;
	for (int i = 0; i < 10; i++)
	{
		if (digits[i] != 0)
		{
			if (!isFirst)
				std::cout << ",";
			std::cout << digits[i] << "x" << i;
			isFirst = false;
		}
	}
}


// Ex. 5
void makeWordsUpper(char* str)
{
	if (!str) return;

	bool isNewWord = true;
	while (*str)
	{
		if (*str == ' ')
		{
			isNewWord = true;
			str++;
			continue;
		}

		if (isNewWord && ('a' <= *str && *str <= 'z'))
			*str = *str - 'a' + 'A';
		isNewWord = false;
		str++;
	}
}


// Ex. 6
void removeSymbols(char* str)
{
	if (!str) return;
	while (*str)
	{
		if (!('a' <= *str && *str <= 'z') && 
			!('A' <= *str && *str <= 'Z') && 
			!('0' <= *str && *str <= '9') &&
			!(*str == ' '))
			shiftLeft(str);
		str++;
	}
}

void getLastWord(char* str, char* word)
{
	if (!str || !word) return;

	removeSymbols(str);
	size_t strLength = getSize(str);
	size_t indexOfLastWord = 0;
	for (size_t i = 0; i < strLength; i++)
	{
		if (str[i] == ' ')
			indexOfLastWord = i + 1;
	}

	str += indexOfLastWord;
	while (*str)
	{
		*word = *str;
		word++;
		str++;
	}
	*word = '\0';
}


// Ex. 7
int countOfWords(char* str)
{
	if (!str)  return 0;

	removeSymbols(str);
	int count = 0;
	bool isNewWord = true;
	while (*str)
	{
		if (*str == ' ')
		{
			isNewWord = true;
			str++;
			continue;
		}
		if (isNewWord)
			count++;
		isNewWord = false;
		str++;
	}
	return count;
}


// Ex. 8
int getAllWords(char* str, char words[][1024])
{
	int wordIndex = 0, wordElement = 0;
	while (*str)
	{
		if (*str == ' ')
		{
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
	words[wordIndex][wordElement] = '\0';

	return wordIndex + 1;
}

void mostFrequentWord(char* str)
{
	if (!str) return;

	removeSymbols(str);
	toLower(str);
	char words[10][1024];
	size_t wordsSize = getAllWords(str, words);

	char* mostFrequentWord = words[0];
	int count = 1;
	for (size_t i = 0; i < wordsSize; i++)
	{
		int currentCount = 0;
		for (size_t j = 0; j < wordsSize; j++)
		{
			if (areSame(words[i], words[j]))
				currentCount++;
		}
		if (currentCount >= count)
		{
			count = currentCount;
			mostFrequentWord = words[i];
		}
	}

	std::cout << mostFrequentWord;
}


// Ex. 9
int stringCompare(char* str1, char* str2)
{
	if (!str1 || !str2) return 255;

	while (*str1 && *str2)
	{
		if (*str1 != *str2)
			return *str1 - *str2;
		str1++;
		str2++;
	}
	return *str1 - *str2;
}

void smallestWord(char* str)
{
	if (!str) return;

	removeSymbols(str);
	toLower(str);
	char words[10][1024];
	size_t wordsSize = getAllWords(str, words);

	char* smallestWord = words[0];
		for (size_t i = 0; i < wordsSize; i++)
	{
		if(stringCompare(smallestWord, words[i]) > 0)
			smallestWord = words[i];
	}
	std::cout << smallestWord;
}

int main()
{
	// Ex. 1
	/*char str[1024], symbol;
	std::cin.getline(str, 1024, '\n');
	std::cin >> symbol;
	removeSymbol(str, symbol);
	std::cout << str;*/


	// Ex. 2
	/*char str[1024], what[1024], where[1024];
	std::cin.getline(str, 1024);
	std::cin.getline(what, 1024);
	std::cin.getline(where, 1024);
	replace(str, what, where);
	std::cout << str;*/


	// Ex. 3
	/*char str[1024];
	std::cin.getline(str, 1024);
	toUpper(str);
	std::cout << str << '\n';
	toLower(str);
	std::cout << str;*/


	// Ex. 4
	/*char str[1024];
	std::cin.getline(str, 1024);
	countOfDigits(str);*/


	// Ex. 5
	/*char str[1024];
	std::cin.getline(str, 1024);
	makeWordsUpper(str);
	std::cout << str;*/


	// Ex. 6
	/*char str[1024], word[1024];
	std::cin.getline(str, 1024);
	getLastWord(str, word);
	std::cout << word;*/


	// Ex. 7
	/*char str[1024];
	std::cin.getline(str, 1024);
	std::cout << countOfWords(str);*/


	// Ex. 8
	/*char str[1024];
	std::cin.getline(str, 1024);
	mostFrequentWord(str);*/


	// Ex. 9
	/*char str[1024];
	std::cin.getline(str, 1024);
	smallestWord(str);*/
}
