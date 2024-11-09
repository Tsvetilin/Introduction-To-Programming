#include <iostream>

// zad 1

//void swap(int& a, int& b)
//{
//	int swap = a;
//	a = b;
//	b = swap;
//}
//
//void swap(double& a, double& b)
//{
//	double swap = a;
//	a = b;
//	b = swap;
//}

// zad 2

//int gcd(int a, int b)
//{
//	while (a != b)
//	{
//		if (a > b)
//		{
//			a -= b;
//		}
//		else
//		{
//			b -= a;
//		}
//	}
//
//	return a;
//}
//
//void simplifyFraction(int& numerator, int& denominator)
//{
//	int smallestCommonDevider;
//
//	do
//	{
//		smallestCommonDevider = gcd(numerator, denominator);
//
//		numerator /= smallestCommonDevider;
//		denominator /= smallestCommonDevider;
//
//	} while (smallestCommonDevider != 1);
//}
//
//void calculateCommonDenominator(int& denominator1, int& denominator2)
//{
//	int mult1 = denominator1;
//	int mult2 = denominator2;
//
//	denominator1 *= mult2;
//	denominator2 *= mult1;
//}
//
//void addFractions(int numerator1, int denominator1, int numerator2, int denominator2, int& numeratorResult, int& denominatorResult)
//{
//	numerator1 *= denominator2;
//	numerator2 *= denominator1;
//
//	calculateCommonDenominator(denominator1, denominator2);
//
//	numeratorResult = numerator1 + numerator2;
//	denominatorResult = denominator1;
//}
//
//void printFraction(int numeratorResult, int denominatorResult)
//{
//	std::cout << numeratorResult << '\n' << denominatorResult << '\n';
//}
//
//void printSimplifiedFraction(int numeratorResult, int denominatorResult)
//{
//	simplifyFraction(numeratorResult, denominatorResult);
//	printFraction(numeratorResult, denominatorResult);
//}
//
//void readInput(int& numerator1, int& denominator1, int& numerator2, int& denominator2)
//{
//	std::cin >> numerator1 >> denominator1;
//	std::cin >> numerator2 >> denominator2;
//}
//
//void run()
//{
//	int numerator1, denominator1, numerator2, denominator2;
//	readInput(numerator1, denominator1, numerator2, denominator2);
//
//	int numeratorResult, denominatorResult;
//
//	addFractions(numerator1, denominator1, numerator2, denominator2, numeratorResult, denominatorResult);
//
//	std::cout << "Unsimplified Result:\n";
//	printFraction(numeratorResult, denominatorResult);
// 
//	std::cout << "Simplified Result:\n";
//	printSimplifiedFraction(numeratorResult, denominatorResult);
//}

// zad 3

//int numberLength(int number)
//{
//	int length = 0;
//
//	while (number != 0)
//	{
//		number /= 10;
//		length++;
//	}
//
//	return length;
//}
//
//int pow(int number, int power)
//{
//	if (power == 0)
//	{
//		return 1;
//	}
//
//	int result = number;
//
//	for (int i = 1; i < power; i++)
//	{
//		result *= number;
//	}
//
//	return result;
//}
//
//void transformNumberToIntArray(int numberArray[], int number)
//{
//	int index = 0;
//
//	while (number != 0)
//	{
//		numberArray[index] = number % 10;
//
//		number /= 10;
// 
//		index++;
//	}
//}
//
//int removeKDigitFromNumber(int number, int k)
//{
//	int length = numberLength(number);
//
//	int* numberArray = new int[length];
//
//	transformNumberToIntArray(numberArray, number);
//
//	int n = 0;
//	int multiplier = pow(10, length - 1);
//
//	k--;
//
//	for (int i = length - 1; i >= 0; i--)
//	{
//		if (length - i - 1 != k)
//		{
//			n += numberArray[i] * multiplier;
//
//			multiplier /= 10;
//		}
//	}
//
//	return n / 10;
//}
//
//void readInput(int& n, int& k)
//{
//	std::cin >> n >> k;
//}
//
//void printResult(int n)
//{
//	std::cout << n;
//}
//
//void run()
//{
//	int n, k;
//	readInput(n, k);
//
//	int result = removeKDigitFromNumber(n, k);
//
//	printResult(result);
//}

// zad 4

//const int INT_MAX_DIGITS = 10;
//
//int pow(int number, int power)
//{
//	if (power == 0)
//	{
//		return 1;
//	}
//
//	int result = number;
//
//	for (int i = 1; i < power; i++)
//	{
//		result *= number;
//	}
//
//	return result;
//}
//
//int calculateResult(int digits[], int length)
//{
//	int result = 0;
//
//	for (int i = length - 1; i >= 0; i--)
//	{
//		result += digits[i] * pow(10, i);
//	}
//
//	return result;
//}
//
//void separateIntoEvenAndOddDigits(int number, int evenDigits[],int oddDigits[], int& lengthEven, int& lengthOdd)
//{
//	while (number != 0)
//	{
//		int digit = number % 10;
//
//		if (digit % 2 == 0)
//		{
//			evenDigits[lengthEven] = digit;
//
//			lengthEven++;
//		}
//		else
//		{
//			oddDigits[lengthOdd] = digit;
//
//			lengthOdd++;
//		}
//
//		number /= 10;
//	}
//}
//
//void splitNumberIntoEvenAndOddDigits(int number, int& resultEven, int& resultOdd)
//{
//	int evenDigits[INT_MAX_DIGITS];
//	int oddDigits[INT_MAX_DIGITS];
//
//	int lengthEven = 0;
//	int lengthOdd = 0;
//
//	separateIntoEvenAndOddDigits(number, evenDigits, oddDigits, lengthEven, lengthOdd);
//
//	resultEven = calculateResult(evenDigits, lengthEven);
//	resultOdd = calculateResult(oddDigits, lengthOdd);
//}
//
//void readInput(int& number)
//{
//	std::cin >> number;
//}
//
//void printResult(int resultEven, int resultOdd)
//{
//	std::cout << resultEven << ' ' << resultOdd;
//}
//
//void run()
//{
//	int number;
//	readInput(number);
//
//	int resultEven = 0, resultOdd = 0;
//
//	splitNumberIntoEvenAndOddDigits(number, resultEven, resultOdd);
//
//	printResult(resultEven, resultOdd);
//}

// zad 5

//int findNumberLength(int number)
//{
//	int length = 0;
//
//	while (number != 0)
//	{
//		number /= 10;
//		length++;
//	}
//
//	return length;
//}
//
//void addDigitsIntoArray(int numberArray[], int length, int number)
//{
//	int* copyArray = new int[length];
//
//	for (size_t i = 0; i < length; i++)
//	{
//		copyArray[i] = number % 10;
//
//		number /= 10;
//	}
//
//	for (size_t i = 0; i < length; i++)
//	{
//		numberArray[i] = copyArray[length - i - 1];
//	}
//
//	delete[] copyArray;
//	copyArray = nullptr;
//}
//
//int getRangeFromNumber(int number, int start, int end)
//{
//	int length = findNumberLength(number);
//
//	int* numberArray = new int[length];
//
//	addDigitsIntoArray(numberArray, length, number);
//
//	int result = 0;
//	int multiplier = 1;
//
//	start--;
//	end--;
//
//	for (int i = end; i >= start; i--)
//	{
//		result += numberArray[i] * multiplier;
//
//		multiplier *= 10;
//	}
//
//	delete[] numberArray;
//	numberArray = nullptr;
//
//	return result;
//}
//
//void readInput(int& number, int& i, int& j)
//{
//	std::cin >> number >> i >> j;
//}
//
//void printResult(int result)
//{
//	std::cout << result;
//}
//
//void run()
//{
//	int number, i, j;
//	readInput(number, i, j);
//
//	int result = getRangeFromNumber(number, i, j);;
//
//	printResult(result);
//}

// zad 6

// zad 7

//int gcd(int first, int second)
//{
//	while (first != second)
//	{
//		if (first > second)
//		{
//			first -= second;
//		}
//		else
//		{
//			second -= first;
//		}
//	}
//
//	return first;
//}
//
//void readInput(int& a, int& b)
//{
//	std::cin >> a >> b;
//}
//
//void printResult(int result)
//{
//	std::cout << result;
//}
//
//void run()
//{
//	int a, b;
//	readInput(a, b);
//
//	int result = gcd(a, b);
//
//	printResult(result);
//}

// zad 8

//int gcd(int first, int second)
//{
//	while (first != second)
//	{
//		if (first > second)
//		{
//			first -= second;
//		}
//		else
//		{
//			second -= first;
//		}
//	}
//
//	return first;
//}
//
//int lcm(int first, int second)
//{
//	return (first / gcd(first, second)) * second;
//}
//
//void readInput(int& a, int& b)
//{
//	std::cin >> a >> b;
//}
//
//void printResult(int result)
//{
//	std::cout << result;
//}
//
//void run()
//{
//	int a, b;
//	readInput(a, b);
//
//	int result = lcm(a, b);
//
//	printResult(result);
//}

// zad 9

//int pow(unsigned int number, int power)
//{
//	if (power == 0)
//	{
//		return 1;
//	}
//
//	int result = number;
//
//	for (int i = 1; i < power; i++)
//	{
//		result *= number;
//	}
//
//	return result;
//}
//
//int calculateNumberLength(unsigned int number)
//{
//	int length = 0;
//
//	while (number != 0)
//	{
//		number /= 10;
//
//		length++;
//	}
//
//	return length;
//}
//
//void addToCopyArray(int copyArray[], unsigned int number, int length)
//{
//	for (size_t i = 0; i < length; i++)
//	{
//		copyArray[i] = number % 10;
//
//		number /= 10;
//	}
//}
//
//void addDigitsIntoArray(int numberArray[], unsigned int first, unsigned int second, int length, int lengthFirst, int lengthSecond)
//{
//	int* copyArray1 = new int[lengthFirst];
//
//	addToCopyArray(copyArray1, first, lengthFirst);
//
//	for (size_t i = 0; i < lengthFirst; i++)
//	{
//		numberArray[i] = copyArray1[lengthFirst - i - 1];
//	}
//
//	delete[] copyArray1;
//	copyArray1 = nullptr;
//
//	int* copyArray2 = new int[lengthSecond];
//
//	addToCopyArray(copyArray2, second, lengthSecond);
//
//	for (size_t i = lengthFirst; i < length; i++)
//	{
//		numberArray[i] = copyArray2[length - i - 1];
//	}
//
//	delete[] copyArray2;
//	copyArray2 = nullptr;
//}
//
//int concat(unsigned int first, unsigned int second)
//{
//	int lengthFirst = calculateNumberLength(first);
//	int lengthSecond = calculateNumberLength(second);
//
//	int length = lengthFirst + lengthSecond;
//
//	int* numberArray = new int[length];
//
//	addDigitsIntoArray(numberArray, first, second, length, lengthFirst, lengthSecond);
//
//	int result = 0;
//	int power = length - 1;
//
//	for (size_t i = 0; i < length; i++)
//	{
//		result += numberArray[i] * pow(10, power);
//
//		power--;
//	}
//
//	delete[] numberArray;
//	numberArray = nullptr;
//
//	return result;
//}
//
//void readInput(unsigned int& a, unsigned int& b)
//{
//	std::cin >> a >> b;
//}
//
//void printResult(int result)
//{
//	std::cout << result;
//}
//
//void run()
//{
//	unsigned int a, b;
//	readInput(a, b);
//
//	int result = concat(a, b);
//
//	printResult(result);
//}

int main()
{
	run();
}
