    //zad1
    /*
    int n;
    std::cin >> n;
    if (n > 0) {
        std::cout << "Positive";
    }
    else if (n == 0) {
        std::cout << "Zero";
    }
    else {
        std::cout << "Negative";
    }*/

    //zad2

    /*int n = 0;
    std::cin >> n;
    switch (n)
    {
    case 1:
        std::cout << "I";
        break;
    case 2:
        std::cout << "II";
        break;
    case 3:
        std::cout << "III";
        break;
    case 4:
        std::cout << "IV";
        break;
    case 5:
        std::cout << "V";
        break;
    case 6:
        std::cout << "VI";
        break;
    case 7:
        std::cout << "VII";
        break;
    case 8:
        std::cout << "VIII";
        break;
    case 9:
        std::cout << "IX";
        break;

    default:
        std::cout << "Number is out of range";
        break;
    }
}*/

//zad3

    /*int n = 0;
    std::cin >> n;
    if (n % 400 == 0) {
        std::cout << "Leap Year";
    }
    else if ((n % 4 == 0) && (n % 100 != 0)) {

        std::cout << "Leap Year";
    }
    else {
        std::cout << "Not a Leap Year";
    }*/

  //zad4

    /*int n = 0;
    std::cin >> n;
    switch (n)
    {
    case 1:
        std::cout << "Monday";
        break;
    case 2:
        std::cout << "Tuesday";
        break;
    case 3:
        std::cout << "Wednesday";
        break;
    case 4:
        std::cout << "Thursday";
        break;
    case 5:
        std::cout << "Friday";
        break;
    case 6:
        std::cout << "Saturday";
        break;
    case 7:
        std::cout << "Sunday";
        break;

    default:
        std::cout << "Not Valid value";
        break;
    }*/

    //zad5

    /*int first = 0, second = 0;
    std::cin >> first;
    std:: cin >> second;
    std::cout << (first > second ? first : second);*/
   
    //zad6

    //zad 7
/*int a = 0, b = 0, c = 0;
std::cin >> a >> b >> c;
if (a >= b && a >= c) {
    if (b >= c) {
        std::cout << a << " " << b << " " << c;
    }
    else {
        std::cout << a << " " << c << " " << b;
    }
}
else if (b >= a && b >= c) {
    if (a >= c) {
        std::cout << b << " " << a << " " << c;
    }
    else {
        std::cout << b << " " << c << " " << a;
    }
}
else {
    if (a >= b) {
        std::cout << c << " " << a << " " << b;
    }
    else {
        std::cout << c << " " << b << " " << a;
    }
}

//zad 8
/* double r, x, y;
 std::cin >> r >> x >> y;

 double distance = sqrt(x * x + y * y);

 if (distance>r) {
     std::cout << "Out of the circle" << std::endl;
 }
 else if (distance < r) {
     std::cout << "Inside the circle" << std::endl;
 }
 else {
     std::cout << "On the circle" << std::endl;
 }

 return 0;*/

// zad 9
/*double left, right, number;

  
std::cin >> left >> right >> number;


if (fabs(number - left) < 1e-9 || fabs(number - right) < 1e-9) {
    std::cout << "The number is on the boundary. The interval is closed." << std::endl;
}

else if (number > left && number < right) {
    std::cout << "The number is within the given interval. The interval is open." << std::endl;
}
   
else {
    std::cout << "The number is outside the interval." << std::endl;
}

return 0;*/

// zad 10
/*#include <iostream>

int main() {
    int n;

    std::cin >> n;

    
    int digit1 = (n / 1000) % 10;  
    int digit2 = (n / 100) % 10;   
    int digit3 = (n / 10) % 10;    
    int digit4 = n % 10;           

    
    int num1 = digit1 * 10 + digit4;  
    int num2 = digit2 * 10 + digit3;  

    
    if (num1 < num2) {
        std::cout << num1 << " < " << num2 << std::endl;
    }
    else if (num1 > num2) {
        std::cout << num1 << " > " << num2 << std::endl;
    }
    else {
        std::cout << num1 << " = " << num2 << std::endl;
    }
    return 0;
}*/

