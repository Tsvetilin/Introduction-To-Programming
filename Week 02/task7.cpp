//7. Да се напише програма, която приема от входа 3 
// цели числа и ги отпечатва в сортиран вид.

int main()
{
    int num1, num2, num3, min, mid, max;
    std::cin >> num1 >> num2 >> num3;
    if (num1 < num2 && num1 < num3)
        min = num1;
    if ((num1 < num3 && num1 > num2) || (num1 < num2 && num1 > num3))
        mid = num1;
    if (num1 > num2 && num1 > num3)
        max = num1;
    if (num2 < num1 && num1 < num3)
        min = num2;
    if ((num2 > num1 && num2 < num3) || (num2 > num3 && num2 < num1))
        mid = num2;
    if (num2 > num1 && num2 > num3)
        max = num2;
    if (num3 < num1 && num3 < num2)
        min = num3;
    if ((num3 > num1 && num3 < num2) || (num3 > num2 && num3 < num1))
        mid = num3;
    if (num3 > num1 && num3 > num2)
        max = num3;
    std::cout << min << mid << max;
}

