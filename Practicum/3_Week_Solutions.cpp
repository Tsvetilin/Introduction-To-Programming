#include <iostream>


	//Ex.1
//int main()
//{
//	int n, m;
//	std::cout << "Start: "; std::cin >> n;
//	std::cout << "End: "; std::cin >> m;
//	if (n <= 256 && n >= 0 && m <= 256 && m >= 0)
//	{
//		for (int i = n; i <= m; i++)
//		{
//			std::cout << i << " --> " << char(i)<<std::endl;
//		}
//	}
//	else std::cout << "Invalid codes!";
//}



	//Ex.2
//int main()
//{
//	int n, factorial = 1;
//	std::cin >> n;
//	for (int i = 1; i <= n; i++)
//	{
//		factorial *= i;
//	}
//	std::cout << factorial;
//}


	//Ex.3
//int main()
//{
//	int n, sum = 0;
//	std::cin >> n;
//	for (int i = 1; i <= n; i++)
//	{
//		sum += (i * (i + 1)) / 2;
//	}
//	std::cout << sum;
//}


	//Ex.4
//int main()
//{
//	int n;
//	std::cin >> n;
//	for (int i = 1; i <= n; i++)
//	{
//		if (n % i == 0)std::cout << i<<" ";
//	}
//}


	//Ex.5
//int main()
//{
//	
//	int a=0, b=1, n;
//	std::cin >> n;
//	std::cout << a << " ";
//	for (int i = 1; i < n; i++)
//	{
//		if (i % 2 == 1) {
//			b += a;
//			std::cout << b<< " ";
//		}
//		else 
//		{
//			a += b;
//			std::cout << a<<" ";
//		}
//	}
//}


	//Ex.6
//int main()
//{
//	int a,b,sum=0;
//	std::cin >> a;
//	while (std::cin >>b) 
//	{
//		if (b == -1)break;
//		if (b <= a && b % 2 == 0)sum += b;
//	}
//	std::cout << sum;
//}



	//Ex.7
//int main()
//{
//	int a, b;
//	std::cin >> a >> b;
//	for (int i = a; i <= b; i++)
//	{
//		int sum = 0;
//		for (int j = 1; j < i; j++)
//		{
//			if (i % j == 0)sum += j;
//		}
//		if (sum == i)std::cout << i<<std::endl;
//	}
//}



	//Ex.8
//int main()
//{
//	int a, b;
//	std::cin >> a >> b;
//	for (int i = 1; i <= a; i++)
//	{
//		for (int j = 1; j <= b; j++)
//		{
//			std::cout << "(" << i << "," << j << ")";
//		}
//		std::cout << "\n";
//	}
//}
