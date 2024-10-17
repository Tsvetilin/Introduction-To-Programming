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

/* zadacha 7
    int a,b,c;
    std::cin>>a>>b>>c;
    int help = 0;
    if(a > b){
        help = b;
        b = a;
        a = help;
        help = 0;
    }
    if(b>c){
        help = b;
        b = c;
        c = help;
        help = 0;
    }
    if(a > b){
        help = b;
        b = a;
        a = help;
        help = 0;
    }
    std::cout<<a<<" "<<b<<" "<<c;
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
/* zadacha 9
    double left_end_of_interval, right_end_of_interval, number;
    std::cin>>left_end_of_interval>>right_end_of_interval>>number;
    if(number > left_end_of_interval && number < right_end_of_interval){
        std::cout<<"The number is within the given interval. The interval is open.";
    }
    else if(number == left_end_of_interval || number == right_end_of_interval){
        std::cout<<"The number is in the given interval. The interval is closed";
    }
    else{
        std::cout<<"The number is not in the given interval";
    }
    */

   /* zadacha 10
    int number;
    std::cin>>number;
    int new_number_one, new_number_two;
    
    new_number_one = (number/1000) * 10 + number%10;
    new_number_two = ((number/100)% 10) * 10 + ((number%100)/10);
    
    if(new_number_one > new_number_two){
        std::cout<<new_number_one<<" > "<<new_number_two;
    }
    else if(new_number_one == new_number_two){
        std::cout<<new_number_one<<" = "<<new_number_two;
    }
    else{
        std::cout<<new_number_one<<" < "<<new_number_two;
    }
    */
   

/*zadacha 11
    int day, month, year;
    bool is_valid_date, is_leap_year = false;
    std::cin>>day>>month>>year;
    
    //Leap year checker
    if(year % 4 == 0){
        
    if(year % 400 == 0){
        is_leap_year = true;
    }
    else if(year % 100 == 0){
       
        is_leap_year = false;
        
    }
        else{
            is_leap_year = true;
        }
    }
    // The year, month and day must be positive numbers
    
    if((month < 1 || month > 12) || year < 0 || day < 1){
        std::cout<<"Not a valid date!";
        
    }
    else{
        switch(month){
            case 1: is_valid_date = (day <= 31);break;
            case 2: is_valid_date = is_leap_year ? (day <= 29) : (day <= 28 );break;
            case 3: is_valid_date = (day <= 31);break;
            case 4: is_valid_date = (day <= 30);break;
            case 5: is_valid_date = (day <= 31);break;
            case 6: is_valid_date = (day <= 30);break;
            case 7: is_valid_date = (day <= 31);break;
            case 8: is_valid_date = (day <= 31);break;
            case 9: is_valid_date = (day <= 30);break;
            case 10: is_valid_date = (day <= 31);break;
            case 11: is_valid_date = (day <= 30);break;
            case 12: is_valid_date = (day <= 31);break;
        }
    }
    if(is_valid_date){
        std::cout<<"Valid date";
    }
    else{
        std::cout<<"Not a Valid date";
    }
    */
    
    /* zadacha 12
    int x1, y1, x2, y2, m, n;
    std::cin>>x1>>y1>>x2>>y2>>m>>n; // (m,n) -
    if(x1 < m && m < x2 && y1 < n  && n < y2){
        std::cout<<1<<" The point is in the rectangle";
    }
    else if((x1 == m && y1 < n  && n < y2) || (x2 == m && y1 < m  && m < y2)||(y1 == n && x1 < m  && m < x2) || (y2 == n && x1 < m  && m < x2)){
        std::cout<<1<<" The point is on the outline of the rectangle";
    }
    else{
        std::cout<<0<<" The point is not in the rectangle";
    }
    
    */
    /* zadacha 13
    int a, b, c;
    std::cin>>a>>b>>c;
    int D;
    D = b*b - 4*a*c;
    
    if(D>0){
        std::cout<<2;
    }
    else if(D == 0){
        std::cout<<1;
    }
    else{
        std::cout<<0;
    }
    */

      /*zadacha 14
    char i1, i2, j1, j2, e;
    bool ob = false,sech=false,raz=false,sob=false;
    //ob - обединение
    //sech - сечение
    //raz - разлика
    //sob - дали елементът принадлежи само на едното множество
    char help;
    std::cin>>i1>>i2>>j1>>j2>>e;
    
    //Преобразуваме главните букви в малки (case insensitive)
    char ch_difference = 'a' - 'A';
    i1 = i1 + ch_difference;
    i2 = i2 + ch_difference;
    
    //Разменяме позициите на двата елемента, ако вторият е по-малък от първия
    if(i1 > i2){
        help = i1;
        i1 = i2;
        i2 = help;
    }
    if(j1 > j2){
        help = j1;
        j1 = j2;
        j2 = help;
    }
    
    //Проверка за е дали е главна буква и съответно - преобразуване
    if(e >= 'A' && e <= 'Z'){
        e = e + ch_difference;
    }
    //1. Правим проверка дали елементът е в обединението на двете множества
    if((e >= i1 && e <=i2)||(e >= j1 && e <= j2)){
        ob = true;
        std::cout<<"true, ";
    }
    else{
        std::cout<<"false, ";
    }
    
    //2. Ще проверим дали елементът е в сечението (трябва да бъде едновременно и в двете множества)
    if (e >= i1 && e <= i2 && e >= j1 && e <= j2){
        sech=true;
        std::cout<<"true, ";
    }
    else{
        std::cout<<"false, ";
    }
    
    
    
    //3. Ще проверим дали е принадлежи на разликата на А с В
    if((e >= i1 && e <= i2) && (e > j2 || e < j1)){
        raz = true;
        std::cout<<"true, ";
    }
    
    
    else{
        std::cout<<"false, ";
    }
    
    
    //4. Ще проверим дали е принадлежи само на едното множество - 
    //трябва да принадлежи на обединенито, но да не принадлежи на сечението
    
    if(ob==true && sech == false){
        sob = true;
        std::cout<<"true";
    }
    else{
        std::cout<<"false";
    }
    */
    


return 0;
}


