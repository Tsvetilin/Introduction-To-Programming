#include <iostream>

constexpr int ROWS = 100;
constexpr int MAX_WORD_LEN = 1024;


void myStrCpy(const char* source, char* dest) {
	if (!source || !dest)
	{
		return;
	}
	while (*source) {
		*dest = *source;
		dest++;
		source++;
	}
	*dest = '\0';
}

void fillWords(const char* str, char words[][MAX_WORD_LEN], int& wordsCount) {
	if (str == nullptr)
		return;

	wordsCount = 0;

	char curWord[MAX_WORD_LEN]{};
	int curWordIndx = 0;
	int curChar = *str;

	while (curChar) {

		if (curChar == ' ') {
			if (curWordIndx == 0) { //skip the consecutive spaces
				str++;
				curChar = *str;
				continue;
			}
			curWord[curWordIndx] = '\0'; //finish the curWord with terminating zero, otherwise it won't be a valid string
			curWordIndx = 0;

			myStrCpy(curWord, words[wordsCount]); //fill the whole word on the next line
			wordsCount++;

		}
		else {
			curWord[curWordIndx] = curChar;
			curWordIndx++;
		}
		
		str++;
		curChar = *str;
	}


	//fill the last word
	if (curWordIndx == 0) {
		return;
	}
	curWord[curWordIndx] = '\0';

	myStrCpy(curWord, words[wordsCount]);
	wordsCount++;

}

int main()
{


	int wordsCount = 0;

	char words[ROWS][MAX_WORD_LEN];
	char str[] = "Hi     my name is Gosho";

	fillWords(str, words, wordsCount);

	for (int i = 0; i < wordsCount; i++) {
		std::cout << words[i] << std::endl;
	}



}
