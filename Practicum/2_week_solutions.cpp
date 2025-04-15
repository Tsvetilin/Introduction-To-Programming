#include <iostream>
#include <cmath>

int main()
{
    //1

    /*int n;
    std::cout << "Introduce a number: ";
    std::cin >> n;

    if (n > 0) {
        std::cout << "Positive";
    } else if (n < 0) {
        std::cout << "Negative";
    } else {
        std::cout << "0";
    }*/

    //2

    /*int n;
    std::cout << "Introduce a number between 1 and 9: ";
    std::cin >> n;

    switch (n) {
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
        break;
    }*/

    //3

    /*int year;
    std::cout << "Introduce a number: ";
    std::cin >> year;

    bool isLeap = false;

    if (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0)) {
        isLeap = true;
    }

    if (isLeap) {
        std::cout << "Leap year";
    } else std::cout << "No leap year";*/

    //4

    /*int day;
    std::cout << "Introduce a number (1 - 7): ";
    std::cin >> day;

    switch (day) {
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
        std::cout << "Try again";
        break;
    }*/

    //5
    
    /*int n1, n2;

    std::cout << "Introduce 2 numbers: ";
    std::cin >> n1 >> n2;

    int biggerNum = (n1 > n2) ? n1 : n2;

    std::cout << biggerNum;*/

    //6
    
    // char letter = ' ';
    // std::cout << "Introduce a letter: ";
    // std::cin >> letter;

    // if ((letter >= 'a' && letter <= 'z') || (letter >= 'A' && letter <= 'Z')) {
    //     if (letter >= 'a' && letter <= 'z') {
    //         std::cout << (char)(letter - 32) << '\n';
    //     } else {
    //         std::cout << (char)(letter + 32) << '\n';
    //     }
        

    //     switch (letter) {
    //         case 'a':
    //         case 'e':
    //         case 'i':
    //         case 'o':
    //         case 'u':
    //         case 'A':
    //         case 'E':
    //         case 'I':
    //         case 'O':
    //         case 'U':
    //             std::cout << "Vowel";
    //             break;

    //         default:
    //             std::cout << "Consonant";
    //             break;
    //     }


    // } else {
    //     std::cout << "Invalid character";
    // }
    


    //7
    
    // int n1, n2, n3;
    // std::cout << "Introduce 3 numbers: ";
    // std::cin >> n1 >> n2 >> n3;

    // int aux;
    // int i = 0;

    // while (i<2) {
    //     if (n1 > n2) {
    //     aux = n1;
    //     n1 = n2; 
    //     n2 = aux;
    //     }

    //     if (n2 > n3) {
    //         aux = n2;
    //         n2 = n3;
    //         n3 = aux;
    //     }

    //     i++;
    // }
    
    // std::cout << n1 << " " << n2 << " " << n3;

    //8

    // int radius, x , y;
    // std::cout << "Introduce the radius of a circle and the coordinates of a point (x; y): ";
    // std::cin >> radius >> x >> y;

    // int distance = pow(x - 0, 2) + pow(y - 0, 2);

    // if (distance < pow(radius, 2)) {
    //     std::cout << "In the circle";
    // } else if (distance > pow(radius, 2)) {
    //     std::cout << "Out of the circle";
    // } else {
    //     std::cout << "On the circle";
    // }
    
    //9

    // float bound1, bound2, n;
    // const float EPSILON = 0.0001;

    // std::cout << "Introduce 3 numbers: ";
    // std::cin >> bound1 >> bound2 >> n;

    // if (n > bound1 && n < bound2) {
    //     std::cout << "The number is in the interval. The interval is open.";
    // } else if (fabs(bound1 - n) < EPSILON || fabs(bound2 - n) < EPSILON) {
    //     std::cout << "The number is in the interval. The interval is closed.";
    // } else {
    //     std::cout << "The number isn't in the interval.";
    // }
    
    //10

    // int originalNum;
    // std::cin >> originalNum;

    // int dig1 = originalNum / 1000;
    // int dig2 = (originalNum % 1000) / 100;
    // int dig3 = (originalNum % 100) / 10;
    // int dig4 = originalNum % 10;

    // int num1 = dig1 * 10 + dig4;
    // int num2 = dig2 * 10 + dig3;

    // if (num1 < num2) {
    //     std::cout << num1 << " < " << num2;
    // } else if (num1 > num2) {
    //     std::cout << num1 << " > " << num2;
    // } else {
    //     std::cout << num1 << " == " << num2;
    // }

    //11

    // int day, month, year;
    // std::cin >> day >> month >> year;

    // bool leapYear = year % 4 == 0 && (year % 100 != 0 || year % 400 == 0);
    // bool validDate = year >= 0 ? 1:0;

    // switch (month) {
    //     case 1:
    //         validDate = validDate && (day >= 1 && day <= 31);
    //         break;
    //     case 3:
    //         validDate = validDate && (day >= 1 && day <= 31);
    //         break;
    //     case 5:
    //         validDate = validDate && (day >= 1 && day <= 31);
    //         break;
    //     case 7:
    //         validDate = validDate && (day >= 1 && day <= 31);
    //         break;
    //     case 8:
    //         validDate = validDate && (day >= 1 && day <= 31);
    //         break;
    //     case 10:
    //         validDate = validDate && (day >= 1 && day <= 31);
    //         break;
    //     case 12:
    //         validDate = validDate && (day >= 1 && day <= 31);
    //         break;
        
    //     case 2:
    //         validDate = validDate && day >= 1 && day <= (leapYear ? 29 : 28);
    //         break;
        
    //     case 4:
    //         validDate = validDate && (day >= 1 && day <= 30);
    //         break;
    //     case 6:
    //         validDate = validDate && (day >= 1 && day <= 30);
    //         break;
    //     case 9:
    //         validDate = validDate && (day >= 1 && day <= 30);
    //         break;
    //     case 11:
    //         validDate = validDate && (day >= 1 && day <= 30);
    //         break;
    
    // default:
    //     validDate = false;
    //     break;
    // }

    // std::cout << validDate;
    
    //12

    // int x1, y1, x2, y2, pointX, pointY;
    // std:: cin >> x1 >> y1 >> x2 >> y2 >> pointX >> pointY;

    // if ((pointX > x1 && pointX < x2) && (pointY > y1 && pointY < y2)) {
    //     std::cout << "In the rectangle.";
    // } else if ((pointX == x1 || pointX == x2) || (pointY == y1 || pointY == y2)) {
    //     std::cout << "On the rectangle.";
    // } else {
    //     std::cout << "Out of the rectangle.";
    // }
    
    //13

    // int a, b, c;
    // std::cin >> a >> b >> c;

    // int d = b * b - 4 * a * c;

    // if (d > 0) {
    //     std::cout << 2;
    // } else if (d == 0 ) {
    //     std::cout << 1;
    // } else {
    //     std::cout << 0;
    // }

    //14

    // char a1, a2, b1, b2, c;
    // std::cin >> a1 >> a2 >> b1 >> b2 >> c;

    // a1 += 32;
    // a2 += 32;
    
    // bool isInTheUnion = (c >= a1 && c <= a2) ||  (c >= b1 && c <= b2);
    // bool isInTheCrossSection = (c >= a1 && c <= a2) && (c >= b1 && c <= b2);
    // bool isInTheDifference = (c >= a1 && c <= a2) && !(c >= b1 || c <= b2);
    // bool isOnlyInOneSet = isInTheUnion && !isInTheCrossSection;

    // std::cout << (isInTheUnion ? "true" : "false") << " " 
    //     << (isInTheCrossSection ? "true" : "false") << " " 
    //     << (isInTheDifference ? "true" : "false") << " " 
    //     << (isOnlyInOneSet ? "true" : "false");


}
