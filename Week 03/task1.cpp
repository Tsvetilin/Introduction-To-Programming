#include <iostream>

int main()
{
	int n, m;
	std::cin >> n >> m;
	if (n > m || n > 256)
	{
		std::cout << "num are not in the correct interva ";
		return 1;
	}
	for (char num = n; num < m; num++)
	{
		std::cout << num << '\n';
	}
}