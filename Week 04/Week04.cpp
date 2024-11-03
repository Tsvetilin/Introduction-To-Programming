#include <iostream>

int pow(int num, int power)
{
    if (power == 0)
        return 1;
    for (int i = num; power > 1; power--)
        num *= i;
    return num;
}

//5. �������� ��������, ����� ���� ���� ����������� ����� K � �������� [N, M].
// �� �� ������� ������ ��������� ����� � ��������� ������ ���������� K. ��������� �����
// � ������ ����, �� ����� K �� ���� ��� ������� �� ����� ������ �����. (�������� 2418 �
// ��������� ������ K = 16, ������ 16 �� ���� �� 2, 4, 1 � 8).
bool isSpecial(unsigned start, unsigned end)
{
    while (start > 0)
    {
        int digit = start % 10;
        if (digit == 0 || end % digit != 0)
        {
            return false;
        }
        return true;
    }
}

//4. �� �� ������ ��������, ����� ������ ���������� ����� � �� ��������� ���������: 
//(��� ��� ������ ���� �� �� ���������)

unsigned int reverse(unsigned int num) 
{
    unsigned int reversednum = 0;
    while (num > 0)
    {
        reversednum = reversednum * 10 + num % 10;
        num /= 10; //�������� ���������� �����//
    }
    return reversednum;
}

// 1. �� �� ������� �� ��������� ���������� ����� � �� �� ������ ���� � ������.
bool isPrime(int num) 
{
    for (int i = 2; i * i < num; i += 1)
    {
        if (num % i != 0)
        {
            return true;
        }
    }
    return false;
}

//2. �� �� �������� �� ��������� ���������� �����(unsigned int / unsigned)
// � ����� � �� �� ������ ����� ���� ������� �� ����� � �������� �����.
unsigned int numsOfDigit2(int n, int t)
{
    int sum = 0;
    while (n > 0)
    {
        if (n % 10 == t)
        {
            sum++;
        }
        n /= 10;
    }
    return sum;
}

//3. �� �� ������ ��������, ����� ������ ���������� ����� � ��������� ���� �����,
//��������� �� ����������� �� ��� �������� ��� �����. (��� ������� ���� �� �� ���������)
unsigned int sortNum(unsigned int num) 
{
    int countnum = 0;
    unsigned int res = 0;

    for (unsigned int i = num; i > 0; i /= 10)
    {
        countnum++;
    }

    for (int i = 1; i <= 9; i++)
    {
        int digitcount = 0;
        unsigned int numCopy = num;

        for (unsigned int digit; numCopy != 0; numCopy /= 10)
        {
            digit = numCopy % 10;
            if (digit == i)
                digitcount++;
        }

        for (int j = 0; j < digitcount; j++)
        {
            countnum--;
            res += i * pow(10, countnum);
        }
    }

    return res;
}

int main()
{

}