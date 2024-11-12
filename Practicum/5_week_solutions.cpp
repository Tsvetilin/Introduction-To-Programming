#include <iostream>

// Some auxiliar functions
int getLength(int);
int power(int, int);
bool isLeapYear(int);
bool isValidDate(uint day, uint month, uint year);

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
    
    while (a != 0) {
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

    a = pairNum / 10;
    b = unpairNum / 10;
}

//-----------------------------------------------------
// 5
int numberExtraction(int number, int a, int b)
{
    int counter = 0;
    int newNumber = 0;
    int digit = 0;
    int amountDigits = getLength(number);
    int newNumberCounter = 0;

    while (number != 0)
    {
        digit = number / power(10, amountDigits - (++counter));
        number %= power(10, amountDigits - counter);

        if (counter >= a && counter <= b)
        {
            newNumberCounter++;
            newNumber = (newNumber + digit) * 10;
        }
    }

    newNumber /= 10;
    
    return newNumber;
    
}

//-------------------------------------------------------------------
// 6

void digitChanger(int& num1, int& num2, int index)
{
    int aux1 = 0, aux2 = 0;
    int digit1 = 0, digit2 = 0;
    int numDigits1 = getLength(num1), numDigits2 = getLength(num2);
    int counter1 = 0, counter2 = 0;
    int generalCounter = 0;


    while (true)
    {
        generalCounter++;
        counter1++;
        counter2++;

        if (num1 != 0)
        {
            digit1 = num1 / power(10, numDigits1 - (counter1));
            num1 %= power(10, numDigits1 - counter1);

            if (counter1 != index) aux1 = (aux1 + digit1) * 10;
        }
        
        if (num2 != 0)
        {
            digit2 = num2 / power(10, numDigits2 - (counter2));
            num2 %= power(10, numDigits2 - counter2);

            if (counter2 != index) aux2 = (aux2 + digit2) * 10;
        }

        if (generalCounter == index && counter1 <= numDigits1 && counter2 <= numDigits2)
        {
            aux1 = (aux1 + digit2) * 10;
            aux2 = (aux2 + digit1) * 10;
        }

        if (num1 == 0 && num2 == 0) break;
    }

    num1 = aux1 / 10;
    num2 = aux2 / 10;
}

//--------------------------------------------------------------------------------------
// 7

int gcd(int first, int second)
{
    int divisor = 1;
    int smallerNum = first < second ? first : second;

    for (size_t i = 1; i <= smallerNum; i++)
    {
        if (first % i == 0 && second % i == 0)
        {
            divisor = i;
        }
    }

    return divisor;
}

//-------------------------------------------------------
// 8

int lcm(int first, int second)
{
    int multiple = first * second;
    int biggerNum = first > second ? first : second;
    
    for (int i = 1; i <= biggerNum; i++)
    {
        if ((biggerNum * i) % first == 0 && (biggerNum * i) % second == 0)
        {
            multiple = biggerNum * i;
            break;
        }
        
    }
    
    return multiple;
}

//------------------------------------------------------------------------
// 9
uint concat(uint first, uint second)
{
    uint result = 0;
    uint digit = 0;
    uint len1 = getLength(first);
    uint len2 = getLength(second);
    uint totalLen = len1 + len2;

    for (size_t i = 1, j = 1; i <= totalLen; i++)
    {
        if (i <= len1)
        {
            digit = first / power(10, len1 - i);
            first %= power(10, len1 - i);

            result = (result + digit) * 10;
        }
        else
        {
            digit = second / power(10, len2 - j);
            second %= power(10, len2 - j);

            result = (result + digit) * 10;
            j++;
        }   
    }
    
    return result / 10;
}

//---------------------------------------------------------
// Exercices for practice

// 1

void nextDay(uint day, uint month, uint year, uint n)
{
    if (isValidDate(day, month, year))
    {
        for (int i = 0; i < n; i++)
        {
            if (month == 2 && isLeapYear(year))
            {
                if (day == 29) day = 1, month++;
                else day++;
                continue;
            }
            else if (month == 2 && !isLeapYear(year))
            {
                if (day == 28) day = 1, month++;
                else day++;
                continue;
            }

            if (month == 4 || month == 6 || month == 9 || month == 11)
            {
                if (day == 30) day = 1, month++;
                else day++;
                continue;
            }
            
            if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
            {
                if (day == 31 && month != 12) day = 1, month++;
                else if (day == 31 && month == 12) day = 1, month = 1, year++;
                else day++;
                continue;
            }
        }

        std::cout << "After " << n << " day(s) will be " 
        << day << '/' << month << '/' << year << '.' << '\n';
    }
    else std::cout << "Input a valid date.";
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

    // int num1 = 1234567, num2 = 0;
    // numberSeparation(num1, num2);
    // std::cout << num1 << " " << num2 << '\n';

    //--------------------------------------------------
    // 5
    
    // int num = 1234567, a = 2, b = 5;
    // std::cout << numberExtraction(num, a , b);

    //--------------------------------------------------
    // 6

    // int num1 = 1234, num2 = 567, index = 2;
    // digitChanger(num1, num2, index);
    // std::cout << num1 << " " << num2;

    //---------------------------------------------------
    // 7

    //std::cout << gcd(15, 25);

    //------------------------------------
    // 8

    //std::cout << lcm(6, 9);

    //------------------------------------
    // 9

    //std::cout << concat(123, 4567);

    //-----------------------------------------------------------------
    // Exercises for practice

    // 1
    nextDay(4, 11, 2022, 50);
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

bool isLeapYear(int year)
{
    if (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0)) return true;
    
    return false;
}

bool isValidDate(uint day, uint month, uint year)
{
    bool isValid = false;
    int aux = 28;

    switch (month)
    {
    case 2:
        isValid = day > 0 && day <= (isLeapYear(year) ? ++aux : aux);
        break;
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        isValid = day > 0 && day <= 31;
        break;
    case 4:
    case 6:
    case 9:
    case 11:
        isValid = day > 0 && day <= 30;
        break;    
    default:
        break;
    }

    return isValid;
}
