
#include <iostream>

int main()
{
	//zadacha 1
	/*
	int num = 0;
	bool isPrime = true;
	std::cin >> num;
	for (int i=2;i<(num-1)/2;i++)
	{
		isPrime = true;
		for(int j=2;j<i;j++)
		{
			if (i % j == 0) isPrime = false;
		}
		for (int j = 2; j < num-i; j++)
		{
			if ((num - i) % j == 0) isPrime = false;
		}
		if(isPrime==true)
		{
			std::cout << (num);
			std::cout << (" = ");
			std::cout << (i);
			std::cout << (" + ");
			std::cout << (num-i) << std::endl;
		}
	}
	return 0;
	*/
	//zadacha 2
	/*
	int n = 0;
	double a = 0.5;
	std::cin >> (n);
	for (int i=0;i<n;i++)
	{
		a = (a * a + 1) / 2;
	}
	std::cout << a;
	return 0;
	*/

	//zadacha 3
	/*
	int n = 0;
	std::cin >> n;
	for(int i=1;i<=n;i++)
	{
		for (int j=0;j<i;j++)
		{
			std::cout << ("$ ");
		}
		std::cout << ("") << std::endl;
	}
	*/

	//zadacha 4
	/*
	int n = 0;
	std::cin >> n;
	std::cout << ("+ ");
	for (int i = 0; i < n; i++)
	{
		std::cout << ("- ");
	}
	std::cout << (" +") << std::endl;
	for (int i = 2; i < n; i++)
	{
		std::cout << ("| ");
		for (int j = 0; j < n; j++)
		{
			std::cout << ("- ");
		}
		std::cout << (" |") << std::endl;
	}
	std::cout << ("+ ");
	for (int i = 0; i < n; i++)
	{
		std::cout << ("- ");
	}
	std::cout << (" +") << std::endl;
	*/

	//zadacha 5
	/*      
	int n = 0;
	std::cin >>  n;
	for (int i=1;i<=n;i++)
	{
		for (int f = 1; f <= i; f++) 
		{
			std::cout << (f);                                      //ako trqbva da sum chesten sum sig che tova e mn losho reshenie
			std::cout << (" ");
		}
	    for (int j=0;j<(n-i)*4+n;j++)
		{
			if (i==n) std::cout << ("-");
			else std::cout << (" ");
			 
		}
		for (int f = i; f > 0; f--)
		{
			std::cout << " ";
			std::cout << (f);
		}
		std::cout << "" << std::endl;
	}     
	for (int i = n - 1; i >= 0; i--)    //new part
	{
		for (int f=1;f<=i;f++)
		{
			std::cout << (f);
			std::cout << " ";
		}
		for (int j = (n-i)*4+n; j >=0; j--)
		{
			std::cout << (" ");
		}
		for (int f = i; f > 0; f--)
		{
			std::cout << (f);
			std::cout << (" ");
		}
		std::cout << "" << std::endl;
	}
	*/
	//6 zadacha
	/*
	 int n=0;
      std::cin >> n;
      for (int i=0;i<n+2;i++)
      {
        std::cout << "#";
      }
      std::cout << std::endl;
      for(int i=1;i<=n;i++)
      {
        std::cout<< "#";
        for(int j=i;j<=n;j++)
        {
          std::cout << j;
        }
        for(int j=1;j<n-(n-i);j++)
        {
          std::cout << j;
        }
        std::cout << "#" << std::endl;
      }
      std::cout << "#";
      
      
      if (n%2==0) 
      {
          for (int i=0;i<n/2-1;i++)
          {
              std::cout << " ";
          }
          std::cout << "XX";
          for (int i=0;i<n/2-1;i++)
          {
              std::cout << " ";
          }
      }
      else
      {
            for (int i=0;i<(n-1)/2;i++)
            {
                std::cout << " ";
            }    
            std::cout << "X";
            for (int i=0;i<(n-1)/2;i++)
            {
                std::cout << " ";
            }    
      } 
      std::cout << "#" << std::endl;
      
      for (int i=n;i>0;i--)
      {
          std::cout << "#";
          for (int j=i;j<=n;j++)
          {
              std::cout << j;
          }
          for (int j=1;j<n-(n-i);j++)
          {
              std::cout << j;
          }
          std::cout << "#" << std::endl;
      }
      for (int i=0;i<n+2;i++)
      {
        std::cout << "#";
      }
      std::cout << std::endl;
	*/
}
