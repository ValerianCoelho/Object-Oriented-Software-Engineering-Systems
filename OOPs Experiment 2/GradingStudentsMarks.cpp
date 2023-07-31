#include <iostream>
using namespace std;
int main()
{
    float percentage;

    cout << "Enter your percentage : ";
    cin >> percentage;

    if(percentage > 100)     cout << "Invalid Percentage";
    else if(percentage>=70)  cout << "Distinction";
    else if(percentage>=60)  cout << "First Class";
    else if(percentage>=50)  cout << "Second Class";
    else if(percentage>=40)  cout << "Pass Class";
    else cout << "Fail";
}
