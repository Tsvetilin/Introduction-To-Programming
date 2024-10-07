#include <iostream>

int main()
{
    // Ex. 1
    /*int num;
    std::cin >> num;

    std::cout << !(num % 2);*/


    // Ex. 2
    /*int divident, divisor;
    std::cin >> divident >> divisor;

    std::cout << divident / divisor << "\n" << divident % divisor;*/


    // Ex. 3
    /*double degrees;
    std::cin >> degrees;

    std::cout << (9.0 / 5) * degrees + 32;*/


    // Ex. 4
    /*double length, width;
    std::cin >> length >> width;

    std::cout << 2 * (length + width) << "\n" << length * width;*/


    // Ex. 5
    /*int seconds;
    std::cin >> seconds;
    int minutes = seconds / 60;
    int secondsLeft = seconds % 60;
    int hours = minutes / 60;
    minutes = minutes % 60;
    int days = hours / 24;
    hours = hours % 24;

    std::cout << days << " days, " << hours << " hours, " << minutes << " minutes, and "
        << secondsLeft << " seconds";*/


    // Ex. 6
    /*int num;
    std::cin >> num;

    std::cout << num / 10;*/


    // Ex. 7
    /*int grade;
    std::cin >> grade;

    std::cout << ((grade >= 2) && (grade <= 6));*/


    // Ex. 8
    /*int a, b, c, d;
    std::cin >> a >> b >> c >> d;

    std::cout << ((((c >= a) && (c <= b)) || ((d >= a) && (d <= b)))
        || (((a >= c) && (a <= d)) || ((b >= c) && (b <= d))));*/


    // Ex. 9
    /*int num;
    std::cin >> num;

    std::cout << num * (num + 2) / 2;*/


    // Ex. 10
    /*int a, b, c, d;
    std::cin >> a >> b >> c >> d;

    std::cout << (((b / a) == (c / b)) && ((c / b) == (d / c)));*/


    // Ex. 11
    /*double a, b;
    std::cin >> a >> b;
    

    a += b;
    b = a - b;
    a -= b;

    std::cout << "a = " << a << "\nb = " << b;*/


    // Ex. 12
    /*double a, b;
    std::cin >> a >> b;

    std::cout << (a > b) * a + (b >= a) * b;

    ((a - b) < 0) && (std::cout << b) || (std::cout << a);*/


    // Ex. 13
    /*int num;
    std::cin >> num;

    std::cout << ((num > 9) && (num < 100)) * num + (((num <= 9) || (num >= 100)) * num % 10);*/


    // Ex. 14
    /*int a, b, c, d, e;
    std::cin >> a >> b >> c >> d >> e;

    std::cout << (a % 2) * a + (b % 2) * b + (c % 2) * c + (d % 2) * d + (e % 2) * e;*/


    // Ex. 15
    /*double a, b, c;
    std::cin >> a >> b >> c;

    std::cout << ((a + b > c) && (a + c > b) && (b + c > a));*/


    // Not Solved - Bonus *


    // Bonus **
    int num;
    std::cin >> num;

    std::cout << num % 10 << num / 10 % 10 << num / 100 + 1;


    // Not Solved - Bonus ***

    return 0;
}
