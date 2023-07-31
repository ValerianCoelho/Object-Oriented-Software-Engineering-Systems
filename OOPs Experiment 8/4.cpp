// Write a program to handle all types of exceptions using a single catch block.

#include<iostream>
using namespace std;
void test(int a)
{
    try{
        if(a==0)
            throw a;
        else if(a==1)
            throw 0.00;
        else if(a==2)
            throw 'a';
    }
   catch(...){
    cout << "Exception caught \n";
   }
}
int main()
{
    int x;
    cout << "Enter the values of x : ";
    cin >> x;
    test(x);
}

// OUTPUT:

// Enter the values of x : 0
// Exception caught 

// Enter the values of x : 1
// Exception caught 

// Enter the values of x : 2
// Exception caught 