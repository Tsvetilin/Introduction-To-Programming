#include <iostream>

//1
// bool isPrime(unsigned const n) {
//     if (n <= 1)
//         return false;
//     for (unsigned i = 2; i < n; i++) {
//         if (n % i == 0)
//             return false;
//     }
//     return true;
// }
//
// int main() {
//     unsigned n;
//     std::cin >> n;
//     if (isPrime(n))
//         std::cout << "YES" << std::endl;
//     else
//         std::cout << "NO" << std::endl;
//     return 0;
// }

//2
// int main() {
//     unsigned n, x, count = 0;
//     std::cin >> n >> x;
//     while (n > 0) {
//         if (n % 10 == x)
//             count++;
//         n /= 10;
//     }
//     std::cout << count << std::endl;
//     return 0;
// }

//3
// int main() {
//     unsigned long long num;
//     std::cin >> num;
//     for (int i = 1; i <= 9; i++)
//     {
//         unsigned long long tempNum = num;
//         while (tempNum > 0)
//         {
//             if (tempNum % 10 == i)
//                 std::cout << i;
//             tempNum /= 10;
//         }
//     }
// }


//4
// int main() {
//     unsigned n;
//     std::cin >> n;
//     for (unsigned i = n; i > 0; i /= 10) {
//         if (i % 10 != 0)
//             std::cout << i % 10;
//     }
// }

//5
// int main() {
//     unsigned k, n, m, count = 0, digits = 0;
//     std::cin >> k >> n >> m;
//     for (unsigned i = n; i <= m; i++) {
//         for (unsigned j = i; j > 0; j /= 10) {
//             digits++;
//             unsigned digit = j % 10;
//             if (digit != 0 && k % digit == 0)
//                 count++;
//         }
//         if (count == digits)
//             std::cout << i << ' ' << '\n';
//         digits = 0;
//         count = 0;
//     }
// }


// FUNCTIONS

// int main(){}

int absoluteValue(int number) {
    if (number < 0)
        return -number;
    return number;
}
bool isDigit(char symbol) {
    return symbol >= '0' && symbol <= '9';
}

char toUpper(char symbol) {
    if (symbol >= 'a' && symbol <= 'z')
        return symbol - 'a' + 'A';
    return symbol;
}

char toLower(char symbol) {
    if (symbol >= 'A' && symbol <= 'Z')
        return symbol - 'A' + 'a';
    return symbol;
}

int toNumber(char symbol) {
    return (int)symbol;
}

char toCharacter(int number) {
    return (char)number;
}

int power(int base, unsigned int exponent) {
    int result = 1;
    for (unsigned int i = 0; i < exponent; i++) {
        result *= base;
    }
    return result;
}

bool isPrime(unsigned int number) {
    if (number <= 1)
        return false;
    for (unsigned int i = 2; i <= (number / 2); i++) {
        if (number % i == 0)
            return false;
    }
    return true;
}

short getLength(int number) {
    short result = 0;
    for (unsigned int i = number; i > 0; i /= 10) {
        result++;
    }
    return result;
}

//1
int isPermutation(int a, int b) {
    int digitsOfA = 0, digitsOfB = 0, countA = 0,countB = 0, digits = 0;
    bool isPermutation = false;
    for (int i = 1; i <= 9; i++) {
        int A = a, B = b;
        while (A > 0) {
            if (A % 10 == i)
                countA++;
            A /= 10;
            digitsOfA++;
        }
        while (B > 0) {
            if (B % 10 == i)
                countB++;
            B /= 10;
            digitsOfB++;
        }
        if (digitsOfA != digitsOfB)
            return false;
        if (countA > 0 && countB > 0 && countA == countB)
            digits += 1 * countA;
        if (i != 9) {
            digitsOfA = 0;
            digitsOfB = 0;
            countA = 0;
            countB = 0;
        }
    }
    if (digitsOfA == digitsOfB && digitsOfB == digits)
        isPermutation = true;
    return isPermutation;
}


//2
bool isPalindrome(int number) {
    int num = number, reverse = 0;

    do
    {
        int digit = num % 10;
        reverse = (reverse * 10) + digit;
    } while (num /= 10);

    if (reverse == number && number > 0)
        return true;
    return false;
}
