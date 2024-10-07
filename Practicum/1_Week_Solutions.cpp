
#include<iostream>
	int main() {
		//ex1
		//int n;
		//std::cin >> n;
		//std::cout << (n % 2) - 1;
		
		//ex2
		//int a, b;
		//std::cin >> a;
		//std::cin >> b;

		//std::cout << a / b << std::endl;
		//std::cout << a % b << std::endl;

		//ex3
	/*	double cel;
		std::cin >> cel;
		double far = (9.0 / 5.0) * cel + 32;
		std::cout << far;*/

		////ex4
		//double a, b;
		//std::cin >> a;
		//std::cin >> b;
		//double per = 2 * (a + b);
		//double area = a * b;
		//std::cout << per << std::endl;
		//std::cout << area << std::endl;

		//ex5
		//int sec;
		//std::cin >> sec;
		//int min = sec / 60;
		//sec %= 60;
		//int hour = min / 60;
		//min %= 60;
		//int day = hour / 24;
		//hour %= 24;
		//std::cout << day << " days, " << hour << " hours, " << min << " minutes, " << sec << " seconds" << std::endl;

		//ex6
		//int n;
		//std::cin >> n;
		//std::cout << n / 10;

		////ex7
		//int n;
		//std::cin >> n;
		//std::cout << (n <= 6 && n >= 2) ? 1 : 0;

		//ex8
	//	int a, b, c, d;
	//	std::cin >> a;
	//	std::cin >> b;
	//	std::cin >> c;
	//	std::cin >> d;


	//	std::cout << (b < d && b > c) || (d < b && d > a);
	///*	4
	//		9
	//		8
	//		23*/

		//ex9
		//int n;
		//std::cin >> n;
		//std::cout << (double) n/2 * (2 + (n - 1));

		//ex10
		//double a, b, c, d;
		//std::cin >> a;
		//std::cin >> b;
		//std::cin >> c;
		//std::cin >> d;
		//bool AP = true;
		//double q = d / c;
		//AP = (q == c / b) && AP;
		//q = c / b;
		//AP = (q == b / a) && AP;
		//std::cout << AP;

		//ex11
	/*	double a, b;
		std::cin >> a;
		std::cin >> b;
		a = a + b;
		b = a - b;
		a = a - b;
		std::cout << a << "  " << b;*/


		//ex12

		double a, b;
		std::cin >> a;
		std::cin >> b;
		std::cout << (a > b) * a || (b >= a) * b;


		return 0;
	}

