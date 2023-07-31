// Write a program to demonstrate multiple catch statements

#include<iostream>
using namespace std;
void test(int x)
{
    try{
        if(x==0)        throw x;
        else if(x==1)   throw 0.00;
        else if(x==2)   throw 'x';
    }
    catch(int x)
    {
        cout << "exception caught : integer value\n";
    }
    catch(double x)
    {
        cout << "exception caught : double value\n";
    }
    catch(char x)
    {
        cout << "Exception caught : character value\n";
    }
}
int main()
{
    cout << "Testing For all values of x(0, 1, 2)\n";
    test(0);
    test(1);
    test(2);
}

// OUTPUT:

// Testing For all values of x(0, 1, 2)
// exception caught : integer value
// exception caught : double value
// Exception caught : character value