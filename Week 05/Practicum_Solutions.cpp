#include <iostream>

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


// Ex. 5
int indexNum(int num, int x, int y)
{
	int digitsCount = getLength(num);
	int digitSize = 0;
	int finalNum = 0;

	for (int i = 0; i < digitsCount; i++)
	{
		if (i >= x && i <= y)
		{
			finalNum += num % 10 * power(10, digitSize);
			digitSize++;
		}
		num /= 10;
	}

	return finalNum;
}


// Ex. 6
void swapKIndex(int fNum, int sNum, int k)
{
	int k1 = 0, reversedFirst = reverse(fNum), 
		lengthFirst = getLength(fNum);
	for (int i = 0; i < lengthFirst; i++)
	{
		if (i + 1 == k)
		{
			k1 = reversedFirst % 10;
			break;
		}
		reversedFirst /= 10;
	}
	int k2 = 0, reversedSecond = reverse(sNum),
		lengthSecond = getLength(sNum);
	for (int i = 0; i < lengthSecond; i++)
	{
		if (i + 1 == k)
		{
			k2 = reversedSecond % 10;
			break;
		}
		reversedSecond /= 10;
	}

	int finalFirst = 0, digitSizeFirst = lengthFirst;
	reversedFirst = reverse(fNum);
	for (int i = 0; i < lengthFirst; i++)
	{
		if (i + 1 == k)
		{
			finalFirst += k2 * power(10, digitSizeFirst - 1);
			reversedFirst /= 10;
			digitSizeFirst--;
			continue;
		}
		finalFirst += reversedFirst % 10 * power(10, digitSizeFirst - 1);
		reversedFirst /= 10;
		digitSizeFirst--;
	}

	int finalSecond = 0, digitSizeSecond = lengthSecond;
	reversedSecond = reverse(sNum);
	for (int i = 0; i < getLength(sNum); i++)
	{
		if (i + 1 == k)
		{
			finalSecond += k1 * power(10, digitSizeSecond - 1);
			reversedSecond /= 10;
			digitSizeSecond--;
			continue;
		}
		finalSecond += reversedSecond % 10 * power(10, digitSizeSecond - 1);
		reversedSecond /= 10;
		digitSizeSecond--;
	}

	std::cout << finalFirst << " " << finalSecond;
}


// Ex. 8
int lcm(int first, int second)
{
	int max = first * second;
	int min = first >= second ? first : second;
	for (int i = min; i <= max; i++)
	{
		if (i % first == 0 && i % second == 0)
		{
			return i;
		}
	}
	return max;
}


// Ex. 9
int concat(int first, int second)
{
	int secondLength = getLength(second);
	first *= power(10, secondLength);
	return first + second;
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
	/*int n;
	std::cin >> n;
	oddsAndEvens(n);*/


	// Ex. 5
	/*int num, x, y;
	std::cin >> num >> x >> y;
	std::cout << indexNum(num, x, y);*/


	// Ex. 6
	/*int num1, num2, k;
	std::cin >> num1 >> num2 >> k;
	swapKIndex(num1, num2, k);*/


	// Ex. 8
	/*int first, second;
	std::cin >> first >> second;
	std::cout << lcm(first, second);*/


	// Ex. 9
	/*int first, second;
	std::cin >> first >> second;
	std::cout << concat(first, second);*/
}
