### **1.** Какво ще отпечата на екрана следният код?
```c++
#include <iostream>
int main()
{
    while(true)
    {
        int i = 10;
        while (i = 6 || i = 10)
        {
            if (i == 0)
                break;
            if (i == 10)
                continue;      
            std::cout << i-- << std::endl;
            std::cout << --i << std::endl;
        }

        break;
    }
}
```
### Таблица с приоритет на операторите: https://pvs-studio.com/en/blog/terms/0064/
### **1.2.** Какво ще отпечата на екрана следният код?
```c++
#include <iostream>
int main()
{
    while(true)
    {
        int i = 10;
        while ((i = 6) || (i = 10))
        {
            if (i == 0)
                break;
            if (i == 10)
                continue;      
            std::cout << i-- << std::endl;
            std::cout << --i << std::endl;
        }

        break;
    }
}
```
### **1.3.** Какво ще отпечата на екрана следният код?
```c++
#include <iostream>
int main()
{
    while(true)
    {
        int i = 10;
        while ((i == 6) || (i == 10))
        {
            if (i == 0)
                break;
            if (i == 10)
                continue;      
            std::cout << i-- << std::endl;
            std::cout << --i << std::endl;
        }

        break;
    }
}
```
### **1.4.** Какво ще отпечата на екрана следният код?
```c++
#include <iostream>
int main()
{
	while (true)
	{
		unsigned short i = 10; //2B <=> 16b : [0,2^16)
		while ((i == 6) || (i != 6))
		{
			if (i == 11)
				break;
			if (i == 10)
				i++;
			std::cout << i-- << std::endl;
			std::cout << --i << std::endl;
		}

		break;
	}
}
```
### **2.** Какво ще отпечата на екрана следният код?
```c++
#include <iostream>
int main()
{
	for (unsigned i = 10; i >= 0; i--)
	{
		std::cout << i;
	}
}
```
### **3.** Каквa е разликата между двата фрагмента код? (while / do-while)
```c++
#include <iostream>
int main()
{
    int a = 0;
    while (a)
    {
        std::cout << 'a';
        std::cout << " abc";
    }
}
```
```c++
#include <iostream>
int main()
{
    int a = 0;
    do
    {
        std::cout << 'a';
        std::cout << " abc";
    } while(a);
}
```
### **4.** Какво ще се случи след изпълнение на кода?

```c++
for(int i=0; i<10 ; ) {
	i = i++;
	std::cout<<"Hello World";
}
```

### **5.** Какво ще се случи след изпълнение на кода?

```c++
do {
	int y = 1;
	std::cout << y++ << " ";
} while (y <= 10);

```
## Задачи
### **1.** Да се прочете от конзолата естествено число N и да се изведе дали може да се представи като сума на 2 прости числа.

 **Пример:**

Вход:
```c++
20
```
Изход:
```c++
20 = 3 + 17

20 = 7 + 13
```
### **2.** Нека числовата редица { a<sub>n</sub> }<sup>∞</sup><sub>n=1</sub> е зададена по следният начин:

* a<sub>0</sub> = 1/2
* a<sub>n+1</sub> = (a<sub>n</sub><sup>2</sup> + 1) / 2

При прочитане на число n от конзолата, изведете стойността на елемента a<sub>n</sub> от редицата. Ако сте работили вярно, ще забележите, че редицата клони към 1.

**Пример:**

Вход:
```c++
n = 1
```

Изход:
```c++
a_n = 0,625
```
## 2. Задачи за рисуване по конзолата

### **3.** Да се напише програма, която приема цяло положително число n и отпечатва следната пирамида от доларчета.

**Пример:**

![enter image description here](https://i.ibb.co/SNqW5YF/Capture.png)

### **4.** Да се напише програма, която приема цяло положително число **n** и отпечатва следната рамка:

**Пример:**

![enter image description here](https://i.ibb.co/vBjhsTj/Capture2.png)

### **5.** Да се напише програма, която приема цяло положително число **n** и отпечатва следната папионка:

**Пример:**

![enter image description here](https://i.ibb.co/NKSPm4z/ddz.png)

### **6.** Да се напише програма, която приема цяло положително число **n** и отпечатва следния килим:

**Пример:**

![enter image description here](https://i.ibb.co/c2w8Gwt/kilim.png)

### **7** Да се напише програма, която приема цяло положително число n и отпечатва числата от 1 до n*n в спираловиден вид.

**Пример:**

![enter image description here](https://i.ibb.co/KF7TcH6/Capture6.png)

### **8** Да се напише програма, която приема цяло положително число n и отпечатва числата от 1 до n*n в спираловиден вид.

**Пример:**

![enter image description here](https://i.ibb.co/hg0268B/Capture7.png)
