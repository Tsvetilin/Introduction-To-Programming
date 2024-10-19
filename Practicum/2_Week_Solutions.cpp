#include<iostream>
#include <cmath>
int main()
{
	/*
	int a;
	std::cin >> a;
	if (a > 0) std::cout << "Positive.";
	else if (a < 0) std::cout << "Negative.";
	else std::cout << "The number is zero.";


	int num;
	std::cin >> num;
	switch(num)
	{
	case 1:std::cout << "I"; break;
	case 2:std::cout << "II"; break;
	case 3:std::cout << "III"; break;
	case 4:std::cout << "IV"; break;
	case 5:std::cout << "V"; break;
	case 6:std::cout << "VI"; break;
	case 7:std::cout << "VII"; break;
	case 8:std::cout << "VIII"; break;
	case 9:std::cout << "IX"; break;
	default:std::cout << "Error";


	int year;
	std::cin >> year;
	if(year%4==0 && year%100!=0)
		std::cout << "The year is leap.";
	else if(year%400==0)
		std::cout << "The year is leap.";
	else
			std::cout << "The year is not leap.";


	int day;
	std::cin >> day;
	switch (day)
	{
	case 1: std::cout << "Monday"; break;
	case 2: std::cout << "Tuesday"; break;
	case 5: std::cout << "Friday"; break;
	case 6: std::cout << "Saturday"; break;
	case 7: std::cout << "Sunday"; break;
	default: std::cout << "Error";
	}


	int a, b;
	std::cin >> a >> b;
	std::cout << ((a > b) ? a : b);

	char a;
	std::cin >> a;
	int x = 'A' - 'a';
	if ((a >= 'A' && a <= 'Z'))
	{
		a = a - x;
		std::cout << a<<std::endl;
		if (a == 'a' || a == 'e' || a == 'i' || a == 'o' || a == 'u') std::cout << "Vowel";
		else std::cout << "Not vowel";
	}
	else if (a >= 'a' && a <= 'z')
	{
		a = a + x;
		std::cout << a << std::endl;
		switch (a)
		{
		case 'a': std::cout << "Vowel"; break;
		case 'o': std::cout << "Vowel"; break;
		case 'u': std::cout << "Vowel"; break;
		case 'i': std::cout << "Vowel"; break;
		default: std::cout << "Not vowel";
		}
	}
	else std::cout << "Invalid Character;";

	int a, b, c, first, second, third; //a<b<c
	std::cin >> a >> b >> c;
	first = a < b ? a : b;
	first = first < c ? first : c;
	third = a > b ? a : b;
	third = third > c ? third : c;
	second = a + b + c - third - first;



	std::cout << first << " " << second << " " << third;

	double radius, x, y, distance;
	std::cin >> radius >> x >> y;
	distance = sqrt(x * x + y * y);
	if (radius == distance)std::cout << "On the circle";
	else if (radius > distance)std::cout << "In the circle";
	else std::cout << "Out of the circle";
	
	KAKWOOOOOOOOOOOOO
	double a, b, x;
	std::cin >> a >> b >> x;
	double const epsilon = 1 * 10 ^ 10;
	if ((x - a) > epsilon && (x - b) < epsilon)
		std::cout << "The number is within the given interval. The interval is open.";
	else if (x==a && x==b)
		std::cout << "The interval is closed.";
	else 	std::cout << "The number is not within the given interval";


	int n,firstDigit, secondDigit, thirdDigit, forthDigit;
	std::cin >> n;
	firstDigit = n / 1000;
	secondDigit = (n / 100) % 10;
	thirdDigit = (n % 100) / 10;
	forthDigit = (n % 10);
	int newNum1=firstDigit*10+forthDigit, newNum2=thirdDigit*10+secondDigit;
	if (newNum1 > newNum2)std::cout << newNum1 << " > " << newNum2;
	else if (newNum1 < newNum2)std::cout << newNum1 << " < " << newNum2;
	else std::cout << newNum1 << " = " << newNum2;


	int day, month, year;
	std::cin >> day >> month >> year;
	if (year <= 0) 
	{ 
		std::cout << 0;
		return 0; }

	if (year % 4 == 0 && year % 100 != 0 && month == 2 && day <= 29)
		std::cout << 1;
 	else if (year % 400 == 0 && month == 2 && day <= 29)
		std::cout <<1;
	switch (month)
	{
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12:if (day <= 31) 
	{
		std::cout << 1;
		break;
	}
	case 4:
	case 6:
	case 9:
	case 11:if (day<=30)
	{
		std::cout << 1;
		break;
	}
	default: std::cout << 0;
	}

	int x1, y1, x2, y2, dot_x, dot_y;
	std::cin >> x1 >> y1 >> x2 >> y2 >> dot_x >> dot_y;
	if (x1 > x2)
	{
		x1 = x1 + x2;
		x2 = x1 - x2;
		x1 = x1 - x2;
		y1 += y2;
		y2 = y1 - y2;
		y1 = y1 - y2;
	}
	if (dot_x > x1 && dot_x<x2 && dot_y>y1 && dot_y < y2)
		std::cout << "Is inside";
	else 	std::cout << "Is outside";
				


	int a, b, c;
	std::cin >> a >> b >> c;
	if (b * b - 4 * a * c < 0)std::cout << 0;
	else if (b * b - 4 * a * c == 0)std::cout << 1;
	else std::cout << 2;


	char a, b, c, d, e;
	std::cin >> a >> b >> c >> d >> e ;
	c = c - 'a' + 'A';
	d = d - 'a' + 'A';
	e = e > 'Z' ? (e-'a' +'A') : e;
	bool only = false;
	if ((a <= e && e <= b )|| (c<=e && e<=b))
	{
		std::cout << "true"<<std::endl;
		only = true;
	}
	else 		std::cout << "false" << std::endl;

	if ((a <= e && e <= b) && (c <= e && e <= b))
	{
		only = false;
		std::cout << "true" << std::endl;
	}
	else
	{
		only = true;
		std::cout << "false" << std::endl;
	}

	if ((a <= e && e <= b) && !(c <= e && e <= b))
	{
		std::cout << "true" << std::endl;
	}
	else 		std::cout << "false" << std::endl;
	std::cout << only << std::endl;


	*/
	



	
	return 0;
}
