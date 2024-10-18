//11. ƒа се напише програма, ко€то чете от конзолата три числа
// - ден, месец и година, и извежда на екрана 1, ако трите числа 
// оформ€т валидна дата, и 0 в противен случай.
#include <iostream>

int main()
{
	int day, month, year;
	std::cin >> day >> month >> year;
	if (day > 0 && month > 0 && year > 0)
	{
		if (month == 4 || month == 6 || month == 9 || month == 11)
		{
			if (day <= 30) std::cout << "1";
			else std::cout << "0";
		}
		else if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
		{
			if (day <= 31) std::cout << "1";
			else std::cout << "0";
		}
		else if (month == 2)
		{
			if ((year % 400 == 0) || (year % 4 == 0) && year % 100 != 0)
			{
				if (day <= 29) std::cout << "1";
				else std::cout << "0";
			}
			else
			{
				if (day <= 28) std::cout << "1";
				else std::cout << "0";
			}
		}
		else std::cout << "0";
	}
	else std::cout << "0";
}
