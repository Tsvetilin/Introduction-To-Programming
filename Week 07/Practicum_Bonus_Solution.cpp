#include <iostream>
using namespace std;

const int SIZE = 1000;

int countDigitsInKSystem(int num, int k) {
	int counter = 0;
	while (num > 0)
	{
		counter++;
		num /= k;
	}
	return counter;
}

char convert(int num) {
	if (0 <= num && num <= 9)
	{
		return num + '0';
	}
	return num - 10 + 'A';
}

int extract(char num) {
	if ('0' <= num && num <= '9')
	{
		return num - '0';
	}
	return num - 'A' + 10;
}

int fromKto10(char kSystem[], int kArrSize, int k) {
	int result = 0;
	size_t counter = 1;
	for (size_t i = 0; i < kArrSize; i++)
	{
		result *= k;
		result += extract(kSystem[i]);
	}
	return result;
}

void from10toN(int num, char result[], int& nArrSize, int n) {
	nArrSize = countDigitsInKSystem(num, n);
	for (long long i = nArrSize - 1; i >= 0; i--)
	{
		result[i] = convert(num % n);
		num /= n;
	}
}

void fromKtoN(char kSystem[], int kSize, int k, char nSystem[], int& nSize, int n) { //defined with convertions between 2 and 36 counting systems
	from10toN(fromKto10(kSystem, kSize, k), nSystem, nSize, n);
}

int main()
{
	char arr[] = { 'A', 'B', 'C' };
	int sizeArr = 0;
	char result[SIZE];
	fromKtoN(arr, 3, 13, result, sizeArr, 36);
	for (size_t i = 0; i < sizeArr; i++)
	{
		std::cout << result[i];
	}
}
