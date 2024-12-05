#include <iostream>

int getSize(const char* str)
{
	int count = 0;
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
	char str[1024];
	std::cin.getline(str, 1024);
	makeWordsUpper(str);
	std::cout << str;
}
