#include <iostream>

int main()
{
    // Ex. 1
    /*int n, m;
    std::cout << "Start: ";
    std::cin >> n;
    std::cout << "End: ";
    std::cin >> m;

    if (n < 0 || n > 256 || m < 0 || m > 256 || n < m)
    {
        std::cout << "Invalid codes!\n";
        return 1;
    }

    for (int i = n; i <= m; i++)
    {
        std::cout << i << " --> " << char(i) << "\n";
    }*/


    // Ex. 2
    /*int num;
    std::cin >> num;

    int fact = 1;
    for (int i = 2; i <= num; i++)
    {
        fact *= i;
    }

    std::cout << "Factorial: " << fact;*/


    // Ex. 3
    /*int num;
    std::cin >> num;

    int sum = 0;
    for (int i = 1; i <= num; i++)
    {
        sum += (i * (i + 1)) / 2;
    }
    std::cout << sum;*/


    // Ex. 4
    /*int n;
    std::cin >> n;

    for (int i = 1; i <= n / 2 + 1; i++)
    {
        if (n % i == 0)
        {
            std::cout << i << " ";
        }
    }*/

    
    // Ex. 5
    /*int num;
    std::cin >> num;

    int num1 = 0, num2 = 1;
    for (int i = 0; i < num; i++)
    {
        if (i == 0)
        {
            std::cout << 0 << " ";
            continue;
        }
        if (i == 1)
        {
            std::cout << 1 << " ";
            continue;
        }
        int sum = num1 + num2;
        std::cout << sum << " ";
        num1 = num2;
        num2 = sum;
    }*/


    // Ex. 6
    /*int num;
    std::cin >> num;

    int sum = 0;
    while (true)
    {
        int tempNum;
        std::cin >> tempNum;
        if (tempNum == -1)
            break;

        if (tempNum < num && tempNum % 2 == 0)
            sum += tempNum;
    }
    std::cout << sum;*/


    // Ex. 7
    /*int a, b;
    std::cin >> a >> b;

    for (int i = a; i <= b; i++)
    {
        if (i == 1)
            continue;
        int sum = 0;
        for (int j = 1; j <= i / 2 + 1; j++)
        {
            if (i % j == 0)
            {
                sum += j;
            }
        }
        if (sum == i)
            std::cout << i << "\n";
    }*/


    // Ex. 8
    int n, m;
    std::cin >> n >> m;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            std::cout << "(" << i << ", " << j << ") ";
        }
        std::cout << "\n";
    }
}
