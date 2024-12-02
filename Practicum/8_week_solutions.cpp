// week8_solutions_felipe.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

bool checkBit(unsigned int n, unsigned int ind);

void printBinary(unsigned int n);

int flipBit(unsigned int n, unsigned int ind);

int makeBitOne(unsigned int n, unsigned int ind);

int makeBitZero(unsigned int n, unsigned int ind);



// 1
int cutBinary(unsigned int n, unsigned int ind1, unsigned int ind2)
{
    int mask = flipBit(n, ind2);

    return (n ^ mask);
}

int main()
{
    
}

bool checkBit(unsigned int n, unsigned int ind)
{
    unsigned int mask = 1;
    mask = mask << ind;
    return (mask & n) == mask;
}

void printBinary(unsigned int n)
{
    for (short i = 31; i > 0; i--)
    {
        std::cout << checkBit(n, i);
    }
    std::cout << '\n';
}

int flipBit(unsigned int n, unsigned int ind)
{
    if (checkBit(n, ind)) return makeBitZero(n, ind);

    return makeBitOne(n, ind);
}

int makeBitOne(unsigned int n, unsigned int ind)
{
    int mask = 1;
    mask <<= ind;

    return (n ^ mask);
}

int makeBitZero(unsigned int n, unsigned int ind)
{

}

