#include<iostream>

int main() {
  //zad1
  int number;
  std::cout << "Enter a number: ";
  std::cin >> number;

  bool isEven = number % 2 ? 0 : 1;

  std::cout << number << " is even? - " << isEven << std::endl;

  //zad2
  int a, b;
  std::cout << "Enter the value of a: ";
  std::cin >> a;
  std::cout << "Enter the value of b: ";
  std::cin >> b;

  int p = a / b;
  int q = a % b;

  std::cout << a << "/" << b << "=" << p << "." << q << std::endl;

  //zad3
  double degreesC;
  std::cout << "Enter degrees Celsius: ";
  std::cin >> degreesC;

  double degreesF;
  degreesF = (degreesC * 9) / 5 + 32;

  std::cout << "The degrees in Fahrenheit are: " << degreesF << std::endl;

  //zad4
  double side1, side2;
  std::cout << "Enter side 1 of the rectangle: ";
  std::cin >> side1;
  std::cout << "Enter side 2 of the rectangle: ";
  std::cin >> side2;

  double p, s;

  p = 2 * side1 + 2 * side2;
  s = side1 * side2;

  std::cout << "The perimeter of the rectangle is: " << p << std::endl;
  std::cout << "The surface area of the rectangle is: " << s << std::endl;

  //zad5
  int totalSeconds;
  std::cout << "Enter the amount of seconds: ";
  std::cin >> totalSeconds;

  int days, minutes, seconds;

  days = totalSeconds / 86400;
  totalSeconds = totalSeconds % 86400;

  hours = totalSeconds / 3600;
  totalSeconds = totalSeconds % 3600;

  minutes = totalSeconds / 60;
  seconds = totalSeconds % 60;

  std::cout << totalSeconds << " are " << days << " days, " << hours << " hours, " << minutes << " minutes and " << seconds << " seconds."<<std::endl;

  //zad6
  int number;
  std::cout << "Enter a number: ";
  std::cin >> number;

  int newNumber = number / 10;

  std::cout << "New number: " << newNumber << std::endl;

  //zad7
  int grade;
  std::cout << "Enter student's grade: ";
  std::cin >> grade;

  bool isValid = grade >= 2 && grade <= 6 ? 1 : 0;

  std::cout << isValid << std::endl;

  //zad8
  int a, b, c, d;
  std::cout << "Enter the value of a: ";
  std::cin >> a;
  std::cout << "Enter the value of b: ";
  std::cin >> b;
  std::cout << "Enter the value of c: ";
  std::cin >> c;
  std::cout << "Enter the value of d: ";
  std::cin >> d;

  //[a,b] [c,d]
  //     a__________b
  // c_______d
  //      c_______d
  //            c_______d  
  //c______________________d

  bool intersect = !(b < c || d < a);

  std::cout << "Do the two intervals intersect? - " << intersect << std::endl;

  //zad9
  int n;
  std::cout << "Enter the value of n: ";
  std::cin >> n;

  int sum = n * (2 * 1 + (n - 1) * 1) / 2;
  std::cout << "Sum: " << sum << std::endl;

  //zad10
  int num1, num2, num3, num4;
std::cout << "Enter the value of num1: ";
std::cin >> num1;
std::cout << "Enter the value of num2: ";
std::cin >> num2;
std::cout << "Enter the value of num3: ";
std::cin >> num3;
std::cout << "Enter the value of num4: ";
std::cin >> num4;

bool areProgression = (num2 / num1 == num3 / num2) && (num3 / num2 == num4 / num3);

std::cout << "The numbers are geometric progression? - " << (areProgression ? "Yes" : "No") << std::endl;

  //zad 11
/*int a, b;
std::cout << "Enter the value of a: ";
std::cin >> a;
std::cout << "Enter the value of b: ";
std::cin >> b;
a = a + b;
b = a - b;
a = a - b;

std::cout << "a: " << a << std::endl;
std::cout << "b: " << b << std::endl;*/

  	//zad 12
	/*int a, b;
	std::cout << "Enter a: ";
	std::cin >> a;
	std::cout << "Enter b: ";
	std::cin >> b;

	int sum = a + b;*/

	//zad 14
	/*int num1, num2, num3, num4, num5;
	std::cin >> num1 >> num2 >> num3 >> num4 >> num5;
	int sum = 0;
	bool isEven1 = num1 % 2 ? sum + num1 : sum + 0;
	bool isEven2 = num2 % 2 ? sum + num2 : sum + 0;
	bool isEven3 = num3 % 2 ? sum + num3 : sum + 0;
	bool isEven4 = num4 % 2 ? sum + num4 : sum + 0;
	bool isEven5 = num5 % 2 ? sum + num5 : sum + 0;

	std::cout << "Sum: " << sum;*/

	//zad 13
	/*int num;
	std::cin >> num;

	bool hasTwoDigits = num % 100 != 0 ? 0 : 1;
	
	std::cout << hasTwoDigits << std::endl;*/

	//zad 15
    //int side1, side2, side3;
	//std::cin >> side1 >> side2 >> side3;
	//bool check = side1 < side2 + side3 && side2 < side1 + side3 && side3 < side2 + side1 ? 1 : 0;

	return 0;
}
}
