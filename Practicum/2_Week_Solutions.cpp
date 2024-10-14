#include <iostream>
#include <chrono>
using namespace std::chrono;

int main()
{
    // Ex. 1
    /*int num;
    std::cin >> num;

    if (num > 0)
        std::cout << "Positive";
    else if (num < 0)
        std::cout << "Negative";
    else
        std::cout << "Null";*/


    // Ex. 2
    /*int num;
    std::cin >> num;

    switch (num)
    {
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
    default: std::cout << "Invalid"; break;
    }*/


    // Ex. 3
    /*int year;
    std::cout << "Year: ";
    std::cin >> year;

    if (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0))
        std::cout << "Leap year";
    else
        std::cout << "Not a leap year";*/

    
    // Ex. 4
    /*int day;
    std::cin >> day;

    switch (day)
    {
    case 1: std::cout << "Monday"; break;
    case 2: std::cout << "Tuesday"; break;
    case 3: std::cout << "Wednesday"; break;
    case 4: std::cout << "Thursday"; break;
    case 5: std::cout << "Friday"; break;
    case 6: std::cout << "Saturday"; break;
    case 7: std::cout << "Sunday"; break;
    default: std::cout << "Not a day of the week"; break;
    }*/


    // Ex. 5
    /*int a, b;
    std::cin >> a >> b;

    std::cout << (a > b ? a : b);*/


    // Ex. 6
    /*char symbol;
    std::cin >> symbol;

    if (symbol >= 65 && symbol <= 90)
    {
        std::cout << symbol << "\n";
    }
    else if (symbol >= 97 && symbol <= 122)
    {
        symbol -= 32;
        std::cout << symbol << "\n";
    }
    else
    {
        std::cout << "Invalid character";
        return 0;
    }

    switch (symbol)
    {
    case 'A':
    case 'E':
    case 'I':
    case 'O':
    case 'U': std::cout << "Vowel"; break;
    default: std::cout << "Consonant"; break;
    }*/


    // Ex. 7
    /*int a, b, c;
    std::cin >> a >> b >> c;

    int maxAB = a > b ? a : b;
    int maxABC = maxAB > c ? maxAB : c;
    int minAB = a < b ? a : b;
    int minABC = minAB < c ? minAB : c;
    int middle = a + b + c - maxABC - minABC;
    std::cout << minABC << " " << middle << " " << maxABC << "\n";

    if (a < b)
        if (b < c)
            std::cout << a << " " << b << " " << c;
        else if (a < c)
            std::cout << a << " " << c << " " << b;
        else
            std::cout << c << " " << a << " " << b;
    else
        if (a < c)
            std::cout << b << " " << a << " " << c;
        else if (b < c)
            std::cout << b << " " << c << " " << a;
        else
            std::cout << c << " " << b << " " << a;*/


    // Ex. 8
    /*int radius, x, y;
    std::cin >> radius >> x >> y;

    int d = sqrt(x * x + y * y);
    if (d < radius)
        std::cout << "In the circle";
    else if (d > radius)
        std::cout << "Out of the circle";
    else
        std::cout << "On the circle";*/


    // Ex. 9
    /*double lInterval, rInterval, num;
    std::cin >> lInterval >> rInterval >> num;

    double epsilon = 0.0001;
    if (abs(num - lInterval) <= epsilon || abs(num - rInterval) <= epsilon)
        std::cout << "The number is within the given interval. The interval is closed.";
    else if (num > lInterval && num < rInterval)
        std::cout << "The number is within the given interval. The interval is open.";
    else
        std::cout << "The number is outside the given interval.";*/


    // Ex. 10
    /*int num;
    std::cin >> num;

    int fNum = (num / 1000) * 10 + (num % 10);
    int sNum = (num / 100 % 10) * 10 + (num / 10 % 10);
    
    if (fNum == sNum)
        std::cout << fNum << " == " << sNum;
    else if (fNum < sNum)
        std::cout << fNum << " < " << sNum;
    else
        std::cout << fNum << " > " << sNum;*/


    // Ex. 11
    /*int day, month, year;
    std::cin >> day >> month >> year;

    if (year < 0)
        std::cout << 0;
    else
        switch (month)
        {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            if (day >= 1 && day <= 31)
                std::cout << 1;
            else
                std::cout << 0;
            break;
        case 2:
            if (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0))
                if (day >= 1 && day <= 29)
                    std::cout << 1;
                else
                    std::cout << 0;
            else if (day >= 1 && day <= 28)
                std::cout << 1;
            else
                std::cout << 0;
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            if (day >= 1 && day <= 30)
                std::cout << 1;
            else
                std::cout << 0;
            break;
        default: std::cout << 0; break;
        }*/
}
