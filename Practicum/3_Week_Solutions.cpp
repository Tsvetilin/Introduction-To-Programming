// week3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{

    /* zadacha 1
    int n, m;
    bool invalid = false;
    char letter;
    std::cout << "Start: ";
    std::cin >> n;
    std::cout << "End: ";
    std::cin >> m;

    if((n<0||n>256)||(m>256||m<0))
    {
    std::cout<<"Invalid codes";
    invalid = true;
    }
    if (invalid == 0) {
        for (int i = n; i < m; i++) {
            letter = char(i);
            std::cout << i << " --> " << letter << '\n';
        }
    }
    */


    /* zadacha 2
    int n;
    std::cin >> n;
    int product = 1;
    for (int i = 1; i <= n; i++) {
        product *= i;
    }
    std::cout <<"Factorial: " << product;
    
    */
    

    /* zadacha 3
    int n;
    std::cin >> n;
    int sum_temp = 0;
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            sum_temp += j;
        }
        sum += sum_temp;
        sum_temp = 0;
    }
    std::cout << sum;
    */


    /* zadacha 4
    int number;
    std::cin >> number;
    int i = 1;
    while (number != 1) {
        if (number % i == 0) {
            number /= i;
            std::cout << i << " ";
        }
        i++;
    }
    */


    /* zadacha 5
    int n;
    std::cin >> n;
    int t1 = 0;
    int t2 = 1;
    int t3;
    std::cout << t1 << " " << t2 << " ";
    for (int i = 0; i < n - 1; i++) {
        t3 = t1 + t2;
        t1 = t2;
        t2 = t3;
        std::cout << t3<<" ";
    }
   */


   /* zadacha 6
    int n;
    int sum = 0;
    std::cin >> n;
    int i;
    do {
        std::cin >> i;
        if (i % 2 == 0 && i < n) {
            sum += i;
        }
    } while (i != -1);

    std::cout << sum;
    */


    /* zadacha 7
    int m, n;
    int sum = 0;
    int i;
    std::cin >> m >> n;
    for (i = m; i <= n; i++) {
        for (int j = 1; j < i; j++) {
            if (i % j == 0) {
                sum += j;
            }
        }
        if (sum == i) {
            std::cout << i << '\n';
        }
        sum = 0;
    }
    */


/* zadacha 8
int n, m;
std::cin >> n >> m;
for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= m; j++) {
        std::cout << "(" << i << ", " << j << ") ";
    }
    std::cout << '\n';
}
*/

//WEEK 4 - ZADACHI

/* zadacha 1
    int n;
    int raz;
    std::cin >> n;
    bool is_prime_1 = true, is_prime_2 = true;
    for (int i = 2; i < n - 1; i++) {
        for (int j = 2; j <= i / 2; j++) {
            
            if (i % j == 0 && j > 2) {
            is_prime_1 = false;
            
            }
    }
        raz = n - i;
        for (int j = 2; j <= raz / 2; j++) {
            if (raz % j == 0 && raz > 2) {
            is_prime_2 = false;
        }
    }
    
    if (is_prime_1 && is_prime_2) {
        std::cout << n << " = " << i << " + " << n - i<< '\n';
    }
    is_prime_1 = true;
    is_prime_2 = true;
    
    
    }
    */

/* zadacha 2
double null_a = 0.5;
double next_a;
int n;
std::cout << "n = ";
std::cin >> n;
for (int i = 1; i <= n; i++) {
    next_a = (null_a * null_a + 1) / 2;
    null_a = next_a;
}
std::cout << next_a;
*/


/* zadacha 3
int n;
std::cin >> n;
for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= i; j++) {
        std::cout << "$ ";
}
    std::cout << '\n';
}
*/


/* zadacha 4
int n;
std::cin >> n;
for (int i = 1; i <= n; i++) {
    if (i == 1 || i == n) {
        std::cout << "+ ";
        for (int j = 2; j <= n - 1; j++) {
            std::cout << "- ";
        }
        std::cout << "+ " << '\n';
    }
    else {
        std::cout << "| ";
        for (int j = 2; j <= n - 1; j++) {
            std::cout << "- ";
        }
        std::cout << "| " << '\n';
    }
}
*/



    /* zadacha 5
    
    int n;
    int whitespace = 0;
    std::cin>>n;
    
    whitespace = 7 +  5 * (n-2);
    
    int w = whitespace;
    int l = whitespace;
    
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= i; j++){
            std::cout<<j<<" ";
        }
        for(int k = 0; k < w; k++){
            if(i == n && (k >= 0 && k < w - 1)){
                std::cout<<"-";
            }
            else{
            std::cout<<" ";}
        }
        w -= 4;
        for(int j = i; j >= 1; j--){
            std::cout<<j<<" ";
        }
        
        std::cout<<'\n';
        
    }
    
    l = w + 8;
    for(int i = n-1; i >= 1; i--){
        for(int j = 1; j <= i; j++){
            std::cout<<j<<" ";
        }
        for(int k = 0; k < l; k++){
            std::cout<<" ";
        }
        
        l += 4;
        for(int j = i; j >= 1; j--){
            std::cout<<j<<" ";
        }
        std::cout<<'\n';
        
    }
    */
 /* zadacha 6
    int n;
    int c;
    std::cin>>n;
    for(int i = 1;i<=n + 2;i++){
        std::cout<<"#";
    }
    std::cout<<'\n';
    
    for(int j = 1; j <= n;j++){
        std::cout<<"#";
        c = j;
        for(int g = 1;g <= n;g++){
            if(c == n+1){
                c = 1;
            }
            std::cout<<c;
            c++;
        }
        std::cout<<"#"<<'\n';
    }
    
    std::cout<<"#";
    if(n % 2 == 1){
        for(int i = 1;i <= n / 2;i++){
            std::cout<<" ";
        }
        std::cout<<"X";
        
        for(int i = 1;i <= n / 2;i++){
            std::cout<<" ";
        }
    
    }
    if(n % 2 == 0){
        for(int i = 1;i <= n / 2 - 1;i++){
            std::cout<<" ";
        }
        std::cout<<"XX";
        
        for(int i = 1;i <= n / 2 - 1;i++){
            std::cout<<" ";
        }
    
    }
    std::cout<<"#"<<'\n';
    
    for(int j = n; j>=1;j--){
        std::cout<<"#";
        c = j;
        for(int g = 1;g <= n;g++){
            if(c == n+1){
                c = 1;
            }
            std::cout<<c;
            c++;
        }
        std::cout<<"#"<<'\n';
    }
    
    
    
    for(int i = 1;i<=n + 2;i++){
        std::cout<<"#";
    }
    */

 /* zadacha 7
    int n;
    std::cin>>n;
    int a = 0;
    int d1 = 1;
    int d2 = 2*n - 1;
    
    for(int i = 1; i <= n; i++){
        
            for(int j = 1;j<=n;j++){
                if(j%2==1){
                    if(j != 1){
                    a = a + d1;
                }
                    else{
                        a = i;
                    }
                }
                else{
                    a = a + d2;
                }
                std::cout<<a<<" ";
            }
            
            d1 += 2;
            d2 -= 2;
            
         
        std::cout<<'\n';
    }
    */


/* zadacha 8
int n;
    std::cin>>n;
    int increm = 1;
    int increm_base;
    for(int i = 1; i <= n; i++)
    {
        
        if(i % 2 == 1)
        {
            increm_base = increm;
            for(int j = increm_base; j <= n * i; j++)
            {
                std::cout<<j<<" ";
                increm += 1;}
            
                increm_base = increm;
                
        }
        
        else
        {
            //int increm_base = increm;
            for(int j = increm_base + n - 1; j >= increm_base; j--)
            {
                std::cout<<j<<" ";
                increm += 1;}
            
                increm_base = increm;
        }
        std::cout<<'\n';
    }
    
     
*/

    return 0;
}

