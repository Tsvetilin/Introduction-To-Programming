//8. �� �� ������ ��������, ����� ��� �������� ������
// r � �������� �����(�, �) ��������� ���� ������� �� 
// ������ ����� / ����� ��� �� ������� �� ��������� � ������(0, 0).
#include <iostream>

int main()
{
    float r, x, y, t;
    std::cin >> r >> x >> y;
    t = sqrt(x * x + y * y);
    if (r < t)
        std::cout << "outside";
    if (r == t)
        std::cout << "on";
    if (r > t)
        std::cout << "inside";
}
