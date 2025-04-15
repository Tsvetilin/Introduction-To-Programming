#include <iostream>

int main()
{
	int n, m;
	std::cin >> n >> m;
	for (int i = 0; i <= n; i++)
	{ 
		for (int j = 0; j <= m; j++)
		{
			std::cout << "(" << i << "," << j << ")";
		}
		std::cout << endl;
	}
}