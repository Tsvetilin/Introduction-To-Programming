
#include <iostream>
using namespace std;
#pragma warning (disable: 4996)

int myStrLen(const char* str) {
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

//copy the source to destination.
//We assume that in dest the are enough cells.
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

// - first < second
// 0 first == second
// + first > second
int myStrCmp(const char* str1, const char* str2) {
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
    if (!first || second == nullptr)
        return;

    size_t firstLen = myStrLen(first); // abc0
    first += firstLen;
    myStrCpy(second, first);
}


int main()
{ 

    char str[100] = "ABC";
    char str2[100] = "ABC";
    
    cout << myStrCmp(str, str2);
}
