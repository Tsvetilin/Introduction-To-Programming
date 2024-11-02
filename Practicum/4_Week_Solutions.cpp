//zad 1
int n = 0;

cin >> n;
if (n > 0) {

	for (int i = 2; i < n; i++)
	{
		if (n % i == 0)
		{
			cout << false;
			return 0;
		}	
	}
	cout << true;

}
else
{
    	cout << "Invalid input";
}
return 0;

//zad2
unsigned n = 0;
int m = 0;


cin >> n>> m;
int sum = 0;

while (n / 10 != 0)
{
    if (n % 10 == m)
    {
		sum++;
	}   
    n = n / 10;
}

cout << sum;
return 0;

//zad3
unsigned n = 0;
cin >> n;
int sum = 0;
int m = n;

if(n>0){
    do
    {  
        n = n / 10;
        sum++;
    } 
    while (n!= 0);

    for (int i = 0; i < sum; i++)
    {
        cout<<m%10;
        m = m / 10;
    }
    
}
else {
	cout << "Invalid input";
}

return 0;

//zad4 and zad5
//I didn't find a way to sort the digits of a number without storing them in array so I would like to see the solutions of those two after they are posted.

//FUNCTIONS
#include <iostream>
using namespace std;

int absoluteValue(int number); //връща | number |

bool isDigit(char symbol); //връща дали символът е цифра

char toUpper(char symbol); // ако буквата е малка връща съответната и главна

char toLower(char symbol);  //ако буквата е главна връща съответната и малка

int toNumber(char symbol); //конвертира от символ в цифра

char toCharacter(int number); //конвертира от цифра в символ

int power(int base, unsigned int exponent); // връща base^exponent

bool isPrime(unsigned int number); //проверява дали дадено число е просто

short getLength(int number); //връща колко цифри има даденото число

int main()
{
    
    cout<<getLength(3541144)<<endl;
    return 0;
}



int absoluteValue(int number)
{
    if (number < 0)
    {
		return -number;
	}
}

bool isDigit(char symbol)
{
    return symbol>='0' && symbol <='9';
}

char toUpper(char symbol)
{
    return symbol - 32;
}

char toLower(char symbol)
{
    return symbol + 32;
}

int toNumber(char symbol)
{
    if (symbol >= '0' && symbol <= '9') {
        return symbol - '0';
    }
    else
    {
        return -1;
    }
}

char toCharacter(int number)
{
    if (number >= 0 && number <= 9)
    {
		return number + '0';
	}
    else
    {
		return -1;
	}
}

int power(int base, unsigned int exponent)
{
    int result = 1;
    for (int i = 0; i < exponent; i++)
    {
        result *= base;
    }
    return result;
}

bool isPrime(unsigned int number)
{
    for (int i = 2; i < number; i++)
    {
        if (number % i == 0) {
            return false;
        }
        else
        {
            return true;
        }
    }
}

short getLength(int number)
{
    int sum = 0;
    do
    {
        number = number / 10;
		sum++;

    } while (number!=0);
    return sum;
}

//zad1 and zad2 from functions can be solved with the logic from zad4 and zad5 from Loops
