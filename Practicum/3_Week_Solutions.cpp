#include <iostream>

int main()
{
    // 1
	//int n = 0, m = 0;

	//std::cin >> n >> m;

	//if (n <= 256 && n >= 0 && m <= 256 && m >= 0)
	//{
	//	
	//	for (int i = n; i < m; i++)
	//	{
	//		char currentLetter = i;
	//		std::cout << i << " " << "-->" << currentLetter << std::endl;

	//	}
	//}
	//else
	//{
	//	std::cout << "Invalid codes!";
	//}


    // 2
	//int num = 0, i = 1;
	//
	//std::cin >> num;
	//int factorial = 1;

	//while (i <= num)
	//{
	//	
	//	 factorial *= i++;
	//}

	//std::cout << factorial;


    // 3
	//int num = 0, sum = 0;

	//std::cin >> num;

	//for (int i = 1; i <= num; i++)
	//{
	//	for (int j = 1; j <= i; j++)
	//	{
	//		sum += j;
	//	} //----> sum+= i*(i+1)/2;
	//}

	//std::cout << sum;


    // 4
    // int n = 0;

    // std::cin >> n;

    // for(int i = 1; i < n; i++)
    // {
    //     if(n % i == 0)
    //     {
    //         std::cout << i << " ";
    //     }
    // }


    // 5
    // int n = 0;
    // int a = 0;
    // int b = 1;

    // std::cin >> n;

    // for (int i = 0; i <= (n - 2) / 2; i++) 
    // {
    //     if (i > 0) 
    //     {
    //         a = a + b;
    //         b = b + a;
    //     }
    //     std::cout << a << " " << b << " ";
    // }


    // 6
    //     int n = 0, n2 = 0, sum = 0;

    // std::cin >> n;

    // while(true)
    // {
    //    std::cin >> n2;
    
    //    if(n2 < n && n2 % 2 == 0)
    //    {
    //         sum += n2;
    //    }
    //    if (n2 == -1)
    //    {
    //        break;
    //    }
    //  }
    
    // std::cout << sum << std::endl;


    // 7
    // int m = 0, n = 0, sum = 0;

    // std::cin >> m >> n;

    // if(m > n)
    // {
    //     m = m + n;
    //     n = m - n;
    //     m = m - n;
    // }

    // for(int i = m; i <= n; i++)
    // {
    //     for(int j = 1; j < i; j++)
    //     {
    //         if (i % j == 0) {
    //             sum += j;
    //         }
    //     }
        
    //     if (sum == i) {
    //         std::cout << i << std::endl;
    //     }
        
    //     sum = 0;
    // }

    // 8
    // int n = 0, m = 0;

    // std::cin >> n >> m;

    // for(int i = 1; i <= n; i++)
    // {
    //     for(int j = 1; j <= m; j++)
    //     {
    //         std::cout << "(" << i << "," << j << ")" << " ";
    //     }
    //     std::cout << std::endl;
    // }

}
