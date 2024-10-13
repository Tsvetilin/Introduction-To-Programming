#include <iostream>
//		Задача 1

// int main()
// {
//    int a;
//    std::cin >> a;
//    bool isTrue = (a % 2 == 0);
//    std::cout << isTrue;
// }

//		Задача 2

// int main()
// {
//    int a, b;
//    std::cin >> a >> b;
//    std::cout << a / b << std::endl;
//    std::cout << a % b;
// }

//		Задача 3

// int main()
// {
//    double degreesCelcius;
//    std::cin >> degreesCelcius;
//    double degreesFarenhait = (degreesCelcius * (9.0 / 5.0) + 32);
//    std::cout << degreesFarenhait;
// }

//		Задача 4

//int main()
//{
//	double length, width;
// 	std::cin >> width >> length;
// 	double perimeter = 2 * (width + length);
// 	double area = length * width;
// 	std::cout << perimeter << std::endl;
// 	std::cout << area;
//}

//		Задача 5

//int main()
//{
//	int seconds, minutes, hours, days;
//	std::cin >> seconds;
// 	days = seconds / (60 * 60 * 24);
//	seconds -= days * 60 * 60 * 24;
// 	hours = seconds / (60 * 60);
//	seconds -= hours * 60 * 60;
// 	minutes = seconds/ 60;
//	seconds -= minutes * 60;
//	std::cout << days << " days, " << hours << " hours, " << minutes << " minutes, " << seconds << " seconds";
//}

//		Задача 6

//int main()
//{
// 	int a;
// 	std::cin >> a;
// 	std::cout << a / 10;
//}

//		Задача 7

//int main()
//{
//	int a;
//	std::cin >> a;
//	bool isTrue = (a >= 2 && a <= 6);
//	std::cout << isTrue;
//}

//		Задача 8

//int main()
//{
// 	int a, b, c, d;
// 	std::cin >> a >> b >> c >> d;
// 	bool intersect = (a <= d && b >= c);
//	//or !(a > d || b < c) the same because of de morgan rule ¬(a∨b) = ¬a∧¬b
// 	std::cout << intersect;
//}

//		Задача 9

 /*int main()
 {
 	int n;
 	std::cin >> n;
 	std::cout << n * (n + 1) / 2;	
 }*/

 //		Задача 10

//int main()
//{
//	int a,b,c,d;
//	std::cin >> a>>b>>c>>d;
//	bool isGeometryPrograssion = (a * c == b * b) && (b * d == c * c);
//	std::cout << isGP;
//}

//		Задача 11

//int main()
//{
//	double a, b;
//	std::cin >> a >> b;
//	a = a + b;
//	b = a - b;
//	a = a - b;
//	std::cout << a << " and " << b;
//}

//		Задача 12

//int main()
//{
//	double a, b;
//	std::cin >> a >> b;
//	bool isFirstLarger = a > b;
//	std::cout << isFirstLarger * a + !isFirstLarger * b;
//}

//		Задача 13

//int main()
//{
//	int a;
//	std::cin >> a;
//	bool isDoubleDigit = (a >= 10 && a <= 99) || (a <= -10 && a >= -99);
//	int print = isDoubleDigit * a + !isDoubleDigit * (a % 10);
//	std::cout << print;
//}

//		Задача 14

//int main(){
//	int a, b, c, d, e;
//	std::cin >> a>> b>> c>> d>> e;
//	int sum = (a % 2) * a;
//	sum += (b % 2) * b;
//	sum += (c % 2) * c;
//	sum += (d % 2) * d;
//	sum += (e % 2) * e;
//	std::cout << sum;
//}

//		Задача 15

//int main() {
//	double a = 0, b = 0, c = 0;
//	std::cin >> a >> b >> c;
//	int isTriangle = (a + b > c) && (a + c > b) && (b + c > a);
//	std::cout << isTriangle;
//}

//		Bonus 1

//int main() {
//	int n;
//	std::cin >> n; // 10
//	int lastNumFromProgression = n / 3; //3
//	std::cout << 3 * lastNumFromProgression * (lastNumFromProgression + 1) / 2; // 3 + 6 + 9 = 3(1 + 2 + 3)
//}

//int main() {
//	int n = 0, a1 = 3;
//	std::cin >> n;
//	int an = n - (n % 3);
//	int count = n / 3;
//	int sum = count * (a1 + an) / 2;
//	std::cout << sum;
//}
	
//		Bonus 2

//int main() {
//	int n = 0;
//	std::cin >> n;
//	int reversed = (n % 10) * 100 + (n / 10 % 10) * 10 + (n / 100);
//	std::cout << reversed + 1;
//}

//		Bonus 3

//int main() {
//	int n = 0;
//	std::cin >> n;
//	int hasOneDigit = (n >= -9 && n <= 9);
//	int hasTwoDigits = (n >= 10 && n <= 99) || (n >= -99 && n <= -10);;
//	int result = hasOneDigit * n + hasTwoDigits * (n % 10 + 1) + !(hasOneDigit || hasTwoDigits) * (n / 10);
//	std::cout << result;
//}
	
