// week5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

// 1
void swap(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}

void swap(double& a, double& b) {
    double temp = a;
    a = b;
    b = temp;
}

// 7
int gcd(int first, int second){

    if (!(first > second)) {
        swap(first, second);
    }
  
    for (int i = second; i >= 1; --i) {
        if (first % i == 0 && second % i == 0) {
             return i;
         }      
    }
    

}

//2
void f(int& nominator, int& denominator) {
    int gcdInput = gcd(nominator, denominator);
    int newNominator = nominator / gcdInput;
    int newDenominator = denominator / gcdInput;

    
}




int main()
{
    int nominator;
    int denominator;

    std::cin >> nominator >> denominator;

    f(nominator, denominator);

    std::cout << 

}

