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
    int r, x, y, distance;
    std::cin >> (r);
    std::cin >> (x);
    std::cin >> (y);
    distance = sqrt(x * x + y * y);
    if (distance <= r) std::cout << ("the point is inside the circle");
    else ("the point is not inside the circle");
    return 0;
}
