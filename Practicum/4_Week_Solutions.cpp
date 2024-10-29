//Задачите тук са разделени на три части - (1) цикли (1 до 6), (2) първа част от функции и (3) функции - задача 1 и 2

//Задачи за цикли
#include<iostream>

int main() {
	//Exercise 1
  int number;
  std::cout << "Enter a number: ";
  std::cin >> number;

  if (!std::cin || number < 0) {
	  std::cerr << "You should enter a positive number!" << std::endl;
	  return 1;
  }

  bool isPrime = false;

  if (number == 2) {
	  isPrime = true;
  }

  int lim = number / 2;

  for (int i = 2; i < lim; ++i) {
	  if (number % i == 0) {
		  isPrime = false;
		  break;
	  }
	  else {
		  isPrime = true;
	  }
  }

  std::cout << "Is " << number << " prime? - " << isPrime << std::endl;


	//Exercise 2
	unsigned long number;
	std::cout << "Enter a number: ";
	std::cin >> number;
	if (!std::cin) {
		std::cerr << "You should enter a number: ";
		return 1;
	}

	std::cout << "Enter the digit you are looking for:  ";
	int digit;
	std::cin >> digit;
	if (!std::cin || digit < 0 || digit>9) {
		std::cerr << "You should enter a digit between 0 and 9!" << std::endl;
		return 1;
	}

	int counter = 0;
	int copyNumber = number;

	while (copyNumber != 0) {
		int lastDigit = copyNumber % 10;
		if (lastDigit == digit) {
			counter++;
		}
		copyNumber /= 10;
	}

	std::cout << "You can find " << digit << " in " << number << " exactly " << counter << " times." << std::endl;

	//Exercise 3
	int number;
	std::cout << "Enter a number: ";
	std::cin >> number;

	if (!std::cin || number < 0) {
		std::cerr << "You should enter a positive number!" << std::endl;
		return 1;
	}

	int newNum = 0;

	int counter1 = 0, counter2 = 0, counter3 = 0, counter4 = 0, counter5 = 0;
	int counter6 = 0, counter7 = 0, counter8 = 0, counter9 = 0;

	while (number != 0) {
		int d = number % 10;
		switch (d) {
		case 1: ++counter1; break;
		case 2: ++counter2; break;
		case 3: ++counter3; break;
		case 4: ++counter4; break;
		case 5: ++counter5; break;
		case 6: ++counter6; break;
		case 7: ++counter7; break;
		case 8: ++counter8; break;
		case 9: ++counter9; break;
		}
		number /= 10;
	}

	for (int i = 0; i < counter1; ++i) { 
		newNum = newNum * 10 + 1; 
	}
	for (int i = 0; i < counter2; ++i) { 
		newNum = newNum * 10 + 2; 
	}
	for (int i = 0; i < counter3; ++i) { 
		newNum = newNum * 10 + 3;
	}
	for (int i = 0; i < counter4; ++i) { 
		newNum = newNum * 10 + 4;
	}
	for (int i = 0; i < counter5; ++i) { 
		newNum = newNum * 10 + 5;
	}
	for (int i = 0; i < counter6; ++i) { 
		newNum = newNum * 10 + 6;
	}
	for (int i = 0; i < counter7; ++i) { 
		newNum = newNum * 10 + 7; 
	}
	for (int i = 0; i < counter8; ++i) { 
		newNum = newNum * 10 + 8;
	}
	for (int i = 0; i < counter9; ++i) { 
		newNum = newNum * 10 + 9; 
	}

	std::cout << "New number: " << newNum << std::endl;

	//Exercise 4
	int number;
	std::cout << "Enter a number: ";
	std::cin >> number;
	if (!std::cin || number < 0) {
		std::cerr << "You should enter a number!" << std::endl;
		return 1;
	}

	int revNum = 0;

	while (number != 0) {
		int d = number % 10;
		if (d != 0) {
			revNum = revNum * 10 + d;
		}
		number /= 10;
	}

	std::cout << "Your new number is: " << revNum << std::endl;

	//Exercise 5
  int n, m;
	std::cout << "Enter the value of numbers N and M: ";
	std::cin >> n >> m;
	if (!std::cin) {
		std::cerr << "You should enter numbers!" << std::endl;
		return 1;
	}

	if (n > m) {
		int temp = n;
		n = m;
		m = temp;
	}

	int k;
	std::cout << "Enter the value of K: ";
	std::cin >> k;
	if (!std::cin || k < 0) {
		std::cerr << "You should enter a positive number!" << std::endl;
		return 1;
	}

	std::cout << "Special numbers in the interval [" << n << ", " << m << "] for K = " << k << ": ";

	for (int i = n; i <= m; ++i) {
		int current = i;
		bool isSpecialNumber = true;

		while (current != 0) {
			int d = current % 10;
			if (d == 0 || k % d != 0) {
				isSpecialNumber = false;
				break;
			}
			current /= 10;
		}

		if (isSpecialNumber) {
			std::cout << i << " ";
		}
	}

	std::cout << std::endl;

	//Exercise 6
	int number;
	std::cout << "Enter a number: ";
	std::cin >> number;

	if (!std::cin || number < 0) {
		std::cerr << "You should enter a positive number!" << std::endl;
		return 1;
	}

	int digitCounter = 0, numberCopy = number;
	int newNumber = 0;

	while (numberCopy != 0) {
		numberCopy /= 10;
		++digitCounter;
	}

	int startToMiddle = 0, middleToEnd = 0;

	if (digitCounter % 2 == 0) {
		startToMiddle = digitCounter / 2 - 1;
		middleToEnd = digitCounter / 2 + 1;
	}
	else { 
		startToMiddle = digitCounter / 2;
		middleToEnd = startToMiddle + 1;
	}

	int currentPos = 0;
	
	while (number != 0) {
		int digit = number % 10;
		absNumValue /= 10;

		if (currentPos < startToMiddle || currentPos >= middleToEnd) {
			newNumber = newNumber * 10 + digit;
		}

		++currentPos;
	}

	int reversedNumber = 0;
	while (newNumber != 0) {
		int digit = newNumber % 10;
		reversedNumber = reversedNumber * 10 + digit;
		newNumber /= 10;
	}

	std::cout << reversedNumber << " " << reversedNumber + 1 << std::endl;

	return 0;
}




//Задачи за функции - част 1 - основни функции и имплементацията им
#include<iostream>

//Base functions
int absoluteValue(int number);
bool isDigit(char symbol);
char toUpper(char symbol);
char toLower(char symbol);
int toNumber(char symbol);
char toCharacter(int number);
int power(int base, unsigned int exponent);
bool isPrime(unsigned int number);
short getLength(int number);

int absoluteValue(int number) {
	return number >= 0 ? number : -number;
}

bool isDigit(char symbol) {
	return symbol >= '0' && symbol <= '9';
}

char toUpper(char symbol) {
	if (symbol >= 'a' && symbol <= 'z') {
		return symbol + 'A' - 'a';
	}
	else {
		return symbol;
	}
}

char toLower(char symbol) {
	if (symbol >= 'A' && symbol <= 'Z') {
		return symbol + 'a' - 'A';
	}
	else {
		return symbol;
	}
}

int toNumber(char symbol) {
	if (symbol <= '9' && symbol >= '0') {
		return (int)(symbol - '0');
	}
	else {
		return symbol;
	}
}

char toCharacter(int number) {
	if (number >= 0 && number <= 9) {
		return number;
	}
	else {
		return number + '0';
	}
}

int power(int base, unsigned int exponent) {
	int result = 1;

	if (exponent == 0) {
		return result;
	}
	else {
		for (size_t i = 0; i < exponent; ++i) {
			result *= base;
		}
		return result;
	}
}

bool isPrime(unsigned int number) {
	if (number < 2) {
		return false;
	}

	if (number == 2) {
		return true;
	}

	for (size_t i = 2; i <= number / 2; ++i) {
		if (number % i == 0) {
			return false;
			break;
		}
	}

	return true;
}

short getLength(int number) {
	int counter = 0;

	while (number != 0) {
		int digit = number % 10;
		counter++;
		number /= 10;
	}

	return counter;
}

int main() {
	//ABSOLUTE VALUE
	int number;
	std::cout << "Enter a number: ";
	std::cin >> number;
	if (!std::cin) {
		std::cerr << "You should enter a number: " << std::endl;
		return 1;
	}

	int absValueOfNumber = absoluteValue(number);
	std::cout << "The absolute value of " << number << " is: " << absValueOfNumber << std::endl;

	//IS DIGIT
	char symbol;
	std::cout << "Enter a symbol: ";
	std::cin >> symbol;
	if (!std::cin) {
		std::cerr << "You should enter a symbol!" << std::endl;
		return 1;
	}

	std::cout << "Is " << symbol << " a number between 0 and 9? - " << isDigit(symbol) << std::endl;

	//TO UPPER AND TOLOWER
	char symbol;
	std::cout << "Enter a symbol: ";
	std::cin >> symbol;
	if (!std::cin) {
		std::cerr << "You should enter a symbol!" << std::endl;
		return 1;
	}

	std::cout << "Your new symbol is: " << toUpper(symbol) << std::endl;
	std::cout << "Your new symbol is: " << toLower(symbol) << std::endl;

	//TO NUMBER
	char symbol;
	std::cout << "Enter a symbol: ";
	std::cin >> symbol;
	if (!std::cin) {
		std::cerr << "You should enter a symbol!" << std::endl;
		return 1;
	}

	std::cout << "Symbol to number: " << toNumber(symbol) << std::endl;

	//TO CHARACTER
	int number;
	std::cout << "Enter a number: ";
	std::cin >> number;
	if (!std::cin) {
		std::cerr << "You should enter a number!" << std::endl;
		return 1;
	}

	std::cout << "Number to character: " << toCharacter(number) << std::endl;

	//POWER
	int base;
	std::cout << "Enter your base: ";
	std::cin >> base;
	if (!std::cin) {
		std::cerr << "You should enter a number!" << std::endl;
		return 1;
	}

	unsigned int exponent;
	std::cout << "Enter your exponent: ";
	std::cin >> exponent;
	if (!std::cin) {
		std::cerr << "You should enter a positive number!" << std::endl;
		return 1;
	}

	std::cout << base << "^" << exponent << " = " << power(base, exponent) << std::endl;

	//IS PRIME
	unsigned int number;
	std::cout << "Enter a number: ";
	std::cin >> number;
	if (!std::cin || number < 0) {
		std::cerr << "You should enter a positive number!" << std::endl;
		return 1;
	}

	std::cout << "Is " << number << " prime? " << isPrime(number) << std::endl;

	//GET LENGTH
	int number;
	std::cout << "Enter a number: ";
	std::cin >> number;
	if (!std::cin) {
		std::cout << "You should enter a number!" << std::endl;
		return 1;
	}

	std::cout << "The number " << number << " has " << getLength(number) << " digit/s." << std::endl;

	return 0;
}




// Задачи за функции - част 2 - сигнатури за задачи 2, 3 и 4 от циклите
#include<iostream>

//Exercise 2
int findCountOfDig(unsigned long number, int digit);
//Exercise 3
int findNewNumWithSort(unsigned int number);
//Exercise 4
int reversedNum(unsigned int number);

int findCountOfDig(unsigned long number, int digit) {
	int counter = 0;

	if (number == 0) {
		return 0;
	}
	
	while (number != 0) {
		int p = number % 10;
		if (digit == p) {
			counter++;
		}
		number /= 10;
	}

	return counter;
}

int findNewNumWithSort(unsigned int number) {
	if (number == 0) {
		return 0;
	}

	int newNum = 0;

	int counter1 = 0, counter2 = 0, counter3 = 0, counter4 = 0, counter5 = 0;
	int counter6 = 0, counter7 = 0, counter8 = 0, counter9 = 0;

	while (number != 0) {
		int d = number % 10;
		switch (d) {
		case 1: ++counter1; break;
		case 2: ++counter2; break;
		case 3: ++counter3; break;
		case 4: ++counter4; break;
		case 5: ++counter5; break;
		case 6: ++counter6; break;
		case 7: ++counter7; break;
		case 8: ++counter8; break;
		case 9: ++counter9; break;
		}
		number /= 10;
	}

	for (int i = 0; i < counter1; ++i) {
		newNum = newNum * 10 + 1;
	}
	for (int i = 0; i < counter2; ++i) {
		newNum = newNum * 10 + 2;
	}
	for (int i = 0; i < counter3; ++i) {
		newNum = newNum * 10 + 3;
	}
	for (int i = 0; i < counter4; ++i) {
		newNum = newNum * 10 + 4;
	}
	for (int i = 0; i < counter5; ++i) {
		newNum = newNum * 10 + 5;
	}
	for (int i = 0; i < counter6; ++i) {
		newNum = newNum * 10 + 6;
	}
	for (int i = 0; i < counter7; ++i) {
		newNum = newNum * 10 + 7;
	}
	for (int i = 0; i < counter8; ++i) {
		newNum = newNum * 10 + 8;
	}
	for (int i = 0; i < counter9; ++i) {
		newNum = newNum * 10 + 9;
	}

	return newNum;
}

int reversedNum(unsigned int number) {
	int revNum = 0;

	while (number != 0) {
		int d = number % 10;
		if (d != 0) {
			revNum = revNum * 10 + d;
		}
		number /= 10;
	}

	return revNum;
}


int main() {
	//Exercise 2
	unsigned long number;
	std::cout << "Enter a number: ";
	std::cin >> number;
	if (!std::cin || number < 0) {
		std::cerr << "You should enter a positive number!" << std::endl;
		return 1;
	}

	int digit;
	std::cout << "Enter the digit you are looking for: ";
	std::cin >> digit;
	if (!std::cin) {
		std::cerr << "You should enter a digit!" << std::endl;
		return 1;
	}

	std::cout << "You can find the digit " << digit << " exactly " << findCountOfDig(number, digit) << " time/s." << std::endl;

	//Exercise 3
	unsigned int number;
	std::cout << "Enter a number: ";
	std::cin >> number;
	if (!std::cin || number < 0) {
		std::cerr << "You should enter a positive number!" << std::endl;
		return 1;
	}

	std::cout << "Your new number with sorted digits is: " << findNewNumWithSort(number) << std::endl;

	//Exercise 4
	unsigned int number;
	std::cout << "Enter a number: ";
	std::cin >> number;
	if (!std::cin || number < 0) {
		std::cerr << "You should enter a positive number!" << std::endl;
		return 1;
	}

	std::cout << "Your new number with sorted digits is: " << reversedNum(number) << std::endl;

	return 0;
}




//Задачи за функции - част 3 - пермутации и палиндроми
#include<iostream>

short getLength(unsigned int number);
int findNewNumWithSort(unsigned int number);
int reverseNum(unsigned int number);


//Exercise 1 - Permutations
bool isPermutation(unsigned int number1, unsigned int number2);

//Exercise 2 - Palindromes
//В тази версия присъства нулата, за разлика от задача 4.
bool isPalindrome(unsigned int number);

short getLength(unsigned int number) {
	int counter = 0;

	while (number != 0) {
		int digit = number % 10;
		counter++;
		number /= 10;
	}

	return counter;
}

int findNewNumWithSort(unsigned int number) {
	if (number == 0) {
		return 0;
	}

	int newNum = 0;

	int counter1 = 0, counter2 = 0, counter3 = 0, counter4 = 0, counter5 = 0;
	int counter6 = 0, counter7 = 0, counter8 = 0, counter9 = 0;

	while (number != 0) {
		int d = number % 10;
		switch (d) {
		case 1: ++counter1; break;
		case 2: ++counter2; break;
		case 3: ++counter3; break;
		case 4: ++counter4; break;
		case 5: ++counter5; break;
		case 6: ++counter6; break;
		case 7: ++counter7; break;
		case 8: ++counter8; break;
		case 9: ++counter9; break;
		}
		number /= 10;
	}

	for (int i = 0; i < counter1; ++i) {
		newNum = newNum * 10 + 1;
	}
	for (int i = 0; i < counter2; ++i) {
		newNum = newNum * 10 + 2;
	}
	for (int i = 0; i < counter3; ++i) {
		newNum = newNum * 10 + 3;
	}
	for (int i = 0; i < counter4; ++i) {
		newNum = newNum * 10 + 4;
	}
	for (int i = 0; i < counter5; ++i) {
		newNum = newNum * 10 + 5;
	}
	for (int i = 0; i < counter6; ++i) {
		newNum = newNum * 10 + 6;
	}
	for (int i = 0; i < counter7; ++i) {
		newNum = newNum * 10 + 7;
	}
	for (int i = 0; i < counter8; ++i) {
		newNum = newNum * 10 + 8;
	}
	for (int i = 0; i < counter9; ++i) {
		newNum = newNum * 10 + 9;
	}

	return newNum;
}

int reverseNum(unsigned int number) {
	int revNum = 0;

	while (number != 0) {
		int d = number % 10;
		revNum = revNum * 10 + d;
		number /= 10;
	}

	return revNum;
}

//Exercise 1 - Permutations
bool isPermutation(unsigned int number1, unsigned int number2) {
	bool result = false;

	int lengthNum1, lengthNum2;
	lengthNum1 = getLength(number1);
	lengthNum2 = getLength(number2);

	if (lengthNum1 == lengthNum2) {
		int newNum1, newNum2;
		newNum1 = findNewNumWithSort(number1);
		newNum2 = findNewNumWithSort(number2);
		if (newNum1 == newNum2) {
			result = true;
		}
	}

	return result;
}

//Exercise 2 - Palindromes
bool isPalindrome(unsigned int number) {
	bool isPal = false;
	int reversedNumber = reverseNum(number);

	if (number == reversedNumber) {
		isPal = true;
	}

	return isPal;
}


int main() {
	//Exercise 1 - Permutations
	int number1;
	int number2;
	std::cout << "Enter your two numbers: ";
	std::cin >> number1 >> number2;
	if (!std::cin || number1 < 0 || number2 < 0) {
		std::cerr << "You should enter two positive numbers!" << std::endl;
		return 1;
	}

	bool result = isPermutation(number1, number2);
	std::cout << "Is " << number2 << " permutation of " << number1 << "? - " <<result << std::endl;

  
	//Exercise 2 - Palindromes
	int number;
	std::cout << "Enter a number: ";
	std::cin >> number;
	if (!std::cin || number < 0) {
		std::cerr << "You should enter a positive number!" << std::endl;
	}

	bool result = isPalindrome(number);
	std::cout << "Is " << number << " a palindrome? - " << result << std::endl;

	return 0;
}
