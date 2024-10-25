#include <iostream>

int main()
{
	//Zadacha 1
	/*
	int n = 0;
	int m = 0;
	std::cin >> (n);
	std::cin >> (m);
	if (n>256 || m>256 || m<n)
	{
		std::cerr << "Invalid codes!";
		return 1;
	}
	while (n < m)
	{
		std::cout << (char)n;
		n++;
	}
	return 0;
	*/

	//Zadacha 2
	/*
	int num = 0;
	int sum = 1;
	std::cin >> num;
	while (num>1)
	{
		sum = sum * num;
		num--;
	}
	std::cout << sum;
	*/

	//Zadacha 3
	/*
	int n = 0;
	int sum = 0;
	std::cin >> n;
	for(int i=0;i<=n;i++)
	{
		for(int j=i;j>0;j--)
		{
			sum = sum + j;
		}
	}
	std::cout << sum;
	return 0;
	*/

	//Zadacha 4
	/*
	int n = 0;
	std::cin >> n;
	for(int i=1;i<=n/2;i++)
	{
		if (n % i == 0) std::cout << (i) << std::endl;
	}
	*/

	//Zadacha 5
	/*
	int n = 0;
	int firstNum = -1;
	int secondNum = 1;
	int nextNum = 0;
	std::cin >> n;
	for (int i = 0; i < n; i++)
	{
		nextNum = firstNum + secondNum;
		std::cout << nextNum << std::endl;
		firstNum = secondNum;
		secondNum = nextNum;
	}
	return 0;
	*/

	//Zadacha 6
	/*
	int n = 0;
	int num = 0;
	int sum = 0;
	std::cin >> n;
	while (num != -1) 
	{
		if (num < n && num%2==0) sum = sum + num;
		std::cin >> num;
	}
	std::cout << sum;
	return 0;
	*/

	//Zadacha 7
	/*
	int m = 0;
	int n = 0;
	std::cin >> m;
	std::cin >> n;
	for (int i=m;i<n;i++)
	{
		int sum = 0;
		for (int j = 1; j <= i/2 ; j++) 
		{
			if (i % j == 0) sum = sum + j;
		}
		if (sum == i) std::cout << i << std::endl;
	}
	return 0;
	*/

    //Zadacha 8
	/*
	int n = 0;
int m = 0;
std::cin >> n;
std::cin >> m;
for (int i = 1; i <= n; i++)
{
	for (int j = 1; j <= m; j++)
	{
		std::cout << ("(");
		std::cout << (i);
		std::cout << (",");
		std::cout << (j);
		std::cout << (") ");
	}
	std::cout << (" ") << std::endl;
}
	 */
}
