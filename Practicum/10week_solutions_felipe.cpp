#include <iostream>

int countElements(char str[]);
int checkLetter(char letter);

// 1
 void myReverse(char str[]) {
	 char aux = ' ';
	 unsigned int count = countElements(str);

	 for (size_t i = 0; i < count/2; i++)
	 {
		 aux = str[i];
		 str[i] = str[count - i - 1];
		 str[count - i - 1] = aux;
	 }
}

 // 2
 void changeLetters(char str[]) {
	 unsigned int count = countElements(str);
	 unsigned char letter = ' ';

	 for (size_t i = 0; i < count; i++)
	 {
		 if (checkLetter(str[i]) == 1)
		 {	
			 str[i] -= ('a' - 'A');
		 }
		 else if (checkLetter(str[i]) == 2)
		 {
			 str[i] += ('a' - 'A');
		 }
	 }
 }

int main()
{
	// 1
	char str[] = "abcdef";
	myReverse(str);
	std::cout << str << '\n';

	// 2
	char str2[] = "heLlo worldD123";
	changeLetters(str2);
	std::cout << str2 << '\n';
}

int countElements(char str[])
{
	unsigned count = 0;
	while (str[count] != '\0') count++;

	return count;
}

int checkLetter(char letter)
{
	const int noLetter = 0;
	const int vocal = 1;
	const int consonant = 2;

	letter = tolower(letter);

	switch (letter)
	{
	case 'a':
	case 'e':
	case 'i':
	case 'o':
	case 'u':
		return vocal;
	}

	if (letter >= 'a' && letter <= 'z') return consonant;

	return noLetter;
}

