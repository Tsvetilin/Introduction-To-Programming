#include <iostream>

void gettingSmallestSum(int arr[][100], int, int, int);
int gettingSum(int arr[][100], int, int, int, int, int);

int main()
{
    int originalArr[100][100];

    uint row, col;
    std::cout << "Input the lenght of the array: ";
    std::cin >> row >> col;

    std::cout << "Input the elements of the array";
    for (size_t i = 0; i < row; i++)
    {
        for (size_t j = 0; j < col; j++)
        {
            std::cin >> originalArr[i][j];
        }
        std::cout << '\n';
    }
    
    uint subArrLen;
    std::cin >> subArrLen;

    gettingSmallestSum(originalArr, row, col, subArrLen);

}

void gettingSmallestSum(int original[][100], int row, int col, int subArrLen)
{
    int sum = 0;
    int auxSum = 0;
    int index[] = {0, 0};


    for (size_t i = 0; i < row - (subArrLen - 1); i++)
    {
        for (size_t j = 0; j < col - (subArrLen - 1); j++)
        {
            auxSum = gettingSum(original, i, j, row, col, subArrLen);
            
            if (i == 0 && j == 0) sum = auxSum;

            if (sum > auxSum) sum = auxSum, index[0] = i, index[1] = j;
        }
    }
    
    std::cout << sum << " (" << index[0] << "," << index[1] << ")";
}

int gettingSum(int original[][100], int i, int j, int row, int col, int subArrLen)
{
    int sum = 0;

    for (size_t x = i; x < subArrLen + i; x++)
    {
        for (size_t y = j; y < subArrLen + j; y++)
        {
            sum += original[x][y];
        }
    }
    
    return sum;
}
}
