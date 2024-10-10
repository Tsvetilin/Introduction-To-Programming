#include <iostream>

#include<stdio.h>
using namespace std;

int main()


	//1
	/*int number;
	cin >> number;
	cout << !(number % 2)<<endl;
	cout << (number % 2 == 0 ? 1 :0);*/

	//2
	/*int num1, num2;
	cin >> num1;
	cin >> num2;
	cout << num1 / num2 << endl;
	cout << num1 % num2 << endl;*/

	//3
	/*int cels;
	cin >> cels;
	cout << (9.0 / 5) * cels + 32;*/

	//4
	//double length;
	//double width;
	//cin >> length;
	//cin >> width;
	//cout << 2 * width + 2 * length << endl;
	//cout << width * length;

	//5
	/*int number;
	cin >> number;
	int days = number / 86400.0;
	number -= (days * 86400);

	int hours = number / 3600.0;
	number -= (hours * 3600);

	int minutes = number / 60.0;
	number -= (minutes * 60);

	int seconds = number;

	cout << days << " days" << endl;
	cout << hours << " hours" << endl;
	cout << minutes << " minutes" << endl;
	cout << seconds << " seconds" << endl;*/

	//6
	/*int number;
	cin >> number;
	int num1 = number / 10;
	cout << num1;*/

	//7
	/*int number;
	cin >> number;
	cout << (number == 2 || number == 3 || number == 4 || number == 5 || number == 6);*/

	//8
	/*int a, b, c, d;
	cin >> a >> b >> c >> d;
	cout << (a >= c || a <= d) || (b >= c || b <= d);*/

	//9
	/*int num;
	cin >> num;
	cout << num * (num + 1) / 2;*/

	//10
	/*int num1, num2, num3, num4;
	cin >> num1 >> num2 >> num3 >> num4;
	cout << ((num4 / num3) == (num3 / num2) && (num3 / num2) == (num2 / num1));*/

	//11
	//double num1, num2;
	//cin >> num1 >> num2;
	//num1 += num2;
	//num2 = num1 - num2;
	//num1 -= num2;
	//cout << "First num: " << num1 << " and Second num: " << num2;

	//12
	/*double num1, num2;
	cin >> num1 >> num2;
	double difference = num1 - num2;*/

	//13
	/*int number,result;
	cin >> number;
	bool isDoubleDigit = number % 100 == number;
	isDoubleDigit && cout << number;
	!isDoubleDigit && cout << number % 10;*/

	//14
	/*int n1, n2, n3, n4, n5,sum=0;
	cin >> n1 >> n2 >> n3 >> n4 >> n5;
	sum += n1 * (n1 % 2);
	sum += n2 * (n2 % 2);
	sum += n3 * (n3 % 2);
	sum += n4 * (n4 % 2);
	sum += n5 * (n5 % 2);
	cout << sum;*/

	//15
	/*int a, b, c;
	cin >> a >> b >> c;
	cout << ((a * a + b * b >= c * c) && (a * a + c * c >= b * b) && (b * b + c * c >= a * a));*/
}

