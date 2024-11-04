#include <iostream>

int getLength(int);
int power(int, int);

// Base exercises

// 1

void swap(int& a, int& b)
{
    int aux = a;
    a = b;
    b = aux;
}
void swap(double& a, double& b)
{
    double aux = a;
    a = b;
    b = aux;
}

//---------------------------------------------------------
// 2
void fractionSimplification(int& a, int& b)
{
    int aux = a > b ? b : a;

   for (int i = aux; i > 1; i--)
   {
        if (a % i == 0 && b % i == 0)
        {
            a /= i, b /= i;
            break;
        }
   }
 }

//----------------------------------------------------------
// 3

void numberExtraction(int& a, int b)
{
    int newNumber = 0;
    int digit = 0;
    int counter = 0;
    int amountDigits = getLength(a);
    int auxCounter = 0;

    while (a != 0)
    {
        counter++;
        digit = a / power(10, amountDigits - counter);
        a %= power(10, amountDigits - counter);

        if (counter != b)
        {
            auxCounter++;
            if (auxCounter != amountDigits - 1)
            {
                newNumber = (newNumber + digit) * 10;
            }
            else
            {
                newNumber += digit;
            }
            
        }
    }

    a = newNumber;
}

//----------------------------------------------------------
// 4
void numberSeparation(int& a, int& b)
{
    int pairNum = 0, unpairNum = 0;
    int counter = 0;
    int amountDigits = getLength(a);
    int pairCounter = 0, unpairCounter = 0;
    
    while (a > 0) {
        counter++;
        int digit = a / power(10, amountDigits - counter);
        a %= power(10, amountDigits - counter);

        if (counter % 2 == 0)
        {
            pairNum = (pairNum + digit) * 10;
            pairCounter++;
        }
        else
        {
            unpairNum = (unpairNum + digit) * 10;
            unpairCounter++;
        }
    }

    if (pairCounter > 1) a = pairNum / 10;
    
    if (unpairCounter > 1) b = unpairNum / 10;
}


int main()
{
    // Base exercises (implementations)

    // 1
    
    /*int num1 = 45;
    int num2 = 633;
    swap(num1, num2);
    std::cout << num1 << " " << num2 << '\n';*/

    //-------------------------------------------------
    // 2
    
    /*int num1 = 16, num2 = 20;
    fractionSimplification(num1, num2);
    std::cout << num1 << " " << num2 << '\n';*/

    //-------------------------------------------------
    // 3

    /*int num1 = 12345, index = 3;
    numberExtraction(num1, index);
    std::cout << num1 << '\n';*/

    //--------------------------------------------------
    // 4

    int num1 = 1234567, num2 = 0;
    numberSeparation(num1, num2);
    std::cout << num1 << " " << num2 << '\n';

}





int getLength(int a)
{
    int counter = 0;

    while (a != 0) {
        a /= 10;
        counter++;
    }

    return counter;
}

int power(int base, int exponent)
{
    int result = base;

    if (exponent == 0)
    {
        return 1;
    }

    for (int i = 1; i < exponent; i++)
    {
        result *= base;
    }

    return result;
}
