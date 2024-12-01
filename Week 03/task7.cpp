#include <iostream>

int main() 
{
	int start, end;
	std::cin >> start >> end;
	int sum = 0;
	for(int i = start; i <= end; i++)
	{
		for(int t = 1; t < i; t++)
		{
			if (i % t == 0)
			{
				sum += t;
			}
		}
		if (i == sum)
		{ 
			std::cout << i << std::endl;
		}
		sum = 0;
	}
}