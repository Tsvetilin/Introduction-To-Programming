# Указатели. Символни низове.

## Въведение в указателите.
Оператор **&**

 - Приема променлива от тип Т.

 - Връща указател от тип T*.
 
 
```c++
  int number = 10;
  int* ptr = &number;
``` 


Оператор<b> * </b> (дерефериране)
- Приема указaтел от тип Т*
- Връща променлива от тип Т


```c++
  int number = 10;
  int* ptr = &number;
  int result = *ptr; 
  cout << result; //10
```

Разлика между указател и референция?

 - Указателят може да се "re-assign"-ва. Може да приема нови стойност
 - Референцията трябва да се инициализира при създаването.
 - Указателят има неутрална стойност (nullptr), а референцията няма.
 - Може да се направи масив от указатели, но не и масив от референции.

```c++
   int arr[] = {1, 2, 3};
int* ptr = arr;
```

![enter image description here](https://i.ibb.co/cDcX8st/Untitled-Diagram-drawio-3.png)


```c++
	ptr++;
	cout << ptr[0]; //2;
	cout << ptr[1]; //3;
```

 ![enter image description here](https://i.ibb.co/xLLsVK5/Untitled-Diagram-drawio-4.png)

```c++
int number = 10;
int* ptrNumber = &number;

int copy = *ptrNumber;
copy++;
cout << copy << endl; //11
cout << number << endl; //10

(*ptrNumber)++;
cout << number << endl; //11
cout << *ptrNumber << endl; //11
cout << ptrNumber << endl; //The adress of number

int& refNumber = *ptrNumber;
refNumber++;
cout << refNumber << endl; //12
cout << number << endl; //12
cout << &refNumber << ' ' << ptrNumber << endl; //same adress

const int& constRefNumber = number; //always pointing at the same adress of number
number++; //fine
constRefNumber++; //not fine 
cout << constRefNumber << ' ' << number;

int otherVar = 7;
const int* constNumberPtr = &number;
constNumberPtr = &otherVar; //fine
(*constNumberPtr)++; //not fine

int* const constPtrNumber = &number;
constPtrNumber = &otherVar; //not fine
(*constPtrNumber)++; //fine

const int* const constPtrConstNumber = &number;
constPtrConstNumber = &otherVar; //not fine
(*constPtrConstNumber)++; //not fine
```

Какво ще стане, ако дереферираме Nullptr?

```c++
int a = 5;
int* ptrA = &a;
cout << ptrA[0] << endl; //used only with arrays but still works - syntactic sugar
cout << ptrA[1] << endl; //still works but undefined behaviour 

int arr[] = { 1, 2 ,3 };
int* ptrArr = arr;
cout << ptrArr[0] << endl;
cout << ptrArr[3] << endl; //still works but undefined behaviour 

int* nullPointer = nullptr;
cout << *nullPointer;
```

## Въведение в символните низове (стрингове).

   ```c++
	char str[] = {'t', 'e', 's', 't', '\0'};
	char str2[] = "test"; //equivalent to str
	char str3[7] = "test"; 
```

![enter image description here](https://i.ibb.co/ZmRwt6R/Untitled-Diagram-drawio-5.png)

Примерна имплементация на:

<h3>Live: </h3>
 - strlen (намиране на дължина на стринг) <br></br>
 - strcpy (копиране на стринг) <br></br>
 - strcat (конкатениране на стрингове) <br></br>
 - strcmp (лексикографско сравнение на стрингове) <br></br>

<h3>В задачите: </h3>
 - търсене в текст <br></br>
 - броене на срещанията на конкретен символ в текст <br></br>
 - заместване в стринг. <br></br>

<h3>Задачи</h3>

**Задача 1:** Да се напише функция, която приема стринг с произволна дължина **text**, символ **symbol**. Функцията да обработва **text** така, че да не съдържа **symbol** .

**Пример:**
```c++
Hello, my friend!
e
```
```c++
Hllo, my frind!
```
**Задача 2:** Напишете функция, която приема 3 стринга - text, where и what и земства в text всяко срещане на where с what.

*Да се реши без допълнителна памет (in-place).*

*Вход: "I am the worst of the worst", "worst" , "best" , Изход: "I am the best of the best"*

**Задача 3** Напишете функции toUpper и toLower, които приемат стринг и променят всички главни букви в малки/всички малки букви в главни.

**Задача 4:** Да се напише функция, която приема стринг с произволна дължина от цифри, и стринг **result**. Функцията да обработва **result** така, че да предтсавлява стринг, в който пише коя цифра колко пъти се среща.

**Пример:**
```c++
4231148
```
```c++
2x1,1x2,1x3,2x4,1x8
```

**Задача 5:** Да се напише функция, която приема стринг и го обработва така, че всяка нова дума (в началото на текста или след интервал) да започва с главна буква. 

**Пример:**
```c++
hello,  my friend!
```
```c++
Hello,  My Friend!
```
**Задача 6:** Да се напише функция, която приема стринг **input** и стринг **result**. Функцията да обработва **result** тала, че в него да е записана последната дума от подадения **input**.

**Пример:**
```c++
What is your name
```
```c++
name
```

**Задача 7** Напишете функция, която приема стринг и връща броя на думите в него. (Думите са разделени с произволен брой интервали, табулации и препинателни знаци)

*Вход: "Me? Why always me?, Изход: 4*


**Задача 8** Напишете функция, която приема стринг и връща най-често срещаната дума.(Думите са разделени с произволен брой интервали, табулации и препинателни знаци). Игнорираме разликата между главни и малки букви за задачата.

*Вход: "Me? Why always me?, Изход: me*

**Задача 9** Напишете функция, която приема стринг и връща лексикографско най-малка дума.

*Вход: "Me? Why always me?, Изход: always*
