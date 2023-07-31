// Write a program to throw an exception if users enters a number outside the range [1-99]

#include<iostream>
using namespace std;
void test(int n)
{
    try{
        if(n<1 || n>99)
            throw n;
        else
        {
            cout << "The number is : " << n;
        }
    }
    catch(int)
    {
        cout << "exception caught : number outside the range [1-99] \n";
    }
}
int main()
{
    int x;
    cout << "Enter the value of n : ";
    cin>>x;
    test(x);

}
