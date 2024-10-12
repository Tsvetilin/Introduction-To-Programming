#include <iostream>

int main()
{
	// zad 1
	/*int num = 0;
	std::cin >> num;
	std::cout << !(num % 2);*/

	// zad 2
	/*int first = 0, second = 0;
	std::cin >> first >> second;
	std::cout << first / second << std::endl << first % second;*/

	// zad 3
	/*int celsius = 0;
	std::cin >> celsius;
	double farenheit = (9 / 5.0) * celsius + 32;
	std::cout << farenheit;*/

	// zad 4
	//double a = 0, b = 0;
	//std::cin >> a >> b;
	//double perimeter = 2 * (a + b);
	//double area = a * b;
	//std::cout << perimeter << std::endl << area;

	//zad 5 
	/*int time = 0;
	std::cin >> time;
	int days = time / 60 / 60 / 24;
	int hours = time / 60 / 60 % 24;
	int minutes = time / 60 % 60;
	int seconds = time % 60;
	std::cout << days << " days, " << hours << " hours, " << minutes << " minutes and " << seconds << " seconds";*/

	// zad 6
	//int num = 0;
	//std::cin >> num;
	//int withoutLastDigit = num / 10;
	//std::cout << withoutLastDigit;

	// zad 7
	/*int grade = 0;
	std::cin >> grade;
	bool isValid = grade >= 2 && grade <= 6;
	std::cout << isValid;*/

	// zad 8 
	/*int a = 0, b = 0, c = 0, d = 0;
	std::cin >> a >> b >> c >> d;
	bool intersecting = (a >= c && a <= d) || (b >= c && b <= d) || (c >= a && c <= b) || (d >= a && d <= b);
	std::cout << intersecting;*/

	// zad 9 
	//int n = 0;
	//std::cin >> n;
	//int sum = n * (n + 1) / 2;
	//std::cout << sum;

	// zad 10
	/*int a = 0, b = 0, c = 0, d = 0;
	std::cin >> a >> b >> c >> d;
	bool isGeometr = (b * b == a * c) && (c * c == b * d);
	std::cout << isGeometr;*/

	// zad 11
	/*double a = 0, b = 0;
	std::cin >> a >> b;
	a = a + b;
	b = a - b;
	a = a - b;
	std::cout << a << std::endl << b;*/

	// zad 12
	//double a = 0, b = 0;
	//std::cin >> a >> b;
	//std::cout << (a > b) * a + (b >= a) * b;
	//// алтернатива с модул
	//std::cout << (abs(a - b) + a + b) / 2;

	// zad 13
	/*int num = 0;
	std::cin >> num;
	int hasTwoDigits = (abs(num) >= 10 && abs(num) <= 99);
	int result = hasTwoDigits * num + !hasTwoDigits * (num % 10);
	std::cout << result;*/

	// zad 14
	/*int a = 0, b = 0, c = 0, d = 0, e = 0;
	std::cin >> a >> b >> c >> d >> e;
	int oddSum = (a % 2) * a + (b % 2) * b + (c % 2) * c + (d % 2) * d + (e % 2) * e;
	std::cout << oddSum;*/

	// zad 15
	//int a = 0, b = 0, c = 0;
	//std::cin >> a >> b >> c;
	//bool isValidTriangle = (a + b > c) && (a + c > b) && (b + c > a);
	//std::cout << isValidTriangle;

	// bonus 1 
	/*int n = 0, a1 = 3;
	std::cin >> n;
	int an = n - (n % 3);
	int count = n / 3;
	int sum = count * (a1 + an) / 2;
	std::cout << sum;*/

	// bonus 2 
	/*int n = 0;
	std::cin >> n;
	int reversed = (n % 10) * 100 + (n / 10 % 10) * 10 + (n / 100);
	std::cout << reversed + 1;*/

	// bonus 3
	//int n = 0;
	//std::cin >> n;
	//int hasOneDigit = (abs(n) >= 0 && abs(n) <= 9);
	//int hasTwoDigits = (abs(n) >= 10 && abs(n) <= 99);
	//int result = hasOneDigit * n + hasTwoDigits * (n % 10 + 1) + !(hasOneDigit || hasTwoDigits) * (n / 10);
	//std::cout << result;

	return 0;
}
