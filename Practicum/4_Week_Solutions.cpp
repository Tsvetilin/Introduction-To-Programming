#include <iostream>

int main() {
	
	//zad 1
	/*int n = 0;
	ENTER_NUMBER:
	std::cin >> n;
	if (n < 1) {

		std::cout << "Enter a number bigger than 0";
		return 0;

	}
	if ((n == 1) || (n==3) || (n==5) || (n==7) || (n==2) ) {

		std::cout << "prime"<<std::endl;
		return 0;

	}
	if (n % 2 == 0) {

		std::cout << " not a prime";

	}
	else {
		for (int i = 3; i * i <= n; i += 2) {
			if (n % i == 0) {

				std::cout << "prime";
				return 0;

			}

		}
		std::cout << "not a prime";

	}*/

	//zad 2
	/*unsigned long natNumber = 0;
	int n = 0, count = 0;
	std::cin >> natNumber >> n;
	while (natNumber > 0) {

		int d = 0;
		d = natNumber % 10;
		if (d == n) {

			count++;

		}
		natNumber /= 10;

	}
	std::cout << count;*/

	//zad 3
	/*unsigned int n = 0, newNum = 0, newN = 0;
	std::cin >> n;
	for (int i = 0; i <= 9; i++) {
		while (newN > 0) {

			int d = 0;
			d = newN % 10;
			if (d == i) {

				newNum = newNum * 10 + d;

			}
			newN /= 10;

		}
		newN = n;

	}
	std::cout << newNum;*/

	//zad 4
	/*unsigned int n = 0, revNum = 0;
	std::cin >> n;
	while (n > 0) {

		int d = 0;
		d = n % 10;
		revNum = revNum * 10 + d;
		n /= 10;

	}
	std::cout << revNum;*/


	//zad 5
	//zashto ne raboti
	/*unsigned int num = 1, n = 1, m = 1;
	std::cin >> num >> n >> m;
	if (m < n) {

		return 0;

	}
	for (int i = n; i <= m; i++) {

		int numSize = 0, count = 0;
		int newI = i;
		while (newI > 0) {

			count++;
			int d = 0;
			d = newI % 10;
			if (n % d == 0) {

				numSize++;

			}
			newI /= 10;

		}
		if (count == numSize) {

			std::cout << i << std::endl;

		}

	}*/


	return 0;
}
