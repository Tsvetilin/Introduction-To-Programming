// FirstProject.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
int main()
{
	// 1
        /*std::cout << "hello world!\n";
        int num=0;
        std:: cin >> num;
        std::cout << num % 2;*/
	
	// 2
        /*int num;
        int num2;
        std::cin >> num;
        std::cin >> num2;
        int nominator = num / num2;
        int remainder = num % num2;
        std::cout << nominator << std::endl;
        std::cout << remainder;*/

	// 3
        /*int celsius;
        std::cin >> celsius;
        double far = (9.0 / 5) * celsius + 32;
        std::cout << far;*/

	//4
        /*double width;
        double lenght;
        std::cin >> width >> lenght;
        std::cout << 2 * width + 2 * lenght << std::endl;
        std::cout << width * lenght;*/

	//5
	/*int num;
	std::cin >> num;
	int days = num / 86400;
	std::cout << days << std:: endl;
	int r1 = num % 86400;
	int hours = r1 / 3600;
	std::cout << hours << std:: endl;
	int r2 = r1 % 3600;
	int minutes = r2 / 60;
	std::cout << minutes << std::endl;
	int r3 = r2 % 60;
	int seconds = r3;
	std::cout << seconds;*/

        //6
        /*int num;
        std:: cout << "Please enter a number: ";
        std:: cin >> num;
        int answer = num / 10;
        std:: cout << answer;*/

        //7
        /*int num = 0;
        std:: cin >> num;
        std:: cout << (num >= 2, num <= 6);*/

        //8
        /*int a = 0, b = 0, c = 0, d = 0;
        std:: cout << "Please enter 4 numers ";
        std:: cin >> a >> b >> c >> d;
        std:: cout << (b >= c && b <= d || a >= c && a <= d || a <= b && c <= d);*/

        //9
        /*int num;
        std:: cout << "Please enter a number ";
        std:: cin >> num;
        float sum = (num * (num + 1)) / 2;
        std:: cout << "This is the summation of your number: " << sum;*/

        //10
        /*int a = 0, b = 0, c = 0, d = 0;
        std:: cin >> a >> b >> c >> d;
        bool isGeometricProgression = ((b * b == a * c) && (c * c == b * d));
        std:: cout << "The numbers form geometric progression: " << isGeometricProgression;*/
        
        //11
        /*double num1 = 0, num2 = 0;
        std:: cin >> num1 >> num2;
        std:: cout << num2 << " " << num1;*/

        //12
        /*double num1 = 0, num2 = 0;
        std:: cout << "Enter two numbers: ";
        std:: cin >> num1 >> num2;
        bool larger = num1 > num2;
        std:: cout << num1 * larger + num2 * !larger;*/

        //13
        /*int num = 0;
        std:: cout << "Enter a number: ";
        std:: cin >> num;
        bool isDoubleDigit = num % 100 == num;
        std:: cout << num * isDoubleDigit + ((num % 10) * !isDoubleDigit);*/

        //14
        /*int a = 0, b = 0, c = 0, d = 0, e = 0, sum = 0;
        std:: cout << "Enter five numbers: ";
        std:: cin >> a >> b >> c >> d >> e;
        bool isNumOdd = true;
        isNumOdd = a % 2;
        sum = a * isNumOdd;
        isNumOdd = b % 2;
        sum += b * isNumOdd;
        isNumOdd = c % 2;
        sum += c * isNumOdd;
        isNumOdd = d % 2;
        sum += d * isNumOdd;
        isNumOdd = e % 2;
        sum += e * isNumOdd;
        std:: cout << "This is the summation of the odd numbers: " << sum;*/

        //15
        /*int a = 0, b = 0, c = 0;
        std:: cin >> a >> b >> c;
        bool isTriangle = true;
        isTriangle = a <= b + c;
        isTriangle = a >= b - c;
        std:: cout << "Valid sides of a triangle: " << isTriangle;*/
        

        return 0;
}
// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu
// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file

