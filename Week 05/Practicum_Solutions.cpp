#include <iostream>

int DigitsCounter(int n)
{
    int counter = 0;

    while(n > 0)
    {
        n /= 10;
        counter++;
    }

    return counter;
}

// 1
void Swap(int& a, int& b) 
{
    int temp = a;
    a = b;
    b = temp;
}

void Swap(double& a, double& b) 
{
    double temp = a;
    a = b;
    b = temp;
}

// 7
int Gcd(int first, int second)
{
    if (!(first > second)) {
        Swap(first, second);
    }
  
    for (int i = second; i >= 1; --i) {
        if (first % i == 0 && second % i == 0) {
             return i;
         }      
    }
    return 1;
    

}

// 2
void fraction(int& nominator, int& denominator) 
{
    int gcdInput = Gcd(nominator, denominator);

    nominator /= gcdInput;
    denominator /= gcdInput;
}

// 3
int RemoveDigitAtIndex(int n, int k)
{
    int counter = DigitsCounter(n);

    if(k > 0 && k <= counter)
    {
        int divider1 = 1;
        int divider2 = 1;
        
        for(int i = 1; i < k; i++)
        {
            divider1 *= 10;
        }

        for(int i = 1; i <= k; i++)
        {
            divider2 *= 10;
        }

        int remainder = n % divider1;
        n /= divider2;

        return n * divider1 + remainder;
    }
    
    return 0;
}

// 4
void SplitEvenOddPositions(int n)
{
    int oddPosition = 0;
    int evenPosition = 0;
    int counter = DigitsCounter(n);

    int divider1 = 1;
    int divider2 = 1;

    while(n != 0)
    {
        if(counter % 2 == 1)
        {
            int remainderOdd = n % 10;
            n /= 10;
            oddPosition += remainderOdd * divider1;
            divider1 *= 10;
            counter--;
        }
        else if(counter % 2 == 0)
        {
            int remainderEven = n % 10;
            n /= 10;
            evenPosition += remainderEven * divider2;
            divider2 *= 10;
            counter--;
        }
    }

    std::cout << oddPosition << " " << evenPosition << std::endl;
    
}

// 5
int GetPartialNumber(int n, int i, int j)
{
    int counter = DigitsCounter(n);

    int divider1 = 1;

    if(i > 0 && i < counter && j > 0 && j < counter && i <= j)
    {
        for(int p = 0; p < counter; p++)
        {
        divider1 *= 10;
        }

        int s = 0;
        while(s < i)
        {
            n %= divider1;
            divider1 /= 10;
            s++;
        }

        int t = j;
        while(t < counter)
        {
            n /= 10;
            t++;
        }

    }

    return n;
}

// 6

int powerOfTen(int exp) {
    int result = 1;
    for (int i = 0; i < exp; i++) {
        result *= 10;
    }
    return result;
}

void ChangeDigits(int n, int m, int k)
{
    int nOriginal = n;
    int mOriginal = m;
    int counter = DigitsCounter(n);

    for(int i = k; i < counter; i++)
    {
        n /= 10;
    }
    
    int nIndex = n % 10;


    for(int j = k; j < counter; j++)
    {
        m /= 10;
    }

    int mIndex = m % 10;

    int nNew = 0;
    int mNew = 0;
    int power = counter - k;

    nNew = (n / 10) * powerOfTen(power + 1) + mIndex * powerOfTen(power) + nOriginal % powerOfTen(power);
    mNew = (m / 10) * powerOfTen(power + 1) + nIndex * powerOfTen(power) + mOriginal % powerOfTen(power);

    std::cout << nNew << " " << mNew;
}



// 8
int Lcm(int first, int second)
{
    int result = first;

    for(int i = 1; result % second != 0; i++)
    {
        result = first * i;
    }

    return result;
}

// 9
int Concat(unsigned int first, unsigned int second)
{
    int counterSecond = DigitsCounter(second);
    int result = first * powerOfTen(counterSecond) + second;

    return result;
}

int main()
{
    return 0;
}
