//1.������� �� ���� ����� �� ���������.�������� �� ��������� ���� ������� � �����������, 
// ����������� ��� 0.
#include <iostream>

int main()
{
    int num1;
    std::cin >> num1;
    if (num1 > 0)
    {
        std::cout << "pos";
    }
    else if (num1 < 0)
    {
        std::cout << "neg";
    }
    else
    {
        std::cout << "0";
    }
}
