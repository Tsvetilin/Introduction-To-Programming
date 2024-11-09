#include <iostream>

// reads an array and returns the exit code for the operation
int readArray(int* arr, size_t& size, const size_t ARRAY_SIZE) {
	std::cout << "Enter number of elements: ";
	std::cin >> size;

	if (!std::cin)
	{
		std::cerr << "Could not read number of elements.";
		return 1;
	}

	if (size > ARRAY_SIZE)
	{
		std::cerr << "Invalid number of elements. Max number of elements is " << ARRAY_SIZE;
		return 2;
	}

	std::cout << "Enter the elements: ";
	for (size_t i = 0; i < size; i++)
	{
		std::cin >> arr[i];

		if (!std::cin)
		{
			std::cerr << "Could not read array element.";
			return 3;
		}
	}

	return 0;
}

void printArray(int* arr, const size_t size) {
	for (size_t i = 0; i < size; i++)
	{
		std::cout << arr[i] << " ";
	}
}

void fillWithRemainingElements(int* srcArray, const size_t srcSize, int& srcIndex, int* merged, int& mergedIndex) {
	while (srcIndex < srcSize)
	{
		merged[mergedIndex++] = srcArray[srcIndex++];
	}
}

void mergeArrays(int* first, const size_t firstSize, int* second, const size_t secondSize, int* merged) {
	int i = 0, j = 0, k = 0;

	while (i < firstSize && j < secondSize)
	{
		if (first[i] < second[j])
		{
			merged[k++] = first[i++];
		}
		else
		{
			merged[k++] = second[j++];
		}
	}

	fillWithRemainingElements(first, firstSize, i, merged, k);
	fillWithRemainingElements(second, secondSize, j, merged, k);
}

int main() {
	const size_t ARRAY_SIZE = 512;
	size_t firstArrSize, secondArrSize;
	int firstArr[ARRAY_SIZE], secondArr[ARRAY_SIZE], merged[2 * ARRAY_SIZE];

	int firstArrExitCode = readArray(firstArr, firstArrSize, ARRAY_SIZE);
	if (firstArrExitCode != 0) return firstArrExitCode;

	int secondArrExitCode = readArray(secondArr, secondArrSize, ARRAY_SIZE);
	if (secondArrExitCode != 0) return secondArrExitCode;

	mergeArrays(firstArr, firstArrSize, secondArr, secondArrSize, merged);

	std::cout << "Merged array is: ";
	printArray(merged, firstArrSize + secondArrSize);
}
