#include <iostream>

// 1
void printSmallestSum(int arr[][100], int, int, int);
int getSum(int arr[][100], int, int, int);

// 2
void printSmallestIndexesPerRowAndCol(int arr[][100], int, int);
bool isSmallestPerColumn(int arr[][100], int, int, int, int);

int main()
{
    // 1
    // int originalArr[100][100];

    // uint rowLen, colLen;
    // std::cout << "Input the lenght of the array: ";
    // std::cin >> rowLen >> colLen;

    // std::cout << "Input the elements of the array: ";
    // for (size_t i = 0; i < rowLen; i++)
    // {
    //     for (size_t j = 0; j < colLen; j++)
    //     {
    //         std::cin >> originalArr[i][j];
    //     }
    //     std::cout << '\n';
    // }
    
    // uint subArrLen;
    // std::cin >> subArrLen;

    // printSmallestSum(originalArr, rowLen, colLen, subArrLen);

    // 2
    int arr[100][100];

    std::cout << "Input the lenght of the array";
    uint rowLen, colLen;
    std::cin >> rowLen >> colLen;

    std::cout << "Input the elements of the array";
    for (size_t i = 0; i < rowLen; i++)
    {
        for (size_t j = 0; j < colLen; j++)
        {
            std::cin >> arr[i][j];
        }
        std::cout<< '\n';
    }
    
    printSmallestIndexesPerRowAndCol(arr, rowLen, colLen);


}

// 1
void printSmallestSum(int original[][100], int rowLen, int colLen, int subArrLen)
{
    int minSum = 0;
    int auxSum = 0;
    uint x = 0, y = 0;


    for (size_t i = 0; i < rowLen - (subArrLen - 1); i++)
    {
        for (size_t j = 0; j < colLen - (subArrLen - 1); j++)
        {
            auxSum = getSum(original, i, j, subArrLen);
            
            if (i == 0 && j == 0) minSum = auxSum;

            if (minSum > auxSum) minSum = auxSum, x = i, y = j;
        }
    }
    
    std::cout << minSum << " (" << x << "," << y << ")";
}

int getSum(int original[][100], int row, int col, int subArrLen)
{
    int sum = 0;

    for (size_t i = row; i < subArrLen + row; i++)
    {
        for (size_t j = col; j < subArrLen + col; j++)
        {
            sum += original[i][j];
        }
    }
    
    return sum;
}


// 2
void printSmallestIndexesPerRowAndCol(int arr[][100], int rowLen, int colLen)
{   
    uint minX[100];
    uint minY[100];
    uint count = 0;
    uint auxY = 0;
    int minNum = 0, auxNum = 0;

    for (size_t i = 0; i < rowLen; i++)
    {
        for (size_t j = 0; j < colLen; j++)
        {
            auxNum = arr[i][j];

            if (j == 0) minNum = auxNum;
            
            if (minNum > auxNum) minNum = auxNum, auxY = j;

            if (j == colLen - 1 && isSmallestPerColumn(arr, rowLen, colLen, auxY, minNum)) 
            {
                minX[count] = i, minY[count] = auxY;
                count++;
            }
                
            
        }
        auxY = 0;
        minNum = 0;
    }
    

    for (size_t i = 0; i < count; i++)
    {
        std::cout << '(' << minX[i] << ',' << minY[i] << ") ";
    }
    
}

bool isSmallestPerColumn(int arr[][100], int rowLen, int colLen, int colLocation, int num)
{
    int minNum = 0, auxNum = 0;
    bool value = false;

    for (size_t i = 0; i < rowLen; i++)
    {
        auxNum = arr[i][colLocation];

        if (i == 0) minNum = auxNum;

        if (minNum > auxNum) minNum = auxNum;

        if (i == rowLen - 1) minNum == num ? value = true : value = false; 
    }

    return value;
}
