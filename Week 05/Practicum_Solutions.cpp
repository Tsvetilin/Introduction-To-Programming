#include <iostream>

// some base functions
int reverseNum(int n) {
	int reversed = 0;
	while (n)
	{
		reversed = reversed * 10 + n % 10;
		n /= 10;
	}
	return reversed;
}

short getNumLength(int n) {
	short digits = 0;
	while (n)
	{
		digits++;
		n /= 10;
	}
	return digits;
}

// zad 1
void swap(int& a, int& b) {
	int temp = a;
	a = b;
	b = temp;
}

void swap(double& a, double& b) {
	double temp = a;
	a = b;
	b = temp;
}

// zad 2, 7
int gcd(int a, int b) {
	while (b != 0)
	{
		int temp = b;
		b = a % b;
		a = temp;
	}

	return a;
}

void shortenFraction(int& num, int& denom) {
	int nod = gcd(num, denom);
	num /= nod;
	denom /= nod;
	std::cout << num << " " << denom;
}

// bonus
void printSumOfTwoFractions(int num1, int denom1, int num2, int denom2) {
	int n = num1 * denom2 + num2 * denom1;
	int d = denom1 * denom2;
	shortenFraction(n, d);
}

// zad 3
int removeKthDigit(int n, int k) {
	int reversed = reverseNum(n);
	int result = 0, digit = 0;

	while (reversed)
	{
		if (++digit != k)
			result = result * 10 + reversed % 10;
		reversed /= 10;
	}
	return result;
}

// zad 4
void divideNumberIntoOddsAndEvens(int n) {
	int reversed = reverseNum(n);
	int evenResult = 0, oddResult = 0;

	while (reversed)
	{
		int digit = reversed % 10;

		if (digit % 2 == 0)
			evenResult = evenResult * 10 + digit;
		else
			oddResult = oddResult * 10 + digit;
		reversed /= 10;
	}

	std::cout << evenResult << " " << oddResult;
}

// zad 5
int getNumBetweenIandJ(int n, int i, int j) {
	if (i > j)
		swap(i, j);

	int reversed = reverseNum(n);
	int currentPos = 0, result = 0;

	while (reversed)
	{
		currentPos++;
		if (currentPos >= i && currentPos <= j)
			result = result * 10 + reversed % 10;
		reversed /= 10;
	}
	return result;
}

// zad 6 
int numWithSwappedDigit(int num, const short numLength, const int k, int secondNum) {
	int result = 0;
	for (int pos = 1; pos <= numLength; pos++)
	{
		int digit = (pos == k) ? secondNum % 10 : num % 10;
		result = result * 10 + digit;
		num /= 10;
		secondNum /= 10;
	}
	return result;
}

void swapDigitsOnKthPos(int n, int m, const int k) {
	short nNumLength = getNumLength(n);
	short mNumLength = getNumLength(m);

	if (nNumLength < k || mNumLength < k)
	{
		std::cerr << "Not all numbers have " << k << " digits";
		return;
	}

	int nReversed = reverseNum(n);
	int mReversed = reverseNum(m);

	int newNum = numWithSwappedDigit(nReversed, nNumLength, k, mReversed);
	int secondNewNum = numWithSwappedDigit(mReversed, mNumLength, k, nReversed);

	std::cout << newNum << " " << secondNewNum;
}

// zad 8 
int lcm(int a, int b) {
	return (a * b) / gcd(a, b);
}

// zad 9
unsigned int concat(unsigned int first, unsigned int second) {
	int secondReversed = reverseNum(second);
	while (secondReversed)
	{
		first = first * 10 + secondReversed % 10;
		secondReversed /= 10;
	}
	return first;
}

// pract 1
bool isLeapYear(const unsigned int year) {
	return year % 4 == 0 && (year % 100 != 0 || year % 400 == 0);
}

int getDaysInMonth(const unsigned int month, const unsigned int year) {
	switch (month)
	{
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			return 31;
		case 2:
			return isLeapYear(year) ? 29 : 28;
		default:
			return 30;
	}
}

bool isDateValid(const unsigned int day, const unsigned int month, const unsigned int year) {
	if (month < 1 || month > 12 || year < 1)
		return false;

	return (day >= 1 && day <= getDaysInMonth(month, year));
}

void getDateAfterNDays(unsigned int& day, unsigned int& month, unsigned int& year, int n) {
	while (n)
	{
		int daysInCurrentMonth = getDaysInMonth(month, year);
		int remainingDaysInMonth = daysInCurrentMonth - day;

		if (n <= remainingDaysInMonth)
		{
			day += n;
			return;
		}

		n -= remainingDaysInMonth + 1;
		day = 1;

		if (++month > 12)
		{
			month = 1;
			year++;
		}
	}
}

// pract 2
int minSwaps(unsigned long long firstBinary, unsigned long long secondBinary, const int length) {
	int count0to1 = 0;
	int count1to0 = 0;

	for (int i = 0; i < length; i++)
	{
		int firstBinDigit = firstBinary % 10;
		int secondBinDigit = secondBinary % 10;

		if (firstBinDigit != secondBinDigit)
		{
			if (firstBinDigit == 0 && secondBinDigit == 1)
			{
				count0to1++;
			}
			else
			{
				count1to0++;
			}
		}

		firstBinary /= 10;
		secondBinary /= 10;
	}

	if (count0to1 != count1to0) {
		return -1;
	}

	return count0to1;
}


int main() {
	// zad 1
	/*double a, b;
	std::cin >> a >> b;
	swap(a, b);
	std::cout << a << " " << b;*/

	// zad 2 
	/*int num, denom;
	std::cin >> num >> denom;
	shortenFraction(num, denom);*/

	// zad 2 bonus
	/*int num1, denom1, num2, denom2;
	std::cin >> num1 >> denom1 >> num2 >> denom2;
	printSumOfTwoFractions(num1, denom1, num2, denom2);*/

	// zad 3
	/*int n, k;
	std::cin >> n >> k;
	std::cout << removeKthDigit(n, k);*/

	// zad 4
	/*int n;
	std::cin >> n;
	divideNumberIntoOddsAndEvens(n);*/

	// zad 5
	/*int n, i, j;
	std::cin >> n >> i >> j;
	std::cout << getNumBetweenIandJ(n, i, j);*/

	// zad 6
	/*int n, m, k;
	std::cin >> n >> m >> k;
	swapDigitsOnKthPos(n, m, k);*/

	// zad 7
	/*int a, b;
	std::cin >> a >> b;
	std::cout << gcd(a, b);*/

	// zad 8
	/*int a, b;
	std::cin >> a >> b;
	std::cout << lcm(a, b);*/

	// zad 9
	/*unsigned int first, second;
	std::cin >> first >> second;
	std::cout << concat(first, second);*/

	// zad 1 pract
	/*unsigned int day, month, year, n;
	std::cin >> day >> month >> year >> n;

	if (isDateValid(day, month, year))
	{
		getDateAfterNDays(day, month, year, n);
		std::cout << "The new date is: " << day << "/" << month << "/" << year;
	}
	else
	{
		std::cout << "Invalid date!";
	}*/

	// zad 2 pract
	/*int n;
	unsigned long long firstBin, secondBin;

	std::cin >> n >> firstBin >> secondBin;
	int swaps = minSwaps(firstBin, secondBin, n);

	if (swaps == -1)
	{
		std::cout << "Invalid numbers - The first number cannot be transformed into the second!";
	}
	else
	{
		std::cout << swaps;
	}*/
}
