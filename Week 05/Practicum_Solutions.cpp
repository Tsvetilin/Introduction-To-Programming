#include <iostream>

// Ex. 1
void swap(int& a, int& b)
{
	int temp = b;
	b = a;
	a = temp;
}

void swap(double& a, double& b)
{
	double temp = b;
	b = a;
	a = temp;
}


// Ex. 7
int gcd(int first, int second)
{
	if (first > second)
	{
		int mod = second;
		int currMod = mod;
		while (currMod)
		{
			currMod = first % mod;
			if (currMod)
				mod = currMod;
		}
		return mod;
	}
	int mod = first;
	int currMod = mod;
	while (currMod)
	{
		currMod = second % mod;
		if (currMod)
			mod = currMod;
	}
	return mod;
}


// Ex. 2
void simplify(int& a, int& b)
{
	int div = gcd(a, b);
	a /= div;
	b /= div;
}


// Ex.3
short getLength(int number)
{
	short length = 0;
	while (number)
	{
		length++;
		number /= 10;
	}
	return length;
}

int power(int base, unsigned int exponent) {
	int result = 1;
	for (int i = 0; i < exponent; i++) {
		result *= base;
	}
	return result;
}

int reverse(int num)
{
	int reversed = 0, tempNum = num;
	for (int i = getLength(tempNum) - 1; i >= 0; i--)
	{
		if ((tempNum % 10) == 0)
		{
			reversed *= 10;
			tempNum /= 10;
			continue;
		}
		reversed += (tempNum % 10) * power(10, i);
		tempNum /= 10;
	}
	return reversed;
}

int removeDigit(int num, int k)
{
	// 12345 3
	int numLength = getLength(num); // 5
	if (k > numLength)
		return -1;

	int secondHalf = num % power(10, numLength - k); // 12345 % 100
	int reversedNum = reverse(num); // 54321
	int firstHalf = reverse(reversedNum % power(10, k - 1)) * power(10, numLength - k); // 12 * 100
	return firstHalf + secondHalf; // 1200 + 45
}


// Ex. 4
void oddsAndEvens(int num)
{
	num = reverse(num);
	int length = getLength(num);
	int odds = 0, evens = 0;
	int oddSize = 1, evenSize = 1;
	for (int i = 1; i <= length; i++)
	{
		int digit = num % 10;
		if (i % 2)
		{
			if (digit != 0)
				odds += digit * oddSize;
			else
				odds *= 10;
			oddSize *= 10;
		}
		else
		{
			if (digit != 0)
				evens += digit * evenSize;
			else
				evens *= 10;
			evenSize *= 10;
		}
		num /= 10;
	}
	std::cout << reverse(evens) << " " << reverse(odds);
}

int main()
{
	// Ex. 1
	/*int a = 5, b = 6;
	std::cout << "a = " << a << ", b = " << b << "\n";
	swap(a, b);
	std::cout << "a = " << a << ", b = " << b << "\n";

	double c = 5.5, d = 6.6;
	std::cout << "c = " << c << ", d = " << d << "\n";
	swap(c, d);
	std::cout << "c = " << c << ", d = " << d << "\n";*/


	// Ex. 7
	/*std::cout << gcd(15, 25);*/


	// Ex. 2
	/*int a, b;
	std::cin >> a >> b;
	simplify(a, b);
	std::cout << a << " " << b;*/


	// Ex. 3
	/*int a, b;
	std::cin >> a >> b;
	a = removeDigit(a, b);
	std::cout << a;*/


	// Ex. 4
	int n;
	std::cin >> n;
	oddsAndEvens(n);
}
