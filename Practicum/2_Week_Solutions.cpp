#include <iostream>
int main()
{
    // Ex. 1
    /*int a;
    std::cin >> a;
    if (a > 0) std::cout << "Positive";
    else if (a < 0) std::cout << "Negative";
    else std::cout << a;*/

    //Ex.2
    /*int a;
    std::cin >> a;
    switch (a) {
    case 1:
        std::cout << "I";
        break;
    case 2: 
        std::cout << "II"; break;
    case 3: std::cout << "III"; break;
    case 4: std::cout << "IV"; break;
    case 5: std::cout << "V"; break; 
    case 6: std::cout << "VI"; break;
    case 7: std::cout << "VII"; break;
    case 8: std::cout << "VIII"; break;
    case 9: std::cout << "IX"; break;
    }*/


    //Ex.3
    /*int a;
    std::cin >> a;
    if (a % 4 == 0)
    {
        if (a % 100 == 0 && a % 400 != 0) 
        {
            std::cout << ":(";
        }
        else std::cout << "Leap year";
    }
    else std::cout << ":(";*/


    //Ex.4
    /*int day;
    std::cin >> day;
    switch (day)
    {
    case 1:std::cout << "Monday"; break;
    case 2:std::cout << "Tuesday"; break;
    case 3:std::cout << "Wednesday"; break;
    case 4:std::cout << "Thursday"; break;
    case 5:std::cout << "Friday"; break;
    case 6:std::cout << "Saturday"; break;
    case 7:std::cout << "Sunday"; break;
    default:std::cout << "Not a day of the week :)";
        break;
    }*/

    //Ex. 5
    //int a, b;
    //std::cin >> a >> b;
    //int bigger = a > b ? a : b;
    //std::cout << bigger;


    //Ex. 6
    /*char a;
    std::cin >> a;
    int value = int(a);
    if (value >= 65 && value <= 90)
    {
        char a = value + 32;
        std::cout << a << std::endl;
    }
    else if (value >= 97 && value <= 122)
    {
        char a = value - 32;
        std::cout << a << std::endl;
    }
    else std::cout << "error";
    switch (value)
    {
    case 65:
    case 69:
    case 73:
    case 79:
    case 85:
    case 97:
    case 101:
    case 105:
    case 111:
    case 117:
        std::cout << "Vowel";
    default:
        break;
    }*/



    //Ex.7
    /* int a, b, c;
    std::cin >> a >> b >> c;
    int bigegrAB = a > b ? a : b;
    int biggest = bigegrAB > c ? bigegrAB : c;
    if (biggest == a) 
    {
        if (b > c)std::cout << c << " " << b << " " << a;
        else std::cout << b << " " << c << " " << a;
    }
    else if (biggest == b) 
    {
        if (a > c)std::cout << c << " " << a << " " << b;
        else std::cout << a << " " << c << " " << b;
    }
    else 
    {
        if (a > b)std::cout << b << " " << a << " " << c;
        else std::cout << a << " " << b << " " << c;
    }*/



    //Ex.8
    //int r, a, b;
    //std::cin >> r >> a >> b;
    //int distance = a * a + b * b;
    //if (distance < r * r)std::cout << "In the circle";
    //else if (distance > r * r)std::cout << "Out of the circle";
    //else std::cout << "On the circle";


    //Ex.9
    /*double a, b, c;
    std::cin >> a >> b >> c;
    double epsilon = 0.0000001;
    if (c - a > 0 && c-b < 0)
    {
        std::cout << "The number is within the given interval. The interval is open.";
    }
    else if (abs(a - c) < epsilon || abs(b - c) < epsilon)
    {
        std::cout << "The interval is closed.";
    }
    else std::cout << "The number is outside of the inerval";*/



    //Ex. 10 - example (1)
    //int a;
    //std::cin >> a;
    //int b = a / 100;
    //int c = a % 100;
    //if (b > c)  std::cout << b << " > " << c;
    //else std::cout << c << " > " << b;

    

    //Ex. 11
    //int day, month, year;
    //std::cin >> day >> month >> year;
    //if (month < 12)
    //{
    //    switch (month)
    //    {
    //    case 1:
    //    case 3:
    //    case 5:
    //    case 7:
    //    case 8:
    //    case 10:
    //    case 12:
    //        if (day <= 31) std::cout << 1; break;
    //    case 2:
    //        if (day <= 28 || day <= 29 && year % 4 == 0) std::cout << 1; 
    //        else std::cout << 0; break;
    //    default:
    //        if (day <= 30) std::cout << 1;
    //        break;
    //    }
    //}
    //else std::cout << 0;

    


    /*Ex.12
    int x1, y1, x2, y2, x3, y3;
    std::cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
    if (x3 > x1 && x3<x2 && y3>y1 && y3 < y2)std::cout << "Inside the rectangle";
    else if (x3 > x2 && x3<x1 && y3>y2 && y3 < y1)std::cout << "Inside the rectangle";
    else if (x3 == x2 || x3 == x1 || y3 == y2 || y3 == y1)std::cout << "On the rectangle";
    else std::cout << "Outside the rectangle";*/



    
    //Ex.13
    //int a, b, c;
    //std::cin >> a >> b >> c;
    //if (a == 0 || b * b - 4 * a * c == 0) std::cout << 1;
    //else if (b * b - 4 * a * c > 0) std::cout << 2;
    //else std::cout << 0;
    



    //Ex.14
    //char a, b, c, d, e;
    //std::cin >> a >> b >> c >> d >> e;
    //bool isTrue1=0, isTrue2=0, isTrue3=0, isTrue4=0;

    //isTrue1 = (e >= a && e <= b || e >= c && e <= d) ? true : false;

    //if (e >= a && e <= b)
    //{
    //    int temporary = e + 32;
    //    isTrue2 = (temporary >= c && temporary <= d) ? true : false;
    //}
    //else if(e >= c && e <= d)
    //{
    //    int temporary = e - 32;
    //    isTrue2 = (temporary >= a && temporary <= b) ? true:false;
    //}

    //if (e >= a && e <= b)
    //{
    //    int temporary = e + 32;
    //    isTrue3 = (temporary < c || temporary > d) ? true : false;
    //}
    //else if (e < c || e > d)
    //{
    //    int temporary = e - 32;
    //    isTrue3 = (temporary >= a && temporary <= b) ? true : false;
    //}


    //if (isTrue1 == true && isTrue2 == false) isTrue4 = true;

    //if (isTrue1)std::cout << "true, "; else std::cout << "false, ";
    //if (isTrue2)std::cout << "true, "; else std::cout << "false, ";
    //if (isTrue3)std::cout << "true, "; else std::cout << "false, ";
    //if (isTrue4)std::cout << "true"; else std::cout << "false";


}
