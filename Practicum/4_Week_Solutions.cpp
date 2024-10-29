// week44.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
int AbsoluteValue(int number) {
    if (number < 0) {
        return (-1) * number;
    }
    else
        return number;
}

bool isDigit(char symbol) {

    return (symbol >= '1' && symbol <= '9');

}
int toNumber(char symbol) {
    if (symbol >= '0' && symbol <= '9') {
        return symbol - '0';
    }
}

int toUpper(char symbol) {
    return symbol + 'A' - 'a';
}
int toLower(char symbol) {
    return symbol - 'A' + 'a';
}
char toCharacter(int number){
    if(number >= 0 && number <= 9)
    {
    return number + '0';
        
    }
}

bool isDigit(char symbol){
    bool is_digit = (symbol >= '0' && symbol <= '9');
    return is_digit;
}


int power(int base, unsigned int exponent){
    int final = 1;
    for(int i=0;i<exponent;i++){
        final *= base;
    }
    return final;
}

short getLength(int number){
    int count = 0;
    while(number){
        count++;
        number /= 10;
    }
    return count;
}

bool isPrime(unsigned int number){
    bool is_Prime = true;
    if(number < 2){
        return false;
    }
    else{
    for(int i=2;i*i < number;i++){
        if(number % i == 0){
            is_Prime = false;
        }
    }
    return is_Prime;
}
    
}


int count(int number, int i){
    int count = 0;
    int digit;
    while(number > 0){
        digit = number % 10;
        if(i == digit){
            count++;
        }
        number /= 10;
    }
    return count;
}

bool isPermutation(int n1, int n2){
    int digit;
    bool is_permutation = true;
    int count1 = 0, count2 = 0;
    for(int i = 1; i <= 9;i++){
    count1 = count(n1, i);
    count2 = count(n2, i);
    if(count1 != count2){
        is_permutation = false;
        break;
    }
    }
    return is_permutation;
    
}



bool isPalindrome(int n){
   int n_new = 0;
   int digit;
   int old_n = n;
   bool is_palindrome;
   while(n > 0){
       digit = n % 10;
       if(digit != 0){
       n_new = n_new * 10 + digit;
           
       }
       n = n / 10;
   }
   is_palindrome = (n_new == old_n);
   return is_palindrome;
}


//малко функции към 6-та задача
bool condition_odd(int i, int count){
    return (i != count / 2 + 1);

}

bool condition_even(int i, int count){
    return (i != count / 2 + 1 && i != count / 2);

}
int new_number_zad_6(int number, int count, bool (*func)(int, int)){
    int new_number = 0;
    for(int i = 1; i <= count;i++){
            int digit = (number / power(10, count - i)) % 10;
            int count_break = count / 2 + 1;
            if(func(i, count)){
            new_number = new_number * 10 + digit; 
            }
        }
        return new_number;
}


int main()
{
    // zadacha 1
    
    int n;
    bool isPrime = true;
    std::cin >> n;
    if (n == 1) {
        isPrime = false;
    }
    else {
        for (int i = 2; i * i <= n; i++) {
            if (n % i == 0) {
                isPrime = false;
                break;
            }
        }
    }
    std::cout << isPrime;
    


    // zadacha 2
    unsigned long number;
    int digit;
    int count = 0;
    int digit_new = 0;
    std::cin >> number;
    std::cin >> digit;
  
    while (number > 0) {
        digit_new = number % 10;

        if (digit == digit_new) {
            count = count +  1;
        }
        number /= 10;
       

    }
    std::cout << count;
    
    
    //zadacha 3
    int number;
    int digit;
    int reserve_number;
    std::cin>>number;
    int count = 0;
    reserve_number = number;
    for(int i = 1; i <= 9;i++){
        while(number > 0){
            digit = number % 10;
            
            if(digit == i){
                count++;
                
            }
            number /= 10;
        }
        for(int j = 0; j < count; j++){
           std::cout<<i;
        }
        count = 0;
        number = reserve_number;
        
    }
   

    //zadacha 4
   int n;
   int n_new = 0;
   int digit;
   std::cin>>n;
   while(n > 0){
       digit = n % 10;
       if(digit != 0){
       n_new = n_new * 10 + digit;
           
       }
       n = n / 10;
   }
   std::cout<<n_new;
   

    //zadacha 5
    int k, N, M;
    std::cin>>k>>N>>M;
    bool is_special = true, has_no_nulls = true;
    int number, help_number, digit;
    for(int i = N; i <= M; i++)
    {
        number = i;
        help_number = i;
        while(help_number > 0){
            digit = help_number % 10;
            help_number /= 10;
            if(digit != 0){
                has_no_nulls = true;
            if(k % digit != 0){
                is_special = false;}
           
                
            }
            else{
                has_no_nulls = false;
                break;
            }
            
        }
        
            if(is_special && has_no_nulls){
                std::cout<<number<<' ';
            }
            is_special = true;
            has_no_nulls = true;
       }
        

    //zadacha 6 - bez funkcii

 zad 6
    int number;
    std::cin>>number;
    int count = 0;
    int new_number = 0;
    
    count = getLength(number);
    
    if(count % 2 == 1){
        for(int i = 1; i <= count;i++){
            int digit = (number / power(10, count - i)) % 10;
            int count_break = count / 2 + 1;
            if(i != count_break){
            new_number = new_number * 10 + digit; 
            }
        }
        
    }
    else{
        for(int i = 1; i <= count;i++){
            int digit = (number / power(10, count - i)) % 10;
            int count_break_2 = count / 2 + 1;
            int count_break_1 = count / 2;
            if(i != count_break_1 && i != count_break_2){
            new_number = new_number * 10 + digit; 
            }
        }
    }
    std::cout<<new_number<<" "<< new_number + 1;



//Но забелязваме, че имаме повтарящ се блок код при създаването на новото число(въртенето на for цикъла),
//а ние се стремим да избегнем повторението, затова ще опитаме с функции.
    
// задача 6 с функции от по-горе
    int number;
    std::cin>>number;
    int count = 0;
    int new_number = 0;
    int n;
    count = getLength(number);
    if(count % 2 == 1){
         n = new_number_zad_6(number, count, condition_odd);
        
    }
    else{
        n = new_number_zad_6(number, count, condition_even);
    }
    std::cout<<n<<" "<< n + 1;
    
    
// zadachi funkcii
    /* is_permutation - task 1
   int n1, n2;
std::cin>>n1>>n2;
if(isPermutation(n1, n2)){
    std::cout<<"true";
}
else{
    std::cout<<"false";
}
*/

/*isPalindrome function - task 2
int n;
std::cin>>n;
if(isPalindrome(n)){
    std::cout<<"true";
}
else{
    std::cout<<"false";
}
*/
    
    //function testing
    /*
    std::cout<<isPrime(3)<<'\n';
    std::cout<<isDigit('1')<<'\n';
    std::cout<<power(2, 5)<<'\n';
    std::cout<<getLength(324323)<<'\n';
    std::cout<<isPalindrome(324323)<<'\n';
    std::cout<<isPermutation(324323, 224322)<<'\n';
    std::cout<<toNumber('4')<<'\n';
    */
    
return 0;

}


