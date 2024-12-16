# Динамична памет

<slidebreak/>

## Стекова памет / Stack memory
- Стековата памет е тази, която се заделя по време на компилация на програмата
- Всяка програма има фиксиран размер на стековата памет - може да не успеем да заделим паметта, която искаме в даден момент
- Тук паметта се освобождава автоматично от компилатора, когато излезем от блока, в който е дефинирана променливата, използваща паметта
- При създаването на статични масиви в стековата памет е необходимо размера им да е константен, точно заради особеностите по заделянето на паметта

<slidebreak/>

## Динамична памет / Heap memory
- Динамимчната памет се заделя по време на изпълнение на програмата
- Динамичната памет не се освобождава автоматично, трябва програмата сама да си я освободи
- При създаването на данамични масиви, може да използваме произволен неконстантен размер, заради начина на заделяне на паметта

> [!IMPORTANT]
> Заделянето на динамична памет е по-бавна операция, както и достъпването ѝ. Когато може да се избягва, е препоръчително.

> [!IMPORTANT]
> Когато е заделена динамична памет, трябва винаги да се освободи!

<slidebreak/>

## Заделяне и освобождаване на динамична памет
- Памет се заделя с оператор `new`, следван от типа на променливата
- Оператор `new` връща указател към първия байт от заделената памет, от типа на променливата
- Паметта се освобождава с оператор `delete`, на който се подава указател от типа на променливата, сочещ паметта, която да се освободи

```cpp
// on the stack
int sValue = 5; 
int* sPtr = &sValue;

// on the heap
int* hValue = new int; // the pointer is allocated on the stack
*hValue = 5;
delete hValue;
```

<slidebreak/>

## Създаване на динамични масиви

- При заделяне на памет за масив, след типа указваме броя елементи
- Когато заделяме паметта, не е необходимо да се ползва константа
- За да се освободи памет, заделена за масив - `delete[]`

```cpp
size_t count = 42;
int* arr = new int[count]; 
delete[] arr;
```

<slidebreak/>

- `delete` над `nullptr` не прави нищо

> [!IMPORTANT]
> Всяка функция трябва да се грижи за проверката дали даден указател е nullptr

```cpp
size_t strLen(const char* str)
{
    if(str == nullptr)
    {
        return 0;
    }

    size_t count = 0;
    while(*str)
    {
        count++;
        str++;
    }

    return count;
} 
```

<slidebreak/>

## Как работят всъщност new и delete

`malloc` заделя определен брой байтове и връща `void*` указател, който сочи първия байт. За да можем ефективно да използваме този указател, трябва да го кастнем към указател към даден тип. Това по никакъв начин не ни гарантира, че паметта която е заделена, отговаря на типа, към който сме кастнали ние пойнтъра

```cpp
size_t count = 42;
int* arr = (int*)malloc(count * sizeof(int));
free(arr);
```

<slidebreak/>

## Масиви от указатели

- Статичен масив от указатели към динамични масиви

```cpp
const size_t ROWS_COUNT = 20;

size_t elementsPerRow;
std::cin >> elementsPerRow;

int* matrix[ROWS_COUNT];
for(size_t i = 0; i < ROWS_COUNT; i++)
{
    matrix[i] = new int[elementsPerRow];
}

for(size_t i = 0; i < ROWS_COUNT; i++)
{
    delete[] matrix[i];
}
```

<slidebreak/>

- Статичен масив от указатели

```cpp
const size_t ARR_SIZE = 10;

int arr[ARR_SIZE] = {1,2,3,4,5,6,7,8,9,10};
int* ptrs[ARR_SIZE];
for(size_t i = 0; i < ROWS_COUNT; i++)
{
    ptrs[i] = arr + ARR_SIZE - i - 1;
}
```

<slidebreak/>

- Данимичен масив от указатели към елементи

```cpp
const size_t ARR_SIZE = 10;

int** ptrs = new int*[ARR_SIZE];
for(size_t i = 0; i < ROWS_COUNT; i++)
{
    ptrs[i] = new int(i);
}

for(size_t i = 0; i < ROWS_COUNT; i++)
{
    delete ptrs[i];
}

delete[] ptrs;
```

<slidebreak/>

- Динамичен масив с указатели към масиви (matrix / jagged array)

```cpp
const size_t ARR_SIZE = 10;

int** ptrs = new int*[ARR_SIZE];
for(size_t i = 0; i < ROWS_COUNT; i++)
{
    ptrs[i] = new int[i];
}

for(size_t i = 0; i < ROWS_COUNT; i++)
{
    delete[] ptrs[i];
}

delete[] ptrs;
```

<slidebreak/>

## Работа с данимични масиви

Динамичните масиви позволяват да бъдат връщани като резултат на функция (или поне указател към първия елемент на масива). Като това е най-удобно за низове, ако не знаем броя елементи на масива, или за произволни масиви, ако знаем броя на елементите. Всички функции, които работят с низове и не целят inplace операции, могат да връщат нов динамичен низ. Динамичните низове позволяват заделяне на точното количество памет за низа.

```cpp
int* createArray(size_t size)
{
    return new int[size];
}

int** createMatrix(size_t n, size_t m)
{
    int** matrix = new int*[n];
    for(size_t i = 0; i < n; i++)
    {
        matrix[i] = createArray(m);
    }
}

void readMatrix(int** matrix, size_t n, size_t m)
{
    for(size_t i = 0; i < n; i++)
    {
        for(size_t j = 0; j < n; j++)
        {
            std::cin >> matrix[i][j];
        }
    }
}

void printMatrix(int** matrix, size_t n, size_t m)
{
    if(matrix == nullptr)
    {
        return;
    }

    for(size_t i = 0; i < n; i++)
    {
        // if matrix[i] is nullptr ?
        for(size_t j = 0; j < n; j++)
        {
            std::cout << matrix[i][j];
        }
    }
}

void freeMatrix(int** matrix, size_t n)
{
    if(matrix == nullptr)
    {
        return;
    }

    for(size_t i = 0; i < n; i++)
    {
        // it's ok to delete nullptr
        delete[] matrix[i];
    }

    delete[] matrix;
}

char* readString()
{
    const size_t BUFFER_SIZE = 1024 + 1;
    char buffer[BUFFER_SIZE];

    std::cin.getline(buffer, BUFFER_SIZE);

    char* result = new char[strlen(buffer) + 1];
    strcpy(buffer, result);

    return result;
}

int main()
{
    char* str = readString();
    std::cout << str;
    delete[] str;

    size_t n, m;
    std::cin >> n >> m;
    int** matrix = createMatrix(n, m);
    readMatrix(matrix, n, m);
    printMatrix(matrix, n, m);
    freeMatrix(matrix, n, m);
}
```

<slidebreak/>

## Основни задачи
- Всички подмножества / подредици на дадена
- string split by separators list
- string manipulations - concat, replace, etc. 

<slidebreak/>

## Други задачи

Нека от конзолата се прочат две естествени числа: n - брой на редовете, които да се прочетат от конзолата и k - номер на бит. На следващите n реда се въвежда първо естествено число - големината на последващия низ и след това низ, представящ математическа операция за калкулатор във вида
`7add8multiply9divide2subtract10`, където операциите са изписани с думи и се извършват последователно, без да се взима предвид приоритета им. След това се чете още един низ, съставен от n-1 операции, например `addsubtractdivideadd`. Да се изчислят стойностите за всеки от първоначалните n операции, като за всеки резултат да се обърне k-тия бит отдясно наляно на полученото число. След това тези резултати се използват за аргументи на последната операция без числени аргументи. Да се изведе резултатът от последното изчисление.

Вход: 
```
3 
1add2add3
7multuply10
10divide2add8
addmultiply
```

Изход:
```
4416
```
