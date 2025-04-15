// Week05.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

//1: Да се напише функция swap, която приема две числa и разменя 
// стойностите им. Създайте overload-и на тази функция, така че тя да 
// работи за int, double (добавете и още типове, ако желаете).

void swap(int& x, int& y)
{
    int temp = x;
    x = y;
    y = temp;
}

//7 nod
int gcd(int a, int b)
{
    if (a < b) swap(a, b);

    while (b != 0) {
        int mod = a % b;
        a = b;
        b = mod;
    }

    return a;
}

//8 nok
int lcm(int a, int b)
{
    return (a / gcd(a, b)) * b;
}


//2: Създайте фунция, която приема 2 цели числа - числител и знаменател, и 
// съкращава дробта.
//Бонус: Напишете програма, която извежда сбора на 2 такива дробни числа.
void reduce(int& a, int& b) {
    int _gcd = gcd(a, b);
    a /= _gcd;
    b /= _gcd;
}

void sumOfFractions(int a, int b, int c, int d) {
    int denominator = lcm(b, d);
    int numerator = a * (denominator / b) + c * (denominator / d);
    reduce(numerator, denominator);
    std::cout << numerator << "/" << denominator;
}

// 3: Да се напише функция, която приема число n и индекс на цифра k и премахва k-тата 
// цифра на n.

/*int removedigit(int& a, int& pow)
{
    //12345 3  -->  1245
    pow = 1;
    for (int i = 0; i < a; i++)
    {
        pow *= 10;
    }
    a /= 10;
    a = a * pow + a % (pow);
    return a;
}*/

//4 Да се напише функция, която приема число и го разделя на две числа, съставени 
// съответно от цифрите му на четна позиция и цифрите му на нечетна.

void PrimenotprimeDigits(int x, int evendig, int odddig)
{
    evendig = 0;
    odddig = 0;
    int position = 1;
    while (x > 0)
    {
        int digit = x % 10;
        x /= 10;
        if (position % 2 == 0)
        {
            evendig = evendig * 10 + digit;
        }
        else
        {
            odddig = odddig * 10 + digit;
        }
        position++;
    }
    int reverseeven = 0, reverseodd = 0;
    while (evendig > 0)
    {
        reverseeven = reverseeven * 10 + evendig % 10;
        evendig /= 10;
    }
    while (odddig > 0)
    {
        reverseodd = reverseodd * 10 + odddig % 10;
        odddig /= 10;
    }
    evendig = reverseeven;
    odddig = reverseodd;
}

    //5  Да се напише функция, която приема число n и индекси на цифри в него - i и j (i <= j). 
    // Програмата да променя n така, че накрая да е съставено само от цифрите от i-та до j-та 
    // позиция включително.

    int digfromitoj(int num, int i, int j)
    {
        int newnum = 0;
        int position = 1;
        while (num > 0)
        {
            int digit = num % 10;
            num /= 10;
            if (position >= i && position <= j)
            {
                newnum = newnum * 10 + digit;
            }
            position++;
        }
            
            int reversenewnum = 0;
            while (newnum > 0)
            {
                reversenewnum = reversenewnum * 10 + newnum % 10;
                newnum /= 10;
            }
            return reversenewnum;
    }

    int getNumLength(int num) 
    {
        int numDigits = 0;
        for (int temp = num; temp > 0; temp /= 10)
            numDigits++;
        return numDigits;
    }

    //6  Да се напише функция, която по дадени 3 числа - n, m, k разменя k-тите цифри на m и n.
    void swapKDigit(int& m, int& n, int k) 
    {
        int cntM = getNumLength(m), cntN = getNumLength(n);

        if (k > cntM || k > cntN || k < 1) {
            std::cout << "Invalid digit position." << std::endl;
            return;
        }

        int mPower = 1, nPower = 1;
        for (int i = 0; i < cntM - k; i++) mPower *= 10;
        for (int i = 0; i < cntN - k; i++) nPower *= 10;

        int mKDigit = (m / mPower) % 10;
        int nKDigit = (n / nPower) % 10;

        m = m - mKDigit * mPower + nKDigit * mPower;
        n = n - nKDigit * nPower + mKDigit * nPower;
    }


    int reverse(int number) {
        int reversed = 0;

        while (number != 0) {
            (reversed *= 10) += number % 10;
            number /= 10;
        }

        return reversed;
    }

    int pow(int number, int power) {
        if (power == 0) return 1;

        for (int i = number; power > 1; power--)
            number *= i;
        return number;
    }

    //9
    unsigned concat(unsigned  first, unsigned  second) {
        int secondDigitsCount = getNumLength(second);

        return first * pow(10, secondDigitsCount) + second;
    }

int main()
{
    //1
    /*int a = 5; int b = 7;
    std::cout << a << b << std::endl; // 5 7
    swap(a, b);
    std::cout << a << b << std::endl; // 7 5 */
    //

    //2
    /*int a, b;
    std::cin >> a >> b;
    reduce(a, b);
    std::cout << a << "/" << b;*/

    //2 bonus
    /*int a, b, c ,d;
    std::cin >> a >> b >> c >> d;
    sumOfFractions(a, b, c, d);*/

    //3
    /*int a; int pow;
    std::cin >> a >> pow;
    removedigit(a, pow);
    std::cout << a << pow;*/

    //4
    /*int x;
    std::cin >> x;
    int evendig, odddig;
    PrimenotprimeDigits(x, evendig, odddig);
    std::cout << evendig << ' ' << odddig << ' ';
    return 0;*/

    //5
    /*int num, i, j;
    std::cin >> num >> i >> j;
    int NEWnum = digfromitoj(num, i, j);
    std::cout << NEWnum;*/

    //6
    /*int m, n, k;
    std::cin >> m >> n >> k;
    swapKDigit(m, n, k);
    std::cout << m << " " << n;*/

    //7
    /*int a, b;
    std::cin >> a >> b;
    int nod = gcd(a, b);
    std::cout << nod;*/

    //8
    /*int a, b;
    std::cin >> a >> b;
    int nok = gcd(a, b);
    std::cout << nok;*/

    //9
    int a, b;
    std::cin >> a >> b;
    std::cout << concat(a, b);
}



