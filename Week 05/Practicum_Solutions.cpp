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

//int findSmallestCommonDevider(int a, int b)
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
//		smallestCommonDevider = findSmallestCommonDevider(numerator, denominator);
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
//	return n / 10;;
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

int main()
{
	run();
}

