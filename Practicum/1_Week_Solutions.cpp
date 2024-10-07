#include <iostream>

int main()
{
	/*
	int a;
	std::cin >> a;
	int res = a % 2;
	std::cout << res;
	*/

	/*
	int num1, num2;
	std::cin >> num1 >> num2;
    double result1 = num1 / num2;
	double result2 = num1 % num2;
	std::cout << result1 << std::endl << result2;
	*/

	/*
	double C;
	std:: cin >> C;
	double F;
	std::cout << (F = (9.0 / 5) * C + 32);
	*/


	/*
	double a=0, b=0;
	std::cin >> a >> b;
	double P = 2 * a + 2 * b;
	double S = a * b;
	std::cout << P << std::endl;
	std::cout << S;
	*/


	int sec;
	std::cin >> sec;
	long days = sec / (24*60*60);
	int hours = sec % (24 * 60 * 60) / 60 / 60; 
	int min = (sec - ((days * 24 * 60 * 60) + (hours * 60 * 60))) / 60;
	int sec = sec - (days * 24 * 60 * 60) - (hours * 60 * 60) - (min*60);
	std::cout << days << std::endl << hours << std::endl << min<< std::endl << sec;

		
}
