// week44.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
int AbsoluteValue(int number) {
    if (number < 0) {
        return (-1) * number;
    }
    else
        return number;
}

bool isDigit(char symbol) {

    return (symbol >= '1' && symbol <= '9');

}
int toNumber(char symbol) {
    if (symbol >= '0' && symbol <= '9') {
        return symbol - '0';
    }
}

int toUpper(char symbol) {
    return symbol + 'A' - 'a';
}
int toLower(char symbol) {
    return symbol - 'A' + 'a';
}



int main()
{
    /* zadacha 1
    
    int n;
    bool isPrime = true;
    std::cin >> n;
    if (n == 1) {
        isPrime = false;
    }
    else {
        for (int i = 2; i * i <= n; i++) {
            if (n % i == 0) {
                isPrime = false;
                break;
            }
        }
    }
    std::cout << isPrime;
    */


    /* zadacha 2
    unsigned long number;
    int digit;
    int count = 0;
    int digit_new = 0;
    std::cin >> number;
    std::cin >> digit;
  
    while (number > 0) {
        digit_new = number % 10;

        if (digit == digit_new) {
            count = count +  1;
        }
        number /= 10;
       

    }
    std::cout << count;
    */


    
    int number;
    std::cin >> number;
    int digit;
    int number1 = number;
    int count = 0;
    for (int i = 1; i <= 9; i++) {
        while (number > 0) {
            digit = number % 10;
            if (i == digit) {
                count++;
            }
            number /= 10;
        }
        for (int y = 0; y < count; y++) {
            std::cout << i;
        }
        number = number1;
        count = 0;
    }
    

    /*
    int n;
    std::cin >> n;
    char s;
  
    std::cin >> s;
    isDigit(s);
    std::cout<<AbsoluteValue(n);
    */


}


