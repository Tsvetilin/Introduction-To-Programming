#include <iostream>

// Дефинициите на функциите е в края на файла
int absoluteValue(int number); //връща | number |
bool isDigit(char symbol); //връща дали символът е цифра
char toUpper(char symbol); // ако буквата е малка връща съответната и главна
char toLower(char symbol);  //ако буквата е главна връща съответната и малка
int toNumber(char symbol); //конвертира от символ в цифра
char toCharacter(int number); //конвертира от цифра в символ
int power(int base, unsigned int exponent); // връща base^exponent
bool isPrime(unsigned int number); //проверява дали дадено число е просто
short getLength(int number); //връща колко цифри има даденото число
// да се напишат функции с подходящи сигнатури за задачи 2., 3. и 4.

int main()
{
	// Ex. 1
	/*int num;
	std::cin >> num;

	int end = num / 2 + 1;
	for (int i = 2; i < end; i++)
	{
		if (!(num % i))
		{
			std::cout << 0;
			return 0;
		}
	}
	std::cout << 1;*/


	// Ex. 2
	/*unsigned long num;
	int digit;
	std::cin >> num >> digit;

	int count = 0;
	while (num)
	{
		if (num % 10 == digit)
			count++;
		num /= 10;
	}
	std::cout << count;*/


	// Ex. 3
	/*unsigned long num;
	std::cin >> num;

	for (int i = 1; i < 10; i++)
	{
		unsigned long tempNum = num;
		while (tempNum)
		{
			if (tempNum % 10 == i)
				std::cout << i;
			tempNum /= 10;
		}
	}*/


	// Ex. 4
	/*int num;
	std::cin >> num;

	int tempNum = num, numSize = 1;
	while (tempNum)
	{
		numSize *= 10;
		tempNum /= 10;
	}

	int finalNum = 0;
	while(num)
	{
		numSize /= 10;
		finalNum += (num % 10) * numSize;
		num /= 10;
	}
	std::cout << finalNum;*/


	// Ex. 5
	/*int num, N, M;
	std::cin >> num >> N >> M;

	for (int i = N; i <= M; i++)
	{
		bool isSpecial = true;
		int tempIndex = i;
		while (tempIndex)
		{
			int digit = tempIndex % 10;
			if (!digit)
			{
				isSpecial = false;
				break;	
			}

			if (num % digit != 0)
			{
				isSpecial = false;
				break;
			}
			tempIndex /= 10;
		}

		if (isSpecial)
			std::cout << i << " ";
	}*/


	// Ex. 6
	/*int num;
	std::cin >> num;

	int digitCount = 0, tempNum = num;
	while (tempNum)
	{
		digitCount++;
		tempNum /= 10;
	}

	int finalNum = 0;
	int currNum = 1, size = 1;
	if (!(digitCount % 2))
	{
		while (num)
		{
			if (currNum == digitCount / 2 || currNum == digitCount / 2 + 1)
			{
				num /= 10;
				currNum++;
				continue;
			}
			finalNum += (num % 10) * size;
			size *= 10;
			num /= 10;
			currNum++;
		}
		std::cout << finalNum << " " << finalNum + 1;
		return 0;
	}
	while (num)
	{
		if (currNum == digitCount / 2 + 1)
		{
			num /= 10;
			currNum++;
			continue;
		}
		finalNum += (num % 10) * size;
		size *= 10;
		num /= 10;
		currNum++;
	}
	std::cout << finalNum << " " << finalNum + 1;*/
}

int absoluteValue(int number)
{
	return number > 0 ? number : -number;
}

bool isDigit(char symbol)
{
	return (symbol >= 48 && symbol <= 57) ? true : false;
}

char toUpper(char symbol)
{
	return (symbol >= 'a' && symbol <= 'z') 
		? symbol + 'A' - 'a' : symbol;
}

char toLower(char symbol)
{
	return (symbol >= 'A' && symbol <= 'Z') 
		? symbol - 'A' + 'a' : symbol;
}

int toNumber(char symbol)
{
	return (symbol >= '0' && symbol <= '9') 
		? symbol - '0' : symbol;
}

char toCharacter(int number)
{
	return (number >= 0 && number <= 9)
		? number + '0' : number;
}

int power(int base, unsigned int exponent)
{
	int power = 1;
	for (int i = 0; i < exponent; i++)
	{
		power *= base;
	}
	return power;
}
