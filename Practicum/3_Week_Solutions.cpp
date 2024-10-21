
#include <iostream>

int main()
{
	//1
	/*int n, m;
	std::cin >> n >> m;
	if (n > 256 || n < 0 || m>256 || m < 0)
	{
		std::cout << "Invalid input";
		return 1;
	}
	for (int i = n; i <= m; i++)
	{
		std::cout << i << " -> " << (char)i << std::endl;
	}*/

	//2
	/*long number, factoriel=1;
	std::cin >> number;
	if (number == 0)
	{
		std::cout << "1";
	}
	else
	{
		for (int i = 1; i <= number; i++)
		{
			factoriel *= i;
		}
	}
	std::cout <<number<< "! = " << factoriel;*/

	//3
	/*int number,sum=0;
	std::cin >> number;
	for (int i = 1; i <= number; i++)
	{
		int j = i;
		while (j > 0)
		{
			sum += j;
			j--;
		}
	}
	std::cout << sum;*/

	//4
	/*int number;
	std::cin >> number;
	for (int i = 1; i < number; i++)
	{
		if (number % i == 0)
		{
			std::cout << i << " ";
		}
	}*/

	//5
	/*int number, firstFib = 0, secondFib = 1;
	std::cin >> number;
	if (number <= 0)
	{
		std::cout << "Invalid";
		return 0;
	}
	if (number == 1)
	{
		std::cout << firstFib;
		return 0;
	}
	if (number == 2)
	{
		std::cout << secondFib;
		return 0;
	}

	std::cout << firstFib << " " << secondFib << " ";

	for (int i = 3; i <= number; i++)
	{
		int nextFib = firstFib + secondFib;
		firstFib = secondFib;
		secondFib = nextFib;
		std::cout << nextFib << " ";
	}*/

	//6
	/*int number,curNum,sum=0;
	std::cin >> number >> curNum;

	while (curNum != -1)
	{
		if (curNum < number && curNum % 2 == 0)
		{
			sum += curNum;
		}
		std::cin >> curNum;
	}
	std::cout << sum;*/

	//7
	/*int n, m,sum=0;
	std::cin >> n >> m;
	for (int i = n; i <= m; i++)
	{
		sum = 0;
		for (int j = 1; j< i; j++)
		{
			if (i % j == 0)
			{
				sum += j;
			}
		}
		if (sum == i)
		{
			std::cout << sum <<std::endl;
		}
	}*/

	//8
	/*int n, m;
	std::cin >> n >> m;
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <=m; j++)
		{
			std::cout << "(" << i << " , " << j << ") ";
		}
		std::cout<<std::endl;
	}*/

}

