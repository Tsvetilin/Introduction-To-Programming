#include <iostream>

//		Задача 1

// int main()
// {
//    int a;
//    std::cin >> a;
//    bool isTrue = a%2==0;
//    std::cout << isTrue;
//  return 0;
// }



//		Задача 2

// int main()
// {
//    int a, b;
//    std::cin >> a >> b;
//    std::cout << a / b << std::endl;
//    std::cout << a % b;
//  return 0;
// }


//		Задача 3

// int main()
// {
//    double degreesCelcius;
//    std::cin >> degreesCelcius;
//    double degreesFarenhait = (degreesCelcius * (9.0 / 5.0)) + 32;
//    std::cout << degreesFarenhait;
//  return 0;
// }


//		Задача 4

// int main()
// {
// 	double length, width;
// 	std::cin >> width >> length;
// 	double perimeter = 2 * (width + length);
// 	double area = length * width;
// 	std::cout << perimeter << std::endl;
// 	std::cout << area;
//  return 0;
// }


//		Задача 5

// int main()
// {
// 	int seconds,minutes,hours,days;
// 	std::cin >> seconds;
// 	 days = seconds / (60 * 60 * 24);
// 	seconds -= days * 60 * 60 * 24;
// 	 hours = seconds / (60 * 60);
// 	seconds -= hours * 60 * 60;
// 	 minutes = seconds/ 60;
// 	seconds -= minutes * 60;
// 	std::cout << days << " days, " << hours << " hours, " << minutes << " minutes, " << seconds << " seconds";
//     return 0;
// }


//		Задача 6

// int main()
// {
// 	int a;
// 	std::cin >> a;
// 	std::cout << a / 10;
//  return 0;
// }


//		Задача 7

// int main()
// {
// 	int a;
// 	std::cin >> a;
// 	bool isTrue = a >= 2 && a <= 6;
// 	std::cout << isTrue;
//  return 0;
// }


//		Задача 8

// int main()
// {
// 	int a, b, c, d;
// 	std::cin >> a >> b >> c >> d;
// 	bool isTrue = a <= d && b >= c;
// 	std::cout << isTrue;
//  return 0;
// }


//		Задача 9

// int main()
// {
// 	int n;
// 	std::cin >> n;
// 	int sum = 1 + n;
// 	double groups = n / 2.0;
//    double print = sum * groups;
// 	std::cout <<print;	
//  return 0;
// }


//		Задача 10

// int main()
// {
// 	int a,b,c,d;
// 	std::cin >> a>>b>>c>>d;
// 	double q = b / a;
// 	bool isTrue = c/b == q && d/c==q;
// 	std::cout << isTrue;
//     return 0;
// }


//		Задача 11

// int main()
// {
// 	double  a, b;
// 	std::cin >> a >> b;
// 	 a = a + b;
// 	 b = a - b;
// 	 a = a - b;
// 	std::cout << a<< " and " << b;
//  return 0;
// }


//		Задача 12
 
//int main()
//{
//	double  a, b;
//	std::cin >> a >> b;
//	double larger = (a + b + ((a - b) * ((a - b) >= 0))) - a;
//	std::cout << larger;
//}


//		Задача 13

//int main()
//{
//    int a;
//    std::cin >> a;
//    int print = (a >= 10 && a <=99) * a + (a<10||a>99)*(a%10);
//    std::cout << print;
//}


//		Задача 14

//int main(){
//	int a, b, c, d, e;
//	std::cin >> a>> b>> c>> d>> e;
//	int sum = (a % 2 == 1 && a) * a;
//	sum += (b % 2 == 1 && b) * b;
//	sum += (c % 2 == 1 && c) * c;
//	sum += (d % 2 == 1 && d) * d;
//	sum += (e % 2 == 1 && e) * e;
//	std::cout << sum;
//}


//		Задача 15

//int main() {
//	double a, b, c;
//	std::cin >> a >> b >> c;
//	int ifTrue = (a+b>c) || (a+c>b) || (b+c>a);
//	std::cout << ifTrue;
//}
