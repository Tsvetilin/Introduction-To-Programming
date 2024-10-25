#include <iostream>
int main()
{
    //ex1
    //int start, end;
    //std::cin >> start >> end;
    //if (end < 0 || start < 0 || end > 255 || start > 255 || end < start) {
    // std::cerr << "Invalid codes!";
    // return 1;
    //}
    //for (start; start <= end; start++) {
    //    char a = start;
    // std::cout << a << " --> " << start << std::endl;
    //}

    //ex2
    //int n;
    //std::cin >> n;
    //int factorial = 1;
    //for (int i = 2; i <= n; i++) {
    // factorial *= i;
    //}
    //std::cout << "Factorial: " << factorial;

    //ex3
    //int n;
    //std::cin >> n;
    //int sum = 0;
    //for (int i = 1; i <= n; i++) {
    //    for (int j = 1; j <= i; j++) {
    //        sum += j;
    //    }
    //}
    //std::cout << sum;

    //ex4
    //int a;
    //std::cin >> a;
    //for (int i = 1; i < a; i++) {
    //    if (a % i == 0) {
    //        std::cout << i << " ";
    //    }
    //}

    //ex5
    //int fib1 = 1, fib2 = 1, fibNew, n;
    //std::cin >> n;
    //if (n <= 0) {
    // std::cerr << "invalid number";
    // return 1;
    //}
    //else if (n == 1) {
    // std::cout << fib1;
    // return 0;
    //}
    //else if (n == 2) {
    // std::cout << fib2;
    // return 0;
    //}
    //std::cout << fib1 << " ";
    //std::cout << fib2 << " ";
    //fibNew = fib1 + fib2;
    //for (int i = 2; i < n; i++) {
    //    std::cout << fibNew << " ";
    //    fib1 = fib2;
    //    fib2 = fibNew;
    //    fibNew = fib1 + fib2;
    //}

    //ex6
    //int n, sum = 0, current;
    //std::cin >> n;
    //std::cin >> current;
    //while (current != -1) {
    //    if (current < n && current % 2 == 0) {
    //        sum += current;
    //    }
    //    std::cin >> current;
    //}
    //std::cout << sum;

    //ex7
    //int a, b;
    //std::cin >> a >> b;
    //for (a; a <= b; a++) {
    //    int current = a;
    //    int sum = 0;
    //    for (int i = 1; i < a; i++) {
    //        if (a % i == 0) {
    //            sum += i;
    //        }
    //    }
    //    if (a == sum) {
    //        std::cout << a << " ";
    //    }
    //}

    //ex8
    //int x, y;
    //std::cin >> x >> y;
    //for (int i = 1; i <= x; i++) {
    //    for (int j = 1; j <= y; j++) {
    //        std::cout << "(" << i << ", " << j << ")";
    //    }
    //    std::cout << std::endl;
    //}
    
    // week 4
    //ex1
    //int n, a, b;
//std::cin >> n;
//
//for (int i = 2; i < n / 2; i++) {
// for (int p = n / 2; p < n; p++) {
// a = i;
// b = p;
// bool aPrime = true;
// bool bPrime = true;
// for (int j = 2; j < a; j++) {
// if (a % j == 0) {
// aPrime = false;
// break;
// }
//
// }
// for (int k = 2; k < b; k++) {
// if (b % k == 0) {
// bPrime = false;
// break;
// }
// if (aPrime && bPrime) {
// }
// }
// if (aPrime && bPrime && a + b == n) {
// std::cout << n << " = " << a << " + " << b << std::endl;
// }
// }
//}

    //ex2
    //double n, a1 = 0.5, a2 = 1.0;
    //std::cin >> n;
    //for (int i = 1; i <= n; i++) {
     //a2 = (a1 * a1 + 1) / 2.0;
     //a1 = a2;
    //}
    //std::cout << a2;

    //ex3
    //int n;
    //std::cin >> n;
    //for (int i = 1; i <= n; i++) {
    //for (int j = 1; j <= i; j++) {
    //std::cout << "$ ";
    //}
    //std::cout << "" << std::endl;
    //}

    //ex4
    //int n;
    //std::cin >> n;
    //char a;
    //for (int i = 1; i <= n; i++) {
    // for (int j = 1; j <= n; j++) {
    // if (i == 1 && j == 1 || i == n && j == n || i == 1 && j == n || i == n && j == 1) {
    // a = '+';
    // }
    // else if (j == 1 || j == n) {
    // a = '|';
    // }
    // else {
    // a = '-';
    // }
    // std::cout << a << " ";
    // }
    // std::cout << "" << std::endl;
    //}

    //ex5
    //int n;
    //std::cin >> n;
    //if (n >= 10) {
    //    std::cout << "The number is too big";
    //    return 1;
    //}
    //std::cout << "" << std::endl;
    //int padding;
    //for (int i = 1; i < n; i++) {
    //    padding = (n - i + 1) * 4 + 2;
    //    for (int j = 1; j <= i; j++) {
    //        std::cout << j << " ";
    //    }
    //    for (int a = 1; a <= padding; a++) {
    //        std::cout << " ";
    //    }
    //    for (int j = i; j >= 1; j--) {
    //        std::cout << j << " ";
    //    }
    //    std::cout << "" << std::endl;
    //}
    //for (int i = 1; i <= n; i++) {
    //    std::cout << i << " ";
    //}
    //std::cout << "- - - ";
    //for (int i = n; i >= 1; i--) {
    //    std::cout << i << " ";
    //}
    //std::cout << "" << std::endl;

    //for (int i = n - 1; i >= 1; i--) {
    //    padding = (n - i + 1) * 4 + 2;
    //    for (int j = 1; j <= i; j++) {
    //        std::cout << j << " ";
    //    }
    //    for (int a = 1; a <= padding; a++) {
    //        std::cout << " ";
    //    }
    //    for (int j = i; j >= 1; j--) {
    //        std::cout << j << " ";
    //    }
    //    std::cout << "" << std::endl;
    //}

//ex6
//int n;
//std::cin >> n;
//if (n >= 10) {
//        std::cout << "The number is too big";
//        return 1;
//    }
//for (int a = 1; a <= n + 2; a++) {
//    std::cout << "#";
//}
//for (int a = 1; a <= n; a++) {
//    std::cout << "\n";
//    std::cout << "#";
//    for (int i = a; i < a + n; i++) {
//        std::cout << ((i % n) ? (i % n) : n);
//    }
//    std::cout << "#";
//}
//std::cout << "\n";
//std::cout << "#";
//    for (int i = 0; i++ < (n - 1) / 2;) {
//        std::cout << " ";
//    }
//    std::cout << "X";
//    if (n % 2 == 0) {
//        std::cout << "X";
//    }
//    for (int i = 0; i++ < (n - 1) / 2;) {
//        std::cout << " ";
//    }
//    std::cout << "#";
//for (int a = 1; a <= n; a++) {
//    std::cout << "\n";
//    std::cout << "#";
//    for (int i = a; i < a + n; i++) {
//        std::cout << ((i % n) ? (i % n) : n);
//    }
//    std::cout << "#";
//}
//std::cout << "\n";
//for (int a = 1; a <= n + 2; a++) {
//    std::cout << "#";
//}

//ex7
//int n;
//std::cin >> n;
//int smallDiff = 1;
//int bigDiff = n * 2 - 1;
//int diff;
//for (int i = 1; i <= n; i++) {
//    int num = i;
//    for (int j = 1; j <= n; j++) {
//        std::cout << num << " ";
//        diff = (j % 2 != 0) ? bigDiff : smallDiff;
//        num += diff;
//    }
//    bigDiff -= 2;
//    smallDiff += 2;
//    std::cout << "\n";
//}

//ex8
//int n;
//std::cin >> n;
//int num = 0;
//for (int i = 1; i <= n / 2; i++) {
//    for (int j = 1; j <= n; j++) {
//        std::cout << ++num << " ";
//    }
//    std::cout << "\n";
//    ++num += n;
//    for (int j = n; j >= 1; j--) {
//        std::cout << --num << " ";
//    }
//    std::cout << "\n";
//    --num += n;
//}
//if (n % 2 != 0) {
//    for (int i = n * n - n + 1; i <= n * n; i++) {
//        std::cout << ++num << " ";
//    }
//}
}
