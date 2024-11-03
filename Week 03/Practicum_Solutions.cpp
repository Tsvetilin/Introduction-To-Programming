#include <iostream>

int main()
{
	//Exercise 1
	int n, m;
	std::cout << "Enter the values of N and M: ";
	std::cin >> n >> m;
	if (!std::cin || n < 0 || n > 256 || m < 0 || m > 256) {
		std::cerr << "You should enter two positive numbers in the interval [0, 256]!" << std::endl;
		return 1;
	}

	if (n > m) {
		int temp = n;
		n = m;
		m = temp;
	}

	for (size_t i = n; i < m; ++i) {
		std::cout << i << " -> " << (char)i << std::endl;
	}


	//Exercise 2
	int number;
	std::cout << "Enter a positive number: ";
	std::cin >> number;
	if (!std::cin || number < 0) {
		std::cerr << "You should enter a positive number!" << std::endl;
		return 1;
	}

	if (number == 0) {
		std::cout << 1 << std::endl;
	}

	int product = 1;

	for (size_t i = number; i > 0; --i) {
		product *= i;
	}

	std::cout << "The factoriel of " << number << " is: " << product << std::endl;


	//Exercise 3
	int number;
	std::cout << "Enter a positive number bigger than 0: ";
	std::cin >> number;
	if (!std::cin || number <= 0) {
		std::cerr << "You should enter a positive number bigger than 0!" << std::endl;
		return 1;
	}

	if (number == 1) {
		std::cout << "The sum is 1." << std::endl;
	}

	int sumParts = 0, sumWhole = 0;
	for (int i = 1; i <= number; ++i) {
		sumParts = 0;
		for (int j = 1; j <= i; ++j) {
			sumParts += j;
		}
		sumWhole += sumParts;
	}

	std::cout << "The sum for the first " << number << " numbers is: " << sumWhole << std::endl;


	//Exercise 4
	int number;
	std::cout << "Enter a number: ";
	std::cin >> number;
	if (!std::cin) {
		std::cerr << "You should enter a number!" << std::endl;
		return 1;
	}
	int check = number / 2; //There is no need to check after that
	for (size_t i = 1; i <= check; ++i) {
		if (number % i == 0) {
			std::cout << i << " ";
		}
	}

	std::cout << std::endl;


	//Exercise 5
	int number;
	std::cout << "Enter a positive number: ";
	std::cin >> number;
	if (!std::cin || number <= 0) {
		std::cerr << "You should enter a positive number!" << std::endl;
		return 1;
	}

	int fibbNumber;

	if (number == 1) {
		std::cout << 0 << std::endl;
	}
	else if (number == 2) {
		std::cout << 0 << " " << 1 << " ";
	}
	else {
		int first = 0, second = 1, fibbNumber;

		std::cout << first << " " << second << " ";

		for (size_t i = 3; i <= number; ++i) {
			fibbNumber = first + second;
			std::cout << fibbNumber << " ";
			first = second;
			second = fibbNumber;
		}

		std::cout << std::endl;
	}

	std::cout << std::endl;


	//Exercise 6
	int number;
	std::cout << "Enter a number: ";
	std::cin >> number;
	if (!std::cin) {
		std::cerr << "You should enter a number!" << std::endl;
		return 1;
	}

	int newNum, sum = 0;
	std::cout << "Now, enter a row of numbers: ";
	while (std::cin) {
		std::cin >> newNum;
		if (newNum % 2 == 0 && newNum < number) {
			sum += newNum;
		}
		if (newNum == -1) {
			break;
		}
	}

	std::cout << sum << std::endl;


	//Exercise 7
	int m, n;
	std::cout << "Enter two positive numbers: ";
	std::cin >> m >> n;
	if (!std::cin || m < 0 || n < 0) {
		std::cerr << "You should enter two positive numbers!" << std::endl;
	}

	if (m > n) {
		int temp = m;
		m = n;
		n = temp;
	}

	int sum;
	for (size_t i = m; i <= n; ++i) {
		sum = 0;
		int check = i / 2;
		for (size_t j = 1; j <= check; ++j) {
			if (i % j == 0) {
				sum += j;
			}
		}
		if (sum == i) {
			std::cout << i << " ";
		}
	}


	//Exercise 8
	int n, m;
	std::cout << "Enter two positive numbers bigger than 1: ";
	std::cin >> n >> m;
	if (!std::cin || n <= 0 || m <= 0) {
		std::cerr << "You should enter two positive numbers!" << std::endl;
		return 1;
	}

	for (size_t i = 1; i <= n; ++i) {
		for (size_t j = 1; j <= m; ++j) {
			std::cout << "(" << i << ", " << j << ") ";
		}
		std::cout << std::endl;
	}

	return 0;
}
