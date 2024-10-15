#include <iostream>

int main()
{
	// zad 1
	/*int n;
	std::cin >> n;
	if (n > 0)
	{
		std::cout << "Positive";
	}
	else if (n < 0)
	{
		std::cout << "Negative";
	}
	else
	{
		std::cout << 0;
	}*/

	// zad 2
	/*int n;
	std::cin >> n;
	switch (n)
	{
		case 0: std::cout << "No roman 0"; break;
		case 1: std::cout << "I"; break;
		case 2: std::cout << "II"; break;
		case 3: std::cout << "III"; break;
		case 4: std::cout << "IV"; break;
		case 5: std::cout << "V"; break;
		case 6: std::cout << "VI"; break;
		case 7: std::cout << "VII"; break;
		case 8: std::cout << "VIII"; break;
		case 9: std::cout << "IX"; break;
		default: std::cout << "Invalid number";
	}*/

	// zad 3
	//int year;
	//std::cout << "Year: ";
	//std::cin >> year;
	//bool isLeapYear = (year % 4 == 0) && ((year % 400 == 0) || (year % 100 != 0));
	//std::cout << (isLeapYear ? "Leap year" : "Not leap year");

	// zad 4 
	/*int day;
	std::cin >> day;
	switch (day)
	{
		case 1: std::cout << "Monday"; break;
		case 2: std::cout << "Tuesday"; break;
		case 3: std::cout << "Wednesday"; break;
		case 4: std::cout << "Thursday"; break;
		case 5: std::cout << "Friday"; break;
		case 6: std::cout << "Saturday"; break;
		case 7: std::cout << "Sunday"; break;
		default: std::cout << "Invalid day";
	}*/

	// zad 5
	/*int a, b;
	std::cin >> a >> b;
	std::cout << (a > b ? a : b);*/

	// zad 6
	//char c;
	//std::cin >> c;
	//const int DIFFERENCE = 'a' - 'A';
	//bool isCapitalLetter = (c >= 'A' && c <= 'Z');
	//bool isLowerLetter = (c >= 'a' && c <= 'z');
	//// знам, че мога да ползвам switch, но ще е на много повече редове
	//bool isVowel = c == 'a' || c == 'A' || c == 'e' || c == 'E' || c == 'i' || c == 'I' || c == 'o' || c == 'O' || c == 'u' || c == 'U';
	//if (isCapitalLetter)
	//{
	//	std::cout << (char)(c + DIFFERENCE) << std::endl << (isVowel ? "Vowel" : "Consonant");
	//}
	//else if (isLowerLetter)
	//{
	//	std::cout << (char)(c - DIFFERENCE) << std::endl << (isVowel ? "Vowel" : "Consonant");
	//}
	//else
	//{
	//	std::cout << "Invalid character";
	//}

	// zad 7
	/*int a, b, c, temp;
	std::cin >> a >> b >> c;
	if (a > b)
	{
		temp = a;
		a = b;
		b = temp;
	}
	if (a > c)
	{
		temp = a;
		a = c;
		c = temp;
	}
	if (b > c)
	{
		temp = b;
		b = c;
		c = temp;
	}
	std::cout << a << " " << b << " " << c;*/

	// zad 8
	//int r, x, y;
	//std::cin >> r >> x >> y;
	//// (x-0)^2 + (y-0)^2 = r^2
	//int distanceSquared = x * x + y * y;
	//int radiusSquared = r * r;

	//if (distanceSquared < radiusSquared)
	//{
	//	std::cout << "In the circle";
	//}
	//else if (distanceSquared == radiusSquared)
	//{
	//	std::cout << "On the circle";
	//}
	//else
	//{
	//	std::cout << "Out of the circle";
	//}

	// zad 9 
	/*const double EPSILON = 0.0001;
	double lowerBound, upperBound, num;
	std::cin >> lowerBound >> upperBound >> num;
	if (num >= lowerBound && num <= upperBound)
	{
		std::cout << "The number is within the given interval. The interval is ";
		bool closed = (abs(num - lowerBound) <= EPSILON) || (abs(upperBound - num) <= EPSILON);
		std::cout << (closed ? "closed" : "open") << ".";
	}
	else
	{
		std::cout << "The number is not within the given interval.";
	}*/

	// zad 10 
	/*int n;
	std::cin >> n;
	int d1 = n / 1000;
	int d2 = n / 100 % 10;
	int d3 = n / 10 % 10;
	int d4 = n % 10;
	int firstNum = d1 * 10 + d4;
	int secondNum = d2 * 10 + d3;
	char sign = (firstNum < secondNum) ? '<' : (firstNum > secondNum) ? '>' : '=';
	std::cout << firstNum << " " << sign << " " << secondNum;*/

	// zad 11
	/*int day, month, year;
	std::cin >> day >> month >> year;
	bool isLeapYear = (year % 4 == 0) && (year % 100 != 0 || year % 400 == 0);
	bool validDate = year >= 0;
	switch (month)
	{
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			validDate = validDate && day >= 1 && day <= 31;
			break;
		case 2:
			validDate = validDate && day >= 1 && (day <= (isLeapYear ? 29 : 28));
			break;
		case 4:
		case 6:
		case 9:
		case 11:
			validDate = validDate && day >= 1 && day <= 30;
			break;
		default: validDate = false;
	}
	std::cout << validDate;*/

	// zad 12
	//int x1, y1, x2, y2, x3, y3, minX, minY, maxX, maxY;
	//std::cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
	//// намираме минималните и максималните координати от двете дадени точки
	//if (x1 > x2)
	//{
	//	maxX = x1;
	//	minX = x2;
	//}
	//else
	//{
	//	maxX = x2;
	//	minX = x1;
	//}
	//if (y1 > y2)
	//{
	//	maxY = y1;
	//	minY = y2;
	//}
	//else
	//{
	//	maxY = y2;
	//	minY = y1;
	//}

	//bool isOnLowerOrUpperLine = (y3 == minY || y3 == maxY) && (x3 >= minX && x3 <= maxX);
	//bool isOnLeftOrRightLine = (x3 == minX || x3 == maxX) && (y3 >= minY && y3 <= maxY);

	//if (x3 > minX && x3 < maxX && y3 > minY && y3 < maxY)
	//{
	//	std::cout << "In the rectangle";
	//}
	//else if (isOnLowerOrUpperLine || isOnLeftOrRightLine)
	//{
	//	std::cout << "On the rectangle";
	//}
	//else
	//{
	//	std::cout << "Outside the rectangle";
	//}

	// zad 13
	//int a, b, c;
	//std::cin >> a >> b >> c;
	//int discriminant = b * b - 4 * a * c;
	//int realSolutions = (discriminant > 0) ? 2 : (discriminant == 0) ? 1 : 0;
	//std::cout << realSolutions;

	// zad 14 
	//const int LETTER_DIFF = 'a' - 'A';
	//char lowerBoundA, upperBoundA, lowerBoundB, upperBoundB, letter;
	//std::cin >> lowerBoundA >> upperBoundA >> lowerBoundB >> upperBoundB >> letter;
	//char swappedCaseLetter = (letter >= 'A' && letter <= 'Z') ? letter + LETTER_DIFF : letter - LETTER_DIFF;
	//bool belongsToA = (letter >= lowerBoundA && letter <= upperBoundA)
	//	|| (swappedCaseLetter >= lowerBoundA && swappedCaseLetter <= upperBoundA);
	//bool belongsToB = (letter >= lowerBoundB && letter <= upperBoundB)
	//	|| (swappedCaseLetter >= lowerBoundB && swappedCaseLetter <= upperBoundB);
	//bool belongsToUnion = belongsToA || belongsToB;
	//bool belongsToIntersection = belongsToA && belongsToB;
	//bool belongsToDifference = belongsToA && !belongsToB;
	//bool belongsToOnlyOne = belongsToUnion && !belongsToIntersection;

	//std::cout << (belongsToUnion ? "true" : "false") << ", "
	//	<< (belongsToIntersection ? "true" : "false") << ", "
	//	<< (belongsToDifference ? "true" : "false") << ", "
	//	<< (belongsToOnlyOne ? "true" : "false");
}
