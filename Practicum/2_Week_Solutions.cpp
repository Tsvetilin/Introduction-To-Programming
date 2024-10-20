#include <iostream>

int main()
{
    /*
    //zadacha 1
    int num = 0;
    std::cin >> (num);
    if (num < 0) std::cout << "Negative";
    if (num == 0) std::cout << "0";
    if (num > 0) std::cout << "Positive";
    return 0;
    */

    /*
    //zadacha 2
    int num = 0;
    std::cin >> (num);
    switch (num) 
    {
    case 1: std::cout << "I"; break;
    case 2: std::cout << "II"; break;
    case 3: std::cout << "III"; break;
    case 4: std::cout << "IV"; break;
    case 5: std::cout << "V"; break;
    case 6: std::cout << "VI"; break;
    case 7: std::cout << "VII"; break;
    case 8: std::cout << "VIII"; break;
    case 9: std::cout << "IX"; break;
    default: std::cout << "exceeds 9";
    }
    return 0;
    */

    /*
    //zadacha 3
    int year = 0;
    std::cin >> year;
    if (year % 4 == 0 && year % 100 == 0 && year % 400 == 0) std::cout << "Leap Year";
    else if (year % 4 == 0 && year % 100 != 0) std::cout << "Leap Year";
    if (year % 4 == 0 && year % 100 == 0 && year % 400 != 0) std::cout << "Not a Leap Year";
    return 0;
    */

    //zadacha 4
    /*
    int num = 0;
    std::cin >> num;
    switch (num) {
    case 1: std::cout << ("Monday"); break;
    case 2: std::cout << ("Tuesday"); break;
    case 3: std::cout << ("Wednesday"); break;
    case 4: std::cout << ("Thursday"); break;
    case 5: std::cout << ("Friday"); break;
    case 6: std::cout << ("Saturday"); break;
    case 7: std::cout << ("Sunday"); break;
    default: std::cout << ("Must be a number between 1 and 7");
    }
    return 0;
    */
    
    // zadacha 5
    /*
    int num1, num2;
    num1 = 0;
    num2 = 0;
    std::cin >> (num1);
    std::cin >> (num2);
    std::cout << (num2 > num1 ? num2 : num1);
    return 0;
    */

    /*
    // zadacha 6
    char letter;
    const int Num = 'A' - 'a';
    bool isVowel = false;
    std::cin >> letter;
    switch (letter)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
    case 'A':
    case 'E':
    case 'I':
    case 'O':
    case 'U': isVowel = true; break;
    default: isVowel = false;
    }
    if (letter < 'A') letter = letter + Num;
    else letter = letter - Num;
    std::cout << letter;
    if (isVowel == true) std::cout << ("Vowel");
    else std::cout << "Not a Vowel";
    return 0;
    */

    //zadacha 7
    /*
    int a, b, c;
    std::cin >> (a);
    std::cin >> (b);
    std::cin >> (c);
    if (a < b)
    {
        a = a + b;
        b = a - b;
        a = a - b;
    }
    if (a < c)
    {
        a = a + c;
        c = a - c;
        a = a - c;
    }
    if (b < c) 
    {
        b = b + c;
        c = b - c;
        b = b - c;
    }
    std::cout << (a) << std::endl;
    std::cout << (b) << std::endl;
    std::cout << (c) << std::endl;
    return 0;
    */

    //zadacha 8
    /*
    int r, x, y, distance;
    std::cin >> (r);
    std::cin >> (x);
    std::cin >> (y);
    distance = sqrt(x * x + y * y);
    if (distance < r) std::cout << ("Inside the circle");
    if (distance == r) std::cout << ("On the circle");
    if (distance > r) std::cout << ("Outside the circle");
    return 0;
    */
         //zadacha 9
    /*
    double a, b, c;
    const double EPSILON = 1e-9;
    a = 0;
    b = 0;
    c = 0;
    std::cin >> (a);
    std::cin >> (b);
    std::cin >> (c);
    if (a-c<0.0 && b-c>0.0) std::cout << ("Within the interval. Interval Open");
    if (a-c>0.0 || b-c<0.0) std::cout << ("Not in interval");
    if (std::fabs(a - c) < EPSILON || std::fabs(b - c) < EPSILON) std::cout << ("Within the interval. Interval Closed");
    return 0;
    */


    //10 zadacha
    /*
    int a,b,c;
    a = 0;
    b = 0;
    c = 0;
    std::cin >> (a);
    b = (a / 1000) * 10+ a%10;
    c = (a / 100) % 10 * 10 + a / 10 % 10;
    if (b == c) std::cout << ("equal");
    if (b < c) std::cout << ("Second number bigger");
    if (b > c) std::cout << ("First number bigger");
    return 0;
    */


    //11 zadacha
    /*
    int a, b, c;
    bool realDate = 0;
    a = 0;
    b = 0;
    c = 0;
    std::cin >> (a);
    std::cin >> (b);
    std::cin >> (c);
    switch (b) 
    {
    case 1: if (a <= 31) realDate = 1; break;
    case 2: if (a <= 28 && c%4!=0 || a<=29 && c%4==0) realDate = 1; break;
    case 3: if (a <= 31) realDate = 1; break;
    case 4: if (a <= 30) realDate = 1; break;
    case 5: if (a <= 31) realDate = 1; break;
    case 6: if (a <= 30) realDate = 1; break;
    case 7: if (a <= 31) realDate = 1; break;
    case 8: if (a <= 31) realDate = 1; break;
    case 9: if (a <= 30) realDate = 1; break;
    case 10: if (a <= 31) realDate = 1; break;
    case 11: if (a <= 30) realDate = 1; break;
    case 12: if (a <= 31) realDate = 1; break;
    default: realDate = 0; break;
    }
    std::cout << (realDate);
    return 0;
    */

    //12 zadacha
    /*
    int x1, y1, x2, y2, x3, y3;
    bool inside = 0;
    bool line = 0;
    x1 = 0;
    y1 = 0;
    x2 = 0;
    y2 = 0;
    x3 = 0;
    y3 = 0;
    std::cin >> (x1);
    std::cin >> (y1);
    std::cin >> (x2);
    std::cin >> (y2);
    std::cin >> (x3);
    std::cin >> (y3);
    if (x3<x1 && x3>x2 || x3 > x1 && x3 < x2)
    {
        if (y3<y1 && y3>y2 || y3 > y1 && y3 < y2) inside = 1;
    }

    if (x1 == x3 || x2 == x3) 
    {
        if (y3<y1 && y3>y2 || y3 > y1 && y3 < y2) line = 1;
    }

    if (y1 == y3 && y2 == y3) 
    {
        if (x3<x1 && x3>x2 || x3 > x1 && x3 < x2) line = 1;
    }
    if (inside == 1) std::cout << ("dot is inside");
    if (line == 1) std::cout << ("dot is on the line");
    if (line == 0 && inside == 0) std::cout << ("dot is outside");
    return 0;
    */

    //13 zadacha
    /*
    int a, b, c;
    a = 0;
    b = 0;
    c = 0;;
    std::cin >> (a);
    std::cin >> (b);
    std::cin >> (c);
    if (b * b - 4 * a * c > 0) std::cout << ("2");
    if (b * b - 4 * a * c == 0) std::cout << ("1");
    if (b * b - 4 * a * c < 0) std::cout << ("0");
    */

    //14 zadacha 
    /*
    char a, b, c, d, e;
    bool statement1 = 0;
    bool statement2 = 0;
    bool statement3 = 0;
    char const num = 'A' - 'a';
    std::cin >> (a);
    std::cin >> (b);
    std::cin >> (c);
    std::cin >> (d);
    std::cin >> (e);
    a = a - num;
    b = b - num;
    if (e > 'z') e = e - num;
    if (e >= a && e<=b || e>=c && e <= d)
    {
        std::cout << ("true") << std::endl;
        statement1 = 1;
    }
    else std::cout << ("false") << std::endl;
    if (e >= a && e<=b && e>=c && e <= d)
    {
        std::cout << ("true") << std::endl;
        statement2 = 1;
    }
    else std::cout << ("false") << std::endl;
    if (e >= a && e<=b && e>!c && e < !d) 
    {
        std::cout << ("true") << std::endl;
        statement3 = 1;
    }
    else std::cout << ("false") << std::endl;
    if (statement1 == 1 && statement2 == 0) std::cout << ("true");
    else std::cout << ("false");
    */
}
