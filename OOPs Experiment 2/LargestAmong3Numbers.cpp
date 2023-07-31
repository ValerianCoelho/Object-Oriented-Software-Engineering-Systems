#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cout << "Enter 3 numbers : ";
    cin >> a >> b >> c;
    if (a>b && a>c)
        cout << a << " is Largest";
    if (b>a && b>c)
        cout << b << " is Largest";
    if (c>a && c>b)
        cout << c << " is Largest";
    return 0;
}


