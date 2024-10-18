//14. Да се напише програма, която получава 5 латински букви.Първите две от тях са 
// главни и образуват множеството A, където A съдържа всички букви между въпросните 
// две букви, включително самите тях.Вторите две букви са малки и образуват множеството 
// B, където B съдържа всички букви между тях, включително самите тях.
//Четем 5 - та буква(case insensitive).Да се изведе :
//Дали 5 - тата буква принадлежи на обединението на A и B.
//Дали 5 - тата буква принадлежи на сечението на A и B.
//Дали 5 - тата буква принадлежи на разликата на A с B.
//Без да използвате допълнителни проверки(освен резултатите от предните три условия) определете дали 5 - тата буква принадлежи само и единствено в някое от множествата A или B.

#include <iostream>

int main()
{
	char a, b, c, d, e;
	std::cin >> a >> b >> c >> d >> e;

	// making the problem case insensitive
	a = a + ('a' - 'A');
	b = b + ('a' - 'A');

	// (a, b) ? e E (a, b)
	bool is_e_in_first_interval = a <= e && e <= b;
	bool is_e_in_second_interval = c <= e && e <= d;

	// union
	std::cout << "Is in union of A and B: " <<
		std::boolalpha << (is_e_in_first_interval || is_e_in_second_interval)
		<< '\n';

	// intersection
	std::cout << "Is in intersection of A and B: " <<
		std::boolalpha << (is_e_in_first_interval && is_e_in_second_interval)
		<< '\n';

	// in a but not in b
	std::cout << "Is in A but not in B: " <<
		std::boolalpha << (is_e_in_first_interval && !is_e_in_second_interval)
		<< '\n';

	// is in either A or B 
	std::cout << "Is in union but not in intersection (is in either A or B): " <<
		std::boolalpha << ((is_e_in_first_interval || is_e_in_second_interval)
			&& !(is_e_in_first_interval && is_e_in_second_interval)) << '\n';
}
