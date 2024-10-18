//5. Използвайки тернарен оператор, изведете на конзолата 
// кое от две въведени цели числа е по - голямо.
#include <iostream>

int main()
{
    int num1, num2;
    std::cin >> num1 >> num2;
    std::cout << (num1 > num2 ? num1 : num2);
}
