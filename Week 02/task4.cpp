//4. От конзолата се въвеждат ден от седмицата под формата на цяло 
// число от 1 до 7 (1 - Monday, 2 - Tuesday , и т.н.). Нека на конзолата се изведе 
// кой ден от седмицата е това число с думи.
#include <iostream>

int main()
{
    int day;
    std::cin >> day;
    switch (day)
    {
    case 1: std::cout << "Monday"; break;
    case 2: std::cout << "Tuesday"; break;
    case 3: std::cout << "Wednesday"; break;
    case 4: std::cout << "Thursday"; break;
    case 5: std::cout << "Friday"; break;
    case 6: std::cout << "Saturday"; break;
    case 7: std::cout << "Sunday"; break;
    default: std::cout << "error";
    }
}
