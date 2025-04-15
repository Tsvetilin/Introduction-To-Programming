#include <iostream>

// Task with higher order functions
int countCharsApplicableTo(char* str, bool f(char*, int));
bool amountCapitalLetters(char* str, int i);
bool amountDigits(char* str, int i);
bool amountWhitespaces(char* str, int i);

// Tasks with recursivity
// 1
bool fibo(int*, int, int, int);

// 4
bool amountDeterminatedChar(char * str, char c, int & amount, int index);

int main()
{
    // Task with higher order functions
    //char str[] = " I am a Businessman 123 ";
    //std::cout << countCharsApplicableTo(str, amountCapitalLetters) << '\n';
    //std::cout << countCharsApplicableTo(str, amountDigits) << '\n';
    //std::cout << countCharsApplicableTo(str, amountWhitespaces) << '\n';

    // Tasks with recursivity
    // 1
    /*const int n = 6;
    int arr[n + 1] = { 1, 1 };
    fibo(arr, n, 0, 1);

    for (size_t i = 0; i < n; i++)
    {
        std::cout << arr[i] << ' ';
    }*/

    // 4
    char str[] = "alabala";
    char c = 'a';
    int amount = 0;
    const int initialIndex = 0;

    amountDeterminatedChar(str, c, amount, initialIndex);
    std::cout << amount << '\n';

}


int countCharsApplicableTo(char* str, bool f(char*, int))
{
    int count = 0;
    int i = 0;

    while (*(str + i) != '\0')
    {
        if (f(str, i)) count++;
        i++;
    }

    return count;
}

bool amountCapitalLetters(char* str, int i)
{
    if (*(str + i) >= 'A' && *(str + i) <= 'Z')
    {
        return true;
    }

    return false;
}

bool amountDigits(char* str, int i)
{
    if (*(str + i) >= '0' && *(str + i) <= '9')
    {
        return true;
    }

    return false;
}

bool amountWhitespaces(char* str, int i)
{
    if (*(str + i) == ' ')
    {
        return true;
    }

    return false;
}

bool fibo(int* arr, int n, int first, int second)
{
    while (second != n)
    {
        *(arr + second + 1) = *(arr + first) + *(arr + second);
        first++;
        second++;
        fibo(arr, n, first, second);
    }

    return false;
}

bool amountDeterminatedChar(char * str, char c, int & amount, int index)
{
    while (*(str + index) != '\0')
    {
        if (*(str + index) == c) amount++;
        amountDeterminatedChar(str, c, amount, ++index);
        return false;
    }

    return false;
}
