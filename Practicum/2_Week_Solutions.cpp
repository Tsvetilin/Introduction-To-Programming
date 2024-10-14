#include <iostream>
#include <cmath>

int main()
{
	// zad 1

	/*int a;
	std::cin >> a;

	if (a > 0)
	{
		std::cout << "Positive";
	}
	else if (a < 0)
	{
		std::cout << "Negative";
	}
	else
	{
		std::cout << 0;
	}*/

	// zad 2

	// ne obicham da izpolzvam switch

	/*int a;
	std::cin >> a;

	if (a == 1)
	{
		std::cout << "I";
	}
	else if (a == 2)
	{
		std::cout << "II";
	}
	else if (a == 3)
	{
		std::cout << "II";
	}
	else if (a == 4)
	{
		std::cout << "IV";
	}
	else if (a == 5)
	{
		std::cout << "V";
	}
	else if (a == 6)
	{
		std::cout << "VI";
	}
	else if (a == 7)
	{
		std::cout << "VII";
	}
	else if (a == 8)
	{
		std::cout << "VII";
	}
	else if (a == 9)
	{
		std::cout << "IX";
	}
	else if (a == 0)
	{
		std::cout << "No roman numeral";
	}
	else
	{
		std::cout << "Another number";
	}*/

	// zad 3

	/*int a;
	std::cin >> a;

	bool flag = true;

	if (a % 400 == 0)
	{
		flag = true;
	}
	else if (a % 100 == 0)
	{
		flag = false;
	}
	else if (a % 4 == 0)
	{
		flag = true;
	}

	std::cout << (flag ? "Leap year" : "Not a leap year");*/

	// zad 4

	/*int a;
	std::cin >> a;

	if (a == 1)
	{
		std::cout << "Monday";
	}
	else if (a == 2)
	{
		std::cout << "Tuesday";
	}
	else if (a == 3)
	{
		std::cout << "Wednesday";
	}
	else if (a == 4)
	{
		std::cout << "Thursday";
	}
	else if (a == 5)
	{
		std::cout << "Friday";
	}
	else if (a == 6)
	{
		std::cout << "Saturday";
	}
	else if (a == 7)
	{
		std::cout << "Sunday";
	}
	else
	{
		std::cout << "Not a day of the week.";
	}*/

	// zad 5

	/*int a, b;
	std::cin >> a >> b;

	std::cout << (a < b ? b : a);*/

	// zad 6
	/*const int LETTER_DIFFERENCE = 'a' - 'A';

	char letter;
	std::cin >> letter;

	bool isCapital = true;

	if (letter >= 'a' && letter <= 'z')
	{
		std::cout << (char)(letter - LETTER_DIFFERENCE) << '\n';

		isCapital = false;
	}
	else if (letter >= 'A' && letter <= 'Z')
	{
		std::cout << (char)(letter + LETTER_DIFFERENCE) << '\n';
	}
	else
	{
		std::cout << "Invalid character";

		return 0;
	}

	if (isCapital)
	{
		letter += LETTER_DIFFERENCE;
	}

	if (letter == 'a' || letter == 'e' || letter == 'i' || letter == 'o' || letter == 'u')
	{
		std::cout << "Vowel";
	}
	else
	{
		std::cout << "Consonant";
	}*/

	// zad 7

	// zad 8
	/*const int CENTER_POINT_COORDINATES = 0;

	double r, x, y;
	std::cin >> r >> x >> y;

	int d = sqrt(pow(x - CENTER_POINT_COORDINATES, 2) + pow(y - CENTER_POINT_COORDINATES, 2));

	if (d > r)
	{
		std::cout << "Out of the circle";
	}
	else if (d < r)
	{
		std::cout << "In the circle";
	}
	else
	{
		std::cout << "On the circle";
	}*/

	// zad 9

	// zad 10
	// ne raboti tova ama nqma vreme
	/*int n;
	std::cin >> n;

	int firstNumber = (n / 1000) * 10 + n % 10;
	int secondNumber = (n - (n / 1000) * 1000) - (n % 10 / 10);

	if (firstNumber<secondNumber)
	{
		std::cout << firstNumber << '<' << secondNumber;
	}
	else if (firstNumber > secondNumber)
	{
		std::cout << firstNumber << '>' << secondNumber;
	}
	else
	{
		std::cout << firstNumber << '=' << secondNumber;
	}*/
}

