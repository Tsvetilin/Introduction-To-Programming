//13. �������� �� ������ ����� a, b, c, ����� �� ��������� ������������� � 
// ����������� ax2 + bx + c = 0. �� �� ������ ����� �� ���� ������ ������ ��� 
// ���� ���������.
#include <iostream>

int main()
{
	int a, b, c;
	std::cin >> a >> b >> c;
	float d = b * b - 4 * a * c;
	if (d > 0)
	{
		std::cout << "2";
	}
	else if (d == 0)
	{
		std::cout << "1";
	}
	else
	{
		std::cout << "0";
	}
}
