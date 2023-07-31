#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter a number : ";
    cin >> num;
    if(num%3 == 0)
        cout << "It is a multiple of 3";
    else
        cout << "It is not a multiple of 3";
}