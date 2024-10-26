#include <iostream>

int main()
{
	int n;
	std::cin >> n;
	int morePreviousNum = 0, previousNum = 1;
	int currentNum;

	for (int i = 0; i < 10; i++)
	{
		currentNum = morePreviousNum + previousNum;
		std::cout << currentNum << " ";
		morePreviousNum = previousNum;
		previousNum = currentNum;
	}
}