//8. Да се напише програма, която при подадени радиус
// r и двумерна точка(х, у) проверява дали точката се 
// намира вътре / извън или по контура на окръжност с център(0, 0).
#include <iostream>

int main()
{
    float r, x, y, t;
    std::cin >> r >> x >> y;
    t = sqrt(x * x + y * y);
    if (r < t)
        std::cout << "outside";
    if (r == t)
        std::cout << "on";
    if (r > t)
        std::cout << "inside";
}
