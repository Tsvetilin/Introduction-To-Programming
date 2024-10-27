#include <iostream>

void task1()
{
	unsigned n, a, b;
	std::cin >> n;
	for (unsigned i = 2; i <= n; i++)
	{
		bool isPrime = true;
		for (unsigned j = 2; j < i; j++)
		{
			if (i % j == 0)
			{
				isPrime = false;
				break;
			}
		}
		if (isPrime)
		{
			for (unsigned k = i + 1; k <= n; k++)
			{
				bool isPrime2 = true;
				for (unsigned l = 2; l < k; l++)
				{
					if (k % l == 0)
					{
						isPrime2 = false;
						break;
					}
				}
				if (isPrime2 && i + k == n)
				{
					std::cout << n << " = " << i << " + " << k << std::endl;
					break;
				}
			}
		}
	}
}

void task2()
{
	int n;
	std::cin >> n;
	double a = 0.5;

	for (int i = 0; i < n; i++) {
		a = (a * a + 1) / 2;
	}

	std::cout << a;
}

void task3()
{
	unsigned n;
	std::cin >> n;
	for (unsigned i = 0; i < n; i++)
	{
		for (unsigned j = 0; j < i + 1; j++)
		{
			std::cout << "$ ";
		}
		std::cout << std::endl;
	}
}

void task4()
{
	unsigned n;
	std::cin >> n;
	for (unsigned i = 0; i < n; i++)
	{
		for (unsigned j = 0; j < n; j++)
		{
			if ((i == 0 && j == 0) || (i == 0 && j == n - 1) || (i == n - 1 && j == 0) || (i == n - 1 && j == n - 1)) std::cout << "+ ";
			else if (j == 0 || j == n - 1) std::cout << "| ";
			else std::cout << "- ";
		}
		std::cout << std::endl;
	}
}

void task5()
{
	unsigned n, k = 0, l = 2;
	std::cin >> n;
	for (unsigned i = 1; i <= n + (n - 1); i++)
	{
		for (unsigned j = 1; j <= n * 3; j++)
		{
			if (j > ((n * 3) / 2) + 1) k--;
			else if ((n % 2 == 0) && j == ((n * 3) / 2) + 1);
			else k++;
			if (k <= i && i <= n) std::cout << k;
			else if (i == n) std::cout << "-";
			else if (i > n && k <= i - l) std::cout << k;
			else std::cout << " ";
		}
		k = 0;
		if (i > n) l += 2;
		std::cout << std::endl;
	}
}

void task6()
{
	unsigned n, k = 1, l = 1, count = 1;
	std::cin >> n;
	for (unsigned i = 1; i <= (n * 2) + 3; i++)
	{
		for (unsigned j = 1; j <= n + 2; j++)
		{
			if (i == 1 || i == (n * 2) + 3 || j == 1 || j == n + 2) std::cout << "#";
			else if (i == n + 2 && j == (n + 2) / 2 + 1 && n % 2 != 0) std::cout << "X";
			else if (i == n + 2 && j == (n + 2) / 2 && n % 2 == 0) { std::cout << "XX"; j++; }
			else if (i == n + 2) std::cout << " ";
			else if (k > n && count <= n) { k = 1;  std::cout << k++; count++; }
			else { std::cout << k++; count++; }
		}
		if (i < n + 2) k = l++;
		else if (i == n + 2) { k = n; l = n; l--; }
		else if (i > n + 2) k = l--;
		count = 1;
		std::cout << '\n';
	}
}

void task7()
{
	unsigned n;
	std::cin >> n;
	unsigned a = 1, b = n * 2 - 1;
	for (unsigned i = 1; i <= n; i++)
	{
		unsigned value = i;
		for (unsigned j = 1; j <= n; j++)
		{
			std::cout << value << " ";

			if (j % 2 == 0) value += a;
			else value += b;
		}
		a += 2;
		b -= 2;
		std::cout << std::endl;
	}
}

void task8()
{
	unsigned n, value = 0;
	std::cin >> n;

	for (unsigned i = 1; i <= n; i++)
	{
		if (i % 2 == 0)
		{
			value += n;

			for (unsigned j = 0; j < n; j++)
				std::cout << value-- << " ";

			value += n;
		}
		else
		{
			for (unsigned j = 0; j < n; j++)
				std::cout << ++value << " ";
		}
		std::cout << std::endl;
	}
}

int main()
{
	//task1();
	//task2();
	//task3();
	//task4();
	//task5();
	//task6();
	//task7();
	//task8();
	return 0;
}