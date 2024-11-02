#include <iostream>

// FUNCTIONS
bool invalidInput(int n) {
	return !std::cin || n < 0;
}

int absoluteValue(int number) {
	return number < 0 ? -number : number;
}

bool isDigit(char symbol) {
	return symbol >= '0' && symbol <= '9';
}

char toUpper(char symbol) {
	if (symbol >= 'a' && symbol <= 'z')
		return symbol + 'A' - 'a';
	return symbol;
}

char toLower(char symbol) {
	if (symbol >= 'A' && symbol <= 'Z')
		return symbol + 'a' - 'A';
	return symbol;
}

int toNumber(char symbol) {
	if (isDigit(symbol))
		return symbol - '0';
	return -1;
}

char toCharacter(int number) {
	return number + '0';
}

int power(int base, unsigned int exponent) {
	int result = 1;
	for (int i = 0; i < exponent; i++)
	{
		result *= base;
	}
	return result;
}

bool isPrime(unsigned int number) {
	int nSquared = sqrt(number);
	for (int i = 2; i <= nSquared; i++)
	{
		if (number % i == 0)
			return false;
	}
	return true;
}

short getLength(int number) {
	short digits = 0;
	while (number)
	{
		digits++;
		number /= 10;
	}
	return digits;
}

// zad 2,3,4 with functions
int getDigitOccurences(unsigned long number, int digit) {
	int occurences = 0;
	while (number)
	{
		if (number % 10 == digit)
			occurences++;
		number /= 10;
	}
	return occurences;
}

int toSorted(int n) {
	int sorted = 0;
	for (int digit = 1; digit <= 9; digit++)
	{
		int nCopy = n;
		while (nCopy)
		{
			int d = nCopy % 10;
			if (d == digit)
				sorted = sorted * 10 + d;
			nCopy /= 10;
		}
	}
	return sorted;
}

int toReversed(int n) {
	int reversed = 0;
	while (n)
	{
		reversed = reversed * 10 + n % 10;
		n /= 10;
	}
	return reversed;
}

bool isPermutation(int first, int second) {
	// ne raboti ako permutaciqta pochva s 0
	for (int i = 0; i <= 9; i++)
	{
		if (getDigitOccurences(first, i) != getDigitOccurences(second, i))
			return false;
	}

	return true;
}

bool isPalindrome(int n) {
	return n == toReversed(n);
}

int main()
{
	// zad 1
	//int n;
	//std::cin >> n;

	//if (invalidInput(n))
	//{
	//	std::cerr << "Invalid number";
	//	return 1;
	//}

	//bool isPrime = true;
	//int nSquared = sqrt(n);
	//for (int i = 2; i <= nSquared; i++)
	//{
	//	if (n % i == 0)
	//	{
	//		isPrime = false;
	//		break;
	//	}
	//}
	//std::cout << isPrime;

	// zad 2
	/*unsigned long n;
	int toSearch, occurences = 0;
	std::cin >> n >> toSearch;

	while (n)
	{
		if (n % 10 == toSearch)
			occurences++;
		n /= 10;
	}
	std::cout << occurences;*/

	// zad 3
	//int n;
	//std::cin >> n;

	//if (invalidInput(n))
	//{
	//	std::cerr << "Invalid number";
	//	return 1;
	//}

	//for (int digit = 1; digit <= 9; digit++)
	//{
	//	int nCopy = n;

	//	while (nCopy)
	//	{
	//		if (nCopy % 10 == digit)
	//			std::cout << digit;
	//		nCopy /= 10;
	//	}
	//}

	// zad 4 
	/*int n, reversed = 0;
	std::cin >> n;
	if (invalidInput(n))
	{
		std::cerr << "Invalid number";
		return 1;
	}

	while (n)
	{
		reversed = reversed * 10 + n % 10;
		n /= 10;
	}
	std::cout << reversed;*/

	// zad 5
	/*int k, n, m;
	std::cin >> k >> n >> m;

	if (invalidInput(k) || invalidInput(n) || invalidInput(m))
	{
		std::cout << "Invalid number";
		return 1;
	}

	for (int i = n; i <= m; i++)
	{
		int current = i;
		bool special = true;

		while (current)
		{
			int digit = current % 10;
			if (digit == 0 || k % digit != 0)
			{
				special = false;
				break;
			}
			current /= 10;
		}

		if (special)
			std::cout << i << " ";
	}*/

	// zad 6
	/*int n = 0, digits = 0, reversed = 0, result = 0;
	std::cin >> n;

	if (invalidInput(n))
	{
		std::cerr << "Invalid number";
		return 1;
	}

	int nCopy = n;
	while (nCopy)
	{
		digits++;
		nCopy /= 10;
	}

	for (int i = 1; i <= digits; i++)
	{
		bool atMiddle = i == digits / 2 + 1 || (digits % 2 == 0 && i == digits / 2);

		if (!atMiddle)
			reversed = reversed * 10 + n % 10;
		n /= 10;
	}

	while (reversed)
	{
		result = result * 10 + reversed % 10;
		reversed /= 10;
	}
	std::cout << result << " " << result + 1;*/

	// zad 1 FUNCTIONS
	/*int first, second;
	std::cin >> first >> second;
	std::cout << isPermutation(first, second);*/

	// zad 2 FUNCTIONS
	/*int n;
	std::cin >> n;

	if (invalidInput(n))
	{
		std::cerr << "Invalid number";
		return 1;
	}
	std::cout << isPalindrome(n);*/
}
