/* zad 1

int n;
int m;
std::cin >> n;
std::cin >> m;
if(m<n || n>256 || m>256)
{
 std:: cout << "Invalid codes!";
 return 1;
}
char i = n ;
while(i>=n && i<=m)
{
    
        std::cout << i;
        i++;
    
    

}
*/
/*  zad 2
    int n;
std::cin >> n;
if (n<0)
{
    return 1;
}
int result = 1;
for (int i = 2; i <= n; i++)
{
    result *= i;
}
std::cout << result;

*/

/* zad 3

 int n;
int result = 0;
std::cin >> n;
for (int i = 0; i <= n; i++)
{
    
    
    for (int  j = 1; j <= i; j++)
    {
        result += j;
    }
    
    
}

std::cout << result;

*/
/*  zad 4
    int n;
std::cin >> n;
for (int i = 1; i < n; i++)
{
    if (n % i == 0) 
    {
        std::cout << i << " ";
    }
}
*/
    
