//zad 1
/*int n, m;
int asciiNumber = 0;
std::cin >> n >> m;
if (!(n >= 0 && m <= 256)) {

	std::cout << "Enter valid data";

}
else {
	for (int i = n; i < m; i++) {

			std::cout << i << " -->" << char(i) << std::endl;

		}

}*/

//zad 2
/*int n = 1;
int factorial = n;
std:: cin >> n;
for (int i = 0; i < n; i++) {

	factorial *= n - i;


}
std::cout << factorial;*/

//zad 3
//unsigned int N = 1, sum = 0;
//std::cout << "Enter a natural number"<<std::endl;
//std::cin >> N;
////zashto tozi for spira da raboti za chisla po golemi ot 5
///*for (int i = 1; i <= N; i++) {

//	sum += i;
//	sum += i + 1;

//}*/
//for (int i = 1; i <= N; i++) {
//	for (int j = 1; j < i; j++) {

//		sum += j;

//	}
//	sum += i;

//}
//std::cout << sum;

//zad 4
/*int n = 1;
std::cin >> n;
for (int i = 1; i < n; i++) {
	if (n % i == 0) {

		std::cout << i << std::endl;

	}

}*/

//zad 5
	/*int n = 1, first = 1, prev = 2;
	ENTER_NUMBER:
	std::cout << "Enter how long you want the sequance to be"<<std::endl;
	std::cin >> n;
	if (n < 1) {

		goto ENTER_NUMBER;

	}
	int sum = 0;
	for (int i = 0; i <= n; i++) {

		sum = first + prev;
		prev = first;
		first = sum;
		std::cout << sum << " ";

	}*/

	//zad 6
	/*int size = 1, n = 0, sum = 0;
	ENTER_NUMBER:
	std::cout << "Enter how many numbers" << std::endl;
	std::cin >> size;
	if (size < 1) {

		goto ENTER_NUMBER;

	}
	for (int i = 0; i < size; i++) {

		std::cin >> n;
		if (n == -1) {

			break;

		}
		else if (n < size && (n % 2 == 0)) {

			sum += n;

		}

	}
	std::cout << sum;*/

	//zad 7
	/*int n = 1, m = 1, div = 0;
	ENTER_INTERVAL:
	std::cout << "Enter your interval" << std::endl;
	std::cin >> n >> m;
	if ((m < n) || (n < 1)) {

		goto ENTER_INTERVAL;

	}
	for (int i = n; i < m; i++) {
		for (int j = 1; j < i; j++) {
			if (i % j == 0) {

				div += j;

			}

		}
		if (div == i) {

			std::cout << div << " ";

		}
		div = 0;

	}*/

	//zad 8
	/*int n = 1, m = 1;
	ENTER_MATRIX:
	std::cout << "Enter your matrix" << std::endl;
	std::cin >> n >> m;
	if ((m < 1) || (n < 1)) {

		goto ENTER_MATRIX;

	}
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {

			std::cout << "(" << i << ", " << j << ")" << " ";

		}
		std::cout << std::endl;

	}*/
