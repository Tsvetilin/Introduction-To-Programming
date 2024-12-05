## Решения
#include<iostream>

const int MAX_SIZE_ARRAY = 1024;

//Declarations
char getSymbolFromInt(int digit);
int getIntFromSymbol(char symbol);

void addOneToNum(char number[], int numSize, int numericSystem);
void substractOneFromNumber(char number[], int numSize, int numericSystem);
void findSumOfTwoNumbers(const char num1[], const char num2[], int size, int K, char res[], int resSize);
bool isPalindrome(unsigned int number, int k);
unsigned long long convertToDecimal(const char number[], int size, int base);

int countDigitsInKSystem(int num, int k);
char convert(int num);
int fromKto10(char kSystem[], int kArrSize, int k);
void from10toN(int num, char result[], int& nArrSize, int n);
void fromKtoN(char kSystem[], int kSize, int k, char nSystem[], int& nSize, int n);

//Definitions
char getSymbolFromInt(int digit) {
	if (0 <= digit && digit <= 9) {
		return digit + '0';
	}
	else {
		return digit - 10 + 'A';
	}
}

int getIntFromSymbol(char symbol) {
	if ('0' <= symbol && symbol <= '9') {
		return symbol - '0';
	}
	else if ('A' <= symbol && symbol <= 'Z') {
		return symbol - 'A' + 10;
	}
	else {
		return -1;
	}
}


//Exercise 1
void addOneToNum(char number[], int numSize, int numericSystem) {
	int index = numSize - 1;

	while (true) {
		if (getIntFromSymbol(number[index]) == numericSystem - 1) {
			number[index] = '0';
			index--;
		}
		else {
			number[index] = getSymbolFromInt(getIntFromSymbol(number[index]) + 1);
			return;
		}
	}
}

//Exercise 2
void substractOneFromNumber(char number[], int numSize, int numericSystem) {
	for (size_t i = numSize - 1; i >= 0; --i) {
		if (number[i] != '0') {
			number[i] = getSymbolFromInt(getIntFromSymbol(number[i]) - 1);
			return;
		}
		number[i] = getSymbolFromInt(numericSystem - 1);
	}
}

//Exercise 3
void findSumOfTwoNumbers(const char num1[], const char num2[], int size, int K, char res[], int resSize) {
	for (int i = 0; i < resSize; ++i) {
		res[i] = '0';
	}

	int index = size - 1;
	int resIndex = resSize - 1;

	while (index >= 0) {
		int sum = getIntFromSymbol(num1[index]) +
			getIntFromSymbol(num2[index]) +
			getIntFromSymbol(res[resIndex]);

		if (sum >= K) {
			res[resIndex] = getSymbolFromInt(sum % K);
			if (resIndex > 0) {
				res[resIndex - 1] = getSymbolFromInt(getIntFromSymbol(res[resIndex - 1]) + 1);  // Propagate to next digit
			}
		}
		else {
			res[resIndex] = getSymbolFromInt(sum);
		}

		--index;
		--resIndex;
	}
}

//Exercise 4
bool isPalindrome(unsigned int number, int k) {
	if (k < 2 || k > 16) {
		std::cerr << "Invalid base. K must be between 2 and 16." << std::endl;
		return false;
	}

	char digits[32];
	int size = 0;

	while (number > 0) {
		digits[size++] = getSymbolFromInt(number % k);
		number /= k;
	}

	for (int i = 0; i < size / 2; ++i) {
		if (digits[i] != digits[size - 1 - i]) {
			return false;
		}
	}

	return true;
}

//Exercise 5
unsigned long long convertToDecimal(const char number[], int size, int base) {
	unsigned long long decimalValue = 0;
	unsigned long long power = 1;

	for (int i = size - 1; i >= 0; --i) {
		int digit = getIntFromSymbol(number[i]);
		if (digit < 0 || digit >= base) {
			std::cerr << "Invalid digit in the number for base " << base << ".\n";
			return 0;
		}

		decimalValue += digit * power;
		power *= base;
	}

	return decimalValue;
}

//Bonus
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

void fromKtoN(char kSystem[], int kSize, int k, char nSystem[], int& nSize, int n) {
	from10toN(fromKto10(kSystem, kSize, k), nSystem, nSize, n);
}

int main() {
	int numSize, numericSystem;
	std::cout << "Enter the size of your number and the base of your numeric system: ";
	std::cin >> numSize >> numericSystem;
	if (!std::cin || numSize < 0 || numSize > MAX_SIZE_ARRAY || numericSystem < 0) {
		std::cerr << "Invalid input!" << std::endl;
		return 1;
	}

	char num1[MAX_SIZE_ARRAY];
	std::cout << "Enter your number: ";
	for (size_t i = 0; i < numSize; ++i) {
		std::cin >> num1[i];
	}

	std::cout << "Your number is: ";
	for (size_t i = 0; i < numSize; ++i) {
		std::cout << num1[i] << " ";
	}
	std::cout << std::endl;

	addOneToNum(num1, numSize, numericSystem);
	substractOneFromNumber(num1, numSize, numericSystem);

	char num2[MAX_SIZE_ARRAY];
	std::cout << "Enter your number: ";
	for (size_t i = 0; i < numSize; ++i) {
		std::cin >> num2[i];
	}

	std::cout << "Your number is: ";
	for (size_t i = 0; i < numSize; ++i) {
		std::cout << num2[i] << " ";
	}
	std::cout << std::endl;

	char res[MAX_SIZE_ARRAY];
	int resSize = 2 * numSize;
	findSumOfTwoNumbers(num1, num2, numSize, numericSystem, res, resSize);

	int num;
	std::cout << "Enter another number: ";
	std::cin >> num;
	if (!std::cin) {
		std::cerr << "Invalid input!" << std::endl;
		return 1;
	}

	std::cout << isPalindrome(num, numericSystem);

	return 0;
}

## Задачи

**1.** Да се напише функция, която приема масив от символи, големината му и число K. Масивът от символи е число в K-ична бройна система.
Функцията трябва да увеличава числото с 1 (приемаме, че в масива има достатъчно място). 

**Пример:**

Вход:
```c++
['0', '1', '1'] 3 2
```

Изход:
```c++
['1', '0', '0']
```

**2.** Да се напише функция, която приема масив от символи, големината му и число K. Масивът от символи е число в K-ична бройна система.
Функцията трябва да намалява числото с 1. 

**Пример:**

Вход:
```c++
['1', '0', '0'] 3 2
```

Изход:
```c++
['0', '1', '1']
```

**3.** Напишете функция, която приема два масива от символи, големината им (която е еднаква), число K и празен масив res заедно с големината му. Масивите от символи са числа в K-ична бройна система.
Функцията трябва да прибавя второто към първото и да попълни резултата в res.

**Пример:**

Вход:
```c++
['1', '7', '5'] 
['5', '3', '7']
3 8
[]
```

Изход:
```c++
['7', '3', '4']
```


**4.**  Да се напише функция, която приема число от тип **unsigned int** (32 бита) и **K** - бройна система (<= 16-ична). Функцията да връща дали числото е палиндром в дадената бройна система.

**Пример:**

Вход:
```c++
7 2
```

Изход:
```c++
true
//7 = 111 in binary
```

**5.**  Да се напише функция, която приема два масива от символи, големината им и числа К и N. Масивите са съответно две числа - първото в К-ична, второто в N-ична бройна система. Функцията да връща дали числата са равни.

**Пример:**

Вход:
```c++
['3', '4', '5'] 3 8
['E', '5'] 2 16
```

Изход:
```c++
true
//345(8) = 229(10) = E5(16)
```

**\*Bonus. LIVE DEMO** Да се напише функция, която приема масив от символи - число в К-ична бройна система - и размера му, К и N, и да върне като резултат нов масив, съдържащ числото преобразувано в N-ична бройна система.

**Пример:**

Вход:

```c++
['9', 'C', 'A'] 3
13 --> 7
```

Изход:
```c++
['4', '6', '3','0']
```
