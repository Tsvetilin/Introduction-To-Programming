//2. Да се напише програма, която чете от конзолата число между 0 и 9 и отпечатва 
// съответстващата му римска цифра.

#include <iostream>

int main()
{
    int num1;
    std::cin >> num1;
    switch (num1)
    {
    case 1: std::cout << "I"; break;
    case 2: std::cout << "II"; break;
    case 3: std::cout << "III"; break;
    case 4: std::cout << "IV"; break;
    case 5: std::cout << "V"; break;
    case 6: std::cout << "VI"; break;
    case 7: std::cout << "VII"; break;
    case 8: std::cout << "VIII"; break;
    case 9: std::cout << "IX"; break;
    default: std::cout << "error";
    }
}
