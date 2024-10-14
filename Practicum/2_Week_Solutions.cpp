#include <iostream>

int main() {

	//zad 1
	/*int a;
	std::cin >> a;
	if (a % 2 != 0) {

		std::cout << "chisloto e nechetno";

	}
	else if (a == 0) {

		std::cout << "chisloto e nula";

	}
	else {

		std::cout << "chisloto e chetno";

	}*/

	//zad 2
	/*int a;
	std::cin >> a;
	switch(a) {
	case 1: std::cout << "I";
		break;
	case 2: std::cout << "II";
		break;
	case 3: std::cout << "III";
		break;
	case 4: std::cout << "IV";
		break;
	case 5: std::cout << "V";
		break;
	case 6: std::cout << "VI";
		break;
	case 7: std::cout << "VII";
		break;
	case 8: std::cout << "VIII";
		break;
	case 9: std::cout << "IX";
		break;
	default: std::cout << "vuvedete chislo ot 0-9";

		}*/

	//zad 3
	/*int year;
	std::cin >> year;
	if (year < 0) {

		std::cout << "vuvedete validna godina";

	}
	else if (year % 400 == 0) {

		std::cout << "godinata e visokosna";

	}
	else if (year % 4 == 0 && year % 100 != 0) {

		std::cout<<"godinata e visokosna";

	}
	else {

		std::cout << "godinata ne e visokosna";

	}*/

	//zad 4
	/*int day;
	std::cin >> day;
	switch (day) {

	case 1: std::cout<<"Monday";
		break;
	case 2: std::cout << "Tuesday";
		break;
	case 3: std::cout << "Wednesday";
		break;
	case 4: std::cout << "Thursday";
		break;
	case 5: std::cout << "Friday";
		break;
	case 6: std::cout << "Saturday";
		break;
	case 7: std::cout << "Sunday";
		break;
	default: std::cout << "Vuvedete den ot 1-7";

	}*/

	//zad 5
	/*int a, b;
	std::cin >> a >> b;
	int res = a > b ? a : b;
	std::cout << res;*/

	//zad 6
	char letter;
	std::cin >> letter;
	bool vowel;
	//tozi if vinagi e validen, zashto
	if (!(letter >= 'a' && letter <= 'Z')) {

		std::cout << "Enter a valid letter"<<std::endl;

	}
	switch(letter) {

		case 'a': vowel = true;
		case 'e': vowel = true;
		case 'u': vowel = true;
		case 'o': vowel = true;
		case 'i': vowel = true;
			break;
		default: vowel = false;

	}
	if (vowel == true) {

		std::cout << "The letter is a vowel"<< std::endl;

	}
	if (letter >= 'a' && letter <= 'z') {

		std::cout << "bukvata e malka";

	}
	else if(letter >= 'A' && letter <= 'Z') {

		std::cout << "bukvata e glavna";

	}
	//ne znam kak da napravq bukvata glavna



	




	return 0;
}
