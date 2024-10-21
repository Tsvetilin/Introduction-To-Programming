
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
	int n;
	std::cin >> n;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{

		}
	}


}
