#include <iostream>

// Ex. 1
int bitsOfN(int x, int m, int n)
{
	size_t mask = (1 << (m + 1)) - 1;
	return (x & mask) >> (m - n + 1);
}


// Ex. 2
int numOfOnes(int n)
{
	int count = 0;
	while (n)
	{
		if (n & 1)
			count++;
		n >>= 1;
	}
	return count;
}


// Ex. 3
int lastKBits(int n, int k)
{
	return n & ((1 << (k)) - 1);
}


// Ex. 4
void swap(int& a, int& b)
{
	a ^= b;
	b = a ^ b;
	a ^= b;
}


// Ex. 5
void changeBit(int& n, int p, int b)
{
	if (((n >> p) & 1) != b)
		n ^= 1 << p;
}


// Ex. 6
bool isPermutation(int num, int permutation)
{
	return numOfOnes(num) == numOfOnes(permutation);
}


// Bonus Ex. 1
int getSingleElement(int* arr, size_t size)
{
	int result = 0;
	for (int i = 0; i < size; i++)
	{
		result ^= arr[i];
	}
	return result;
}


// Bonus Ex. 2
void printSubSets(int* arr, size_t size)
{
	int currElements = 0;
	while (currElements < (1 << size))
	{
		int index = 0;
		int tempElements = currElements;
		while (tempElements)
		{
			if (tempElements & 1)
				std::cout << arr[index] << " ";
			index++;
			tempElements >>= 1;
		}
		std::cout << "\n";
		currElements += 1;
	}
}



int main()
{
	// Ex. 1
	/*int x, m, n;
	std::cin >> x >> m >> n;

	std::cout << bitsOfN(x, m, n);*/


	// Ex. 2
	/*int n;
	std::cin >> n;

	std::cout << numOfOnes(n);*/


	// Ex. 3
	/*int n, k;
	std::cin >> n >> k;

	std::cout << lastKBits(n, k);*/


	// Ex. 4
	/*int a, b;
	std::cin >> a >> b;

	std::cout << "Before: " << a << " " << b << "\n";
	swap(a, b);
	std::cout << "After: " << a << " " << b << "\n";*/


	// Ex. 5
	/*int n, p, b;
	std::cin >> n >> p >> b;

	changeBit(n, p, b);
	std::cout << n;*/


	// Ex. 6
	/*int permutation, num;
	std::cin >> permutation >> num;

	std::cout << isPermutation(num, permutation);*/


	// Bonus Ex. 1
	/*size_t size;
	std::cin >> size;

	int* arr = new int[size];
	for (int i = 0; i < size; i++)
	{
		std::cin >> arr[i];
	}

	std::cout << getSingleElement(arr, size);*/


	// Bonus Ex. 2
	/*size_t size;
	std::cin >> size;

	int* arr = new int[size];
	for (int i = 0; i < size; i++)
	{
		std::cin >> arr[i];
	}

	printSubSets(arr, size);*/
}
