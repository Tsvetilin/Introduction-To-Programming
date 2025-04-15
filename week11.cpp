

#include <iostream>
using namespace std;
int Mystrlen(char* str)
{
    int counter = 0;
    while(*str)
    {
        str++;
        counter++;
    
    }
    return counter;

}
//task 1
void swap(int&x,int&y)
{
    int temp = x;
    x = y;
    y = temp;
}
void reversearray(int*&arr,size_t n)
{
    for (size_t i = 0; i < n/2; i++)
    {
       swap( arr[i] , arr[n - i - 1]);
    }
   

}
// task 2
int* arrays(int* const arr1,int* const arr2,size_t n,size_t m,int k)
{
    int* result = new int[n + m];
    int counter = 0;
    if (!arr1 || !arr2) return nullptr ;
    for (size_t i = 0; i < n; i++)
    {
        
        if (arr1[i] % k == 0) 
        {
            result[counter] = arr1[i];
            counter++;
        
        }
            
    }
    for (size_t j = 0; j < m; j++)
    {
        if(arr2[j]%k==0)
        {
            result[counter] = arr2[j];
            counter++;
        }
    }
    for (size_t r = 0; r < counter; r++)
    {
        cout << result[r]<<" ";
    }
    return result;
    

}
// task 4
int* division(int *arr,size_t n)
{
    int* result = new int[n];
    int counterIdx = 0;
    for (size_t i = 0; i < n; i++)
    {   
        if (arr[i] / arr[i - 1] > 1 || arr[i] / arr[i+1] > 1)
        {
        if(arr[i]%arr[i-1]==0|| arr[i]%arr[i]==0)
        {
            result[counterIdx] = arr[i];
            counterIdx++;
        }
        }
            
       
    }
    for (size_t j = 0; j < counterIdx; j++)
    {
        cout << result[j] << " ";
    }
    return result;

}

char* strcat(char* str1, char* str2)
{
    int n = Mystrlen(str1);
    int m = Mystrlen(str2);
    char* strresult = new char[n + m + 1];
    int resIdx = 0;
    for (size_t i = 0; i < n; i++)
    {
        if(str1[i]>= 'a' && str1[i] <='z')
        {
            strresult[resIdx] = str1[i];
            resIdx++;
        
        }
    }
    for (size_t j = 0; j < m; j++)
    {
        if (str2[j] >= 'A' && str2[j] <= 'Z')
        {
            strresult[resIdx] = str2[j];
            resIdx++;

        }
    }
    for (size_t l = 0; l < resIdx; l++)
    {
        cout << strresult[l];
    }
    return strresult;

}
int main()
{
    //task 1
    /*
    size_t n;
    cin >> n;
    int* arr = new int[n];
    for (size_t i = 0; i < n; i++)
    {
        cin >> *(arr+i);
    }
    reversearray(arr, n);
    for (size_t j = 0; j < n; j++)
    {
        cout << *(arr + j) << "  ";
    }
    delete[] arr;
    */

    // task 2
    /*  
     size_t n, m;
    cin >> n;
    int* arr = new int[n];
    for (size_t i = 0; i < n; i++)
    {
        cin >> *(arr + i);
    }
    cin >> m;
    int* arr2 = new int[m];
    for (size_t j = 0; j < m; j++)
    {
        cin >> *(arr2 + j);
    }
    int k;
    cin >> k;
    int* result= arrays(arr, arr2, n, m, k);
    delete[] result;
    */

    // task 4
    /* 
     int n;
    cin >> n;
    int* arr = new int[n];
    for (size_t j = 0; j < n; j++)
    {
        cin >> arr[j];
    }
    int* result = division(arr, n);
    delete[] result;
    */
    int n;
    char* arr = new char[n];
    for (size_t j = 0; j < n; j++)
    {
        cin >> arr[j];
    }
    int m=1024;
    char* arr2 = new char[std::cin.getline(arr2, m)];
     
    char* result = strcat(arr,arr2)

}



