#include <iostream>

// Functions

int absoluteValue(int number)
{
	return number < 0 ? number * -1 : number;
}

bool isDigit(char symbol)
{
	if (symbol >= '0' && symbol <= '9') return true;

	return false;
}

char toUpper(char symbol) {
	return symbol >= 'a' && symbol <= 'z' ? symbol - 'A';
}


int main()
{
	std::cout << absoluteValue(-45) << '\n';
	std::cout << isDigit('#');




	// Loops

	// 1

	/*unsigned int a;
	std::cin >> a;

	bool isPrime = 1;

	for (int i = 2; i < a; i++)
	{
		if ((i != a) && (i != 1) && a % i == 0)
		{
			isPrime = 0;
		}
	}

	std::cout << isPrime;*/

	//-------------------------------------------------
	// 2

	/*unsigned long bigNum;
	unsigned int n;
	std::cin >> bigNum >> n;
	
	int d = 0;
	int counter = 0;

	while (bigNum != 0)
	{
		d = bigNum % 10;
		bigNum /= 10;

		if (d == n)
		{
			counter++;
		}
	}

	std::cout << counter;*/

	//---------------------------------------------------
	// 3

	/*unsigned long originalNum;
	std::cin >> originalNum;

	unsigned long sortedNumber = 0;
	int digitNumber = 0;
	int counter = 0;
	int d = 0;
	unsigned long aux = originalNum;

	while (aux != 0)
	{
		aux /= 10;
		digitNumber++;
	}

	for (int i = 1; i <= digitNumber; i++, aux = originalNum)
	{
		for (int j = 1; j <= digitNumber ; j++)
		{
			d = aux % 10;
			aux /= 10;

			if (d == i)
			{
				std::cout << d;
			}
		}
	}*/

	// Un ciclo de 1 a 9 y se ve cuantas veces hay repetida cada numero, y se imprime las veces




}
