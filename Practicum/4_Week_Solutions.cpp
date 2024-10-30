
#include <iostream>
//functions
int absoluteValue(int num)
{
	if (num < 0) num = num * (-1);
	return num;
}

bool isDigit(char symbol)
{
	return (symbol > '0' && symbol < '9');
}

char toUpper(char symbol)
{
	return (symbol + 'A' - 'a');
}
char toLower(char symbol)
{
	return (symbol - 'A' + 'a');
}
int toNumber(char num)
{
	if (num >= 0 && num <= 9) {
		return (num - '0');
	}
}

char toCharacter(int num)
{
	char a;
	a = num + '0';
	return a;
}
int power(int base, unsigned int a)
{
	int f = base;
	for (int i=1;i<a;i++)
	{
		f = f * base;
	}
	return f;
}
bool isPrime(unsigned int num)
{
	for(int i = 2; i*i<=num; i++)
	{
		if (num % i == 0) return false;
	}
	return true;
}
short getLength(int num)
{
	short length = 0;
	while(num>0)
	{

		num = num / 10;
		length = length + 1;
	}
	return length;
}
bool isPermutation(int num,int secondNum)    // тука сигурно има много по-добър начин
{
	int numClone = 0;
	int digitCount = 0;
	int sortedNum = 0;
	int sortedDigitNum = 0;
	int sortedNum2 = 0;
	numClone = num;
	while (numClone >= 1)
	{
		digitCount++;
		numClone = numClone / 10;
	}
	sortedDigitNum = digitCount - 1;
	for (int i = 1; i <= 9; i++)
	{
		numClone = num;
		for (int j = 0; j < digitCount; j++)
		{
			if (numClone % 10 == i)
			{
				sortedNum = sortedNum + power(10, sortedDigitNum) * i;
				sortedDigitNum--;
			}
			numClone = numClone / 10;
		}
	}
	digitCount = 0;
	numClone = secondNum;
	while (numClone >= 1)
	{
		digitCount++;
		numClone = numClone / 10;
	}
	sortedDigitNum = digitCount - 1;
	for (int i = 1; i <= 9; i++)
	{
		numClone = secondNum;
		for (int j = 0; j < digitCount; j++)
		{
			if (numClone % 10 == i)
			{
				sortedNum2 = sortedNum2 + power(10, sortedDigitNum) * i;
				sortedDigitNum--;
			}
			numClone = numClone / 10;
		}
	}
	if (sortedNum == sortedNum2) return true;
	return false;
}
int main()
{
	// 1 zad
	/*
	int a = 0;
	int halfNum = 0;
	bool isPrime = true;
	std::cin >> a;
	halfNum = a/2;
	for(int i=2;i<halfNum;i++)
	{
		if (a % i == 0) 
		{
			isPrime = false;
			break;
		}
	}
	std::cout << isPrime;
	*/
	//2 zad
	/*
	unsigned long a = 0;
	int num = 0;
	int count = 0;
	std::cin >> a;
	std::cin >> num;
	unsigned long tempNum;
	while (a>0)
	{
		tempNum = a % 10;
		a = a / 10;
		if (tempNum == num) count++;
	}
	std::cout << count;
	*/
	// zadacha 3
	/*
	int num = 0;
	int numClone = 0;
	int digitCount = 0;
	int count = 0;
	std::cin >> num;
	numClone = num;
	while(numClone>=1)
	{
		digitCount++;
		numClone = numClone / 10;
	}
	for (int i=1;i<=9;i++)
	{
		numClone = num;
		for (int j=0; j < digitCount;j++) 
		{
			if (numClone % 10 == i) count++;
			numClone = numClone / 10;
		}
		for (int j=0;j< count;j++) 
		{
			std::cout << i;
		}
		count = 0;
	}
	*/
	//zadacha 4
	/*
	int num = 0;
	int newNum = 0;
	std::cin >> num;
	while(num>=1)
	{
		newNum = newNum * 10;
		newNum = num % 10 + newNum;
		num = num / 10;
	}
	std::cout << newNum;
	*/
	char n = 0;
	std::cin >> n;
	std::cout <<  isDigit(n);
}
