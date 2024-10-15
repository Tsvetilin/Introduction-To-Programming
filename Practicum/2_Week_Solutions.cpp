#include <iostream>
bool leapYear(int year) {
    if (year % 4 == 0) {
        if (year % 100 != 0);
        else if (year % 100 == 0 && year % 400 == 0) {
            return 1;
        }
    }
    return 0;
}
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
    //if(leapYear(year)) {
    //    std::cout << "Leap Year";
    //}

    //ex4
    //int dayOfWeek;
    //switch (dayOfWeek) 
    //{
    //case 1: std::cout << "Monday"; break;
    //case 2: std::cout << "Tuesday"; break;
    //case 3: std::cout << "Wednesday"; break;
    //case 4: std::cout << "Thursday"; break;
    //case 5: std::cout << "Friday"; break;
    //case 6: std::cout << "Saturday"; break;
    //case 7: std::cout << "Sunday"; break;
    //dafalut:: std::cout << "Invalid day" break;
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
    //else if (a >= 'A' && a <= 'Z') {
    //    a += diff;
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
   // int mid = (a != largest && a != smallest) * a
   //+ (b != largest && b != smallest) * b
   //+ (c != largest && c != smallest) * c;
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
//bool isClosedInterval = (!(left - num)|| !(right - num));
//if (isClosedInterval) {
//    std::cout << "The number is within the given interval. The interval is closed";
//}
// else if(num > left && num < right){
//    std::cout << "The number is within the given interval. The interval is open";
//}
//else {
//    std::cout << "The number is not within the given interval";
//}

//ex10
//int n;
//std::cin >> n;
//int first = (n / 1000) * 10 + n % 10;
//int second = (n / 10 % 100);
//std::cout << first;
//if (first > second) {
//    std::cout << " > ";
//}
//else if (second > first) {
//    std::cout << " < ";
//}
//else {
//    std::cout << " = ";
//}
//std::cout << second;

//ex11
    //int day, month, year, daysOfMonth = -1;
    //std::cin >> day >> month >> year;
    //switch (month)
    //{
    //case 1:
    //case 3:
    //case 5:
    //case 7:
    //case 8:
    //case 10:
    //case 12:
    //    daysOfMonth = 31;
    //    break;
    //case 4:
    //case 6:
    //case 9:
    //case 11:
    //    daysOfMonth = 30;
    //    break;
    //case 2:
    //    daysOfMonth = 28;
    //    break;
    //default:
    //    std::cout << 0;
    //    return 1;
    //}
    //int calendarChangeYear = 1582;
    //if (month == 2 && (leapYear(year) || (year % 100 == 0 && year < calendarChangeYear))) {
    //    daysOfMonth++;
    //}
    //std::cout << (day > 0 && day <= daysOfMonth);

//ex12
//int x1, y1, x2, y2, x3, y3;
//std::cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
//int upperBound = y1 > y2 ? y1 : y2;
//int lowerBound = y1 < y2 ? y1 : y2;
//int leftBound = x1 < x2 ? x1 : x2;
//int rightBound = x1 > x2 ? x1 : x2;
//if ((upperBound == y3 || lowerBound == y3) && (leftBound <= x3 && rightBound >= x3)
//    || (leftBound == x3 || rightBound == x3) and upperBound >= y3 && lowerBound <= y3) {
//    std::cout << "On the edge";
//}
//else if ((upperBound > y3 && lowerBound < y3) && (leftBound < x3 && rightBound > x3)) {
//    std::cout << "In the rectangle";
//}
//else {
//    std::cout << "Out of the rectangle";
//}

//ex13
//int a, b, c;
//std::cin >> a >> b >> c;
//int D = b * b - 4 * a * c;
//if (D == 0) {
//    std::cout << 1;
//}
//else if (D > 0) {
//    std::cout << 2;
//}
//else {
//    std::cout << 0;
//}

//ex14
//char A1, A2, B1, B2, K;
//std::cin >> A1 >> A2 >> B1 >> B2 >> K;
//if (A1 > A2) {
//    char temp = A1;
//    A1 = A2;
//    A2 = temp;
//}
//if (B1 > B2) {
//    char temp = B1;
//    B1 = B2;
//    B2 = temp;
//}
//int lowerToUpper = 'a' - 'A';
//B1 -= lowerToUpper;
//B2 -= lowerToUpper;
//if (K > 'Z') {
//    K -= lowerToUpper;
//}
//bool isInUn = ((A1 <= K && K <= A2) || (B1 <= K && K <= B2));
//bool isInCu = ((A1 <= K && K <= A2) && (B1 <= K && K <= B2));
//bool isInDiOfA_WithB = ((A1 <= K && K <= A2) && !(B1 <= K && K <= B2));
//bool isInA_OrB_Only = (isInDiOfA_WithB || (isInUn && !isInCu && !isInDiOfA_WithB));
//std::cout << (isInUn ? "true" : "false") << " ";
//std::cout << (isInCu ? "true" : "false") << " ";
//std::cout << (isInDiOfA_WithB ? "true" : "false") << " ";
//std::cout << (isInA_OrB_Only ? "true" : "false") << " ";
}
