#include <iostream>

int main()
{
    // 1

    /*int a, b;
	std::cin >> a;
	std::cin >> b;

	
	if (a >= 0 && a <= 126 && b >= 0 && b <= 126)
	{
		for (char i = a; i <= b; i++)
		{
			std::cout << i - 0 << " --> " << i << '\n';
		}
	}
	else (std::cout << "Try again.");*/

    //-------------------------------------------------------
	// 2

	/*int n;
	std::cin >> n;

	int factorial = 1;

	for (int i = 1; i <= n; i++)
	{
		factorial *= i;
	}

	std::cout << factorial;*/

    //----------------------------------------------------
	// 3

	/*int n;

	std::cin >> n;

	int sum = 0;
	int auxiliar = 0;

	for (int i = 1; i <= n; i++)
	{
		auxiliar += i;
		sum += auxiliar;
	}

	std::cout << sum;*/

    //-------------------------------------------------------
	// 4

	/*int n;

	std::cin >> n;

	for (int i = 1; i < n; i++)
	{
		if (n % i == 0)
		{
			std::cout << i << ' ';
		}
	}*/

    //-------------------------------------------------------
	// 5

	/*int n;
	std::cin >> n;

	int fiboAux = 0;
	int fibo = 1;
	int aux = 0;

	std::cout << fiboAux << " " << fibo << " ";

	for (int i = 2; i < 10; i++)
	{
		aux = fibo;
		fibo += fiboAux;
		fiboAux = aux;

		std::cout << fibo << " ";

	}*/

    //----------------------------------------------------------
	// 6

	// int a;
	// std::cin >> a;

	// int num;
	// int sum = 0;

	// do
	// {
	// 	std::cin >> num;

	// 	if (num != -1 && num < a && num % 2 == 0)
	// 	{
	// 		sum += num;
	// 	}
	// } while (num != -1);

	// std::cout << sum;

    //------------------------------------------------------
    // 7

    // int a, b;
    // std::cin >> a >> b;

    // int sum = 0;

    // for (int i = a; i <= b; i++)
    // {
    //     for (int j = 1; j < i; j++)
    //     {
    //         if ((i % j) == 0)
    //         {
    //             sum += j;   
    //         }
    //     }
        
    //     if (sum == i)
    //     {
    //         std::cout << i << '\n';
    //     }
        
    //     sum = 0;
    // }

    //--------------------------------------------
    // 8

    int row, column;
    std::cin >> row >> column;

    for (int i = 1; i <= row; i++)                        
    {
        for (int j = 1; j <= column; j++)
        {
            std::cout << '(' << i << ", " << j << ") ";
        }
        std::cout << '\n';  
    }
    
}
