#include <iostream>

constexpr int ROWS = 100;
constexpr int MAX_WORD_LEN = 512;


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

void mySwap(char& ch1, char& ch2) {
	char temp = ch1;
	ch1 = ch2;
	ch2 = temp;
}

char toUpper(char ch) {
	if ('a' <= ch && ch <= 'z')
	{
		return ch - 'a' + 'A';
	}
	return ch;
}

char toLower(char ch) {
	if ('A' <= ch && ch <= 'Z')
	{
		return ch - 'A' + 'a';
	}
	return ch;
}

bool vowel(char ch) {
	char toCheck = toLower(ch);
	switch (toCheck) {
	case 'a':
	case 'o':
	case 'u':
	case 'i':
	case 'e':
	case 'y':
		return true;
	default:
		return false;
	}
}

bool consonant(char ch) {
	return !vowel(ch);
}

void magic(char* str) {
	if (!str)
	{
		return;
	}
	while (*str) {
		if (vowel(*str))
		{
			*str = toUpper(*str);
		}
		else {
			*str = toLower(*str);
		}
		str++;
	}
}
bool isNumber(char ch) {
	return ('1' <= ch && ch <= '9');
}

void censor(char* str) {
	if (!str)
	{
		return;
	}
	bool flag = false; 
	int put = 0;
	int get = 0;
	while (str[get]) {
		if (isNumber(str[get])) {
			flag = true;
		}
		else {
			if (flag)
			{
				flag = false;
				str[put++] = '*';
			}
			str[put++] = str[get];
		}

		get++;
	}
	if (flag)
	{
		str[put++] = '*';
	}
	str[put] = '\0';
}

void myReverse(char* str) {
	int size = strlen(str);
	int halfSize = size/2;
	for (size_t i = 0; i < halfSize; i++)
	{
		mySwap(str[i], str[size - i - 1]);
	}
}
int main()
{

	char str[] = "abcd1234fsdfb43kdajdf4n";
	censor(str);
	std::cout << str;
}
