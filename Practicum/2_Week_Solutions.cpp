#include <iostream>

using namespace std;

int main()
{
	
	//1
	/*int a;
	cin >> a;
	if (a > 0)
	{
	cout << "Positive";
	}
	else if(a < 0)
	{
	cout << "Negative";
	}
	else
	{
	cout << "Num is zero";
	}*/

	//2
	/*int number;
	cin >> number;
	switch (number)
	{
	case 1:
	cout << "I";
	break;
	case 2:
	cout << "II";
	break;
	case 3:
	cout << "III";
	break;
	case 4:
	cout << "IV";
	break;
	case 5:
	cout << "V";
	break;
	case 6:
	cout << "VI";
	break;
	case 7:
	cout << "VII";
	break;
	case 8:
	cout << "VIII";
	break;
	case 9:
	cout << "IX";
	break;
	default:
	cout << "Invalid number";
	break;
	}*/

	//3
	/*int year;
	cin >> year;
	if (year % 4 == 0)
	{
	if (year % 100 == 0)
	{
	if (year % 400 == 0)
	{
	cout << "Leap Year";
	}
	else
	{
	cout << "Normal Year";
	}
	}
	else
	{
	cout << "Leap Year";
	}
	}
	else
	{
	cout << "Normal Year";
	}*/

	//4
	/*int number;
	cin >> number;
	switch (number)
	{
	case 1:
	cout << "Monday";
	break;
	case 2:
	cout << "Tuesday";
	break;
	case 3:
	cout << "Wednesday";
	break;
	case 4:
	cout << "Thursday";
	break;
	case 5:
	cout << "Friday";
	break;
	case 6:
	cout << "Saturday";
	break;
	case 7:
	cout << "Sunday";
	break;
	default:
	cout << "Invalid day";
	break;
	}*/

	//5
	/*int num1, num2;
	cin >> num1 >> num2;
	cout << (num1 < num2 ? num2 : num1);*/

	//6
	/*char character;
	cin >> character;
	if (character >= 65 && character <= 90)
	{
	if (character == 'A' || character == 'E' || character == 'U' || character == 'O' || character == 'Y')
	{
	cout << "Vowel" << endl;
	}
	else
	{
	cout << "Not Vowel" << endl;
	}
	cout << "Capital Letter" << endl;
	char newCharacter = character + 32;
	cout << newCharacter;
	}
	else if (character >= 97 && character <= 122)
	{
	if (character == 'a' || character == 'e' || character == 'u' || character == 'o' || character == 'y')
	{
	cout << "Vowel" << endl;
	}
	else
	{
	cout << "Not Vowel" << endl;
	}
	cout << "Not Capital Letter" << endl;
	char newCharacter = character - 32;
	cout << newCharacter;
	}
	else
	{
	cout << "Invalid Character";
	}*/

	//7
	/*int num1, num2, num3;
	cin >> num1 >> num2 >> num3;
	if (num1 >= num2 && num1 >= num3)
	{
	if (num2 > num3)
	{
	cout << num3 << " " << num2 << " " << num1;
	}
	else
	{
	cout << num2 << " " << num3 << " " << num1;
	}
	}
	else if (num2 >= num1 && num2 >= num3)
	{
	if (num1 > num3)
	{
	cout << num3 << " " << num1 << " " << num2;
	}
	else
	{
	cout << num1 << " " << num3 << " " << num2;
	}
	}
	else
	{
	if (num1 > num2)
	{
	cout << num2 << " " << num1 << " " << num3;
	}
	else
	{
	cout << num1 << " " << num2 << " " << num3;
	}
	}*/

	//8
	/*int r, a, b;
	cin >> r >> a >> b;
	if (a * a + b * b == r * r)
	{
	cout << "On the circle";
	}
	else if (a * a + b * b > r * r)
	{
	cout << "Out of the circle";
	}
	else
	{
	cout << "In the circle";
	}*/

	//9
	/*double num1, num2, num3;
	cin >> num1 >> num2 >> num3;
	if (num1 < num3 && num3 < num2)
	{
	cout << "This number is in the interval."<<endl;
	if (num1 == num3 || num3 == num2)
	{
	cout << "The interval is closed." << endl;
	}
	else
	{
	cout << "The interval is open." << endl;
	}
	}
	else
	{
	cout << "This number is not in the interval." << endl;
	}*/

	//10
	/*int number;
	cin >> number;
	int firstNum = number % 10;
	int secondNum = number % 100 / 10;
	int thurdNum = number % 1000 / 100;
	int fourthNum = number  / 1000;

	int firstNewNum = firstNum * 10 + fourthNum;
	int secondNewNum = secondNum * 10 + thurdNum;

	if (firstNewNum > secondNewNum)
	{
	cout << firstNewNum << " > " << secondNewNum;
	}
	else if (secondNewNum > firstNewNum)
	{
	cout << firstNewNum << " < " << secondNewNum;
	}
	else
	{
	cout << firstNewNum << " = " << secondNewNum;
	}*/

	//11
	/*int day, month, year;
	cin >> day >> month >> year;
	if (year <= 2024 && year >= 0)
	{
	if (month <= 12 && month >= 1)
	{
	if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
	{
	if (day <= 31 && day > 0)
	{
	cout << "1";
	}
	else
	{
	cout << "0";
	}
	}
	else
	{
	if (month == 2)
	{
	bool isLeapYear = false;
	if (year % 4 == 0)
	{
	if (year % 100 == 0)
	{
	if (year % 400 == 0)
	{
	isLeapYear = true;
	}
	}
	else
	{
	isLeapYear = true;
	}
	}
	if (isLeapYear)
	{
	if (day <= 29 && day >= 1)
	{
	cout << "1";
	}
	else cout << "0";
	}
	else
	{
	if (day <= 28 && day >= 1)
	{
	cout << "1";
	}
	else cout << "0";
	}
	}
	else
	{
	if (day <= 30 && day >= 1)
	{
	cout << "1";
	}
	else
	{
	cout << "0";
	}
	}
	}
	}
	else
	{
	cout << "0";
	}
	}
	else
	{
	cout << "0";
	}*/

	//12
	//x1y1	| x4y4			xCordyCord
	// -------------x
	//x3y3	| x2y2
	//int x1, y1, x2, y2, x3, y3, x4, y4, xCord, yCord;
	//cin >> x1 >> y1 >> x2 >> y2 >> xCord >> yCord;
	//x3 = x1;
	//y3 = y2;
	//x4 = x2;
	//y4 = y1;
	//if (x1 < x2)
	//{
	//	if (xCord > x2 && xCord < x1 && yCord>y1 && yCord<y2)
	//	{
	//		cout << "Outside";
	//	}
	//}
	//?????????


	//13
	/*int a, b, c;
	cin >> a >> b >> c;
	int D = b * b - 4 * a * c;
	if (D > 0)
	{
	cout << "2";
	}
	else if (D == 0)
	{
	cout << "one doubled root";
	}
	else
	{
	cout << "0";
	}*/

	//14
	char ch1, ch2, ch3, ch4, ch5;
	cin >> ch1 >> ch2 >> ch3 >> ch4 >> ch5;
	if ((ch5 >= ch1 && ch5 <= ch2) || (ch5 >= ch3 && ch5 <= ch4))
	{
		cout << "true" << endl;
	}
	else cout << "false" << endl;
	if ((ch5 >= ch1 && ch5 <= ch2) && (ch5 >= ch3 && ch5 <= ch4))
	{
		cout << "true" << endl;
	}
	else cout << "false" << endl;
	if ((ch5 >= ch1 && ch5 <= ch2) && !(ch5 >= ch3 && ch5 <= ch4))
	{
		cout << "true" << endl;
	}
	else cout << "false" << endl;

	//да измисля за case insensitive

}
