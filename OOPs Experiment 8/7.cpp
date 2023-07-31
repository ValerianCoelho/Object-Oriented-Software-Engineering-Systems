// Write a program to implement nested try catch block and rethrowing of an exception.

#include<iostream>
using namespace std;
void test(int a)
{
    try{
        if(a==0) throw 'a';
        try{
            if(a==1) throw a;
            try{
                if(a==2) throw 0.00;
            }
            catch(double)   {cout<<"exception: double\n"; throw;}
        }
        catch(int)
        {cout<<"Exception : integer\n";throw;}
    }
    catch(char)
    {
        cout<<"\nException: character\n";
        throw ;     //rethrowing
    }
}
int main()
{
    int a;
    cout<<"\nEnter the values of a : ";
    cin>>a;
    try{
        test(a);
    }
    catch(...)
    {
        cout<<"Caught inside main\n";
    }

}
