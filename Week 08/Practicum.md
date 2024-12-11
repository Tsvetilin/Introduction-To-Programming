#include<iostream>

//Задачи от час
bool isEven(int n);
int toPowOfTwo(int pow);

bool isEven(int n) {
	int mask = 1; //0000...1
	return !(n & mask);
}

int toPowOfTwo(int pow) {
	return 1 << pow;
}

bool checkBit(int num, int index) {
	int mask = 1 << index;
	return num & mask;
	//num >>= index;
	//return num & 1;
}

int clearBit(int num, int index) {
	int mask = num & ~(1 << index);
	return num & mask;
}

int setBit(int num, int index) {
	int mask = 1 << index;
	return num | mask;
}

//int toggleBit(int& num, int index) {
//	int mask = 1 << index;
//	num ^= mask;
//	return;
//}

int setBit(int num, int index, bool bit) {
	if (bit) {
		return setBit(num, index);
	}
	else {
		return clearBit(num, index);
	}
}

void printBinary(int num) {
	for (size_t i = 31; i >= 0; i--) {
		std::cout << checkBit(num, i);
	}
	std::cout << std::endl;
}

//Exercise 1
int findNumber(int x, int m, int n);
//Exercise 2
int countOnes(int x);
//Exercise 3
int findLastDigitsInNumber(int num, int k);
//Exercise 4
void swap(int& a, int& b);
//Exercise 5
int changeBit(int n, int p, int b);


//Exercise 1
int findNumber(int x, int m, int n) {
	int mask = (1 << n) - 1;
	int shifted = x >> m;
	return shifted & mask;
}

//Exercise 2
int countOnes(int num) {
	int count = 0;
	while (num > 0) {
		count += num & 1; 
		num >>= 1;        
	}
	return count;
}

//Exercise 3
int findLastDigitsInNumber(int num, int k) {
	int mask = (1 << k) - 1;
	return num & mask;
}

//Exercise 4
void swap(int& a, int& b) {
	a = a ^ b;
	b = a ^ b;
	a = a ^ b;
}

//Exercise 5
int changeBit(int n, int p, int b) {
	if (b == 1) {
		n |= (1 << p);
	}
	else if (b == 0) {
		n &= ~(1 << p);
	}
	return n;
}

//Exercise 6
int countBits(int n) {
	int count = 0;
	while (n) {
		count += n & 1;
		n >>= 1;        
	}
	return count;
}

bool areBitsPermutation(int a, int b) {
	return countBits(a) == countBits(b);
}

//Bonus 1
int findUniqueNumber(int nums[], int size) {
	int unique = 0;
	for (int i = 0; i < size; i++) {
		unique ^= nums[i];
	}
	return unique;
}

//Bonus 2
void printSubsets(int arr[], int n) {
	int totalSubsets = 1 << n;

	for (int mask = 0; mask < totalSubsets; mask++) {
		std::cout << "{ ";
		for (int i = 0; i < n; i++) {
			if (mask & (1 << i)) {
				std::cout << arr[i] << " ";
			}
		}
		std::cout << "}" << std::endl;
	}
}

int main() {
	int num;
	std::cout << "Enter a number: ";
	std::cin >> num;

	//
	//int pos, n;
	//std::cout << "Enter your position: ";
	//std::cin >> pos;

	//std::cout << "Enter the number of bits: ";
	//std::cin >> n;

	//int newNum = findNumber(num, pos, n);
	//std::cout << newNum << std::endl;

	//printBinary(num);
	//std::cout << "Number of ones in " << num << " is: " << countOnes(num);

	//std::cout << "Enter how many digits you want to see: ";
	//int k;
	//std::cin >> k;

	//std::cout << findLastDigitsInNumber(num, k);

	//int number1;
	//std::cout << "Enter the value of your first number: ";
	//std::cin >> number1;

	//int number2;
	//std::cout << "Enter the value of your second number: ";
	//std::cin >> number2;

	//swap(number1, number2);

return 0;
}
