#include <iostream>


int reversed(int a)
{
	int a1 = 0;
	while (a != 0)
	{
		int f = a % 10;
		a1 = (a1 * 10) + f;
		a /= 10;
	}
	return a1;
}
int numCount(int n)
{
	int count = 0;
	while (n != 0)
	{
		count++;
		n /= 10;
	}
	return count;
}
int changeNums(int n, int nDig, int mDig)
{
	int nNew = 0;
	while (n != 0)
	{
		int d = n % 10;
		if (d == nDig)nNew = nNew * 10 + mDig;
		else nNew = nNew * 10 + d;
		n /= 10;
	}
	return reversed(nNew);
}

void swap(int& num1, int& num2)
{
	int temp = num1;
	num1 = num2;
	num2 = temp;
}
void Ex2(int& a, int& b)
{
	int min = a >= b ? b : a;
	for (int i = min; i > 0; i--)
	{
		if (a % i == 0 && b % i == 0)
		{
			a /= i;
			b /= i;
			break;
		}
	}
}
int Ex3(int n, int k)
{
	int temp = n % int(pow(10, k - 1));
	n /= pow(10, k);
	n = n * pow(10, k - 1) + temp;
	std::cout << n;
	return 0;
}
int Ex4(int num)
{
	int j = 0;
	int evenPos = 0;
	int oddPos = 0;
	while (num != 0)
	{
		int d = num % 10;
		if (j % 2 == 1) evenPos = evenPos * 10 + d;
		else oddPos = oddPos * 10 + d;
		j++;
		num /= 10;
	}
	evenPos = reversed(evenPos);
	oddPos = reversed(oddPos);
	std::cout << evenPos << " " << oddPos;
	return 0;
}
int Ex5(int n, int start, int end)
{
	int newNum = 0;
	int numbers = numCount(n);
	for (int i = 0; i < numbers; i++)
	{
		if (i >= start && i <= end)
		{
			int d = n % 10;
			newNum = newNum * 10 + d;
		}
		n /= 10;
	}
	newNum = reversed(newNum);
	std::cout << newNum;
	return newNum;
}
void Ex6(int n, int m, int k)
{
	int nDig = 0, mDig = 0;
	int nCopy = n, mCopy = m;
	while (nCopy != 0 || mCopy != 0)
	{
		if (numCount(nCopy) == k)nDig = nCopy % 10;
		if (numCount(mCopy) == k)mDig = mCopy % 10;
		nCopy /= 10;
		mCopy /= 10;
	}
	n = changeNums(n, nDig, mDig);
	m = changeNums(m, mDig, nDig);
	std::cout << n << " " << m;
}
int gcd(int a, int b)
{
	int min = a >= b ? b : a;
	int gcd = 0;
	for (int i = min; i > 0; i--)
	{
		if (a % i == 0 && b % i == 0)
		{
			a /= i;
			b /= i;
			gcd = i;
			break;
		}
	}
	return gcd;
}
int lcm(int c, int d)
{
	int multiplayer = c * d;
	int max = c >= d ? c : d;
	for (int i = max; i <= multiplayer; i++)
	{
		if (i % d == 0 && i % c == 0)
		{
			multiplayer = i;
			break;
		}
	}
	return multiplayer;
}
int concat(unsigned int a, unsigned int b)
{
	int numsB = numCount(b);
	int newNum = a * pow(10, numsB) + b;
	return newNum;
}


int main()
{
	
}
