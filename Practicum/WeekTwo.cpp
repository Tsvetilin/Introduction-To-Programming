#include <iostream>

// 14. Да се напише програма, която получава 5 латински букви. 
// Първите две от тях са главни и образуват множеството A, където A съдържа всички букви между въпросните две букви, 
// включително самите тях. Вторите две букви са малки и образуват множеството B, 
// където B съдържа всички букви между тях, включително самите тях.
// 
// Четем 5 - та буква(case insensitive).Да се изведе :
// 
// Дали 5 - тата буква принадлежи на обединението на A и B.
// Дали 5 - тата буква принадлежи на сечението на A и B.
// Дали 5 - тата буква принадлежи на разликата на A с B.
// Без да използвате допълнителни проверки(освен резултатите от предните три условия) определете дали 5 - 
// тата буква принадлежи само и единствено в някое от множествата A или B.
void Task14()
{
    char a, b, c, d, e;
    std::cin >> a >> b >> c >> d >> e; 
    a += 32; // a = tolower(a);
    b += 32; // b = tolower(b);
    e = tolower(e);
    bool A = (a <= e && b >= e);
    bool B = (c <= e && d >= e);
    std::cout << ((A || B) ? "true, " : "false, "); // обединение
    std::cout << ((A && B) ? "true, " : "false, "); // сечение
    std::cout << ((A && !B) ? "true, " : "false, "); // разлика
    std::cout << (((A && !B) || (!A && B)) ? "true, " : "false, "); // принадлежи само и единствено в някое от множествата
}

// 13. Въвеждат се целите числа a,b,c , които са съответно коефициентите в уравнението
// ax2+ bx +c = 0. Да се изведе колко на брой реални корени има това уравнение.
void Task13()
{
    int a, b, c, D;
    std::cin >> a >> b >> c;
    D = b * b - 4 * a * c;
    if (D < 0) std::cout << 0;
    else if (D == 0) std::cout << 1;
    else if (D > 0) std::cout << 2;
}

// 12. Ще бъдат въведени две срещуположни точки за сформиране на правоъгълник.(x,y координати) 
// Приемаме, че той не е завъртян, а е ориентиран успоредно на координатната система. 
// При въвеждане на още една точка установете дали тя се намира вътре, по контура или отвън спрямо правоъгълника.
void Task12()
{
    int x1, y1, x2, y2, x3, y3;
    std::cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
    if (x3 >= x1 && x3 <= x2 && y3 >= y1 && y3 <= y2)
    {
        std::cout << 1;
    } 
    else
    {
        std::cout << 0;
    }
}

// 11. Да се напише програма, която чете от конзолата три числа - ден, месец и година, 
// и извежда на екрана 1, ако трите числа оформят валидна дата, и 0 в противен случай.
void Task11()
{
    int day, month, year;
    std::cin >> day >> month >> year;
    if (day < 1 || day > 31 || month < 1 || month > 12 || year < 0)
    {
        std::cout << 0;
    }
    else
    {
        switch (month) {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            if (day > 31)
            {
                std::cout << 0;
                return;
            }
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            if (day > 30)
            {
                std::cout << 0;
                return;
            }
            break;
        case 2:  // Февруари
            if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
            {
                if (day > 29)
                {
                    std::cout << 0;
                    return;
                }
            }
            else
            {
                if (day > 28)
                {
                    std::cout << 0;
                    return;
                }
            }
            break;
        default:
            std::cout << 0;
            return;
        }
        std::cout << 1;
    }
}

// 10. Да се напише програма, в която се въвежда 4-цифренo естествено число n. 
// От това число се формират 2 нови 2-цифрени числа. Първото число се формира от 1-вата и 4-тата цифра на n, а, 
// второто - от 2-рaта и 3-тата цифра на n. На екрана да се изведе дали 1-то ново число e по-малко,
// равно или по-голямо от 2-то число.
void Task10()
{
    int num;
    std::cin >> num;
    int a = (num / 1000) * 10 + num % 10;
    int b = ((num / 100) % 10) * 10 + ((num / 10) % 10);
    if (a > b)
        std::cout << a << " > " << b;
    else if (a < b)
        std::cout << a << " < " << b;
    else if (a == b)
        std::cout << a << " = " << b;
}

// 9. От конзолата се въвеждат три реални числа. Първото е ляв край на интервал, 
// а второто десният му край. Да се провери дали третото число се съдържа в интервала 
// и ако съвпада с единия му край да се изведе съобщение, че интервалът е затворен. 
// Ако числото е в интервала да се изведе съобщение, че е в интервалът е отворен. 
// Ако не се намира в интервала да се изведе подходящо съобщение.
void Task9()
{
    double a, b, c;
    std::cin >> a >> b >> c;
    if (a <= c && c <= b)
    {
        std::cout << "The number is within the given interval. ";
    }
    else if (a >= c || b <= c)
    {
        std::cout << "The number is not in the given interval. ";
    }
    if (a == c || b == c)
    {
        std::cout << "The interval is closed.";
    }
    else
    {
        std::cout << "The interval is open.";
    }
}

// 8. Да се напише програма, която при подадени радиус r и двумерна точка (х, у) 
// проверява дали точката се намира вътре/извън или по контура на окръжност с център (0,0).
void Task8()
{ 
    int r, x, y;
    std::cin >> r >> x >> y;
    if ((x * x + y * y) < r * r)
    {
        std::cout << "In the circle";
    }
    else if ((x * x + y * y) > r * r)
    {
        std::cout << "Out of the circle";
    }
    else if ((x * x + y * y) == r * r)
    {
        std::cout << "On the circle";
    }
}

// 7. Да се напише програма, която приема от входа 3 цели числа и ги отпечатва в сортиран вид.
void Task7()
{
    int a, b, c;
    std::cin >> a >> b >> c;
    if (a <= b && b <= c)
    {
        std::cout << a << " " << b << " " << c;
    }
    else if (a <= b && c <= b)
    {
        std::cout << a << " " << c << " " << b;
    }
    else if (b <= a && b <= c)
    {
        std::cout << b << " " << c << " " << a;
    }
    else if (b <= a && c <= b)
    {
        std::cout << b << " " << a << " " << c;
    }
    else if (c <= a && a <= b)
    {
        std::cout << c << " " << a << " " << b;
    }
    else
    {
        std::cout << c << " " << b << " " << a;
    }
}

// 6. Напишете програма, която чете един символ от конзолата и извежда дали той 
// е главна или малка буква и също така дали е гласна или съгласна.
// Да се изведе обърнатата по капитализация буква(от главна - малка и обратното).
void Task6()
{
    char a;
    std::cin >> a;
    if ((int)a >= 97 && (int)a <= 122)
    {
        std::cout << char(a - 32) << std::endl;
        if ((int)a == 97 || (int)a == 101 || (int)a == 111 || (int)a == 117 || (int)a == 105)
        {
            std::cout << "Vowel" << std::endl;
        }
    }
    else if ((int)a >= 65 && (int)a <= 90)
    {
        std::cout << char(a + 32) << std::endl;
        if ((int)a == 65 || (int)a == 69 || (int)a == 79 || (int)a == 86 || (int)a == 73)
        {
            std::cout << "Vowel" << std::endl;
        }
    }
    else
    {
        std::cout << "Invalid character";
    }
}

// 5. Използвайки тернарен оператор, изведете на конзолата кое от две въведени цели числа е по-голямо.
void Task5()
{
    int a, b;
    std::cin >> a >> b;
    std::cout << ((a > b) ? a : b);
}

// 4. От конзолата се въвеждат ден от седмицата под формата на цяло число от 1 до 7 (1 - Monday, 2 - Tuesday, и т.н.).
//    Нека на конзолата се изведе кой ден от седмицата е това число с думи.
void Task4()
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
    default: std::cout << "Not a number between 1 and 7"; break;
    }
}

// 3. Да се прочетe от конзолата цяло число - година, и да се изведе дали годината е високосна.
//    - година, деляща се на числото 4 без остатък, е високосна;
//    - ако годината обаче също се дели без остатък на 100, то тя не е високосна;
//    - но ако годината също се дели без остатък и на 400, то тя пак ще е високосна.
void Task3()
{ 
    int year;
    std::cin >> year;
    if (year % 4 == 0)
        std::cout << "Leap year";
    else if (year % 100 == 0)
        std::cout << "Not a leap year";
    else if (year % 400 == 0)
        std::cout << "Leap year";
    else
        std::cout << "Not a leap year";
}

// 2. Да се напише програма, която чете от конзолата число между 0 и 9 и отпечатва съответстващата му римска цифра.
void Task2()
{ 
    int a;
    std::cin >> a;
    switch (a)
    {
    case 1: std::cout << "I";    break;
    case 2: std::cout << "II";   break;
    case 3: std::cout << "III";  break;
    case 4: std::cout << "IV";   break;
    case 5: std::cout << "V";    break;
    case 6: std::cout << "VI";   break;
    case 7: std::cout << "VII";  break;
    case 8: std::cout << "VIII"; break;
    case 9: std::cout << "IX";   break;
    }
}

// 1. Въвежда се цяло число от конзолата. Изведете на кознолата дали числото е положително, отрицателно или 0.
void Task1()
{ 
    int a;
    std::cin >> a;
    if (a > 0)
    {
        std::cout << "Positive";
    }
    else if (a < 0)
    {
        std::cout << "Negative";
    }
    else
    {
        std::cout << "Zero";
    }
}

int main()
{
    Task14();
}
