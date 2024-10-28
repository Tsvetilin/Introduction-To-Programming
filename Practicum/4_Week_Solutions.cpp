                                // ЗАДАЧИ ПРЕДИ ФУНКЦИИ
#include <iostream>

int main()
{


		//Ex.1
	/*int n;
	std::cin >> n;
	bool isPrime = true;
	int end = n / 2;
	if (n == 1)isPrime = false;
	for (int i = 2; i < end; i++)
	{
	if (n % i == 0)isPrime = false; break;
	}
	std::cout << isPrime;*/




		//Ex.2
	/*unsigned long n;
	int specialNum;
	std::cin >> n>>specialNum;
	int counter =0;
	while (n % 10 != 0)
	{
	int a = n % 10;
	if (a == specialNum)counter++;

	n /= 10;
	}
	std::cout << counter;*/



		//Ex.3
	/*int n, newNum = 0;
	std::cin >> n;
	for (int i = 1; i <= 9; i++)
	{
		newNum = n;
		while (newNum != 0) 
		{
			int a = newNum % 10;
			if (a == i)std::cout << i;
			newNum /= 10;
		}
	}*/





		//Ex.4
	/*int num, newNum=0;
	std::cin >> num;
	while (num != 0)
	{
		int a = num % 10;
		newNum = newNum * 10 + a;
		num /= 10;
	}
	std::cout << newNum;*/



		//Ex.5
	/*int n, start, end;
	std::cin >> n >> start >> end;
	for (int i = start; i <= end; i++)
	{
		bool specialNum = true;
		int iCopy = i;
		while (iCopy != 0)
		{
			int d = iCopy % 10;
			if (d != 0 && n % d != 0) {
			specialNum = false;
			break;
			}
			if (d == 0)
			{
				specialNum = false;
				break;
			}
			iCopy /= 10;
		}
		if(specialNum)std::cout << i<<" ";
	}*/


	
			//Ex.6
	/*int num,newNum, numLength = 0,final=0;
	std::cin >> num;
	newNum = num;
	while (newNum !=0)
	{
		numLength++;
		newNum /= 10;
	}
	if (numLength % 2 == 1) 
	{
		int middle = (numLength / 2) + 1;
		int halfOne = num / pow(10, middle);
		int halfTwo = num %   int(pow(10, middle-1));
		final = halfOne * pow(10, middle-1) + halfTwo;
		std::cout << halfOne<< halfTwo<<" ";
		std::cout << ++final;
	}
	else 
	{
		int middle1 = numLength / 2 + 1;
		int middle2 = numLength / 2;
		int halfOne = num / pow(10, middle1);
		int halfTwo = num % int(pow(10, middle2 - 1));
		std::cout <<halfOne<< halfTwo<<" ";
		final = halfOne * pow(10, middle2-1) + halfTwo;
		std::cout << ++final;
	}*/
}








                            //ЗАДАЧИ ОТ ФУНКЦИИ

#include <iostream>

int absoluteValue(int);
bool isDigit(char);
char toUpper(char);
char toLower(char);
int toNumber(char);
char toCharacter(int);
int power(int, unsigned int);
bool isPrime(unsigned int);
short getLength(int);


bool isPermutation(long,long);
bool isPalindrome(long);

int main()
{
	 std::cout<<isPalindrome(1267621);


}

bool isPermutation(long num1, long num2)       //Ex.1
{
	long perm1 = 1;
	long perm2 = 1;
	while (num1 != 0)
	{
		perm1 *= (num1 % 10);
		num1 /= 10;
	}
	while (num2 != 0)
	{
		perm2 *= (num2 % 10);
		num2 /= 10;
	}
	return perm1 == perm2;
}

bool isPalindrome(long num)				//Ex.2
{
	long newNum = 0;
	long numCopy = num;
	while (numCopy != 0) 
	{
		newNum = (newNum * 10) + (numCopy % 10);
		numCopy /= 10;
	}
	return newNum == num;
}




int absoluteValue(int a)
{
	return  a < 0 ? -a : a;
}

bool isDigit(char b)
{
	if (b <= '9' && b >= '0')return true;
	return false;
}

char toUpper(char c)
{
	return c + 'A' - 'a';
}

char toLower(char d)
{
	return d - 'A' + 'a';
}

int toNumber(char e)
{
	if (e >= '0' && e <= '9')
	{
		return e - '0';
	}
	return -1;
}

char toCharacter(int f) 
{
	return f + '0';
}

int power(int num, unsigned int power) 
{
	int newNum = 1;
	for (unsigned int i = 1; i <= power; i++)
	{
		newNum *= num;
	}
	return newNum;
}

bool isPrime(unsigned int n) 
{
	int end = n / 2;
	if (n == 1)return false;
	for (int i = 2; i < end; i++)
	{
		if (n % i == 0)return false;
	}
	return true;
}

short getLength(int g) 
{
	int counter = 0;
	while (g != 0)
	{
		counter++;
		g /= 10;
	}
	return counter;
}
