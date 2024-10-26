#include <iostream>

int main()
{
	int n;
	std::cin >> n;
	int factoriel = 1, i = 1;
	while (i <= n)
	{
		factoriel = i * factoriel;
		i++;
	}
	std::cout << factoriel;
}