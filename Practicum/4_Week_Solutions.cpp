#include <iostream>

int absoluteValue(int number) //връща | number |
{
	if (number < 0) number *= -1;
	return number;
}
bool isDigit(char symbol) //връща дали символът е цифра
{
	return(symbol <= '9' && symbol >= '0');
}
char toUpper(char symbol) // ако буквата е малка връща съответната и главна
{
	return symbol + 'A' - 'a';
}
char toLower(char symbol)  //ако буквата е главна връща съответната и малка
{
	return symbol + 'a' - 'A';
}
int toNumber(char symbol) //конвертира от символ в цифра
{
	return symbol - '0';
}
char toCharacter(int number) //конвертира от цифра в символ
{
	return number;
}

int power(int base, unsigned int exponent) // връща base^exponent
{
	for (int i = 0; i < exponent; i++)
	{
		base *= base;
	}
	return base;
}


bool isPrime(unsigned int x)
{
	if (x <= 0)
	{
		return 0;
	}
	else
	{
		for (int i = 2; i < x; i++)
		{
			if (x % i == 0) return false;
		}
		return true;
	}
}

short getLength(int number) //връща колко цифри има даденото число
{
	int length=0;
	while (number > 0)
	{
		number /= 10;
		length++;
	}
	return length;
}
bool isPalindrome(int n)
{
	int newNum=0, n_temp=n;
	while (n_temp>0)
	{
		newNum = newNum * 10 + n_temp % 10;
		n_temp /=  10;
	}
	return newNum == n;
}

bool isPermutation(int n, int m)
{
	int num1[10] = {}, num2[10] = {};
	while (n>0)
	{
		int position=n%10;
		num1[position]++;
		n /= 10;
	}
	while (m > 0)
	{
		int position = m % 10;
		num1[position]++;
		m /= 10;
	}
	for (int i = 0; i < 8; i++)
	{
		if (num1[i] != num2[i]) return false;
	}
	return true;
}
// да се напишат функции с подходящи сигнатури за задачи 2., 3. и 4.
int main()
{

	/*
	* task 1
	int n;
	bool isPrime = true;
	std::cin >> n;
	for (int i = 2; i * i <= n; i += 1)
	{
		if (n % i == 0)
		{
			isPrime = false;
			break;
		}
	}
	std::cout << ((int)isPrime);


	task 2
	int num, i=0;
	unsigned long n;
	std::cin >> n >> num;
	while (n != 0)
	{
		if (n % 10 == num) i++;
		n /= 10;
	}
	std::cout << i;


	int n, num1 = 0, num2=0, num3=0, num4=0, num5=0, num6=0, num7=0, num8=0, num9=0, sum = 0;
	std::cin >> n;
	while (n > 0)
	{
		switch (n%10)
		{
		case 1: num1++; break;
		case 2: num2++; break;
		case 3: num3++; break;
		case 4: num4++; break;
		case 5: num5++; break;
		case 6: num6++; break;
		case 7: num7++; break;
		case 8: num8++; break;
		case 9: num9++; break;
		}
		n /= 10;
	}
	for (int i = 0; i < num1; i++) sum = 1 + sum * 10;
	for (int i = 0; i < num2; i++) sum = 2 + sum * 10;
	for (int i = 0; i < num3; i++) sum = 3 + sum * 10;
	for (int i = 0; i < num4; i++) sum = 4 + sum * 10;
	for (int i = 0; i < num5; i++) sum = 5 + sum * 10;
	for (int i = 0; i < num6; i++) sum = 6 + sum * 10;
	for (int i = 0; i < num7; i++) sum = 7 + sum * 10;
	for (int i = 0; i < num8; i++) sum = 8 + sum * 10;
	for (int i = 0; i < num9; i++) sum = 9 + sum * 10;
	std::cout << sum;

		task 4
	int n, newNum = 0;
	std::cin >> n;
	while (n > 0)
	{
		newNum =newNum* 10 + (n%10);
		n /= 10;
	}
	std::cout << newNum;

	task 5

	int k, n, m;
	std::cin >> k >> n >> m;
	while (n <= m)
	{
		int n_temp = n;
		bool next = true;
		while (n_temp > 0)
		{
			if (n_temp % 10 == 0 || k % (n_temp % 10) != 0) {
				next = false;
				break;
			}
			n_temp /= 10;

		}
		if (next) std::cout << n << " ";
		n++;
	}

	
	task 6
	int n, length=0, newNum1, newNum2;
	std::cin >> n;
	int n_temp = n;
	while (n_temp> 0)
	{
		length++;
		n_temp /= 10;
	}
	if (length % 2 == 0)
	{
		int power=1;
		for (int i = 0; i < length / 2 - 1; i++) {
			power *= 10;
		}
		newNum1 = n / (power*100);
		newNum2 = n % power;
		newNum1 = newNum1 * power + newNum2;
		std::cout << newNum1<<" ";
		std::cout << ++newNum1;

	}
	else
	{
		int power = 1;
		for (int i = 0; i < length / 2 ; i++) {
			power *= 10;
		}
		newNum1 = n / (power * 10);
		newNum2 = n % power;
		newNum1 = newNum1 * power + newNum2;
		std::cout << newNum1 << " ";
		std::cout << ++newNum1;

	}
	*/
	
		


	return 0;
}
