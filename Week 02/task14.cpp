//14. �� �� ������ ��������, ����� �������� 5 �������� �����.������� ��� �� ��� �� 
// ������ � ��������� ����������� A, ������ A ������� ������ ����� ����� ���������� 
// ��� �����, ����������� ������ ���.������� ��� ����� �� ����� � ��������� ����������� 
// B, ������ B ������� ������ ����� ����� ���, ����������� ������ ���.
//����� 5 - �� �����(case insensitive).�� �� ������ :
//���� 5 - ���� ����� ���������� �� ������������ �� A � B.
//���� 5 - ���� ����� ���������� �� ��������� �� A � B.
//���� 5 - ���� ����� ���������� �� ��������� �� A � B.
//��� �� ���������� ������������ ��������(����� ����������� �� �������� ��� �������) ���������� ���� 5 - ���� ����� ���������� ���� � ���������� � ����� �� ����������� A ��� B.

#include <iostream>

int main()
{
	char a, b, c, d, e;
	std::cin >> a >> b >> c >> d >> e;

	// making the problem case insensitive
	a = a + ('a' - 'A');
	b = b + ('a' - 'A');

	// (a, b) ? e E (a, b)
	bool is_e_in_first_interval = a <= e && e <= b;
	bool is_e_in_second_interval = c <= e && e <= d;

	// union
	std::cout << "Is in union of A and B: " <<
		std::boolalpha << (is_e_in_first_interval || is_e_in_second_interval)
		<< '\n';

	// intersection
	std::cout << "Is in intersection of A and B: " <<
		std::boolalpha << (is_e_in_first_interval && is_e_in_second_interval)
		<< '\n';

	// in a but not in b
	std::cout << "Is in A but not in B: " <<
		std::boolalpha << (is_e_in_first_interval && !is_e_in_second_interval)
		<< '\n';

	// is in either A or B 
	std::cout << "Is in union but not in intersection (is in either A or B): " <<
		std::boolalpha << ((is_e_in_first_interval || is_e_in_second_interval)
			&& !(is_e_in_first_interval && is_e_in_second_interval)) << '\n';
}
