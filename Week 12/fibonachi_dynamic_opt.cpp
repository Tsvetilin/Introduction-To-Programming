#include <iostream>
long long* arr = nullptr;
const int MAX_ARR_LEN = 10000;
long long* getDinamicOptArr() {
    if (!arr) {
        arr = new long long[MAX_ARR_LEN];
        for (int i = 0; i < MAX_ARR_LEN; ++i) {
            arr[i] = -1;
        }
    }
    return arr;
}
long long fib(int n) {
    if (n == 1) {
        return 0;
    }
    if (n == 2) {
        return 1;
    }
    return fib(n - 1) + fib(n - 2);
} 

long long dinamicOptFib(int n) {
    long long* arrDinamic = getDinamicOptArr();
    if (arrDinamic[n] == -1)
    {
        long long toSet;
        if (n == 1) {
            toSet = 0;
        }
        else if (n == 2) {
            toSet =  1;
        }
        else {
            toSet = dinamicOptFib(n - 1) + dinamicOptFib(n - 2);
        }
        arrDinamic[n] = toSet;
    }
    return arrDinamic[n];
}

int main()
{
    for (int i = 1; i < 100; ++i) {
        std::cout << dinamicOptFib(i) << '\n';
    }
    for (int i = 1; i < 100; ++i) {
        std::cout << fib(i) << '\n';
    }
}
