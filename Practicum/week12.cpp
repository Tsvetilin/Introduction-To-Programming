#include <iostream>

// Task with higher order functions
int countCharsApplicableTo(char* str, bool f(char*, int));
bool amountCapitalLetters(char* str, int i);
bool amountDigits(char* str, int i);
bool amountWhitespaces(char* str, int i);

// Task with recursivity
// 1

int main()
{
    char str[] = " I am a Businessman 123 ";
    std::cout << countCharsApplicableTo(str, amountCapitalLetters) << '\n';
    std::cout << countCharsApplicableTo(str, amountDigits) << '\n';
    std::cout << countCharsApplicableTo(str, amountWhitespaces) << '\n';
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
