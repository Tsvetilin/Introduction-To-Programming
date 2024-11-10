#include <iostream>

// 1
void swap(int& a, int& b)
{
    int temp = a;
    a = b;
    b = temp;
}

void swap(double& a, double& b)
{
    int temp = a;
    a = b;
    b = temp;
}

// 2 && 7
int gcd(int a, int b) 
{
    int res = std::min(a, b);

    while (res > 1) 
    {
        if (a % res == 0 && b % res == 0)
            break;
        res--;
    }
    return res;
}

void reducing(int& numerator, int& denominator)
{
	int divisor = gcd(numerator, denominator);

    while (divisor != 1)
    {
		numerator /= divisor;
		denominator /= divisor;
		divisor = gcd(numerator, denominator);
    } 
}

// 3
int removeDigitInNumber(int number, int digit)
{
	int result = 0;
	int multiplier = 1;

	while (number)
	{
		int currentDigit = number % 10; 
        number /= 10;

		if (currentDigit != digit)
		{
			result += currentDigit * multiplier;
			multiplier *= 10;
		}
	}

	return result;
}

// 4
void devideNumberByEvenAndOddNumbers(int number)
{
	int evenNumber = 0, oddNumber = 0, multiplierEven = 1, multiplierOdd = 1;

    while (number)
    {
		int currentDigit = number % 10;
		number /= 10;

        if (currentDigit % 2 == 0)
        {
			evenNumber += currentDigit * multiplierEven;
            multiplierEven *= 10;
		}
        else
        {
			oddNumber += currentDigit * multiplierOdd;
            multiplierOdd *= 10;
		}
	}
    
	// The task is not menthioned how to return the result, so I will print it
	std::cout << "Even number: " << evenNumber << std::endl;
	std::cout << "Odd number: " << oddNumber << std::endl; 
}

// 5
int substringNumber(int number, int i, int j)
{
	int result = 0;
	int multiplier = 1;
	int length = std::floor(std::log10(number) + 1); 
     

	if (i < 0 || i >= length || j < 0 || j >= length || i > j)
	{
        return 0;
	}
     
	int position = length;

	while (number)
	{
		int currentDigit = number % 10;
		number /= 10;

		if (position >= i && position <= j)
		{
			result += currentDigit * multiplier;
			multiplier *= 10;
		}

		position--;
	} 

	return result;
}

// 6
int getDigitAtPosition(int number, int position) 
{
    // 10 ^ (length_of_number - position)   /    12345, position 2 -> 12345 / 10^3 = 12345 / 1000 = 12 % 10 = 2
    return (number / (int)std::pow(10, (std::floor(std::log10(number) + 1)) - position)) % 10;
}
 
int replaceDigitAtPosition(int number, int position, int newDigit) 
{
    int currentDigit = getDigitAtPosition(number, position);

    // Премахва текущата цифра на определената позиция чрез изваждане
    // и добавя новата цифра на същата позиция, като използва 10^(позиция) за правилно позициониране
    number -= currentDigit * (int)std::pow(10, (std::floor(std::log10(number) + 1)) - position);
    number += newDigit * (int)std::pow(10, (std::floor(std::log10(number) + 1)) - position);
    return number;
}

void swapDigitsOfTwoNumbers(int n, int m, int k) 
{
    int ndigit = getDigitAtPosition(n, k);
    int mdigit = getDigitAtPosition(m, k);

    n = replaceDigitAtPosition(n, k, mdigit);
    m = replaceDigitAtPosition(m, k, ndigit);

    std::cout << n << " " << m;
}

// 8
int lcm(int first, int second)
{
    int greater = std::max(first, second);
    int smallest = std::min(first, second);
    for (int i = greater; ; i += greater) 
    {
        if (i % smallest == 0) return i;
    }
}

// 9
unsigned int concat(unsigned int first, unsigned int second) 
{ 
    return first * (int)std::pow(10, (std::floor(std::log10(second) + 1))) + second;
}

// Practicum 1
bool isValidDate(unsigned day, unsigned month, unsigned year)
{
	if (year < 0 || month < 1 || month > 12 || day < 1 || day > 31)
	{
		return false;
	}

	if (month == 2)
	{
		if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
		{
			return day <= 29;
		}
		else
		{
			return day <= 28;
		}
	}

	if (month == 4 || month == 6 || month == 9 || month == 11)
	{
		return day <= 30;
	}

	return true;
}

void dateAfterNDays(unsigned day, unsigned month, unsigned year, unsigned n)
{
	if (!isValidDate(day, month, year))
	{
		std::cout << "Invalid date!";
		return;
	}

	day += n;

	while (day > 31)
	{
		if (month == 2)
		{
			if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
			{
				if (day > 29)
				{
					day -= 29;
					month++;
				}
			}
			else
			{
				if (day > 28)
				{
					day -= 28;
					month++;
				}
			}
		}
		else if (month == 4 || month == 6 || month == 9 || month == 11)
		{
			if (day > 30)
			{
				day -= 30;
				month++;
			}
		}
		else
		{
			if (day > 31)
			{
				day -= 31;
				month++;
			}
		}

		if (month > 12)
		{
			month = 1;
			year++;
		}
	}

	std::cout << day << " " << month << " " << year;
}
 

// Practicum 2
const int MAX_SIZE = 100;

int minSwapsToEqualize(int first[], int second[], int n) 
{
	// Преброяване на единиците в двете числа
	int count1First = 0, count1Second = 0;
	for (int i = 0; i < n; i++) 
	{
		if (first[i] == 1) count1First++;
		if (second[i] == 1) count1Second++;
	}

	// Ако броят на единиците не съвпада, няма как да преобразуваме числата
	if (count1First != count1Second) 
	{
		std::cout << "Invalid numbers - The first number cannot be transformed into the second!";
		return -1;
	}

	int count01 = 0; // броим позиции с first[i] = 0 и second[i] = 1
	int count10 = 0; // броим позиции с first[i] = 1 и second[i] = 0

	// Намираме разликите между first и second
	for (int i = 0; i < n; i++) 
	{
		if (first[i] == 0 && second[i] == 1) count01++;
		else if (first[i] == 1 && second[i] == 0) count10++;
	}
	 
	// Минималният брой swap операции е максимумът от двата броя
	return (count01 > count10) ? count01 : count10;
}

int main()
{
	int n; 
	std::cin >> n;

	// Въвеждаме първото и второто число като масиви от n елемента
	int first[MAX_SIZE], second[MAX_SIZE];
	std::cout << "Enter the first binary number: ";
	for (int i = 0; i < n; i++) 
	{
		std::cin >> first[i]; 
	}

	std::cout << "Enter the second binary number: ";
	for (int i = 0; i < n; i++) 
	{
		std::cin >> second[i];
	} 

	// Извикваме функцията и извеждаме резултата
	std::cout << "Minimum number of swaps: " << minSwapsToEqualize(first, second, n) << std::endl;
}