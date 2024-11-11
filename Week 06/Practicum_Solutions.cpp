#include <iostream>
void swap(int& x, int& y)
{
	int temp = x;
	x = y;
	y = temp;
}
void ArraySort(int arr[], int n)
{
	int i, j, min_idx;

	for (i = 0; i < n - 1; i++) {

		min_idx = i;
		for (j = i + 1; j < n; j++) {
			if (arr[j] < arr[min_idx])
				min_idx = j;
		}

		if (min_idx != i)
			swap(arr[min_idx], arr[i]);
	}
}
void print(int arr[])
{
	size_t i = 0;
	while (arr[i] != 0)
	{
		std::cout << arr[i] << " ";
		i++;
	}
}

void remove(int arr[], int& length, int index)//Ex.1
{
	int newArr[1000] = {};
	for (size_t i = 0, j = 0; i < length; i++)
	{
		if (i != index) { newArr[j] = arr[i]; j++; }
	}

	print(newArr);
}
void Ex2(int arr1[], int result[], int a, int b, int length)
{
	for (size_t i = a, j = 0; i < b; i++)
	{
		result[j] = arr1[i];
		j++;
	}
	print(result);
}
void ifSymetric(int arr[], int length)//Ex.3
{
	int middle = length / 2;
	bool isTrue = true;
	for (size_t i = 0, j = length - 1; i < middle; i++, j--)
	{
		if (arr[i] != arr[j])isTrue = false;
	}
	std::cout << isTrue;
}
void Ex4(int arr[], int length)
{
	int longestLine = 0, currLine = 1;
	for (size_t i = 1; i < length; i++)
	{
		if (arr[i] == arr[i - 1])++currLine;
		else if (currLine >= longestLine)
		{
			longestLine = currLine;
			currLine = 1;
		}
	}
	std::cout << longestLine;
}
void Ex5(int arr[], int length)
{
	int newArr[1000] = {};
	for (size_t i = 0, j = 0; i < length; i++)
	{
		if (arr[i] >= 0)
		{
			newArr[j] = arr[i];
			j++;
		}
	}
	print(newArr);
}
void Ex6()
{
	int arr1[1000] = {}, arr2[1000] = {};
	int arr1Size, arrSize2;
	std::cin >> arr1Size >> arrSize2;
	for (size_t i = 0; i < arr1Size; i++)
	{
		std::cin >> arr1[i];
	}
	for (size_t i = 0; i < arrSize2; i++)
	{
		std::cin >> arr2[i];
	}
	bool isTrue = false;
	if (arr1Size <= arrSize2) isTrue = false;
	else
	{
		for (size_t i = 0; i < arr1Size; i++)
		{
			if (arr1[i] == arr2[0])
			{
				for (size_t j = 0; j < arrSize2; j++)
				{
					if (arr1[i + j] == arr2[j])
					{
						isTrue = true;
						break;
					}
				}
			}
			if (isTrue)break;
		}
	}
	std::cout << isTrue;
}
void Ex7()
{
	int arrSize1, arrSize2, arrSize3;
	const size_t ARRAY_SIZE = 1024;
	int arr1[ARRAY_SIZE] = {};
	int arr2[ARRAY_SIZE] = {};
	int arr3[ARRAY_SIZE] = {};

	std::cin >> arrSize1 >> arrSize2;
	if (!std::cin)
	{
		std::cerr << "Invalid input for array size.";
	}
	arrSize3 = arrSize1 + arrSize2;
	if (arrSize1 > ARRAY_SIZE || arrSize2 > ARRAY_SIZE || arrSize3 > ARRAY_SIZE)
	{
		std::cerr << "Invalid number of elements.";
	}

	int input;
	for (size_t i = 0; i < arrSize1; i++)
	{
		std::cin >> input;
		arr1[i] = input;
	}
	for (size_t i = 0; i < arrSize2; i++)
	{
		std::cin >> input;
		arr2[i] = input;
	}

	for (size_t i = 0, j = 0, k = 0; i < arrSize3; i++)
	{
		if ((k == arrSize2) || (arr1[j] <= arr2[k] && j < arrSize1))
		{
			arr3[i] = arr1[j];
			j++;
		}
		else if ((j == arrSize1) || (arr2[k] < arr1[j] && j < arrSize2))
		{
			arr3[i] = arr2[k];
			k++;
		}
	}


	for (size_t i = 0; i < arrSize3; i++)
	{
		std::cout << arr3[i] << std::endl;
	}
}
void Ex8()
{
	int arr1[1000] = {};
	int arr2[1000] = {};
	int result[2000] = {};
	int arrSize1, arrSize2, arrSize3;
	std::cin >> arrSize1 >> arrSize2;
	arrSize3 = arrSize1 + arrSize2;
	for (size_t i = 0; i < arrSize1; i++)
	{
		std::cin >> arr1[i];
	}
	for (size_t i = 0; i < arrSize2; i++)
	{
		std::cin >> arr2[i];
	}

	for (size_t i = 0, k = 0, j = 0; i < arrSize3; i++)
	{
		if (k < arrSize1)
		{
			result[i] = arr1[i];
			k++;
		}
		else
		{
			result[i] = arr2[j];
			j++;
		}
	}

	ArraySort(result, arrSize3);
	print(result);
}
void Ex9()
{
	int arr1[1000] = {};
	int arr2[1000] = {};
	int result[2000] = {};
	int arrSize1, arrSize2, arrSize3;
	std::cin >> arrSize1 >> arrSize2;
	arrSize3 = arrSize1 + arrSize2;
	for (size_t i = 0; i < arrSize1; i++)
	{
		std::cin >> arr1[i];
	}
	for (size_t i = 0; i < arrSize2; i++)
	{
		std::cin >> arr2[i];
	}
	
	size_t k = 0;
	for (size_t i = 0; i < arrSize1; i++)
	{
		for (size_t j = 0; j < arrSize2; j++)
		{
			if (arr1[i] == arr2[j]) 
			{
				result[k] = arr1[i];
				k++;
			}
		}
	}

	ArraySort(result, k);
	print(result);
}


int main()
{


	/*int arr[1000] = {};
	int length;
	std::cin >> length;
	for (size_t i = 0; i < length; i++)
	{
		std::cin >> arr[i];
	}*/

		//Ex.1
/*int index;
std::cin >> index;
remove(arr,length, index);*/

		//Ex.2
/*int result[1000] = {};
int a, b;
std::cin >> a >> b;
Ex2(arr, result, a, b, length);*/

		//Ex.3
//ifSymetric(arr, length);

		//Ex.4
/*Ex4(arr,length);*/

		//Ex.5
//Ex5(arr, length);

		//Ex.6 - mahnete purvata chast ot main-a (cheteneto na masiva)
/*Ex6();*/

		//Ex.7 - mahnete purvata chast ot main-a (cheteneto na masiva)
	/*Ex7();*/

		//Ex.8 - mahnete purvata chast ot main-a (cheteneto na masiva)
	/*Ex8();*/

		//Ex.9 - mahnete purvata chast ot main-a (cheteneto na masiva)
	/*Ex9();*/
}


