#include <iostream>
int main()
{
	//zad1
	/*int num;
	std::cin >> num;
	std::cout << (num % 2 == 0);*/

	//zad2
	/*int num1, num2;
	std::cin >> num1 >> num2;
	std::cout << num1 / num2 << std::endl << num1 % num2;*/
	
	//zad3
	/*double celsius;
	std::cin >> celsius;
	double far = ((9.0 / 5.0) * celsius) + 32;
	std::cout << far;*/

	//zad4
	/*double w, h;
	std::cin >> w >> h;
	std::cout << w * 2 + h * 2 << std::endl << w * h;*/

    //zad5
	/*int sec;
	std::cin >> sec;
	int days = sec / 86400;
	int hours = sec / 3600 - days*24;
	int mins = (sec % 3600) / 60;
	int secs = sec - (60 * (mins = sec / 60));
	std::cout << days << "days, " << hours << " hours," 
		<< mins << " mins, and " << secs << " seconds.";*/

	//zad6
	/*int num;
	std::cin >> num;
	std::cout << num / 10;*/

	//zad7
	/*int grade;
	std::cin >> grade;
	std::cout << (grade > 2 && grade < 6);*/

	//zad8
	/*int a, b, c, d;
	std::cin >> a >> b;
	std::cin >> c >> d;
	std::cout << (a <= c && b >= c && c <= d) || (c <= a && a <= d && d <= b);*/

	//zad9
	/*int n;
	std::cin >> n;
	std::cout << n*(n + 1) / 2;*/

	//zad10
	/*int a, b, c, d;
	std::cin >> a >> b >> c >> d;
	std::cout << (a * b == c) && (b * c == d) && (a * a == b);*/

	//zad11
	/*double a, b;
	std::cin >> a >> b;
	a = a + b;
	b = a - b;
	a = a - b;
	std::cout << a << " " << b;*/

	//zad12
	/*double a, b;
	std::cin >> a >> b;
	std::cout << (a > b) * a + (b >= a) + b;*/
}
