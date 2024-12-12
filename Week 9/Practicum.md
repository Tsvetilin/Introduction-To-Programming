#include<iostream>

const int MAX_CHAR_ARRAY_LEN = 1024;
const int MAX_COUNTERS = 9;
const int MAX_COUNTERS_EXERCISE_8 = 1024;
const int MAX_LENGTH_WORD_EXERCISE_8 = 100;

//Основни задачи
//Намиране на дължина на символен низ
int myStrlen(const char* str);
//Копиране на символен низ
void myStrcpy(const char* source, char* dest);
//Сравняване на два символни низа
int myStrcmp(const char* str1, const char* str2);
//Конкатенация на два символни низа
void myStrcat(char* first, const char* second);

//Exercise 1
void findNewStrWithoutLetter(char* text, char symbol, int textLen);
//Exercise 2
char* replaceSubstringInPlace(char* text, const char* where, const char* what);
//Exercise 3
void myToUpper(char* text);
void myToLower(char* text);
//Exercise 4
void findTheNumberOfOccurencesOfDigits(char* text, int textLen);
//Exercise 5
void findNewStrWithCapLetters(char* text, int textLen);
//Exercise 6
char* findLastWordInText(char* input, char* result);
//Exercise 7
bool isDelimiter(char c);
int countWordsInText(char* text, int len);
//Exercise 8
bool isLetter(char c);
char toLowerCase(char c);
void findTheMostCommonWord(const char* text);
//Exercise 9
void findSmallestWord(const char* text);


int myStrlen(const char* str) {
	if (str == nullptr) {
		return -1;
	}

	int counter = 0;

	while (*str) {
		counter++;
		str++;
	}

	return counter;
}

void myStrcpy(const char* source, char* dest) {
	if (!source || !dest) {
		return;
	}
	while (*source) {
		*dest = *source;
		dest++;
		source++;
	}
	*dest = '\0';
}

int myStrcmp(const char* str1, const char* str2) {
	if (!str1 || !str2) {
		return 128;
	}

	while ((*str1) == (*str2) && (*str1)) {
		str1++;
		str2++;
	}
	return (*str1 - *str2);
}

void myStrcat(char* first, const char* second) {
	if (!first || second==nullptr) {
		return;
	}

	size_t firstLen = myStrlen(first);
	first += firstLen;
	myStrcpy(second, first);
}

//Exercise 1
void findNewStrWithoutLetter(char* text, char symbol, int textLen) {
	char newText[MAX_CHAR_ARRAY_LEN];
	int textIndex = 0, newTextIndex = 0;

	while (textIndex < textLen) {
		if (text[textIndex] != symbol) {
			newText[newTextIndex] = text[textIndex];
			newTextIndex++;
		}
		textIndex++;
	}

	newText[newTextIndex] = '\0';
	std::cout << "Modified text: " << newText << std::endl;
}

//Exercise 2
char* replaceSubstringInPlace(char* text, const char* where, const char* what) {
	int textLen = 0, whereLen = 0, whatLen = 0;

	while (text[textLen] != '\0') textLen++;
	while (where[whereLen] != '\0') whereLen++;
	while (what[whatLen] != '\0') whatLen++;

	char* current = text;

	while (*current != '\0') {
		char* temp = current;
		int i = 0;
		while (i < whereLen && *temp == where[i]) {
			temp++;
			i++;
		}

		if (i == whereLen) {
			if (whatLen <= whereLen) {
				for (int j = 0; j < whatLen; ++j) {
					current[j] = what[j];
				}
				int shiftLen = whereLen - whatLen;
				for (int j = 0; current[whatLen + j] != '\0'; j++) {
					current[whatLen + j] = current[whereLen + j];
				}
				current[textLen - shiftLen] = '\0';
				textLen -= shiftLen;
			}
			else {
				int shiftLen = whatLen - whereLen;
				for (int j = textLen; j >= current - text + whereLen; j--) {
					text[j + shiftLen] = text[j];
				}
				textLen += shiftLen;

				for (int j = 0; j < whatLen; ++j) {
					current[j] = what[j];
				}
			}
			current += whatLen; // Move past the replaced substring
		}
		else {
			current++; // Move to the next character
		}
	}

	return text;
}

//Exercise 3
void myToUpper(char* text) {
	char newCapText[MAX_CHAR_ARRAY_LEN];

	int indexNewText = 0, indexOrigText = 0;

	while (text[indexOrigText] != '\0') {
		if (text[indexOrigText] >= 'a' && text[indexOrigText] <= 'z') {
			newCapText[indexNewText] = text[indexOrigText] + 'A' - 'a';
		}
		else {
			newCapText[indexNewText] = text[indexOrigText];
		}
		indexNewText++;
		indexOrigText++;
	}

	newCapText[indexNewText] = '\0';

	int newTextLen = myStrlen(newCapText);

	for (size_t i = 0; i < newTextLen; ++i) {
		std::cout << newCapText[i];
	}
	std::cout << std::endl;
}

void myToLower(char* text) {
	char newLowText[MAX_CHAR_ARRAY_LEN];

	int indexNewText = 0, indexOrigText = 0;

	while (text[indexOrigText] != '\0') {
		if (text[indexOrigText] >= 'A' && text[indexOrigText] <= 'Z') {
			newLowText[indexNewText] = text[indexOrigText] + 'a' - 'A';
		}
		else {
			newLowText[indexNewText] = text[indexOrigText];
		}
		indexNewText++;
		indexOrigText++;
	}

	newLowText[indexNewText] = '\0';

	int newTextLen = myStrlen(newLowText);

	for (size_t i = 0; i < newTextLen; ++i) {
		std::cout << newLowText[i];
	}
	std::cout << std::endl;
}

//Exercise 4
void findTheNumberOfOccurencesOfDigits(char* text, int textLen) {
	int indexText = 0;

	int counters[MAX_COUNTERS] = {};

	while (text[indexText] != '\0') {
		if (text[indexText] >= '0' && text[indexText] <= '9') {
			++counters[text[indexText] - '0'];
		}
		++indexText;
	}

	char results[MAX_COUNTERS][MAX_CHAR_ARRAY_LEN] = {};

	for (size_t i = 0; i < MAX_COUNTERS; ++i) {
		if (counters[i] != 0) {
			int pos = 0;

			results[i][pos++] = '0' + i;
			results[i][pos++] = ' ';
			results[i][pos++] = 'x';
			results[i][pos++] = ' ';

			int count = counters[i];
			if (count >= 10) {
				results[i][pos++] = '0' + (count / 10);
			}
			results[i][pos++] = '0' + (count % 10);

			results[i][pos] = '\0';
		}
	}

	for (int i = 0; i < MAX_COUNTERS; ++i) {
		if (results[i][0] != '\0') {
			std::cout << results[i] << std::endl;
		}
	}

	std::cout << std::endl;
}

//Exercise 5
void findNewStrWithCapLetters(char* text, int textLen) {
	char newText[MAX_CHAR_ARRAY_LEN];
	int counter = 0;

	if (textLen <= 0 || textLen > MAX_CHAR_ARRAY_LEN - 1) {
		std::cerr << "Invalid text length!" << std::endl;
		return;
	}

	if (text[0] >= 'a' && text[0] <= 'z') {
		newText[counter++] = text[0] + ('A' - 'a');
	}
	else {
		newText[counter++] = text[0];
	}

	for (int i = 1; i < textLen; ++i) {
		if (text[i - 1] == ' ' && text[i] >= 'a' && text[i] <= 'z') {
			newText[counter++] = text[i] + ('A' - 'a'); 
		}
		else {
			newText[counter++] = text[i];
		}
	}

	newText[counter] = '\0';

	std::cout << "New text: " << newText << std::endl;
}

//Exercise 6
char* findLastWordInText(char* input, char* result) {
	int inputLen = myStrlen(input);

	if (inputLen == 0) {
		result[0] = '\0';
		return result;
	}

	int counterBackwards = inputLen - 1;
	while (counterBackwards >= 0 && input[counterBackwards] != ' ') {
		counterBackwards--;
	}

	int lastSpaceIndex = counterBackwards + 1;

	int indexResult = 0;
	for (int i = lastSpaceIndex; i < inputLen; ++i) {
		result[indexResult++] = input[i];
	}

	result[indexResult] = '\0';

	return result;
}

//Exercise 7
bool isDelimiter(char c) {
	return (c == ' ' || c == '\t' || c == '\n' || c == ',' || c == '.' || c == '!' || c == '?' || c == ';' || c == ':' || c == '-');
}

int countWordsInText(char* text, int len) {
	int wordCount = 0;
	bool inWord = false;

	for (int i = 0; text[i] != '\0'; ++i) {
		if (!isDelimiter(text[i])) {
			if (!inWord) {
				wordCount++;
				inWord = true;
			}
		}
		else {
			inWord = false;
		}
	}

	return wordCount;
}

//Exercise 8
bool isLetter(char c) {
	return (c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z');
}

char toLowerCase(char c) {
	if (c >= 'A' && c <= 'Z') {
		return c + 'a' - 'A';
	}
	return c;
}

void findTheMostCommonWord(const char* text) {
	char currentWord[MAX_LENGTH_WORD_EXERCISE_8];
	char mostCommonWord[MAX_LENGTH_WORD_EXERCISE_8];
	int maxCount = 0;

	char words[MAX_CHAR_ARRAY_LEN][MAX_LENGTH_WORD_EXERCISE_8];
	int counts[MAX_COUNTERS_EXERCISE_8] = {};
	int wordCount = 0;

	int i = 0, j = 0;

	while (text[i] != '\0') {
		while (text[i] != '\0' && !isLetter(text[i])) {
			++i;
		}

		j = 0;
		while (text[i] != '\0' && isLetter(text[i]) && j < MAX_LENGTH_WORD_EXERCISE_8 - 1) {
			currentWord[j++] = toLowerCase(text[i++]);
		}
		currentWord[j] = '\0';

		if (j == 0) {
			continue;
		}

		bool found = false;

		for (int k = 0; k < wordCount; ++k) {
			if (myStrcmp(words[k], currentWord) == 0) {
				counts[k]++;
				if (counts[k] > maxCount) {
					maxCount = counts[k];
					myStrcpy(mostCommonWord, words[k]);
				}
				found = true;
				break;
			}
		}

		if (!found && wordCount < MAX_CHAR_ARRAY_LEN) {
			myStrcpy(words[wordCount], currentWord);
			counts[wordCount] = 1;
			if (maxCount == 0) {
				maxCount = 1;
				myStrcpy(mostCommonWord, currentWord);
			}
			wordCount++;
		}
	}

	if (maxCount > 0) {
		std::cout << "Most common word: " << mostCommonWord << " (" << maxCount << " times)" << std::endl;
	}
	else {
		std::cout << "No words found." << std::endl;
	}
}

//Exercise 9
void findSmallestWord(const char* text) {
	char current_word[MAX_LENGTH_WORD_EXERCISE_8];
	char smallest_word[MAX_LENGTH_WORD_EXERCISE_8] = "";

	int i = 0, j = 0;
	while (text[i] != '\0') {
		while (text[i] != '\0' && !isLetter(text[i])) {
			i++;
		}

		j = 0;
		while (text[i] != '\0' && isLetter(text[i]) && j < 99) {
		current_word[j++] = toLowerCase(text[i++]);
		}
		current_word[j] = '\0';

		if (j == 0) {
			continue;
		}

		if (smallest_word[0] == '\0' || strcmp(current_word, smallest_word) < 0) {
			strcpy(smallest_word, current_word);
		}
	}

	if (smallest_word[0] != '\0') {
		std::cout << "Smallest word: " << smallest_word << std::endl;
	}
	else {
		std::cout << "No words found." << std::endl;
	}
}

int main() {
	//Exercise 1
	//char text[MAX_CHAR_ARRAY_LEN];
	//int textLen;

	//std::cout << "Enter the length of your text: ";
	//std::cin >> textLen;

	//if (!std::cin || textLen < 0 || textLen > MAX_CHAR_ARRAY_LEN) {
	//	std::cerr << "Invalid input!" << std::endl;
	//	return 1;
	//}

	//std::cout << "Enter your text: ";
	//std::cin.ignore();
	//std::cin.getline(text, textLen);

	//char symbol;
	//std::cout << "Enter the character you want to remove: ";
	//std::cin >> symbol;

	//if (!std::cin) {
	//	std::cerr << "Invalid input!" << std::endl;
	//	return 1;
	//}

	//findNewStrWithoutLetter(text, textLen, symbol);

	//Exercise 2
	//char text[MAX_CHAR_ARRAY_LEN];
	//int textLen;
	//std::cout << "Enter the lenght of your text: ";
	//std::cin >> textLen;
	//if (!std::cin || textLen < 0 || textLen > MAX_CHAR_ARRAY_LEN) {
	//std::cerr << "Invalid input! The length of your text must be between 0 and " << MAX_CHAR_ARRAY_LEN << " !" << std::endl;
	//	return 1;
	//}

	//std::cout << "Enter your text: ";
	//std::cin.ignore();
	//std::cin.getline(text, textLen + 1);

	//char where[MAX_CHAR_ARRAY_LEN];
	//int whereLen;
	//std::cout << "Enter the lenght of the word you want to replace: ";
	//std::cin >> whereLen;
	//if (!std::cin || whereLen < 0 || whereLen > MAX_CHAR_ARRAY_LEN) {
	//std::cerr << "Invalid input! The length of your text must be between 0 and " << MAX_CHAR_ARRAY_LEN << " !" << std::endl;
	//	return 1;
	//}

	//std::cout << "Enter the text you want to be replaced: ";
	//std::cin.ignore();
	//std::cin.getline(where, whereLen + 1);

	//char what[MAX_CHAR_ARRAY_LEN];
	/*int whatLen;
	std::cout << "Enter the lenght of the word you want your previous one to be replaced with:  ";
	std::cin >> whatLen;
	if (!std::cin || whatLen < 0 || whatLen > MAX_CHAR_ARRAY_LEN) {
		std::cerr << "Invalid input! The length of your text must be between 0 and " << MAX_CHAR_ARRAY_LEN << " !" << std::endl;
		return 1;
	}

	std::cout << "Enter the word you want your previous one to be replaced with: ";
	std::cin.ignore();
	std::cin.getline(what, whatLen + 1);

	std::cout << "Your new text: " << replaceSubstringInPlace(text, where, what) << std::endl;*/

	//Exercise 3
	/*char text[MAX_CHAR_ARRAY_LEN];
	int textLen;
	std::cout << "Enter the lenght of your text: ";
	std::cin >> textLen;
	if (!std::cin || textLen < 0 || textLen > MAX_CHAR_ARRAY_LEN) {
		std::cerr << "Invalid input! The length of your text must be between 0 and " << MAX_CHAR_ARRAY_LEN << " !" << std::endl;
		return 1;
	}

	std::cout << "Enter your text: ";
	std::cin.ignore();
	std::cin.getline(text, textLen);

	std::cout << "Your text in UPPER CASE: ";
	myToUpper(text);
	std::cout << "Your text in lower case: ";
	myToLower(text);*/

	//Exercise 4
	//char numStr[MAX_CHAR_ARRAY_LEN];
	//int len;
	//std::cout << "Enter the length of your text:";
	//std::cin >> len;
	//if (!std::cin || len < 0 || len > MAX_CHAR_ARRAY_LEN) {
	//std::cerr << "Invalid input! The length of your text must be between 0 and " << MAX_CHAR_ARRAY_LEN << " !" << std::endl;
	//	return 1;
	//}
	//std::cout << "Enter your text: ";
	//std::cin.ignore();
	//std::cin.getline(numStr, len);
	//findTheNumberOfOccurencesOfDigits(numStr, len);
	
	//Exercise 5
    /*char text[MAX_CHAR_ARRAY_LEN];
	int len;
	std::cout << "Enter the length of your text: ";
	std::cin >> len;
	if (!std::cin || len < 0 || len > MAX_CHAR_ARRAY_LEN) {
		std::cerr << "Invalid input! The length of your text must be between 0 and " << MAX_CHAR_ARRAY_LEN << " !" << std::endl;
		return 1;
	}
	std::cout << "Enter your text: ";
	std::cin.ignore();
	std::cin.getline(text, len + 1);
	findNewStrWithCapLetters(text, len + 1);*/

	//Exercise 6
    /*char input[MAX_CHAR_ARRAY_LEN];
	int len;
	std::cout << "Enter the length of your input text: ";
	std::cin >> len;
	if (!std::cin || len < 0 || len > MAX_CHAR_ARRAY_LEN) {
		std::cerr << "Invalid input! The length of your text must be between 0 and " << MAX_CHAR_ARRAY_LEN << "!" << std::endl;
		return 1;
	}
	std::cout << "Enter your text: ";
	std::cin.ignore();
	std::cin.getline(input, len + 1);

	char result[MAX_CHAR_ARRAY_LEN];
	std::cout << "Last word: " << findLastWordInText(input, result) << std::endl;*/

	//Exercise 7
	/*char text[MAX_CHAR_ARRAY_LEN];
	int len;
	std::cout << "Enter the length of your text: ";
	std::cin >> len;
	if (!std::cin || len < 0 || len > MAX_CHAR_ARRAY_LEN) {
		std::cerr << "Invalid input! The length of your text must be between 0 and " << MAX_CHAR_ARRAY_LEN << "!" << std::endl;
		return 1;
	}
	std::cout << "The number of words in your text is: " << countWordsInText(text, len);*/

	//Exercise 8
    /*char text[MAX_CHAR_ARRAY_LEN];
	int len;
	std::cout << "Enter the length of your text: ";
	std::cin >> len;
	if (!std::cin || len < 0 || len > MAX_CHAR_ARRAY_LEN) {
		std::cerr << "Invalid input! The length of your text must be between 0 and " << MAX_CHAR_ARRAY_LEN << "!" << std::endl;
		return 1;
	}
	findTheMostCommonWord(text);*/

	//Exercise 9
	/*char text[MAX_CHAR_ARRAY_LEN];
	int len;
	std::cout << "Enter the length of your text: ";
	std::cin >> len;
	if (!std::cin || len < 0 || len >MAX_CHAR_ARRAY_LEN) {
		std::cerr << "Invalid input! The length of your text must be between 0 and " << MAX_CHAR_ARRAY_LEN << "!" << std::endl;
		return 1;
	}
	findSmallestWord(text);*/

	return 0;
}
