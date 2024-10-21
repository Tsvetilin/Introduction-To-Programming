//zad1
/*int n = 0, m = 0;

std::cout << "Start: ";
std::cin >> n;
std::cout << "End: ";
std::cin >> m;

if ((n >= 0 && n <= 256) && (m >= 0 && m <= 256)) {

    for (int i = n; i <= m; i++)
    {
        std::cout << i << "-->" << char(i)<<std::endl;
    }

}
else {
    std::cout << "Invalid codes!";
}*/

//zad2
/*int n = 0, factorial = 1;
std::cin >> n;
for (int i = 1; i <= n; i++)
{
    factorial = factorial * i;

}
std::cout << factorial;*/

//zad3
/*int n = 0, sum = 0;
std::cin >> n;
if(n>0){
for (int i = 1; i <= n; i++)
{
    for (int j = 1; j < i; j++)
    {
        sum += j;
    }

    sum += i;

}
std::cout << sum;
}
else{
    std::cout<<"Invalid data";
}
*/

//zad4
/*int n = 0;
std::cin >> n;
if (n > 0) {

    for (int i = 1; i <=n; i++)
    {
        if (n % i == 0) {
            std::cout << i << " ";
        }
    }

}
else {

    std::cout << "Invalid data";
}*/

//zad5
//int n = 0, sum=0, prev1=0, prev2=1, curr=0;
//std::cin >> n;
   
//for (int i = 2; i < n; i++)
//{
//    curr = prev1 + prev2;
//    prev1 = prev2;
//    prev2 = curr;

//    std::cout << curr << " ";
//}

//zad6
/*int n = 0, sum = 0;
std::cin >> n;
if (n > 0) {

    int m=0;
    while (!(m ==-1)) {
        std::cin >> m;
        if ((m < n) && (m % 2 == 0)) {
            sum += m;
        }
    }
    std::cout << sum;

}
else {
    std::cout << "Invalid data";
}*/
