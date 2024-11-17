#include <iostream>

int gettingSmallerSum(int arr[][100], int, int, int);
int gettingSum(int arr[][100], int);

int main()
{
    int originalArr[100][100];

    uint mLen, nLen;
    std::cout << "Input the lenght of the array: ";
    std::cin >> mLen >> nLen;

    std::cout << "Input the elements of the array";
    for (size_t i = 0; i < mLen; i++)
    {
        for (size_t j = 0; j < nLen; j++)
        {
            std::cin >> originalArr[i][j];
        }
        std::cout << '\n';
    }
    
    uint subArrLen;
    std::cin >> subArrLen;

}

int gettingSmallerSum(int original[][100], int mLen, int nLen, int subArrLen)
{
    int sum = 0;
    int auxSum = 0;


    for (size_t i = 0; i < nLen - (subArrLen - 1); i++)
    {
        for (size_t j = 0; j < mLen - (subArrLen - 1); j++)
        {
            auxSum = gettingSum(original, j, i);
            
            if (i == 0) sum = auxSum;

            if (sum < auxSum) sum = auxSum;
        }
    }
    
    return sum;
}

int gettingSum(int original[][100], int j, int i)
{
    int sum = original[j][i] + original[j][i + 1] + original[j + 1][i] + original[j + 1][i + 1];
    return sum;
}
