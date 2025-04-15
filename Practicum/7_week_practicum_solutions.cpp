#include <iostream>
#include <cmath>

void plusOne(int arr[], int, int);
void invertArr(int arr[], int);
void printArr(int arr[], int);

int main()
{
	int arr[10] = { '0', '1', '1' };
	unsigned int num = 3;
	unsigned int len = 2;
	
	plusOne(arr, num, len);
	invertArr(arr, len);
	printArr(arr, len);
	
}


void plusOne(int arr[], int len, int num)
{
	int digit = 0;
	int auxNum = 0;
	num++;


	for (int i = 0; i <= len; i++)
	{
		if (std::pow(2, len - i) <= num && auxNum != num)
		{
			arr[i] = 1;
			auxNum += std::pow(2, len - i);
		}
		else
		{
			arr[i] = 0;
		}
	}
}

void invertArr(int arr[], int len)
{
	for (int i = 0; i < len; i++)
	{

	}
}

void printArr(int arr[], int len)
{

}
