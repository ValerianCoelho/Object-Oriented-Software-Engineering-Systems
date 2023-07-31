#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cout << "Enter the values of a, b and c : ";
    cin >> a >> b >> c;
    if(a<b && a<c)
        cout << a << " is the smallest";
    if(b<a && b<c)
        cout << b << " is the smallest";
    if(c<b && c<a)
        cout << c << " is the smallest";
    return 0;
}
