#include <iostream>

// Functions

int absoluteValue(int number)
{
	return number < 0 ? number * -1 : number;
}

bool isDigit(char symbol)
{
	if (symbol >= '0' && symbol <= '9') return true;

	return false;
}

char toUpper(char symbol)
{
	return symbol >= 'a' && symbol <= 'z' ? symbol + ('A' - 'a') : symbol;
}

char toLower(char symbol)
{
    return symbol >= 'A' && symbol <= 'Z' ? symbol - ('A' - 'a') : symbol;
}

int toNumber(char symbol)
{
    return symbol - '0';
}

char toCharacter(int number)
{
    return number + '0';
}

int power(int base, unsigned int exponent)
{
    int result = base;
    
    if (exponent == 0)
    {
        return 1;
    }
    
    for (int i = 1; i < exponent; i++)
    {
        result *= base;
    }

    return result;
}

bool isPrime(unsigned int number)
{
    for (int i = 2; i < number; i++)
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
    short counter = 0;

    while (number != 0)
    {
        number /= 10;
        counter ++;
    }
    
    return counter;
}

int sortInt(int number) {
	unsigned long sortedNumber = 0;
	int digitCount = getLength(number);
	int d = 0;
	unsigned long aux = number;
	int count = 0;

	for (int i = 1; i <= 9; i++, aux = number)
	{
		for (int j = 1; j <= digitCount ; j++)
	 	{
	 		d = aux % 10;
	 		aux /= 10;

	 		if (d == i)
	 		{
				count++;
	 			if (count == 1)
				{
					sortedNumber = d * 10;
				}
				else if (count != digitCount) {
					sortedNumber = (sortedNumber + d) * 10;
				}
				else
				{
					sortedNumber += d;
				}
	 		}
	 	}
	}

	return sortedNumber;
}

bool isPermutation(int number1, int number2)
{
	if (sortInt(number1) == sortInt(number2) && getLength(number1) == getLength(number2))
	{
		return true;
	}

	return false;	
}

bool isPalindrome(int number)
{
	int auxNum = number;
	int digit = 0;
	int count = 1;
	int amountDigits = getLength(number);
	int middle = amountDigits / 2;

	while (count <= middle)
	{
		digit = auxNum % 10;
		auxNum /= 10;

		if (amountDigits % 2 == 0)
		{
			if (digit != number / power(10, amountDigits - count))
			{
				return false;
			}
		}
		
		else
		{
			middle = (amountDigits / 2) + 1;

			if (digit != number / power(10, amountDigits - count)  && count != middle)
			{
				return false;
			}
			
		}
		
		number %= power(10, amountDigits - count);
		count++;
	}

	return true;
	
}

int main()
{
	// std::cout << "Absolute value: " << absoluteValue(-45) << '\n';
	// std::cout << "Is digit: " << isDigit('#') << '\n';
    	// std::cout << "To upper: " << toUpper('f') << '\n';
    	// std::cout << "To lower: " << toLower('X') << '\n';
    	// std::cout << "To number: " << toNumber('3') << '\n';
    	// std::cout << "To character: " << toCharacter(3) << '\n';
    	// std::cout << "Power: " << power(2, 6) << '\n';
    	// std::cout << "Is prime: " << isPrime(1) << '\n';
    	// std::cout << "Get length: " << getLength(343553) << '\n';
	//std::cout << "Is permutation: " << isPermutation(352953, 295335) << '\n';
	//std::cout << "Is palindrome: " << isPalindrome(3427243) << '\n';


	//----------------------------------------------------------------------
	// Loops

	// 1

	/*unsigned int a;
	std::cin >> a;

	bool isPrime = 1;

	for (int i = 2; i < a; i++)
	{
		if ((i != a) && (i != 1) && a % i == 0)
		{
			isPrime = 0;
		}
	}

	std::cout << isPrime;*/

	//-------------------------------------------------
	// 2

	/*unsigned long bigNum;
	unsigned int n;
	std::cin >> bigNum >> n;
	
	int d = 0;
	int counter = 0;

	while (bigNum != 0)
	{
		d = bigNum % 10;
		bigNum /= 10;

		if (d == n)
		{
			counter++;
		}
	}

	std::cout << counter;*/

	//---------------------------------------------------
	// 3

	// unsigned long originalNum;
	// std::cin >> originalNum;

	// int digitCount = getLength(originalNum);
	// int d = 0;
	// unsigned long aux = originalNum;

	// for (int i = 1; i <= 9; i++, aux = originalNum)
	// {
	// 	for (int j = 1; j <= digitCount ; j++)
	// 	{
	// 		d = aux % 10;
	// 		aux /= 10;

	// 		if (d == i)
	// 		{
	// 			std::cout << d;
	// 		}
	// 	}
	// }

	// std::cout << '\n';

	//---------------------------------------------------------
	// 4

	// uint n;
	// std::cin >> n;

	// uint digit = 0;

	// while (n != 0)
	// {
	// 	digit = n % 10;
	// 	n /= 10;

	// 	if (digit != 0)
	// 	{
	// 		std::cout << digit;
	// 	}
		
	// }
	
	//-----------------------------------------------------------
	// 5

	// int k, n, m;
	// std::cin >> k >> n >> m;

	// int digit = 0;
	// int count = 0;
	// int digitCount = 0;

	// for (int i = n; i <= m; i++)
	// {
	// 	int aux = i;
	// 	count = 0;
	// 	digitCount = 0;

	// 	while (aux != 0)
	// 	{
	// 		digit = aux % 10;
	// 		aux /= 10;
	// 		digitCount++;

	// 		if (digit != 0 && k % digit == 0)
	// 		{
	// 			count++;
	// 		}
	// 		else break;
	// 	}
		
	// 	if (count == digitCount)
	// 	{
	// 		std::cout << i << " ";
	// 	}
	// }
	
	//--------------------------------------------------
	// 6

	// int number;
	// std::cin >> number;

	// int amountDigits = getLength(number);
	// int digit = 0;
	// int middle = 0;
	// int newNumber = 1;

	// for (int i = 1; i <= amountDigits; i++)
	// {
	// 	digit = number / power(10, amountDigits - i);
	// 	number %= power(10, amountDigits - i);

	// 	if (amountDigits % 2 == 0)
	// 	{

	// 		middle = amountDigits / 2;

	// 		if (i != middle && i != middle + 1)
	// 		{
	// 			if (i == 1)
	// 			{
	// 				newNumber = digit * 10;
	// 			}
	// 			else if (i != amountDigits)
	// 			{
	// 				newNumber = (newNumber + digit) * 10;
	// 			}
	// 			else
	// 			{
	// 				newNumber += digit;
	// 			}
	// 		}
	// 	}
	// 	else
	// 	{
	// 		middle = (amountDigits / 2) + 1;

	// 		if (i != middle)
	// 		{
	// 			if (i == 1)
	// 			{
	// 				newNumber = digit * 10;
	// 			}
	// 			else if (i != amountDigits)
	// 			{
	// 				newNumber = (newNumber + digit) * 10;
	// 			}
	// 			else
	// 			{
	// 				newNumber += digit;
	// 			}
	// 		}
	// 	}
	// }

	// std::cout << newNumber << " " << newNumber + 1;

}
