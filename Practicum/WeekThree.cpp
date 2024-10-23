#include <iostream> 

void task1()
{
    const unsigned short MAX_SIZE = 255;
    unsigned short n, m;
    std::cout << "Start: ";
    std::cin >> n;
    std::cout << "End: ";
    std::cin >> m;
    if (n > MAX_SIZE || m > MAX_SIZE)
    {
        std::cerr << "Invalid codes!" << std::endl;
		return;
    }
    for (unsigned short i = n; i <= m; i++)
    {
        std::cout << i << " --> " << (char)i << std::endl;
    }
}

void task2()
{
	unsigned n, res = 1;
	std::cin >> n;
	for (unsigned i = 1; i <= n; res *= i++);
	std::cout << res;
}

void task3()
{
	unsigned n, res = 0;
	std::cin >> n;
	for (unsigned i = 1; i <= n; i++)
	{
		for (unsigned j = 1; j < i + 1; j++)
		{
			res += j;
		}
	}
	std::cout << res;
}

void task4()
{
	unsigned n;
	std::cin >> n;
	for (unsigned i = 1; i < n; i++) 
	{
		if (n % i == 0) std::cout << i << " ";
	}
}

void task5()
{
	int n, a = 0, b = 1;
	std::cin >> n;
	for (int i = 1; i <= n; i++)
	{
		if (i == 1) 
		{
			std::cout << a << " ";
			continue;
		}
		if (i == 2) 
		{
			std::cout << b << " ";
			continue;
		}

		const int temp = a + b;
		a = b;
		b = temp;
		std::cout << temp << " ";
	}
}

void task6()
{
	unsigned n;
	std::cin >> n;
	int i, sum = 0;
	while (true)
	{
		std::cin >> i;
		if (i == -1) break;
		if (i % 2 == 0 && i < n) sum += i;
	}
	std::cout << sum;
}

void task7()
{
	unsigned m, n, sum = 0;
	std::cin >> m >> n;
	for (unsigned i = m; i <= n; i++)
	{
		for (unsigned j = 1; j < i; j++)
		{
			if (i % j == 0)
			{
				sum += j;
			}
			if (sum > i)
			{
				sum = 0;
				break;
			}
		}
		if (sum == i)
		{
			std::cout << i << "\n"; 
		}
		sum = 0;
	}
}

void task8()
{
	unsigned m, n;
	std::cin >> m >> n;
	for (unsigned i = 1; i <= m; i++)
	{
		for(unsigned j = 1; j <= n; j++)
		{
			std::cout << "(" << i << ", " << j << ") ";
		}
		std::cout << '\n';
	}
}

int main()
{

}
