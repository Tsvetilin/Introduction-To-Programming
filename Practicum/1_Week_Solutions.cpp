
#include <iostream>
using namespace std;
// int main() {
//     int a;
//     cin>>a;
//     cout<<!(a % 2);
//     return 0;
// }

// int main() {
//     int a, b;
//     cin>>a>>b;
//     cout<<a / b<<" "<<a % b;
//     return 0;
// }

// int main() {
//     double c, f;
//     cin>>c;
//     f =  (9.0 / 5) * c + 32;
//     cout<<f;
//     return 0;
// }

// int main() {
//     double a, b;
//     cin>>a>>b;
//     cout<<(a + b) * 2<<" "<<a * b;
//     return 0;
// }

// int main() {
//     int sec;
//     cin>>sec;
//     int days = sec / (60 * 24 * 60);
//     sec -= days * (60 * 24 * 60);
//     int hours = sec / (60 * 60);
//     sec -= hours * (60 * 60);
//     int min = sec / 60;
//     sec -= min * 60;
//     cout<<days<<" days, "<<hours<<" hours, "<<min<<" minutes and "<<sec<<" seconds";
//     return 0;
// }

// int main() {
//     int a;
//     cin>>a;
//     cout<<a / 10;
//     return 0;
// }

// int main() {
//     int a;
//     cin>>a;
//     cout<<(a >= 2 && a <= 6);
//     return 0;
// }

// int main() {
//     int a, b, c, d;
//     cin>>a>>b>>c>>d;
//     cout<<!(a > b || c > d);
//     return 0;
// }


// int main() {
//     int n;
//     cin>>n;
//     cout<<(1 + n) * (n / 2.0);
//     return 0;
// }

// int main() {
//     int a, b, c, d;
//     cin>>a>>b>>c>>d;
//     double q = b / a;
//     cout<<(a * q == b && b * q == c && c * q == d);
//     return 0;
// }

// int main() {
//     double a, b;
//     cin>>a>>b;
//     a = a * b;
//     b = a / b;
//     a = a / b;
//     cout<<a<<" "<<b;
//     return 0;
// }


int main() {
    int a, b;
    cin>>a>>b;
    cout<<(a > b) * a + (a <= b) * b;
    return 0;
}
