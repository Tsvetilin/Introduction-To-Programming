
// practicum6.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
//1
void swap(int& num1, int& num2)
{
	int swap = num1;
	num1 = num2;
	num2 = swap;
}

//2
void division(int num1, int num2)
{
	int min = 0, ngd = 0;
	if (num1 > num2)
	{
		min = num2;
	}
	else
	{
		min = num1;
	}
	for (int i = min; min >= 1; i--)
	{
		if (num1 % i == 0 && num2 % i == 0)
		{
			ngd = i;
			break;
		}
	}
	num1 = num1 / ngd;
	num2 = num2 / ngd;
	std::cout << num1 << " " << num2;
}

//3
int toReversed(int n) {
	int reversed = 0;
	while (n) {
		reversed = reversed * 10 + n % 10;
		n /= 10;
	}
	return reversed;
}
int removeDigit(int n, int k)
{
	int newNum = 0, i = 0;
	while (n != 0)
	{
		if (i != k)
		{
			newNum = newNum * 10 + n % 10;;
		}
		n /= 10;
		i++;
	}
	return toReversed(newNum);

}

//4
void exercise4(int num)
{
	int i = 0, evenNum = 0, oddNum = 0;
	while (num != 0)
	{
		int digit = num % 10;
		if (i % 2 == 0)
		{
			evenNum = evenNum * 10 + digit;
		}
		else
		{
			oddNum = oddNum * 10 + digit;
		}
		i++;
		num /= 10;
	}
	std::cout << toReversed(evenNum) << " " << toReversed(oddNum);
}

//5
int numLen(int n)
{
	int count = 0;
	while (n != 0)
	{
		count++;
		n /= 10;
	}
	return count;
}
int exercise5(int num, int i, int j)
{
	int newReversedNum = toReversed(num), newNum = 0;
	for (int k = 1; k <= numLen(num); k++)
	{
		int digit = newReversedNum % 10;
		if (k >= i && k <= j)
		{
			newNum = newNum * 10 + digit;
		}
		newReversedNum /= 10;
	}
	return newNum;
}

//6
void exercise6(int num1, int num2, int k)
{
	int reversed1 = toReversed(num1);
	int reversed2 = toReversed(num2);
	int k1 = 0, k2 = 0,firstNewNum=0,secondNewNum=0;
	for (int i = 1; i <= numLen(num1); i++)
	{
		int digit = reversed1 % 10;
		if (k == i)
		{
			k1 = digit;
			break;
		}
		reversed1 /= 10;
	}
	for (int i = 1; i <= numLen(num2); i++)
	{
		int digit = reversed2 % 10;
		if (k == i)
		{
			k2 = digit;
			digit = k1;
			break;
		}
		secondNewNum = secondNewNum * 10 + digit;

		reversed2 /= 10;
	}
	std::cout << firstNewNum << " " << secondNewNum;

}

//7
int exercise7(int num1, int num2)
{
	int min = 0, ngd = 0;
	if (num1 > num2)
	{
		min = num2;
	}
	else
	{
		min = num1;
	}
	for (int i = min; min >= 1; i--)
	{
		if (num1 % i == 0 && num2 % i == 0)
		{
			ngd = i;
			break;
		}
	}
	return ngd;
}

//8
int exercise8(int num1, int num2)
{
	int max = num2, nok = 0;
	if (num1 > num2)
	{
		max = num1;
	}
	for (int i = max; i <= num1 * num2; i++)
	{
		if (i % num1 == 0 && i % num2 == 0)
		{
			nok = i;
			break;
		}
	}
	return nok;
}

//9 
int concat(unsigned int first, unsigned int second)
{
	int newNum = 0;
	while (second != 0)
	{
		int digit = second % 10;
		newNum = newNum * 10 + digit;
		second /= 10;
	}
	while (first != 0)
	{
		int digit = first % 10;
		newNum = newNum * 10 + digit;
		first /= 10;
	}
	newNum = toReversed(newNum);
	

	return newNum;

}

int main()
{
	//1
	//int num1 = 10, num2 = 5;
	//swap(num1, num2);
	//std::cout << num1 <<" "<< num2 << std::endl;

	//2
	/*int num1 = 4, num2 = 16;
	division(num1, num2);*/

	//3
	/*int num = 12345, k = 2;
	std::cout << removeDigit(num, k);*/

	//4
	/*int num = 1234567;
	exercise4(num);*/

	//5
	/*int num = 1234567, i = 2, j = 5;
	std::cout << exercise5(num, i, j);*/

	//6
	exercise6(1234, 567, 2);

	//7
	//std::cout << exercise7(15, 25);

	//8
	//std::cout << exercise8(6, 9);

	//9
	//std::cout << concat(123, 456);
}

