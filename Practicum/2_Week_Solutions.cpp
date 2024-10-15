#include<iostream>

int main() {
	//zad.1
	int number;
	std::cout << "Enter a number: ";
	std::cin >> number;
	if (!std::cin) {
		std::cout << "Invalid input!" << std::endl;
		return -1;
	}

	if (number > 0) {
		std::cout << number << " is positive." << std::endl;
	}
	else if (number < 0) {
		std::cout << number << " is negative." << std::endl;
	}
	else {
		std::cout << "The number is 0." << std::endl;
	}

	//zad.2
	int number;
	std::cout << "Enter a number: ";
	std::cin >> number;
	if (!std::cin) {
		std::cout << "Invalid input!" << std::endl;
		return -1;
	}

	switch (number) {
	case 1:
		std::cout << "I" << std::endl;
		break;
	case 2:
		std::cout << "II" << std::endl;
		break;
	case 3:
		std::cout << "III" << std::endl;
		break;
	case 4:
		std::cout << "IV" << std::endl;
		break;
	case 5:
		std::cout << "V" << std::endl;
		break;
	case 6:
		std::cout << "VI" << std::endl;
		break;
	case 7:
		std::cout << "VII" << std::endl;
		break;
	case 8:
		std::cout << "VIII" << std::endl;
		break;
	case 9:
		std::cout << "IX" << std::endl;
		break;
	default:
		std::cout << "You must enter a number between 1 and 9!" << std::endl;
		break;
	}

	//zad.3
	int year;
	std::cout << "Enter a year: ";
	std::cin >> year;
	if (!std::cin) {
		std::cout << "Invalid input!" << std::endl;
		return -1;
	}

	if (year % 4 == 0 && (!(year % 100 == 0) || year % 400 == 0)) {
		std::cout << year << " is a leap year!" << std::endl;
	}
	else {
		std::cout << year << " is not a leap year!" << std::endl;
	}

	//zad. 4
	int day;
	std::cout << "Enter a number between 1 and 7: ";
	std::cin >> day;
	if (!std::cin) {
		std::cout << "Invalid input!" << std::endl;
		return -1;
	}

	switch (day) {
	case 1:
		std::cout << day << " is Monday." << std::endl;
		break;
	case 2:
		std::cout << day << " is Tuesday." << std::endl;
		break;
	case 3:
		std::cout << day << " is Wednesday." << std::endl;
		break;
	case 4:
		std::cout << day << " is Thursday." << std::endl;
		break;
	case 5:
		std::cout << day << " is Friday." << std::endl;
		break;
	case 6:
		std::cout << day << " is Saturday." << std::endl;
		break;
	case 7:
		std::cout << day << " is Sunday." << std::endl;
		break;
	default:
		std::cout << "You have entered and incorrect number!" << std::endl;
		break;
	}

	//zad.5
	int num1, num2;
	std::cout << "Enter a number: ";
	std::cin >> num1;
	if (!std::cin) {
		std::cout << "Invalid input!" << std::endl;
		return -1;
	}
	std::cout << "Enter another number: ";
	std::cin >> num2;
	if (!std::cin) {
		std::cout << "Invalid input!" << std::endl;
		return -1;
	}

	int biggerNumber = (num1 > num2) ? num1 : num2;
	std::cout << "The biggest number out of " << num1 << " and " << num2 << " is " << biggerNumber << "." << std::endl;

	//zad.6
	char ch;
	std::cout << "Enter a character: ";
	std::cin >> ch;
	if (!std::cin) {
		std::cout << "Invalid input!" << std::endl;
		return -1;
	}

	if (ch >= 'a' && ch <= 'z') {
		std::cout << ch << " is small letter and ";
		if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
			std::cout << "vowel letter." << std::endl;
		}
		else {
			std::cout << "consonant letter." << std::endl;
		}
	}
	else if (ch >= 'A' && (int)ch <= 'Z') {
		std::cout << ch << " is a capital letter and ";
		if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
			std::cout << "vowel letter." << std::endl;
		}
		else {
			std::cout << "consonant letter." << std::endl;
		}
	}

	if (ch >= 'a' && ch <= 'z') {
		std::cout << "Reversed lettter: " << (char)(ch - 'a' + 'A') << std::endl;
	}
	else if (ch >= 'A' && ch <= 'Z') {
		std::cout << "Reversed letter: " << (char)(ch - 'A' + 'a') << std::endl;
	}

	//zad. 7
	int num1, num2, num3;
	std::cout << "Enter the value of number 1: ";
	std::cin >> num1;
	if (!std::cin) {
		std::cout << "Invalid input!" << std::endl;
		return -1;
	}
	std::cout << "Enter the value of number 2: ";
	std::cin >> num2;
	if (!std::cin) {
		std::cout << "Invalid input!" << std::endl;
		return -1;
	}
	std::cout << "Enter the value of number 3: ";
	std::cin >> num3;
	if (!std::cin) {
		std::cout << "Invalid input!" << std::endl;
		return -1;
	}

	if (num1 > num2) {
		int temp = num1;
		num1 = num2;
		num2 = temp;
	}
	if (num1 > num3) {
		int temp = num1;
		num1 = num3;
		num3 = temp;
	}
	if (num2 > num3) {
		int temp = num3;
		num3 = num2;
		num2 = temp;
	}

	std::cout << num1 << ", " << num2 << ", " << num3 << std::endl;

	//zad.8
	int pX, pY;
	std::cout << "Enter the X-coordinate of your point:";
	std::cin >> pX;
	if (!std::cin) {
		std::cout << "Invalid input!" << std::endl;
		return -1;
	}
	std::cout << "Enter the Y-coordinate of your point: ";
	std::cin >> pY;
	if (!std::cin) {
		std::cout << "Invalid input!" << std::endl;
		return -1;
	}

	int r;
	std::cout << "Enter the radius of the circle: ";
	std::cin >> r;
	if (!std::cin || r <= 0) {
		std::cout << "Invalid input!" << std::endl;
		return -1;
	}

	if ((0 - pX) * (0 - pX) + (0 - pY) * (0 - pY) == r * r) {
		std::cout << "Point (" << pX << "," << pY << ") is on the circle." << std::endl;
	}
	else if ((0 - pX) * (0 - pX) + (0 - pY) * (0 - pY) < r * r) {
		std::cout << "Point (" << pX << "," << pY << ") is inside the circle." << std::endl;
	}
	else {
		std::cout << "Point (" << pX << "," << pY << ") is outside the circle." << std::endl;
	}

	//zad.9
	double begInt, endInt, number;
	std::cout << "Enter the beginnig of the interval: ";
	std::cin >> begInt;
	if (!std::cin) {
		std::cout << "Invalid input!" << std::endl;
		return -1;
	}
	std::cout << "Enter the end of the interval: ";
	std::cin >> endInt;
	if (!std::cin) {
		std::cout << "Invalid input!" << std::endl;
		return -1;
	}

	std::cout << "Enter a number: ";
	std::cin >> number;
	if (!std::cin) {
		std::cout << "Invalid input!" << std::endl;
		return -1;
	}

	const double EPSILON = 0.000001;

	if (number<endInt && number>begInt) {
		std::cout << "The number is within the given inteval. ";
		if ((number - begInt < EPSILON && number - begInt > -EPSILON) || (number - endInt < EPSILON && number - endInt > -EPSILON)) {
			std::cout << "The interval is closed." << std::endl;
		}
		else {
			std::cout << "The interval is open." << std::endl;
		}
	}
	else {
		std::cout << "The number is outside the given interval." << std::endl;
	}

	//zad.10
	int number;
	std::cout << "Enter a number with four digits: ";
	std::cin >> number;
	if (!std::cin || (number < 1000 && number>9999)) {
		std::cout << "Invalid input!" << std::endl;
		return -1;
	}

	int firstDigit, secondDigit, thirdDigit, fourthDigit;

	fourthDigit = number % 10;
	firstDigit = number / 1000;
	secondDigit = (number / 100) % 10;
	thirdDigit = (number / 10) % 10;

	int newNum1, newNum2;
	newNum1 = firstDigit * 10 + fourthDigit;
	newNum2 = secondDigit * 10 + thirdDigit;

	if (newNum1 > newNum2) {
		std::cout << newNum1 << ">" << newNum2 << std::endl;
	}
	else if (newNum1 == newNum2) {
		std::cout << newNum1 << "=" << newNum2 << std::endl;
	}
	else {
		std::cout << newNum1 << "<" << newNum2 << std::endl;
	}

	//zad.11
	int day, month, year;
	std::cout << "Enter the value of day: ";
	std::cin >> day;
	if (!std::cin) {
		std::cout << "Invalid input!" << std::endl;
		return -1;
	}
	std::cout << "Enter the value of month: ";
	std::cin >> month;
	if (!std::cin) {
		std::cout << "Invalid input!" << std::endl;
		return -1;
	}
	std::cout << "Enter the value of year: ";
	std::cin >> year;
	if (!std::cin) {
		std::cout << "Invalid input!" << std::endl;
		return -1;
	}

	bool isValidDate = false;
	bool isLeapYear = year % 4 == 0 && (!(year % 100 == 0) || year % 400 == 0);

	if (month == 2 && year >= 0) {
		if (isLeapYear && day <= 29) {
			isValidDate = true;
		}
		else if (!isLeapYear && day <= 28 && year >= 0) {
			isValidDate = true;
		}
	}
	else if ((month == 4 || month == 6 || month == 9 || month == 11) && year >= 0) {
		if (day <= 30) {
			isValidDate = true;
		}
	}
	else if((month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) && year >= 0) {
		if (day <= 31) {
			isValidDate = true;
		}
	}
	else {
		isValidDate = false;
	}

	std::cout << isValidDate << std::endl;

	//zad.12
	int rX1, rX2, rY1, rY2, pX, pY;

	std::cout << "Enter the coordinates of the first point in your rectangle: ";
	std::cin >> rX1 >> rY1;
	if (!std::cin) {
		std::cout << "Invalid input!" << std::endl;
		return -1;
	}

	std::cout << "Enter the coordinates of the second point in your rectangle: ";
	std::cin >> rX2 >> rY2;
	if (!std::cin) {
		std::cout << "Invalid input!" << std::endl;
		return -1;
	}

	std::cout << "Enter the coordinates of your point: ";
	std::cin >> pX >> pY;
	if (!std::cin) {
		std::cout << "Invalid input!" << std::endl;
		return -1;
	}

	int maxCoordinateX, minCoordinateX, maxCoordinateY, minCoordinateY;

	if (rX1 > rX2) {
		maxCoordinateX = rX1;
		minCoordinateX = rX2;
	}
	else {
		maxCoordinateX = rX2;
		minCoordinateX = rX1;
	}

	if (rY1 > rY2) {
		maxCoordinateY = rY1;
		minCoordinateY = rY2;
	}
	else {
		maxCoordinateY = rY2;
		minCoordinateY = rY1;
	}

	if (pX > minCoordinateX && pX < maxCoordinateX && pY > minCoordinateY && pY < maxCoordinateY) {
		std::cout << "The point is inside the rectangle." << std::endl;
	}
	else if (((pX == minCoordinateX || pX == maxCoordinateX) && (pY >= minCoordinateY && pY <= maxCoordinateY)) || ((pY == minCoordinateY || pY == maxCoordinateY) && (pX >= minCoordinateX && pX <= maxCoordinateX))) {
		std::cout << "The point lies on the contour of the rectangle." << std::endl;
	}
	else {
		std::cout << "The point is outside the rectangle." << std::endl;
	}

	//zad.13
	double a, b, c;
	std::cout << "You are given the equation ax^2 + bx + c = 0." << std::endl;
	std::cout << "Enter the value of coef. a: ";
	std::cin >> a;
	if (!std::cin) {
		std::cout << "Invalid input!" << std::endl;
		return -1;
	}
	std::cout << "Enter the value of coef. b: ";
	std::cin >> b;
	if (!std::cin) {
		std::cout << "Invalid input!" << std::endl;
		return -1;
	}
	std::cout << "Enter the value of coef. c: ";
	std::cin >> c;
	if (!std::cin) {
		std::cout << "Invalid input!" << std::endl;
		return -1;
	}

	if (a == 0 && b == 0 && c == 0) {
		std::cout << "This equation is non-existent." << std::endl;
		return -1;
	}

	if (a == 0) {
		if (b != 0) {
		  std::cout << "The equation " << b << "x + " << c << " = 0 has 1 root." << std::endl;
	  }
	  else if (c == 0) {
		  std::cout << "The equation has infinitely many solutions." << std::endl;
	  }
	  else {
		  std::cout << "The equation has no solution." << std::endl;
	  }
  }

	double d = b * b - 4 * a * c;

	if (d > 0) {
		std::cout << "The equation has two real roots." << std::endl;
	}
	else if (d == 0) {
		std::cout << "The equation has one real double root." << std::endl;
	}
	else {
		std::cout << "The equation has zero real roots." << std::endl;
	}

	//zad.14
	char a, b, c, d, e;

	std::cout << "Enter two letters in set A (in capital letters): ";
	std::cin >> a >> b;
	if (!std::cin || a < 'A' || a > 'Z' || b < 'A' || b > 'Z') {
		std::cout << "Invalid input!" << std::endl;
		return -1;
	}

	std::cout << "Enter two letters in set B (in lowercase): ";
	std::cin >> c >> d;
	if (!std::cin || c < 'a' || c > 'z' || d < 'a' || d > 'z') {
		std::cout << "Invalid input!" << std::endl;
		return -1;
	}

	std::cout << "Enter a new letter: ";
	std::cin >> e;
	if (!std::cin) {
		std::cout << "Invalid input!" << std::endl;
		return -1;
	}

	if (a > b) {
		char temp = a;
		a = b;
		b = temp;
	}

	if (c > d) {
		char temp = c;
		c = d;
		d = temp;
	}

	bool isInSetA = (e >= 'A' && e <= 'Z' && e >= a && e <= b) ||
	(e >= 'a' && e <= 'z' && (e - 'a' + 'A') >= a && (e - 'a' + 'A') <= b);

	bool isInSetB = (e >= 'a' && e <= 'z' && e >= c && e <= d) ||
	(e >= 'A' && e <= 'Z' && (e - 'A' + 'a') >= c && (e - 'A' + 'a') <= d);

	bool belongsToUnion = isInSetA || isInSetB;
	if (belongsToUnion) {
		std::cout << "Your letter belongs to the union of set A and set B." << std::endl;
	}
	else {
		std::cout << "Your letter does not belong to the union of set A and set B." << std::endl;
	}

	bool belongsToIntersection = isInSetA && isInSetB;
	if (belongsToIntersection) {
		std::cout << "Your letter belongs to the intersection of set A and set B." << std::endl;
	}
	else {
		std::cout << "Your letter does not belong to the intersection of set A and set B." << std::endl;
	}

	bool belongsToSetDifferenceOfAB = isInSetA && !isInSetB;
	if (belongsToSetDifferenceOfAB) {
		std::cout << "Your letter belongs to the set difference of A and B." << std::endl;
	}
	else {
		std::cout << "Your letter does not belong to the set difference of A and B." << std::endl;
	}

	bool belongsToSetDifferenceOfBA = !isInSetA && isInSetB;
	bool belongsToSymmetricDifference = belongsToSetDifferenceOfAB || belongsToSetDifferenceOfBA;

	if (belongsToSymmetricDifference) {
		std::cout << "Your letter belongs to the symmetric difference of set A and set B." << std::endl;
	}
	else {
		std::cout << "Your letter does not belong to the symmetric difference of set A and set B." << std::endl;
	}

	return 1;
}
