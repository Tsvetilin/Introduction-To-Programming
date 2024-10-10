
#include<iostream>
int main() {
	//ex1
	//int n;
	//std::cin >> n;
	//std::cout << (n % 2 == 0);

	//ex2
	//int a, b;
	//std::cin >> a;
	//std::cin >> b;
	//std::cout << a / b << std::endl;
	//std::cout << a % b << std::endl;

	//ex3
	//double cel;
	//std::cin >> cel;
	//double far = (9.0 / 5.0) * cel + 32;
	//std::cout << far;

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
	//std::cout << day << " days, " 
	// << hour << " hours, " 
	// << min << " minutes, " 
	// << sec << " seconds" 
	// << std::endl;

	//ex6
	//int n;
	//std::cin >> n;
	//std::cout << n / 10;

	//ex7
	//int n;
	//std::cin >> n;
	//std::cout << (n <= 6 && n >= 2);

	//ex8
	//int a, b, c, d;
	//std::cin >> a;
	//std::cin >> b;
	//std::cin >> c;
	//std::cin >> d;
	//std::cout << ((b >= c && a <= d) || (d >= a && c <= b));


	//ex9
	//int n;
	//std::cin >> n;
	//std::cout << (double) n/2 * (n + 1);

	//ex10
	//double a, b, c, d;
	//std::cin >> a;
	//std::cin >> b;
	//std::cin >> c;
	//std::cin >> d;
	//bool GP = a != 0 && b != 0 && c != 0 && d != 0;
	//GP = true;
	//double q = d / c;
	//GP = (q == c / b);
	//GP = (q == b / a);
	//GP = GP || (a == 0 && b == 0 && c == 0 && d == 0);
	//std::cout << GP;

	//ex11
	//double a, b;
	//std::cin >> a;
	//std::cin >> b;
	//a = a + b;
	//b = a - b;
	//a = a - b;
	//std::cout << a << "  " << b;


	//ex12
	//double a, b;
	//std::cin >> a;
	//std::cin >> b;
	//std::cout << (a > b) * a + (b >= a) * b;

	//ex13
	//int a;
	//std::cin >> a;
	//std::cout << (a >= 10 && a <= 99) * a + (a < 10 || a > 100) * a % 10;

	//ex14
	//int a, b, c, d, e;
	//std::cin >> a;
	//std::cin >> b;
	//std::cin >> c;
	//std::cin >> d;
	//std::cin >> e;
	//std::cout << 
	// ((a % 2 == 1) * a 
	// + (b % 2 == 1) * b 
	// + (c % 2 == 1) * c 
	// + (d % 2 == 1) * d 
	// + (e % 2 == 1) * e);

	// //ex15
	 //double a, b, c;
	 //std::cin >> a;
	 //std::cin >> b;
	 //std::cin >> c;
	 //double a2 = a * a;
	 //double b2 = b * b;
	 //double c2 = c * c;
	 //std::cout <<
		// (a2 + b2 == c2) ||
		// (b2 + c2 == a2) ||
		// (a2 + c2 == b2);

	//bonusEx1
	//int n;
	//std::cin >> n;
	//int a1 = 0;
	//int d = 3;
	//int lastNumber = n - n % 3;
	//std::cout << (n / 3) * (d + lastNumber) / 2;

	//bonusEx2
	//int n;
	//std::cin >> n;
	//int newNum = (n / 100) * 1;
	//n %= 100;
	//newNum += (n / 10) * 10;
	//n %= 10;
	//newNum += n * 100 + 1;
	//std::cout << newNum;

	//bonusEx3
	//int n;
	//std::cin >> n;
	//bool oneDigit = n / 10 == 0;
	//bool twoDigits = !oneDigit && (n / 100 == 0);
	//n += twoDigits;
	//bool moreThanTwoDigits = !oneDigit && !twoDigits;
	//std::cout << ((oneDigit * n) + (twoDigits * n % 10) + (moreThanTwoDigits * n / 10));
	return 0;
}
