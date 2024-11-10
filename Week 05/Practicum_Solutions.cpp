#include <iostream>


//1
void swap(int& first, int& second) {
	int temp = first;
	first = second;
	second = temp;
}

void swap(double& first, double& second) {
	double temp = first;
	first = second;
	second = temp;
}


void swap(char& first, char& second) {
	char temp = first;
	first = second;
	second = temp;
}

void swap(unsigned& first, unsigned& second) {
	unsigned temp = first;
	first = second;
	second = temp;
}



//7
int gcd(unsigned first, unsigned second) {

	if (first < second) { // we want the larger number to be first and the smaller - second
		swap(first, second);
	}

	unsigned rest = first;//search euclidian algorithm

	while (rest) {
		rest = first % second;
		first = second;
		second = rest;
	}

	return first;
}

//2
void simplify(unsigned& nominator, unsigned& denominator) {

	int commonDivisor = gcd(nominator, denominator);
	nominator /= commonDivisor;
	denominator /= commonDivisor;
}


unsigned reverse(unsigned num) {
	int res = 0;
	while (num) {
		res *= 10;
		res += (num % 10);
		num /= 10;
	}

	return res;
}

unsigned countDigits(unsigned num) {
	if (num == 0)
		return 1;

	int res = 0;

	while (num) {
		num /= 10;
		res++;
	}

	return res;
}

unsigned pow(unsigned base, unsigned exponent) {
	if (base == 0)
		return 0;
	unsigned res = 1;

	for (size_t i = 0; i < exponent; i++)
	{
		res *= base;
	}
	return res;
}

//9 
unsigned concat(unsigned  first, unsigned  second) {
	int secondDigitsCount = countDigits(second);

	return first * pow(10, secondDigitsCount) + second;
}

//3
unsigned removeKthDigit(unsigned num, unsigned short k) {
	unsigned short powerOf10 = 1;
	unsigned rightSideOfNum = 0;

	for (unsigned short i = 0; i < k - 1; i++) //take the last k - 1 digits
	{
		rightSideOfNum *= 10;
		rightSideOfNum += (num % 10);
		num /= 10;
	}
	num /= 10; // remove the kth digit

	rightSideOfNum = reverse(rightSideOfNum);


	return concat(num, rightSideOfNum);
	//if the indexation is for front to back 
	//reverse the number at the start and reverse it again at the end

}
//4
void split(unsigned num, unsigned& even, unsigned& odd) {

	even = odd = 0;
	unsigned short counter = 1;

	while (num) {
		if (counter % 2 == 0) { //evens
			even *= 10;
			even += (num % 10);
		}
		else { //odds
			odd *= 10;
			odd += (num % 10);
		}

		num /= 10;
		counter++;
	}

	even = reverse(even);
	odd = reverse(odd);

}

//5 
unsigned trim(unsigned num, unsigned i, unsigned j) {
	unsigned digitsCount = countDigits(num);
	unsigned digitsToTrimFront = i - 1;
	unsigned digitsToTrimBack = digitsCount - j;

	for (size_t i = 0; i < digitsToTrimBack; i++) //trim back
		num /= 10;

	num = reverse(num);

	for (size_t i = 0; i < digitsToTrimFront; i++) //trim front
		num /= 10;


	return reverse(num);

}

//6

void changeDigits(unsigned& n, unsigned& m, unsigned k) {
	n = reverse(n);
	m = reverse(m);
	unsigned leftEndN = 0;
	unsigned leftEndM = 0;

	for (size_t i = 0; i < k - 1; n /= 10, m /= 10, i++)
	{
		leftEndN *= 10;
		leftEndN += (n % 10);
		leftEndM *= 10;
		leftEndM += (m % 10);
	}

	unsigned digitN = (n % 10);
	unsigned digitM = (m % 10);

	n -= digitN;
	n += digitM;
	m -= digitM;
	m += digitN;
	n = concat(leftEndN, reverse(n));
	m = concat(leftEndM, reverse(m));

}

//8 
unsigned lcm(unsigned first, unsigned second) {

	return (first * second) / gcd(first, second);
}


int main() {
}
