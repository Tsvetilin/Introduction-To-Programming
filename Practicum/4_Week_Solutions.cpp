
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
	int n, count = 1;
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
	}

	//


}
