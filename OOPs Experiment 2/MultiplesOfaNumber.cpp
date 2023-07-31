#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int num, tables;
    cout << "Enter a number and the number of table u want :  ";
    cin >> num >>  tables;
    for(int i=1; i<=tables; i++)
    {
        cout << num << "*" << i << "=" << num*i << endl;
    }
    return 0;
}

