#include <iostream>

void printArray(int arr[], int len);

// 1

void removeNumber(int arr[], int& len, int idx)
{
	int auxNum = 0;

	for (size_t i = idx; i < len-1; i++)
	{
		auxNum = arr[i + 1];
		arr[i + 1] = arr[i];
		arr[i] = auxNum;

		if (i == len - 2) arr[i + 1] = NULL;
	}
}

//-------------------------------------------------
// 2

void creatingNewArray(int arr[], int result[], int a, int b, int len1, int& len2)
{
	int idx = 0;
	int aux = (b <= len1 ? b : len1);
	if (aux == b) len2 = b - a;
	else len2 = len1 - a;

	for (size_t i = a; i < aux ; i++)
	{
		result[idx++] = arr[i];
	}
}

//-------------------------------------------------------------
// 3

bool isSimetric(int arr[], int len)
{
	bool pair = len % 2 == 0 ? true : false;
	int simetryCount = 0;

	for (size_t i = 0; i <= len / 2; i++)
	{
		if (!pair && i == len / 2)
		{
			simetryCount++;
		}
		else if (arr[i] == arr[len - 1 - i])
		{
			simetryCount++;
		}
	}

	return simetryCount == len / 2 + 1 ? true : false;
}

//-----------------------------------------------------------------
// 4

int whoHasMore(int arr[], int len)
{
	int count = 0, auxCount = 0;
	int num = 0;
	

	for (size_t i = 0; i < len; i++)
	{
		for (size_t j = i; j < len; j++)
		{
			if (arr[i] == arr[j]) {
				count++;
			}
			else if (count > 0) break;
		}

		if (count >= auxCount) num = arr[i], auxCount = count;
		
		count = 0;
	}

	return num;
}

//-----------------------------------------------------------------
// 5

int negNumFilter(int arr[], int len)
{
	int count = 0;
	int aux = 0;
	int oldNum = 0;

	for (size_t i = 0; i < len; i++)
	{
		for (size_t j = 0; j < len; j++)
		{
			if (arr[j] < 0)
			{
				aux = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = aux;
				oldNum = aux;
			}

			if (arr[j] == oldNum)
			{
				count++;
			}
		}
		
	}

	return count;
}



int main()
{
	// 1

	/*int arr[1000] = {33, 1, 23, 8, 54, 5, 1, 6};
	int len = 8, idx = 4;
	
	removeNumber(arr, len, idx);
	printArray(arr, len - 1);*/

	//----------------------------------------------------
	// 2

	/*int arr[1000] = { 5, 7, 1, 4, 3, 9, 10 };
	int result[1000];
	int len1 = 7;
	int len2 = 0;
	int a = 2, b = 8;
	
	creatingNewArray(arr, result, a, b, len1, len2);
	printArray(result, len2);*/

	//----------------------------------------------------
	// 3

	/*int arr[1000] = { 1, 2, 3, 3, 2, 1 };
	int len = 6;
	bool simetry = isSimetric(arr, len);

	if (simetry) std::cout << "yes";
	else std::cout << "no";*/

	//----------------------------------------------------
	// 4

	/*int arr[1000] = { 3, 3, 2, 2, 2, 5, 2, 2, 3, 3, 3 };
	int len = 11;

	std::cout << whoHasMore(arr, len);*/

	//-----------------------------------------------------
	// 5

	int arr[1000] = { 1, -4, 4, -5, -9, 2, 10 };
	int len = 7;
	int newLen = negNumFilter(arr, len);

	printArray(arr, len - newLen);
}



void printArray(int arr[], int len)
{
	for (size_t i = 0; i < len; i++)
	{
		std::cout << arr[i] << ' ';
	}

	std::cout << '\n';
}
