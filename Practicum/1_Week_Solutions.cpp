#include<iostream>

	using namespace std;

	int main()
	{
	 //////////////////////////////////////////////1
		/*int num;
		std::cin >> num;
		std::cout <<(num % 2 == 0) << std::endl;*/


     //////////////////////////////////////////////2

		/*int firstNum=0, secondNum=0;
		std::cin >> firstNum;
		std::cin >> secondNum;
		std::cout << firstNum / secondNum <<std::endl;
		std::cout << firstNum % secondNum << std::endl;
	 */
	 //////////////////////////////////////////////3

	 //F = (9 / 5) * C + 32.

	 //double celsium , farenheit;
	 //std::cin >> celsium;
	 //farenheit = (9.0 / 5) * celsium + 32;
	 //std::cout << "In Farenheit: " << farenheit <<std::endl;


	 /////////////////////////////////////////////4

	 //double sideA, sideB;
	 //std::cin >> sideA >> sideB;
	 //std::cout << sideA * sideB << "\n" << sideA * 2 + sideB*2;
		
	 /////////////////////////////////////////////5

	 //int seconds;
	 //std::cin >> seconds;
	 //int days = seconds / 86400;
	 //int hours = (seconds - days * 86400)/3600;
	 //int minutes = (seconds - ((hours*3600) + 86400*days)) / 60;

	 //std::cout << "days: " << days << " \t hours: " << hours <<"\t minutes : "<< minutes << "\t seconds: "<<seconds%60;

	 //////////////////////////////////////////6
	 //int numberWithoutLastDigit;

	 //std::cin >> numberWithoutLastDigit;
	 //std::cout << numberWithoutLastDigit / 10;


	 ////////////////////////////////////////////7

	 //int grade;
	 //std::cin >> grade;
	 //std::cout << (grade<=6 && grade>=2);


	 ////////////////////////////////////////////8

	 //int a, b, c, d;
	 //std::cout <<"Enter two pairs of numbers: "<<std::endl;
	 //std::cin >> a >> b >> c >> d;
	 //std::cout << (a >= c && c <= b || a >= d && d <= b || c >= a && a <= d || c >= a && c <= d);

	 ////////////////////////////////////////////9

	 //int n;
	 //std::cin >> n;
	 //std::cout << ((n+1)*n)/2;
     ////////////////////////////////////////////10
		//int g1, g2, g3, g4;
		//std::cin >> g1 >> g2 >> g3 >> g4;
		//bool geoProgress = ((g1 * g3 == g2 * g2) && (g2 * g4 == g3 * g3));
	    //std:cout << geoProgress;

		  
	 ////////////////////////////////////////////11

	 //int num1, num2;
	 //std::cin >> num1 >> num2;
	 //num1 = num2 + num1;
	 //num2 = num1 - num2;
	 //num1 = num1 - num2;
	 //std::cout << num1 <<" "<<num2;


	 //////////////////////////////////////////////12

		/*double number1, number2;
		std::cin >> number1 >> number2;

		std::cout << (number1 > number2) * number2 + (number2 >= number1) * number1;*/



	 /////////////////////////////////////////////13

	 int number;
	 std::cin >> number;
	 bool isTwoDigit = (number > 9 && number <= 99);
	 int lastDigit = number % 10;
	 std::cout << ((isTwoDigit * number) + (!isTwoDigit * lastDigit));


	 /////////////////////////////////////////////14

		//int a, b, c, d, e, sum = 0;
		//std::cin >> a >> b >> c >> d >> e;
		//bool isOdd1 = (a % 2 != 0), isOdd2 = (b % 2 != 0), isOdd3 = (c % 2 != 0), isOdd4 = (d % 2 != 0), isOdd5 = (e % 2 != 0); 
		//sum = isOdd1 * a + isOdd2 * b + isOdd3 * c + isOdd4 * d + isOdd5 * e;
		//std::cout << sum;


	 /////////////////////////////////////////////15

	 //int a, b, c;
	 //std::cin >> a >> b >> c;
	 //std::cout << (((a+b)>c) || (c + b) > a || (a + c) > b);



	}


