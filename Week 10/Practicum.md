#include<iostream>

const int MAX_STRING_LENGTH = 10000;
const int MAX_WORDS = 100;

const int MAX_LEN_TEXT = 1024;
const int TO_LOWER_CASE = 'a' - 'A';
const int TO_UPPER_CASE = 'A' - 'a';

//Exercise 1
void myReverse(char* text);
//Exercise 2
bool isVowel(char c);
bool isConsonant(char c);
void switchLettersInDiffCases(char* text);

int findLen(char *text) {
	int counter = 0;

	while (text[counter] != '\0') {
		counter++;
	}

	return counter;
}

//Exercise 1
void myReverse(char* text) {
	int textLen = findLen(text);
	char newText[MAX_LEN_TEXT];

	size_t i = 0;

	for (size_t i = 0; i < textLen; ++i) {
		newText[i] = text[textLen - i - 1];
	}

	newText[textLen] = '\0';

	std::cout << newText << std::endl;
}

//Exercise 2
bool isLetter(const char c) {
	return (c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z');
}

bool isVowel(char c) {
	c = (c >= 'A' && c <= 'Z') ? c + TO_LOWER_CASE : c;
	return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'y');
}

bool isConsonant(char c) {
	c = (c >= 'A' && c <= 'Z') ? c + TO_LOWER_CASE : c;
	return isLetter(c) && !(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'y');
}

void switchLettersInDiffCases(char* text) {
	if (text == nullptr) {
		std::cerr << "Error: Null pointer provided!" << std::endl;
		return;
	}

	size_t textLen = std::strlen(text);

	for (size_t i = 0; i < textLen; ++i) {
		if (isLetter(text[i])) {
			if (isVowel(text[i])) {
				if (text[i] >= 'a') {
					text[i] -= TO_LOWER_CASE;
				}
			}
			else if (isConsonant(text[i])) {
				if (text[i] <= 'Z') {
					text[i] += TO_LOWER_CASE;
				}
			}
		}
	}

	std::cout << text << std::endl;
}

//Exercise 3
bool isDigit(const char c) {
	return c >= '1' && c <= '9';
}

void censorDigits(char* text) {
	int textLen = findLen(text);

	for (size_t i = 0; i < textLen; ++i) {
		if (isDigit(text[i])) {
			text[i] = '*';
		}
	}

	std::cout << text << std::endl;
}

//Exercise 4
void selectionSort(char* arr, int size) {
	char min;
	int minIndex;

	for (size_t i = 0; i < size - 1; ++i) {
		minIndex = i;
		min = arr[minIndex];
		for (size_t j = i + 1; j < size; ++j) {
			if (arr[j] < min) {
				minIndex = j;
				min = arr[minIndex];
			}
		}
		arr[minIndex] = arr[i];
		min = arr[minIndex];
	}
}

//Exercise 5
void sortCharactersAndChangeCase(const char* str, char* result) {
	if (str == nullptr || result == nullptr) {
		std::cerr << "Error: Null pointer provided!" << std::endl;
		return;
	}

	int index = 0;

	while (*str != '\0') {
		if (isLetter(*str) && *str >= 'A' && *str <= 'Z') {
			result[index] = *str + TO_LOWER_CASE;
		}
		else {
			result[index] = *str;
		}
		index++;
		str++;
	}

	selectionSort(result, index);

	result[index] = '\0';

	std::cout << result << std::endl;
}

//Exercise 6
int extractWords(const char* input, char words[MAX_STRING_LENGTH][MAX_LEN_TEXT]) {
	int wordCount = 0;
	int i = 0;

	while (input[i] != '\0') {
		while (input[i] == ' ' && input[i] != '\0') {
			++i;
		}

		if (input[i] == '\0') {
			break;
		}

		int wordLength = 0;
		while (input[i] != ' ' && input[i] != '\0' && wordLength < MAX_LEN_TEXT - 1) {
			words[wordCount][wordLength++] = input[i++];
		}

		words[wordCount][wordLength] = '\0';
		++wordCount;

		if (wordCount >= MAX_WORDS) {
			break;
		}
	}

	return wordCount;
}

int main() {
	std::cout << "Enter the length of your text: ";
	int len;
	std::cin >> len;
	if (!std::cin || len < 0 || len > MAX_LEN_TEXT) {
		std::cerr << "Invalid input! Your text must be between 0 and " << MAX_LEN_TEXT << " characters long!" << std::endl;
		return 1;
	}

	char text[MAX_LEN_TEXT];
	std::cout << "Enter your text: ";
	std::cin.ignore();
	std::cin.getline(text, len);

	//Exercise 1
	//std::cout << "Your text in reverse is: ";
	//myReverse(text);

	//Exercise 2
	//std::cout << "Your text with switched cases is: ";
	//switchLettersInDiffCases(text);

	//Exercise 3
	//censorDigits(text);

	//Exercise 4
	/*char result[MAX_LEN_TEXT];
	int resLen;
	std::cout << "Enter the length of your result string: ";
	std::cin >> resLen;
	if (!std::cin || resLen < len || resLen > MAX_LEN_TEXT) {
		std::cerr << "Invalid input! The length of your result string must be between " << len << " and " << MAX_LEN_TEXT << " characters long!" << std::endl;
		return 1;
	}

	sortCharactersAndChangeCase(text, result);*/

	//Exercise 6
	/*char input[MAX_STRING_LENGTH];
	char words[MAX_WORDS][MAX_LEN_TEXT];

	std::cout << "Enter a string: ";
	std::cin.getline(input, MAX_STRING_LENGTH);

	int wordCount = extractWords(input, words);

	std::cout << "Extracted words:" << std::endl;
	for (int i = 0; i < wordCount; ++i) {
		std::cout << words[i] << std::endl;
	}*/

	return 0;
}
