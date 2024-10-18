//13. Въвеждат се целите числа a, b, c, които са съответно коефициентите в 
// уравнението ax2 + bx + c = 0. Да се изведе колко на брой реални корени има 
// това уравнение.
#include <iostream>

int main()
{
	int a, b, c;
	std::cin >> a >> b >> c;
	float d = b * b - 4 * a * c;
	if (d > 0)
	{
		std::cout << "2";
	}
	else if (d == 0)
	{
		std::cout << "1";
	}
	else
	{
		std::cout << "0";
	}
}
