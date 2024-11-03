
#include <iostream>

//__________________________________________________//
//Task 1 with functions

bool isPrime(unsigned num) {
	if (num <= 1)
	{
		return false;
	}
	unsigned sqrt = std::sqrt(num); //don't need the decimal part
	for (size_t i = 2; i <= sqrt; i++)
	{
		if (num % i == 0)
		{
			return false;
		}
	}
	return true;
}

void printPrimeSum(unsigned equalsNumber) {
	int middle = equalsNumber / 2; //middle to not include the both cases where 20 = 3 + 17 and 20 = 17 + 3
	for (unsigned i = 2; i <= middle; i++)
	{
		if (isPrime(i))
		{
			unsigned filler = equalsNumber - i;
			if (isPrime(filler))
			{
				std::cout << equalsNumber << " = " << i << " + " << filler << std::endl;
			}
		}
	}
}

int main()
{
	unsigned n;
	std::cin >> n;
	printPrimeSum(n);
}

//__________________________________________________//

int main()
{
    //Exercise 1

    int number;
    std::cout << "Enter a positive number: ";
    std::cin >> number;
    if (!std::cin || number < 0) {
        std::cout << "You should enter a positive number!" << std::endl;
        return 1;
    }

    for (int i = 2; i < number; ++i) {
        bool isPrimeI = true;
        for (int k = 2; k <= std::sqrt(i); ++k) {
            if (i % k == 0) {
                isPrimeI = false;
                break;
            }
        }

        if (!isPrimeI) continue;

        for (int j = 2; j < number; ++j) {
            bool isPrimeJ = true;
            int check = j / 2;
            for (int k = 2; k <= check; ++k) {
                if (j % k == 0) {
                    isPrimeJ = false;
                    break;
                }
            }

            if (isPrimeJ && i + j == number) {
                std::cout << i << " + " << j << " = " << number << std::endl;
            }
        }
    }

    //Exercise 2

    int number;
    std::cout << "Enter a number bigger than 0: ";
    std::cin >> number;
    if (!std::cout || number < 1) {
        std::cerr << "You should enter a number bigger than!" << std::endl;
        return 1;
    }
    double currentNumber = 0, previousNumber = (double)(1 / 2);

    for (size_t i = 0; i <= number; ++i) {
        currentNumber = (previousNumber * previousNumber + 1) / 2;
        previousNumber = currentNumber;
    }

    std::cout << "a_n = " << (double)previousNumber << std::endl;

    //Exercise 3

    int number;
    std::cout << "Enter a number bigger than 0: ";
    std::cin >> number;
    if (!std::cin || number < 0) {
        std::cerr << "You should enter a positive number bigger than 0!" << std::endl;
        return 1;
    }

    const char ch = '$';

    for (size_t i = 1; i <= number; ++i) {
        for (size_t j = 1; j <= i; ++j) {
            std::cout << ch;
        }
        std::cout << std::endl;
    }

    //Exercise 4

    int number;
    std::cout << "Enter the dimentions of the frame: ";
    std::cin >> number;
    if (!std::cin || number < 1) {
        std::cerr << "You should enter a positive number bigger than 0!" << std::endl;
        return 1;
    }

    if (number == 1) {
        std::cout << "+" << std::endl;
        return 0;
    }

    std::cout << "+";
    for (size_t i = 1; i < number - 1; ++i) {
        std::cout << "-";
    }
    std::cout << "+" << std::endl;

    for (size_t k = 1; k < number - 1; ++k) {
        std::cout << '|';
        for (size_t f = 1; f < number - 1; ++f) {
            std::cout << '-';
        }
        std::cout << '|' << std::endl;
    }

    std::cout << "+";
    for (size_t i = 1; i < number - 1; ++i) {
        std::cout << "-";
    }
    std::cout << "+" << std::endl;

    //Exercise 5

    int number;
    std::cout << "Enter the length of your bow tie: ";
    std::cin >> number;
    if (!std::cin || number < 1) {
        std::cerr << "You should enter a positive number bigger than 0!" << std::endl;
        return 1;
    }

    if (number == 1) {
        std::cout << "1 - 1" << std::endl;
        return 0;
    }

    std::cout << "1";
    for (size_t i = 1; i < number * 3 - 1; ++i) {
        std::cout << " ";
    }
    std::cout << "1" << std::endl;

    for (size_t j = 1; j < number; ++j) {
        // Left side (1 to j)
        for (size_t k = 1; k <= j; ++k) {
            std::cout << k;
        }

        for (size_t f = 1; f <= (number * 3 - 2 - j * 2); ++f) {
            std::cout << " ";
        }

        for (size_t l = j; l >= 1; --l) {
            std::cout << l;
        }

        std::cout << std::endl;
    }

    for (size_t k = 1; k <= number; ++k) {
        std::cout << k;
    }
    for (size_t f = 0; f < number; ++f) {
        std::cout << "-";
    }
    for (size_t l = number; l >= 1; --l) {
        std::cout << l;
    }
    std::cout << std::endl;

    for (size_t j = number - 1; j >= 1; --j) {
        for (size_t k = 1; k <= j; ++k) {
            std::cout << k;
        }

        for (size_t f = 1; f <= (number * 3 - 2 - j * 2); ++f) {
            std::cout << " ";
        }

        for (size_t l = j; l >= 1; --l) {
            std::cout << l;
        }

        std::cout << std::endl;
    }

    //Exercise 6

    int n;
    std::cout << "Enter a positive number: ";
    std::cin >> n;

    if (!std::cin || n < 1) {
        std::cerr << "You should enter a positive number bigger than 0!" << std::endl;
        return 1;
    }

    for (int i = 0; i < n + 2; ++i) {
        std::cout << "#";
    }
    std::cout << std::endl;

    for (int i = 0; i < n; ++i) {
        std::cout << "#";

        for (int j = 0; j < n; ++j) {
            std::cout << (i + j) % n + 1;
        }

        std::cout << "#";
        std::cout << std::endl;
    }

    std::cout << "#";
    if (n % 2 == 0) {
        for (int i = 0; i < n / 2 - 1; ++i) {
            std::cout << " ";
        }
        std::cout << "xx";
        for (size_t i = n / 2; i < n - 1; ++i) {
            std::cout << " ";
        }
    }
    else {
        for (int i = 0; i < n / 2 - 1; ++i) {
            std::cout << " ";
        }
        std::cout << " x ";
        for (size_t i = n / 2; i < n - 2; ++i) {
            std::cout << " ";
        }
    }
    std::cout << "#" << std::endl;

    for (int i = n - 1; i >= 0; --i) {
        std::cout << "#";

        for (int j = 0; j < n; ++j) {
            std::cout << (i + j) % n + 1;
        }

        std::cout << "#";
        std::cout << std::endl;
    }

    for (int i = 0; i < n + 2; ++i) {
        std::cout << "#";
    }
    std::cout << std::endl;

    //Exercise 8

    int size;
    std::cout << "Enter the size of the matrix: ";
    std::cin >> size;

    if (size < 1) {
        std::cerr << "You should enter a positive number bigger than 0!" << std::endl;
        return 1;
    }

    int currentNumber = 1;

    for (int i = 1; i <= size; ++i) {
        if (i % 2 != 0) {
            for (int j = 1; j <= size; ++j) {
                std::cout << currentNumber << " ";
                ++currentNumber;
            }
        }
        else {
            int end = currentNumber + size - 1;
            for (int j = end; j >= currentNumber; --j) {
                std::cout << j << " ";
            }
            currentNumber += size;
        }
        std::cout << std::endl;
    }

    return 0;
}
