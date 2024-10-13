#include <iostream>

int main()
{
    //// Task 1
    //int num;
    //std::cin >> num;
    //std::cout << (num % 2 == 0);

    //// Task 2
    //int a, b;
    //std::cin >> a >> b;
    //std::cout << a / b << std::endl << a % b;

    //// Task 3
    //int C;
    //std::cin >> C;
    //std::cout << (9.0 / 5) * C + 32;

    //// Task 4
    //double a, b;
    //std::cin >> a >> b;
    //std::cout << 2 * a + 2 * b << std::endl;
    //std::cout << a * b;

    //// Task 5
    //int seconds, days, hours, minutes; 
    //std::cin >> seconds;
    //days = seconds / 86400;
    //seconds %= 86400;
    //hours = seconds / 3600;
    //seconds %= 3600;
    //minutes = seconds / 60;
    //seconds %= 60; 
    //std::cout << days << " days, " << hours << " hours, " << minutes << " minutes" << " and " << seconds << " seconds";

    //// Task 6
    //int a;
    //std::cin >> a;
    //std::cout << a / 10;

    //// Task 7
    //int mark;
    //std::cin >> mark;
    //std::cout << (mark >= 2 && mark <= 6);

    //// Task 8
    //int a, b, c, d;
    //std::cin >> a >> b >> c >> d;
    //std::cout << ((a <= c && c <= b && b <= d) || (c <= a && a <= d && d <= b));

    //// Task 9
    //int n;
    //std::cin >> n;
    //std::cout << (1 + n) / 2 * n;

    //// Task 10
    //int a, b, c, d;
    //std::cin >> a >> b >> c >> d;
    //std::cout << ((b * b == a * c) && (c * c == b * d));

    //// Task 11
    //int a, b;
    //std::cin >> a >> b; 
    //a -= b;
    //b += a;
    //a = b - a;
    //std::cout << a << " " << b;

    //// Task 12
    //double a, b;
    //std::cin >> a >> b;
    //std::cout << (a > b) * a + (b >= a) * b;

    //// Task 13
    //int num;
    //std::cin >> num;
    //std::cout << ((num % 100 == num) * num) + ((num % 100 != num) * num % 10);

    //// Task 14
    //int a, b, c, d, e, f;
    //std::cin >> a >> b >> c >> d >> e;
    //std::cout << ((a % 2 == 1) * a) + ((b % 2 == 1) * b) + ((c % 2 == 1) * c) + ((d % 2 == 1) * d) + ((e % 2 == 1) * e);

    // Task 15 
    int a, b, c;
    std::cin >> a >> b >> c;
    std::cout << (a < b + c) * (b < a + c) * (c < a + b);
}
