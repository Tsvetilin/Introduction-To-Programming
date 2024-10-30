#include <iostream>

int absoluteValue(int number)
{
    return (number > 0) ? number : -number;
}

bool isDigit(char symbol)
{
    return (symbol >= '0') && (symbol <= '9');
}

char toUpper(char symbol)
{
    return symbol + 'A' - 'a';
}

char toLower(char symbol)
{
    return symbol + 'a' - 'A';
}

int toNumber(char symbol)
{
    if (symbol <= '9' && symbol >= '0')
    {
        return int(symbol - '0');
    }
}

char toCharacter(int number)
{
    if (number >= 0 && number <= 9)
    {
        return '0' + number;
    }
}

int power(int base, unsigned int exponent)
{
    int product = 1;
    for (int i = 0; i < exponent; i++)
    {
        product *= base;
    }
    return product;
}

bool isPrime(unsigned int number)
{
    if (number <= 0)
        return false;
    if (number == 2 || number == 3)
        return true;

    for (int i = 5; i * i < number; i++)
    {
        if (number % i == 0)
        {
            return false;
        }
    }
    return true;
}

short getLength(int number)
{
    if (number == 0)
    {
        return 1;
    }

    if (number < 0)
    {
        number = -number;
    }

    short lenght = 0;
    while (number > 0)
    {
        number /= 10;
        lenght++;
    }
    return lenght;
}



// 1
bool isPermutation(int number1, int number2)
{
    int temp = number1;
    int permutation1 = 1;
    int permutation2 = 1;
    
    while (temp > 0)
    {
        int remainder1 = temp % 10;
        permutation1 *= remainder1;
        temp /= 10;
    }

    temp = number2;

    while (temp > 0)
    {
        int remainder2 = temp % 10;
        permutation2 *= remainder2;
        temp /= 10;
    }

    return permutation1 == permutation2;

}

// 2
bool isPalindrome(int number)
{
    int newNumber = 0;
    int temp = number;

    while (temp != 0)
    {
        newNumber = (newNumber * 10) + (temp % 10);
		temp /= 10;
	}

	return newNumber == number;
}


int main()
{
    // 1
    // int num = 0;
    // bool isPrime = true;

    // std::cin >> num;

    // for (int i = 2; i * i < num; i++)    // or  i <= num/2
    //{
    //	if (num % i == 0)
    //	{
    //		isPrime = false;
    //		break;
    //	}
    // }

    // std::cout << isPrime << std::endl;

    // 2
    //  unsigned long number = 0;
    //  int digit = 0, counter = 0;

    // std::cin >> number >> digit;

    // while (number > 0)
    // {
    //     int remainder = number % 10;

    //     if (remainder == digit)
    //     {
    //     counter++;
    //     }

    //     number /= 10;
    // }
    // std::cout << counter << std::endl;

    // 3
    // unsigned int num = 0;

    // std::cin >> num;

    // for (int i = 1; i <= 9; i++)
    // {
    //     int temp = num;

    //     while (temp != 0)
    //     {
    //         int digit = temp % 10;
    //         if (digit == i)
    //         {
    //             std::cout << i;
    //         }
    //         temp /= 10;
    //     }

    // }

    // 4
    // int num = 0;

    // std::cin >> num;

    // int temp = num;

    // while (temp != 0)
    // {
    //     int digit = temp % 10;

    //     std::cout << digit;

    //     temp /= 10;
    // }

    // 5
    // int k = 0, n = 0, m = 0;

    // std::cin >> k >> n >> m;

    // for (int i = n; i <= m; i++)
    // {
    //     int temp = i;
    //     bool isNotSpecial = false;

    //     while (temp != 0)
    //     {
    //         int remainder = temp % 10;

    //         if(remainder == 0 || k % remainder != 0)
    //         {
    //             isNotSpecial = true;
    //             break;
    //         }

    //         temp /= 10;
    //     }

    //     if(!isNotSpecial)
    //     {
    //         std::cout << i << std::endl;
    //     }
    // }

    // 6
    // int number = 0, digits = 0;

    // std::cin >> number;

    // int temp = number;

    // while (temp != 0)
    // {
    //     digits++;
    //     temp /= 10;
    // }

    // int result = 0;

    // if (digits % 2 == 1)
    // {
    //     int middle = digits / 2 + 1;
    //     int divider1 = 1;
    //     int divider2 = 1;

    //     for (int i = 0; i < middle; i++)
    //     {
    //         divider1 *= 10;
    //     }

    //     for (int i = 0; i < middle - 1; i++)
    //     {
    //         divider2 *= 10;
    //     }

    //     int firstHalf = number / divider1;
    //     int secondHalf = number % divider2;

    //     result = firstHalf * divider2 + secondHalf;

    //     std::cout << result << "\t" << result + 1 << std::endl;
    // }

    // else
    // {
    //     int middle1 = digits / 2 + 1;
    //     int middle2 = digits / 2;

    //     int divider1 = 1;
    //     int divider2 = 1;

    //     for (int i = 0; i < middle1; i++)
    //     {
    //         divider1 *= 10;
    //     }

    //     for (int i = 0; i < middle2 - 1; i++)
    //     {
    //         divider2 *= 10;
    //     }

    //     int firstHalf = number / divider1;
    //     int secondHalf = number % divider2;

    //     result = firstHalf * divider2 + secondHalf;

    //     std::cout << result << "\t" << result + 1 << std::endl;
    // }
    

}

