// week8_solutions_felipe.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

bool checkBit(unsigned int n, unsigned int ind);

void printBinary(unsigned int n);


// 1
int cutBinary(unsigned int n, unsigned int ind1, unsigned int ind2)
{
    unsigned int amountOfNumsFromInd1 = ind1 + 1;
    unsigned int amountOfNumsFromInd2 = amountOfNumsFromInd1 - ind2;
    uint amountOfNumsUntilInd1 = 32 - amountOfNumsFromInd1;
    uint newNumber = n << amountOfNumsUntilInd1;

    return newNumber >> (amountOfNumsUntilInd1 + amountOfNumsFromInd2);
}

// 2
int getAmountOfOnesInBinary(unsigned int n)
{
    uint counter = 0;

    for (size_t i = 0; i <= 31; i++) if (checkBit(n, i)) counter++;
    
    return counter;
}

// 3
int getNumberInTheLastNBits(unsigned int n, unsigned int ind)
{
    uint diff = 32 - ind;
    uint number = 0;

    number = n << diff;
    return number >> diff;
}

// 4
void swapNumbers(uint & a, uint & b)
{
    a = a ^ b;
    b = a ^ b;
    a = a ^ b; 
}

// 5
int changeOfBit(uint n, uint position, uint bit)
{
    if (checkBit(n, position) == bit) return n;

    uint aux = 1;
    aux = aux << position;

    return n ^ aux;
}

// 6
bool isPermutation(uint num1, uint num2)
{
    int count1 = 0;
    int count2 = 0;
    
    for (size_t i = 0; i < sizeof(int) * 8; i++)
    {
        if (checkBit(num1, i) == true) count1++;
        if (checkBit(num2, i) == true) count2++;
    }

    if (count1 == count2) return true;
    
    return false;
}


int main()
{
    // 1
    printBinary(cutBinary(16, 4, 3));

    // 2
    std::cout << getAmountOfOnesInBinary(189) << '\n';

    // 3
    std::cout << getNumberInTheLastNBits(189, 4) << '\n';

    // 4
    uint a = 120, b = 2;
    swapNumbers(a, b);
    std::cout << a << " " << b << '\n';

    // 5
    std::cout << changeOfBit(120, 4, 0) << '\n';

    //6
    std::cout << isPermutation(7, 11) << '\n';

    return 0;
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
