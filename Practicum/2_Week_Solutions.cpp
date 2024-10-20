#include <iostream>
int main()
zad1
{
	int a;
	std ::cin >> a;
	if (a > 0)
		std::cout << "Positive";
	else if (a ==0)
		std::cout << "0";
	else
		std::cout << "Negative";

}
zad2
{
	int a = 0;
	std::cin >> a;
	if (a == 1)
		std::cout << "I";
	else if (a == 2)
		std::cout << "II";
	else if (a == 3)
		std::cout << "III";
	else if (a == 4)
		std::cout << "IV";
	else if (a == 5)
		std::cout << "V";
	else if (a == 6)
		std::cout << "VI";
	else if (a == 7)
		std::cout << "VII";
	else if (a == 8)
		std::cout << "VIII";
	else if (a == 9)
		std::cout << "IX";
	else
		std::cout << "0";
}

zad3
{
int a = 0;
std::cin >> a;
if (a % 4 == 0)
std::cout << "Leap year";
else if ( a % 100 == 0)
std::cout << " Not Leap year";
else if (a % 400 ==0)
std::cout << "Leap year";
else
std::cout << "Not leap year";


}
zad4
{
	int a = 0;
	std::cin >> a;
	if (a == 1)
		std::cout << "Monday";
	else if (a == 2)
		std::cout << "Tuesday";
	else if (a == 3)
		std::cout << "WEnsday";
	else if (a == 4)
		std::cout << "Thursday";
	else if (a == 5)
		std::cout << "Friday";
	else if (a == 6)
		std::cout << "Saturday";
	else if (a == 7)
		std::cout << "Sunday";
	else
		std::cout << "0";

}
zad5
{
	int a = 0;
	std::cin >> a;
	int b = 0;
	std::cin >> b;
	std::cout << ( a > b ? a : b);

}
zad6
 {
	char letter;
	cin >> letter;
	if ((letter ="a") || (letter = "e" || (letter == "i" || (letter == "o") || (letter == "u"))
		std::cout << "Vowel";

} ??
zad7
{
	int a = 0;
	std::cin>> a  ;
	int b = 0;
	std::cin >> b;
	int c = 0;
	std::cin >> c;

	if (a < b && b < c)
		std::cout << (a) << (b) << (c);
	else if (b < a && b < c)
		std::cout << (b) << (a) << (c);
	else if (c < a && c < b)
		std::cout << (c) << (a) << (b);
	else if (a < c && c < b)
		std::cout << (a) << (b) << (c);
	else if (b < c && c < a)
		std::cout << (b) << (c) << (a);
	else if (c < b && b < a)
		std::cout << (c) << (b) << (a);
}
zad8
{
	double x;
	std::cin >> x;
	double y;
	std::cin >> y;
	double r;
	std::cin >> r;
	if ((x * x) + (y * y) == (r * r))
		std::cout << "On the circle";
	else if ((x * x) + (y * y)> (r * r))
		std::cout << "In the circle";
	else if ((x * x) + (y * y) < (r * r))
		std::cout << "Out of the circle";


 }
zad9
{
   double a;
	std::cin >> a;
   double b;
	std::cin >> b;
   double c;
   std::cin >> c;
   if (a < c && c < b)
	   std::cout << "The number is within this interval.The interval is open.";
   else if (a <= c && c < b)
	   std::cout << "THe number is within this interval.The interval is closed.";
   else if (a < c && c <= b)
	   std::cout << "The number is within this interval.The interval is closed.";
   else if (!(a < c && c < b))
	   std::cout << "The number isnt within this interval";

 }
zad10
{    int a;
	std::cin >> a;

		int b = (a/1000)*10 +(a%10);
			int c = (((a / 100) % 10) * 10) + ((a % 100) / 10);


			if (b < c)
				std::cout << (b) << "<" << (c);
			else if (b == c)
				std::cout << (b) <<"=" << (c);
			else if (b > c)
				std::cout << (b) << ">"<< ( c);

	}

zad
{
	int a;
	std::cin >> a;
	int b;
	std::cin >> b;
	int c;
	std::cin >> c;
	if ((0 < c) &&(b == 1 || b == 3 || b == 5 || b == 7 || b == 8 || b == 10 || b == 12) && (0 < a < 32))
		std::cout << "1";
	else if ((0 < c) &&(b == 4 || b == 6 || b == 9 || b == 11) &&(0 < a < 31))
		std::cout << "1";
	else if (((0 < c) && (c % 4 == 0)) &&(b = 2) &&(a < 30))
		std::cout << "1";
	else if (((0 < c) && (c % 4 != 0)) && (b = 2) &&(a < 29))
		std::cout << "1";
	else
		std::cout << "0";

 }
zad12
{
	int x ;
	std::cin >> x ;
	int y ;
	std::cin >> y ;
	int c;
	std::cin >> c;
	int d;
	std::cin >> d;
	int a;
	std::cin >> a;
	int b;
	std::cin >> b;
	if ((x < a && a < c) && (y < b && b < d))
		std::cout << "In the rectangle";
	else if (((x == a) || (c == a) && (y < b < d)) || ((y == b) || (d == b) && (x < a < c)))
		std::cout << "On the rectangle";
	else if ((a<x || a>c) || (b<y || b>d))
		std::cout << "Out of the rectangle";
}
zad13
{
	int a;
	std::cin >> a;
	int b;
	std::cin >> b;
	int c;
	std::cin >> c;
	int D = ((b * b) - 4 * a * c);
		if (D > 0)
			std::cout << "2";
		else if (D == 0)
			std::cout << "1";
		else if (D < 0)
			std::cout << "0";
}


