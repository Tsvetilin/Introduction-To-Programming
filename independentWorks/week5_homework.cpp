#include <iostream>

int main()
{
    int n1, n2;

    std::cout << "Input the number of elements of the 1st array: ";
    std::cin >> n1;
    if (std::cin.fail() || n1 <= 0)
    {
        std::cout << "Input a valid number!" << '\n';
        return 0;
    }
    
    

    std::cout << "Input the number of elements of the 2nd array: ";
    std::cin >> n2;
    if (std::cin.fail() || n2 <= 0)
    {
        std::cout << "Input a valid number!" << '\n';
        return 0;
    }
    

    int array1[n1], array2[n2], combinedArray[n1 + n2];

    std::cout << "Input the elements of the 1st array (organized): ";
    for (int i = 0; i < n1; i++)
    {
        std::cin >> array1[i];
        if (std::cin.fail())
        {
            std::cout << "Input a valid number!" << '\n';
            return 0;
        }
        if (i > 0 && array1[i - 1] > array1[i])
        {
            std::cout << "The array must be organized!" << '\n';
            return 0;
        }
        
    }

    std::cout << "Input the elements of the 2nd array (organized): ";
    for (int i = 0; i < n2; i++)
    {
        std::cin >> array2[i];
        if (std::cin.fail())
        {
            std::cout << "Input a valid number!" << '\n';
            return 0;
        }
        if (i > 0 && array2[i - 1] > array2[i])
        {
            std::cout << "The array must be organized!" << '\n';
            return 0;
        }
    }

    int posCounArr1 = 0, posCountArr2 = 0, posCountCombArr = 0;
    while (posCounArr1 < n1 && posCountArr2 < n2)
    {
        if (array1[posCounArr1] < array2[posCountArr2])
        {
            combinedArray[posCountCombArr++] = array1[posCounArr1++];
        }
        else
        {
            combinedArray[posCountCombArr++] = array2[posCountArr2++];
        }
    }

    while (posCounArr1 < n1)
    {
        combinedArray[posCountCombArr++] = array1[posCounArr1++];
    }
    while (posCountArr2 < n2)
    {
        combinedArray[posCountCombArr++] = array2[posCountArr2++];
    }

    std::cout << "The combined array sorted is: ";
    for (int i = 0; i < n1 + n2; i++)
    {
        std::cout << combinedArray[i] << ' ';
    }
    std::cout << '\n';
}
