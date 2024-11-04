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
	if (symbol >= 'a' && symbol <= 'z') {
		return symbol + 'A' - 'a';
  }
	return symbol;
}

char toLower(char symbol) {
	if (symbol >= 'A' && symbol <= 'Z') {
		return symbol + 'a' - 'A';
  }
	return symbol;
}

int toNumber(char symbol) {
	if (isDigit(symbol)) {
		return symbol - '0';
  }
	return -1;
}

char toCharacter(int number) {
	return number + '0';
}

int power(int base, unsigned int exponent) {
	int result = 1;
	for (int i = 0; i < exponent; i++) {
		result *= base;
	}
	return result;
}

bool isPrime(unsigned int number) {
	int nSquared = sqrt(number);
	for (int i = 2; i <= nSquared; i++) {
		if (number % i == 0) {
			return false;
    }
	}
	return true;
}

short getLength(int number) {
	short digits = 0;
	while (number) {
		digits++;
		number /= 10;
	}
	return digits;
}

unsigned getDigitOccurences(unsigned number, int digit) {
	int occurences = 0;
	while (number) {
		if (number % 10 == digit) {
			occurences++;
    }
		number /= 10;
	}
	return occurences;
}

unsigned toSorted(unsigned n) {
	unsigned sorted = 0;
	for (int digit = 1; digit <= 9; digit++) {
		unsigned occur = getDigitOccurences(n, digit);
		for (size_t i = 0; i < occur; i++) {
			sorted = sorted * 10 + digit;
		}
	}
	return sorted;
}

int toReversed(int n) {
	int reversed = 0;
	while (n) {
		reversed = reversed * 10 + n % 10;
		n /= 10;
	}
	return reversed;
}

bool isPermutation(int first, int second) {
	for (int i = 0; i <= 9; i++) {
		if (getDigitOccurences(first, i) != getDigitOccurences(second, i)) {
			return false;
    }
	}
	return true;
}

bool isPalindrome(int n) {
	return n == toReversed(n);
}

