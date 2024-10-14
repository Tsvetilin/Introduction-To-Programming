
#include <iostream>

int main()
{
    //ex1
    //int n;
    //std::cin >> n;
    //if (n > 0) {
    //    std::cout << "Positive";
    //}
    //else if (n < 0) {
    //    std::cout << "Negative";
    //}
    //else {
    //    std::cout << "Zero";
    //}

    //ex2
    //int n;
    //std::cin >> n;
    //switch (n)
    //{
    //case 0: std::cout << "There is no roman 0"; break;
    //case 1: std::cout << "I"; break;
    //case 2: std::cout << "II"; break;
    //case 3: std::cout << "III"; break;
    //case 4: std::cout << "IV"; break;
    //case 5: std::cout << "V"; break;
    //case 6: std::cout << "VI"; break;
    //case 7: std::cout << "VII"; break;
    //case 8: std::cout << "VIII"; break;
    //case 9: std::cout << "XI"; break;
    //default:
    //    std::cout << "No data";
    //    break;
    //}

    //ex3
    //int year;
    //std::cin >> year;
    //if (year % 4 == 0) {
    //    if (year % 100 != 0);
    //    else if (year % 100 == 0 && year % 400 == 0) {
    //        std::cout << "Leap Year";
    //    }
    //}

    //ex4
    //int dayOfWeek;
    //switch (dayOfWeek) 
    //{
    //case 1: std::cout << "Monday"; break;
    //case 2: std::cout << "Theusday"; break;
    //case 3: std::cout << "Wednesday"; break;
    //case 4: std::cout << "Thursday"; break;
    //case 5: std::cout << "Friday"; break;
    //case 6: std::cout << "Saturday"; break;
    //case 7: std::cout << "Sunday"; break;
    //}

    //ex5
    //int a, b;
    //std::cin >> a >> b;
    //std::cout << (a > b ? a : b);

    //ex6
    //char a;
    //std::cin >> a;

    //std::string VowOrCons;
    //switch (a) {
    //case 'a':
    //case 'A':
    //case 'e':
    //case 'E':
    //case 'o':
    //case 'O':
    //case 'I':
    //case 'i':
    //case 'U':
    //case 'u':
    //    VowOrCons = "vowel";
    //        break;
    //default: VowOrCons = "consonant";
    //}
    //int diff = 'a' - 'A';

    //if (a >= 'a' && a <= 'z') {
    //    a -= diff;
    //    std::cout << a << std::endl;
    //    std::cout << VowOrCons << std::endl;
    //}
    //else if (a <= 97 && a <= 122) {
    //    a -= diff;
    //    std::cout << a << std::endl;
    //    std::cout << VowOrCons << std::endl;
    //}
    //else {
    //    std::cout << "Invalid character";
    //}
    
    //ex7
   // int a, b, c;
   // std::cin >> a >> b >> c;
   // int smallest = (a < b ? a : b);
   // smallest = smallest < c ? smallest : c;
   // int largest = (a > b ? a : b);
   // largest = largest > c ? largest : c;
   // int mid = (a - largest != 0 && a - smallest != 0) * a
   //+ (b - largest != 0 && b - smallest != 0) * b
   //+ (c - largest != 0 && c - smallest != 0) * c;
   // std::cout << smallest << " " << mid << " " << largest;

//ex8
//int r, x, y;
//std::cin >> r >> x >> y;
//if (r * r == x * x + y * y) {
//    std::cout << "On the circle";
//    return 1;
//}
//std::cout << ((r*r >= x*x + y * y) ? "In the circle" : "Out the circle");

//ex9
//double left, right, num;
//std::cin >> left >> right >> num;
//bool isClosedInterval = (left - num == 0 || right - num == 0);
//if (isClosedInterval) {
//    std::cout << "The number is within the given interval. The interval is closed";
//}
// if(num > left && num < right){
//    std::cout << "The number is within the given interval. The interval is open";
//}
//else {
//    std::cout << "The number is not within the given interval";
//
//}

//ex10
//int n;
//std::cin >> n;
//int first = (n / 1000) * 10 + n % 10;
//n %= 1000;
//int second = n % 10 * 10 + n / 10;
//std::cout << first << "  " << second;
}
