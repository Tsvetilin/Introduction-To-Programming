//6. �������� ��������, ����� ���� ���� ������ �� ��������� 
// � ������� ���� ��� � ������ ��� ����� ����� � ���� ���� 
// ���� � ������ ��� ��������.�� �� ������ ���������� 
// �� ������������� �����(�� ������ - ����� � ���������).

#include <iostream>

int main()
{
    char letter;
    std::cout << "Enter a letter: ";
    std::cin >> letter;
    std::cout << "Your letter is: \n\n";
    if (letter >= 'A' && letter <= 'Z')
    {
        std::cout << "Capital letter\n";
        if (letter == 'A' || letter == 'E' || letter == 'I' || letter == 'O' || letter == 'U')
            std::cout << "Vowel\n";
        else
            std::cout << "Not vowel\n";
        std::cout << (char)(letter + ('a' - 'A'));
    }
    else if (letter >= 'a' && letter <= 'z')
    {
        std::cout << "Not capital letter\n";
        if (letter == 'a' || letter == 'e' || letter == 'i' || letter == 'o' || letter == 'u')
            std::cout << "Vowel\n";
        else
            std::cout << "Not vowel\n";
        std::cout << (char)(letter - ('a' - 'A'));
    }
    else
    {
        std::cout << "Incorrect input! This character is not a letter!";
    }
}