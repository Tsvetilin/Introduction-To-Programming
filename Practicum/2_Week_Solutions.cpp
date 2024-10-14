// prac2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{

    /* zadacha 1
    int number;
    std::cin >> number;
    if (number > 0) {
        std::cout << "The number is positive";
    }
    else if (number == 0) {
        std::cout << "The number is zero";
    }
    else {
        std::cout << "The number is negative";
    }
    */


    /*zadacha 2
    int number;
    std::cin >> number;
    switch (number) {
    case 0: std::cout << "0"; break;
    case 1: std::cout << "I"; break;
    case 2: std::cout << "II"; break;
    case 3: std::cout << "III"; break;
    case 4: std::cout << "IV"; break;
    case 5: std::cout << "V"; break;
    case 6: std::cout << "VI"; break;
    case 7: std::cout << "VII"; break;
    case 8: std::cout << "VIII"; break;
    case 9: std::cout << "IX"; break;
    }
    */


    /* zadacha 3
    int year;
    std::cout << "Year: ";
    std::cin >> year;
    if (year % 4 == 0) {
        if (year % 400 == 0) {
            std::cout << "Leap year";
        }
        else if (year % 100 == 0) {
            std::cout << "Not a Leap year";
        }
        else {
            std::cout << "Leap year";
        }
    }
    else {
        std::cout << "Not a Leap Year";
    }
    */


    /* zadacha 4
    int day;
    std::cin >> day;
    switch (day) {
    case 1: std::cout << "Monday"; break;
    case 2: std::cout << "Tuesday"; break;
    case 3: std::cout << "Wednesday"; break;
    case 4: std::cout << "Thursday"; break;
    case 5: std::cout << "Friday"; break;
    case 6: std::cout << "Saturday"; break;
    case 7: std::cout << "Sunday"; break;

    }
    */


    /* zadacha 5
    int a, b;
    std::cin >> a >> b;
    std::cout << (a > b ? a : b);
    */


    /* zadacha 6
    char letter;
    std::cin >> letter;
    int difference = 'a' - 'A';
    
    if ((letter >= 'a' && letter <= 'z')) {
        if (letter == 'a' || letter == 'e' || letter == 'u' || letter == 'o' || letter == 'i') {
            std::cout << "Little letter \ Vowel ";
        }
        else {
            std::cout << "Little letter \ Consonant ";
        }
        std::cout << char(letter - difference);
            

    }
    else if (letter >= 'A' && letter <= 'Z') {
        if (letter == 'A' || letter == 'E' || letter == 'U' || letter == 'O' || letter == 'I') {
            std::cout << "CAPITAL letter \ Vowel ";
        }
        else {
            std::cout << "CAPITAL letter \ Consonant ";
        }
        std::cout << char(letter + difference);
    }

    else {
        std::cout << "Not a valid character";
    }
    */



/* zadacha 8
int r, x, y;
const int Pi = 3.14;
std::cin >> r >> x >> y;
double result;
result = sqrt(x * x + y * y);
if (result < r) {
    std::cout << "In the circle";

}
else if (result == r) {
    std::cout << "On the circle";
}
else {
    std::cout << "Out of the circle";
}

*/




}


