#include <iostream>

int main() 
{
	int n;
	std::cin >> n;

	int sum = 0;
	while (true)
	{
		int num;
		std::cin >> num;
		if (num == -1) {
			break;
		}
		if (num < n && num % 2 == 0)
		{
			sum += num;
		}
	}
	std::cout << sum;
}
}