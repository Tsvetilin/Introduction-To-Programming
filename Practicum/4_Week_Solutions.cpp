#include <iostream>
#include<cmath>
int absoluteValue(int);
bool isDigit(char);
char toUpper(char);
char toLower(char);
int toNumber(char);
char toCharacter(int);
int power(int, unsigned int);
bool isPrime(unsigned int);
short getLength(int);



int absoluteValue(int num)
{
    return (num < 0) ?  -num: num;
}


char toUpper(char letter)
{
    return letter + 'A' - 'a';
}


char toLower(char letter)
{
    return letter + 'a' - 'A';
}


bool isDigit(char symbol)
{
    return symbol >= '0' && symbol <= '9';
}


int toNumber(char symbol)
{
    int number;
    return number = (int)symbol;
}


char toCharacter(int number)
{
    char symbol;
    return symbol = char(number);
}


int power(int base, unsigned exponent)
{
    int expoNum = 1;
    for (int i = 1; i <= exponent; i++)
    {
        expoNum *= base;
    }
    return expoNum;
}


bool isPrime(unsigned int number)
   {
      double sqr = sqrt(number);
      for (int i = 2; i <= sqr; i++)
      {
          return (number % i != 0); 
      }
    }


short getLength(int number) 
{
    int length = 0;
    if (number == 0)
    {
        return 1;
    }
    while (number != 0)
    {
        number /= 10;
        length++;
    }
    return length;
}

//solution of 1

bool isPermutation(int num1, int num2)
{
    if (num1 == 0 && num2 == 0) return true;
    if (num1 == 0 || num2 == 0) return false;

    int count0 = 0; int count1 = 0; int count2 = 0; int count3 = 0; int count4 = 0;
    int count5 = 0; int count6 = 0; int count7 = 0; int count8 = 0; int count9 = 0;
    
    while (num1 != 0)
    {
        int lastDigit;
        lastDigit = num1 % 10;
            switch (lastDigit)
            {
            case 0: count0++; break;
            case 1: count1++; break;
            case 2: count2++; break;
            case 3: count3++; break;
            case 4: count4++; break;
            case 5: count5++; break;
            case 6: count6++; break;
            case 7: count7++; break;
            case 8: count8++; break;
            case 9: count9++; break;

            }
            num1 /= 10;
    }

    while (num2 != 0)
    {
        int lastDigit;
        lastDigit = num2 % 10;
        switch (lastDigit)
        {
        case 0: count0--; break;
        case 1: count1--; break;
        case 2: count2--; break;
        case 3: count3--; break;
        case 4: count4--; break;
        case 5: count5--; break;
        case 6: count6--; break;
        case 7: count7--; break;
        case 8: count8--; break;
        case 9: count9--; break;

        }
        num1 /= 10;
    }
    return (count0 == 0 && count1 == 0 && count2 == 0 && count3 == 0 && count4 == 0 && count5 == 0 && count6 == 0 && count7 == 0 && count8 == 0 && count9 == 0);
    
}

//function4

int reversedNumber(int num) 
{
    int lastDigit;
    int reversed = 0;
    while (num > 0)
    {
        lastDigit = num % 10;
        reversed = reversed * 10 + lastDigit;
        num /= 10;
    }
    return reversed;
}

//solution of 2

bool isPalindrom(int num)
{
    return num == reversedNumber(num); 
}

int main()
{
    
    int num;
    std::cin >> num;
    std::cout << isPalindrom(num);
    
}
