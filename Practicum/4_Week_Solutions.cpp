#include <iostream>

int main()
{
	//1
	/*int number;
	bool isPrime = true;
	std::cin >> number;
	int halfNumber = number / 2;
	for (int i = 1; i <= halfNumber; i++)
	{
		for (int j = 2; j < i; j++)
		{
			if (i % j == 0)
			{
				isPrime = false;
				break;
			}
		}
		if (isPrime && i != 1 && i != 2)
		{
			std::cout << i << " + " << number - i << " = " << number << std::endl;
		}
	}*/

	//2
	/*int num;
	double firstNum = 1.0 / 2,nextNum=0;
	std::cin >> num;
	for (int i = 1; i <= num; i++)
	{
		nextNum = (firstNum * firstNum + 1.0) / 2.0;
		firstNum = nextNum;
	}
	std::cout << nextNum;*/

	//3
	/*int number;
	std::cin >> number;
	for (int i = 1; i <= number; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			std::cout << "$ ";
		}
		std::cout<<std::endl;
	}*/

	//4
	/*int number;
	std::cin >> number;
	if (number < 2)
	{
		std::cout << "Invalid number";
	}
	else if (number == 2)
	{
		std::cout << "+ +";
		std::cout << "+ +";
	}
	else
	{
		for (int i = 0; i < number; i++)
		{
			if (i == 0 || i == number - 1)
			{
				std::cout << "+ ";
			}
			else
			{
				std::cout << "| ";
			}
			for (int j = 1; j < number-1; j++)
			{
				std::cout << "- ";
			}
			if (i == 0 || i == number - 1)
			{
				std::cout << "+"<<std::endl;
			}
			else
			{
				std::cout << "|" << std::endl;
			}
		}
	}*/

	//5
	/*int n, count = 1;
	std::cin >> n;
	for (int i = 1; i <= n; i++)
	{
		count = 1;
		for (int j = 1; j <= i; j++)
		{
			std::cout << count++;
			if (i == n && j == i)
			{
				for (int k = 0; k < n; k++)
				{
					std::cout << '-';
				}
			}
		}
		for (int p = i + 1; p <= 3 * n; p++)
		{
			if (i != n)
			{
				std::cout << " ";
			}
			if (p == 3 * n - i)
			{
				for (int k = 3 * n - i; k < 3 * n; k++)
				{
					std::cout << (count - 1);
					count--;
				}
			}
		}
		std::cout << std::endl;
	}
	for (int i = n-1; i > 0; i--)
	{
		count = 1;
		for (int j = 1; j <= i; j++)
		{
			std::cout << count++;
			if (i == n && j == i)
			{
				for (int k = 0; k < n; k++)
				{
					std::cout << '-';
				}
			}
		}
		for (int p = i + 1; p <= 3 * n; p++)
		{
			if (i != n)
			{
				std::cout << " ";
			}
			if (p == 3 * n - i)
			{
				for (int k = 3 * n - i; k < 3 * n; k++)
				{
					std::cout << (count - 1);
					count--;
				}
			}
		}


		std::cout << std::endl;
	}*/

	//6
	/*int n, count = 1;
	std::cin >> n;
	for (int i = 1; i <= n + 2; i++)
	{
		std::cout << "#";
	}
	std::cout << std::endl;
	bool lastElReached = false;
	for (int i = 1; i <= n; i++)
	{
		count = 0;
		lastElReached = false;
		std::cout << "#";
		for (int j = i; j < n + i; j++)
		{
			if (j > n)
			{
				lastElReached = true;
				for (int k = 1; k <= n; k++)
				{
					if (count == n)
					{
						break;
					}
					std::cout << k;
					count++;

				}
			}
			if (lastElReached)
			{
				break;
			}
			std::cout << j;
			count++;
		}
		std::cout << "#" << std::endl;
	}
	for (int i = 1; i < n + 2; i++)
	{
		if (i == 1 || i == n + 1)
		{
			std::cout <<"#";
		}

		if (n % 2 == 0)
		{
			if (i == (n + 2) / 2|| i == (n + 2) / 2-1)
			{
				std::cout << "X";
				continue;
			}
		}
		else
		{
			if (i == (n + 2) / 2)
			{
				std::cout << "X";
				continue;
			}
		}
		std::cout << " ";


	}
	std::cout << std::endl;
	for (int i = n; i >0; i--)
	{
		count = 0;
		lastElReached = false;
		std::cout << "#";
		for (int j = i; j < n + i; j++)
		{
			if (j > n)
			{
				lastElReached = true;
				for (int k = 1; k <= n; k++)
				{
					if (count == n)
					{
						break;
					}
					std::cout << k;
					count++;

				}
			}
			if (lastElReached)
			{
				break;
			}
			std::cout << j;
			count++;
		}
		std::cout << "#" << std::endl;
	}
	for (int i = 1; i <= n + 2; i++)
	{
		std::cout << "#";
	}*/

	//7
	/*int n,currentCount;
	std::cin >> n;
	for (int i = 0; i < n; i++)
	{
		currentCount = i+1;
		std::cout << i + 1<<" ";
		for (int j= 1;  j < n;  j++)
		{
			if (i == 0)
			{
				if (j % 2 == 0)
				{
					currentCount += 1;
					std::cout << currentCount << " ";
				}
				else
				{
					currentCount += 2 * (n - i) - 1;
					std::cout << currentCount << " ";
				}
			}
			else if (i == n - 1)
			{
				if (j % 2 == 1)
				{
					currentCount += 1;
					std::cout << currentCount << " ";
				}
				else
				{
					currentCount += 2 * (n) - 1;
					std::cout << currentCount << " ";
				}
			}
			else
			{
				if (j % 2 == 0)
				{
					currentCount += 2*(i)+1;
					std::cout << currentCount << " ";
				}
				else
				{
					currentCount += 2 * (n - i) - 1;
					std::cout << currentCount << " ";
				}
			}
		}
		std::cout << std::endl;
	}*/

	//8
	int n;
	std::cin >> n;
	for (int i = 1; i <= n; i++)
	{
		if (i % 2 == 1)
		{
			int startPoint = (i - 1) * n;
			for (int j = startPoint; j < startPoint+n; j++)
			{
				std::cout << j + 1 << " ";
			}
			std::cout << std::endl;
		}
		else
		{
			int startPoint = (i) * n;
			for (int k = startPoint; k > startPoint-n; k--)
			{
				std::cout << k << " ";
			}
			std::cout << std::endl;
		}

	}

	// practicum5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
	//1
	/*int n;
	bool isPrime = true;
	std::cin >> n;
	for (int i = 2; i <n; i++)
	{
		if (n % i == 0)
		{
			isPrime = false;
			break;
		}
	}
	if ((isPrime || n == 2)&&n!=1)
	{
		std::cout << "Prime Number";
	}
	else
	{
		std::cout << "Not Prime Number";
	}*/

	//2
	/*long n,digit,number,count=0;
	std::cin >> n;
	std::cin >> number;
	while (n != 0)
	{
		digit = n % 10;
		if (digit == number)
		{
			count++;
		}
		n /= 10;
	}
	std::cout << count;*/

	//4
	/*int n,newNum=0,curDigit;
	std::cin >> n;
	while (n != 0)
	{
		curDigit = n % 10;
		if (curDigit == 0 && newNum == 0)
		{
			n /= 10;
			continue;
		}
		newNum = newNum * 10 + curDigit;
		n /= 10;
	}
	std::cout << newNum;*/

	//5
	/*int k, m, n,curentNum;
	bool notValidNum;
	std::cin >> k >> m >> n;
	for (int i = m; i <= n; i++)
	{
		curentNum = i;
		notValidNum = false;
		while (curentNum != 0)
		{
			int curDigit= curentNum % 10;
			if (curDigit != 0)
			{
				if (k % curDigit != 0)
				{
					notValidNum = true;
					break;
				}
			}
			else
			{
				notValidNum = true;
				break;
			}
			curentNum /= 10;
		}
		if (!notValidNum)
		{
			std::cout << i << " ";
		}

	}*/

	//6
	int num,numDublicate, numLen = 0, newNum = 0,reversedNewNum=0;
	std::cin >> num;
	numDublicate = num;
	while (numDublicate != 0)
	{
		numLen++;
		numDublicate /= 10;
	}
	bool numLenIsEven = false;
	if (numLen % 2 == 0)
	{
		numLenIsEven = true;
	}

	for (int i = 1; i <= numLen; i++)
	{
		int curDigit = num % 10;

		if ((!numLenIsEven && i == numLen / 2+1) || (numLenIsEven && i == numLen / 2) || (numLenIsEven && i == numLen / 2 + 1))
		{
			num /= 10;
		}
		else 
		{
			newNum = newNum * 10 + curDigit;
			num /= 10;
		}

	}
	while (newNum != 0)
	{
		int d = newNum % 10;
		reversedNewNum = reversedNewNum * 10 + d;
		newNum /= 10;
	}
	std::cout << reversedNewNum << " " << reversedNewNum + 1;

}



}
