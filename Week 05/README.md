# Масиви

<slidebreak/>

## Същност
- Съставен тип данни
- Последователност от елементи от един и същ тип
- Предоставят начин за организация на данните
- Линейна структура от данни

<slidebreak/>

## Декларация на масив

```cpp
<type> <identifier>[<size>];
```

```cpp
const int ARRAY_SIZE = 10;
int arr[ARRAY_SIZE];
```

- Създаваме масив с фиксиран размер - статичен масив - броят на елементите му не може да се променя

> [!CAUTION]
> Когато декларираме масив, задължително указваме размера му, за да знае компилатора колко място да задели

> [!WARNING]
> Размера на масива задължително е константа - без магически числа

> [!IMPORTANT]
> Не може за размер на масив да ползваме променлива. Компилаторът трябва да знае преди компилацията размера на масива

<slidebreak/>

## Дефиниция на масив

```cpp
<type> <identifier>[[<size>]] = {[<value>...]};
```
- Използваме инициализиращ списък
- Това не е нов scope, а семантично различна структура, използвана за даване на стойност при инициализация на съставни типове данни

```cpp
const int ARRAY_SIZE = 5;
int arr[ARRAY_SIZE] = { 4, 2 };  // 4 2 0 0 0
int arr[ARRAY_SIZE] = { };       // 0 0 0 0 0

// undefined values 
// (leftover from previous user of the memory)
int arr[ARRAY_SIZE]; 

// int arr[ARRAY_SIZE] = { 1, 2, 3, 4, 5, 6}; - Error

```

> [!CAUTION]
> Когато дефинираме масив може да му укажем размер и да сложим стойности на първите n на брой елемента. Останалите елементи накрая ще бъдат със стойността по подразбиране за типа (за простите типове досега - 0, за сложни типове - по-нататък)

<slidebreak/>

```cpp
int arr[] = {1, 2, 3}; // 1 2 3
```

> [!IMPORTANT]
> Може да изпуснем размера на масива. В такъв случай големината му се подразбира от броя елементи в инициализиращия списък

<slidebreak/>

## Достъп до елементите на масив

- Елементите на масива се индексират с цели числа от 0 нататък
- Първият елемент е с индекс `0`, а последният елемент е с индекс `n-1`, ако масива е с `n` елемента
- Оператор `[]` ни дава достъп до определен индексиран елемент на масива

```cpp
int ARRAY_SIZE = 10;
int arr[ARRAY_SIZE] = {1,2,3,4,5};

std::cout << arr[3];
std::cout << arr[5];
std::cin >> arr[5];
std::cout << arr[5];
```

> [!CAUTION]
> Достъпването на индекс, който не принадлежи на елемент на масива е груба грешка. Дори компилаторът да го позволи, това не трябва да се ползва по никакъв повод. Индексацията с отрицателни индекси - аналогично.

<slidebreak/>

## Какво всъщност е масив
- Компилаторът заделя определен блок памет, който ще се използва за масива
- Количеството задалена памет се определя като умножим големината на типа на елементите на масива с броя на елементите в масива

```cpp
const int ARRAY_SIZE = 10;
int arr[ARRAY_SIZE] = {};

std::cout << sizeof(int) * ARRAY_SIZE; // 40
std::cout << sizeof(arr); // 40
```

> [!IMPORTANT]
> Ако имаме даден масив винаги може да намерим броя на елементите му по горните правила

<slidebreak/>

- Самата променлива обаче, с която работим е указател
- Този указател сочи към първият елемент на масива
- И по-точно има стойността на адреса на първия байт на първия елемент на масива
- Този указател не може да бъде променян

<slidebreak/>

## Оператори, приложени над "масиви"
- Ние няма как да приложим оператор над масив
- Оператор може да приложим единствено над указателя, който имаме при създаване на масива
- Това означава, че оператор `=` за присвояване на стойност на масив не можем да ползваме
- Не можем да четем или пишем цял масив от и на стандартния вход, като използваме единствено променливата
- Не може да извършваме логически операции, например за сравнение на два масива дали са равни с оператор `==`

> [!IMPORTANT]
> В случаят с инициализиращия списък, въпреки че се използва символа `=`, това не е оператор `=` за присвояване. Аналогично е и при инициализацията на всяка променлива. Ако даваме начална стойност, това не е оператора `=`.

<slidebreak/>

```cpp
int arr1[5] = {1, 2, 3, 4, 5};
int arr2[5] = {1, 2, 3, 4, 5};
std::cout << arr1 << std::endl;           // 0xdd61fff970
std::cout << arr2 << std::endl;           // 0xdd61fff950
std::cout << (arr1 == arr2) << std::endl; // false

// arr2 = arr1;  - Error: arr2 is not modifiable lvalue

int* pointer1 = arr1;             // modify pointer and elements
const int* pointer2 = arr1;       // modify pointer only
int*const pointer3 = arr1;        // modify elements only
const int* const pointer4 = arr1; // modify nothing
// arr1 -> similar to int* const
```

> [!NOTE]
> Адресна аритметика, работа с указатели и подробности за работата на масивите по-нататък

<slidebreak/>

## Операции с масиви

- Достъп
    - Пряк - по индекс
    - Обхождане
        - Извеждане на масив (писане)
        - Търсене на елемент
- Мутация - чрез пряк достъп по индекс
    - Въвеждане на масив (четене)
    - Сортиране
- Други основни задачи
    - Reverse an array
    - Equal arrays
    - Counting sort basics

<slidebreak/>

```cpp
const size_t ARRAY_SIZE = 1024;
int arr[ARRAY_SIZE];

size_t n;
std::cout << "Enter number of elements: ";
std::cin >> n;

if (!std::cin)
{
	std::cerr << "Could not read number of elements.";
	return 1;
}

if (n > ARRAY_SIZE)
{
	std::cerr << "Invalid number of elements. Max number of elements is " << ARRAY_SIZE;
	return 2;
}

std::cout << "Enter the elements: ";
for (size_t i = 0; i < n; i++)
{
	std::cin >> arr[i];
}

if (std::cin.bad())
{
	std::cerr << "Could not read elements of array.";
	return 3;
}

int search;
std::cout << "Enter element to search: ";
std::cin >> search;

if (!std::cin)
{
	std::cerr << "Could not read the searched number.";
	return 4;
}

// sum of array elements
int sum = 0;
for (size_t i = 0; i < n; i++)
{
	sum += arr[i];
}
std::cout << "Sum of elements: " << sum << std::endl;

// linear search
size_t indexFound = -1;
for (size_t i = 0; i < n; i++)
{
	if (arr[i] == search)
	{
		indexFound = i;
		break;
	}
}
std::cout << "The element " << search << " is at index " << indexFound << std::endl;

int reversedArray[ARRAY_SIZE];
for (size_t i = 0; i < n; i++)
{
	reversedArray[i] = arr[n - i - 1];
}

std::cout << "The reversed array is: ";
for (size_t i = 0; i < n; i++)
{
	std::cout << reversedArray[i] << " ";
}
std::cout << std::endl;

bool areArraysPalindrome = true;
for (size_t i = 0; i < n; i++)
{
	if (reversedArray[i] != arr[i])
	{
		areArraysPalindrome = false;
		break;
	}
}

const size_t COUNTER_SIZE = 1e6;
size_t counter[COUNTER_SIZE] = {}; // probably going to cause stack overflow but we'll let it slide
for (size_t i = 0; i < n; i++)
{
	counter[arr[i]]++;
}

for (size_t i = 0; i < COUNTER_SIZE; i++)
{
	if (counter[i] > 0)
	{
		std::cout << "The digit " << i << " is in the array " << counter[i] << " times" << std::endl;;
	}
}

// Bubble sort
for (size_t i = 0; i < n - 1; i++)
{
	bool swapped = false;
	for (size_t j = 0; j < n - i - 1; j++)
	{
		if (arr[j] > arr[j + 1])
		{
			std::swap(arr[j], arr[j + 1]); // own swap function here
			swapped = true;
		}
	}

	if (!swapped)
	{
		break;
	}
}

// Selection sort
for (size_t i = 0; i < n - 1; i++)
{
	size_t minIndex = i;
	for (size_t j = i + 1; j < n; j++)
	{
		if (arr[j] < arr[minIndex])
		{
			minIndex = j;
		}
	}

	std::swap(arr[i], arr[minIndex]); // own swap function here
}
```

> [!NOTE]
> Оттук нататък за цели положителни числа използваме типа `size_t`, който отговаря на `unsigned long long int`. По дефиниция това е типа, който може да съдържа всеки възможен индекс на масив. При обхождане на масив, за итерарищата променлива за индекс, отново използваме този тип.

> [!IMPORTANT]
> Ако решавате задача на контролно или изпит и пише "Да се изведе съобщение за грешка и програмата да приключи успешно", може да се тълкува като да пишем грешките на `std::cout` и да връщаме винаги `return 0;`. Ако в условието пише, че се очаква валиден вход, то не е необходимо да се правят допълнителни проверки.

<slidebreak/>

## Масиви и функции

- Подоване на масив като параметър на функция

```cpp
void set(int arr[], size_t ind, int value )
{
    size_t size = sizeof(arr) / sizeof(int);
    if(ind < size)
    {
        arr[ind] = value;
    }
}

void set(int* arr, size_t ind, int value )
{
    size_t size = sizeof(arr) / sizeof(int);
    if(ind < size)
    {
        arr[ind] = value;
    }

    arr = &value;
    arr[0] = 7; // value = 7;
}

void set(int* const arr, size_t ind, int value )
{
    size_t size = sizeof(arr) / sizeof(int);
    if(ind < size)
    {
        arr[ind] = value;
    }

    // arr = &value; - Error: Pointer is constant
}

void set(const int* arr, size_t ind, int value )
{
    size_t size = sizeof(arr) / sizeof(int);
    if(ind < size)
    {
         // arr[ind] = value; - Error: values are constant
    }

    arr = &value;
    // arr[0] = 7; - Error: values are constant
}

void set(const int* const arr, size_t ind, int value )
{
    size_t size = sizeof(arr) / sizeof(int);
    if(ind < size)
    {
         // arr[ind] = value; - Error: values are constant
    }

    // arr = &value; -  Error: Pointer is constant
    // arr[0] = 7; - Error: values are constant
}
```

<slidebreak/>

- Връщане на масив - не може да връщаме статични масиви (тоест указатели към такива). Това е така защото статичните променливи живеят само в scope-a, в който са дефинирани. Повече подробности по-нататък.

```cpp
int* getArr(int num)
{
    const size_t ARRAY_SIZE = 10;
    int arr[ARRAY_SIZE];
    
    arr[0] = num;

    return arr; // warning or error (depends on compiler)
}

// when called - runtime error
```

<slidebreak/>

## За самостоятелна работа

***Срок: до 09.11.2024***

Въвеждат се две числа от стандартния вход - брой елементи на масиви. Прочетете двата масива от стандартния вход. За двата масива се знае, че са сортирани. Слейте ги в нов сортиран масив. Отпечатайте на стандартния изход новия масив. При нарушаване на някои от условията или възникване на грешка, приключете програмата по подходящ начин.

> [!IMPORTANT]
> За домашни и контролни не е позволено ползването на вградени функции. Изключения се правят след изрично посочена функция или запитване