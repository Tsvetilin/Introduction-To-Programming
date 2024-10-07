// ConsoleApplication3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{

    /*zadacha 1
    int a;
    bool b;
    std::cin>>a;
    b = (a%2)==0
    std::cout<<b;
    */

    /*zadacha 2
   int a, b;
   std::cin>>a>>b;
   std::cout<<a/b<<'\n';
   std::cout<<a%b;
   */



   /*zadacha 3
   *
   double C, F;
   std::cin >> C;
   F = (9 / 5.0) * C + 32;
       std::cout << F;

   */

   /*zadacha 4

 double width, length;
 double P, S;
 std::cin >> width>>length;
 P = 2*(width + length);
 S = width * length;

 std::cout<< P<< '\n';
 std::cout<< S;
     */

     /* zadacha 5
     int number_of_seconds;
     int days, hours, minutes, seconds;
     std::cin >> number_of_seconds;
     days = number_of_seconds / (3600 * 24);
     number_of_seconds = number_of_seconds - days * 3600 * 24;
     hours = number_of_seconds / 3600;
     number_of_seconds = number_of_seconds - hours * 3600;
     minutes = number_of_seconds / 60;
     number_of_seconds = number_of_seconds - minutes * 60;
     std::cout << days << " days, " << hours << " hours, " << minutes << " minutes and " << number_of_seconds << " seconds";



     */
     /* zadacha 6
     int number;
     std::cin >> number;
     number = (number - (number % 10)) / 10;
     std::cout << number;
     */

     /* zadacha 7
     int grade;
     bool valid;
     std::cin >> grade;
     valid = (grade >= 2 && grade <= 6);
     std::cout << valid;

     */

     /* zadacha 8
     int a, b, c, d;
     std::cin >> a >> b >> c >> d;
     bool is_in_interval;
     is_in_interval = (c >= a && c <= b) || (d >= a && d <= b) || ((c >= a && c <= b) && (d >= a && d <= b) || (a >= c && a <= d) || (b >= c && b <= d)|| ((a >= c && a <= d) && (b >= c && b <= d));
     std::cout << is_in_interval;
 */
    /* zadacha 9
    int n;
    int sum;
    std::cin >> n;
    sum = (n * (n + 1)) / 2;
    std::cout << sum;
    */

    /* zadacha 10
    int a, b, c, d;
    std::cin >> a >> b >> c >> d;
    bool is_geometric_progression;
    is_geometric_progression = ((a / b) == (c / d) && (a * d == b * c));
    std::cout << is_geometric_progression;
    */

    /* zadacha 11
    int a, b;
    std::cin >> a >> b;
    a = a + b;
    b = a - b;
    a = a - b;
    std::cout << a <<" " << b;
    */

   /* zadacha 12
   int a, b;
   std::cin >> a >> b;
   std::cout << (a >= b) * a + (a < b) * b;
   */
}

