## Примери ##
### **1.** Какво ще отпечата на екрана следният код?
```c++
#include <iostream>
int main()
{
	const int ALPHABET_LETTER_COUNT = 26;

	char currentLetter;
	for (int i = 0; i < ALPHABET_LETTER_COUNT; i++)
	{
		currentLetter = 'a' + i;
		std::cout << currentLetter;
	}
}

//cons: big logic, hard to follow, currentLetter initialization is at risk of having undefined value
```
### **2** Какво ще се случи след изпълнение на следния код? (Да анализираме различни варианти)
```c++
#include <iostream>
int main()
{
	const int ALPHABET_LETTER_COUNT = 26;
	
	for (int i = 0, char currentLetter = 'a' ; i < ALPHABET_LETTER_COUNT; i++, currentLetter++)
	{
		std::cout << currentLetter;
	}
}
```
### **3** Какво е хубавото в тази интерпретация и какво не е наред?
```c++
#include <iostream>
int main()
{
	const int ALPHABET_LETTER_COUNT = 26;

	char currentLetter = 'a';
	for (int i = 0; i < ALPHABET_LETTER_COUNT; i++, currentLetter++)
	{
		std::cout << currentLetter;
	}
}
//pros: +readable
//	+All changes of counterlogic are in 1 place  
//cons: 
//	-variable currentLetter stays in the stack after the loop
//	-2 variables in counter updation part
```
### **4** Какво е хубавото в тази интерпретация и какво не е наред?
```c++
#include <iostream>
int main()
{
	const int ALPHABET_LETTER_COUNT = 26;

	for (int i = 0; i < ALPHABET_LETTER_COUNT; i++)
	{
		char currentLetter = 'a' + i;
		std::cout << currentLetter;
	}
}
//pros: readable and the logic in the for loop stays there
//(i and currentLetter are removed from the stack after the loop)

//cons: maybe the slowest, because of the initialization of currentLetter
```
### **5** Without extra variable
```c++
#include <iostream>
int main()
{
	const int ALPHABET_LETTER_COUNT = 26;
	const char FIRST_ALPHABET_LETTER = 'a';
	
	for (int i = 0; i < ALPHABET_LETTER_COUNT; i++)
	{
		std::cout << (char)(FIRST_ALPHABET_LETTER + i);
	}
}
//pros: no extra data in stack
//cons: not very readable, casting is slowing the program
```
```c++
#include <iostream>
int main()
{
	const int ALPHABET_LETTER_COUNT = 26;
	for (int i = 0; i < ALPHABET_LETTER_COUNT; i++)
	{
		std::cout << (char)('a' + i);
	}
}
```
### **6** Best scenario for the task
```c++
#include <iostream>
int main()
{
	const int ALPHABET_LETTER_COUNT = 26;

	char currentLetter = 'a';
	for (int i = 0; i < ALPHABET_LETTER_COUNT; i++)
	{
		std::cout << currentLetter++;
	}
}
//only 4 bites more but very readable
```
### **7** Another good
```c++
#include <iostream>
int main()
{
	for (char i = 'a'; i <= 'z'; i++)
	{
		std::cout << i;
	}
}
//the best : with no additional memory and the fastest with least operations (+,-,++,--,=...), readable, but breaks the logic behind the counter i.
```
### **8.** Същия "код" ли е като предните?
```c++
#include <iostream>

const int ALPHABET_LETTER_COUNT = 26;
const char FIRST_ALPHABET_LETTER = 'a';

int main()
{
	int i = 0;
	while (i < ALPHABET_LETTER_COUNT)
	{
		std::cout << (char)(FIRST_ALPHABET_LETTER + i++);
	}
}
```
### **9.** Какво ще отпечата на екрана следният код?
```c++
#include <iostream>
int main()
{
    int a = 10;
    while (a)
    {
        a++;
        std::cout << a--;
        a--;
    }
}
```

## Задачи
### **1.** Да се напише програма, която чете от конзолата 2 цели числа n и m в интервала [0, 256] и изписва символите на всички ASCII кодове в интервала [n, m]

**Пример:**

Вход:
```c++
Start: 65
End: 75
```
Изход:
```c++
65 --> A  
66 --> B  
67 --> C  
68 --> D  
69 --> E  
70 --> F  
71 --> G  
72 --> H  
73 --> I  
74 --> J  
75 --> K
```
Вход:
```c++
Start: 300
End: 350
```
Изход:
```c++
Invalid codes!
```
### **2.** Да се прочетe от конзолата естествено число и да се намери факториелът му.

 **Пример:**

Вход:
```c++
5
```
Изход:
```c++
Factorial: 120
```
### **3.** Да се напише програма, която прочита естествено число N и пресмята сборът 1 + (1 + 2) + (1 + 2 + 3) + ... + (1 + 2 + ... + N).
 
 **Пример:**

Вход:
```c++
5
```
Изход:
```c++
35
```

### **4.** Да се напише програма, която приема естествено число "n" и изкарва на конзолата всички негови делители.

**Пример:**

Вход:
```c++
10
```
Изход:
```c++
1 2 5 
```

### **5.** Да се напише програма, която чете от конзолата число N и извежда първите N числа от редицата на Фибоначи. Редицата на Фибоначи се състои от числа, всяко от които е сбора на предишните 2. Първите 2 числа в редицата са 0 и 1.

**Пример:**

Вход:
```c++
10
```
Изход:
```c++
0 1 1 2 3 5 8 13 21 34
//0+1=1 1+1=2 1+2=3 2+3=5 3+5=8 5+8=13 ...
```
### **6.** Да се напише програма, която приема естествено число n и след това се приема неопределен брой цели числа от стандартния вход. Въвеждането да спре при въвеждане на числото -1. Да се отпечата сборът на всички числа от въведените, които са по-малки от n и са четни.

**Пример:**

Вход:
```c++
15
1 4 5 6 19 22 24 90 124 8 -1
```
Изход:
```c++
18
```
Вход:
```c++
4
12 12 12 -1
```
Изход:
```c++
0
```
### **7.** Да се напише програма, която чете от конзолата 2 естествени числа m и n и извежда всички перфектни числа в интервала [m, n]. Перфектно е такова число N, което е равно на сумата от своите по-малки делители (т.е. различни от самото число).

**Пример:**

Вход:
```c++
1 500
```

Изход:
```c++
6 // 6 се дели на 1, 2, 3; 1+2+3=6
28 // 28 се дели на 1, 2, 4, 7, 14; 1+2+4+7+14=28
496
```

### **8.** Въвеждат се две естествени числа "*n*" и "*m*". Да се изкара координатната им матрица.

Вход:

```
4 3
```

Изход:

```
(1, 1) (1, 2) (1, 3)
(2, 1) (2, 2) (2, 3)
(3, 1) (3, 2) (3, 3)
(4, 1) (4, 2) (4, 3)

```

