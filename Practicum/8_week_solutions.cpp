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
    unsigned int amountOfNumsFromInd1 = ind1 + 1;
    unsigned int amountOfNumsFromInd2 = amountOfNumsFromInd1 - ind2;

    return n >> (amountOfNumsFromInd2);
}

// 2
int getAmountOfOnesInBinary(unsigned int n)
{
    uint counter = 0;

    for (size_t i = 0; i <= 31; i++) if (checkBit(n, i)) counter++;
    
    return counter;
}

int main()
{
    // 1
    printBinary(cutBinary(16, 4, 2));

    // 2
    std::cout << getAmountOfOnesInBinary(189) << '\n';
}

bool checkBit(unsigned int n, unsigned int ind)
{
    unsigned int mask = 1;
    mask = mask << ind;
    return (mask & n) == mask;
}

void printBinary(unsigned int n)
{
    for (short i = 31; i >= 0; i--)
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

