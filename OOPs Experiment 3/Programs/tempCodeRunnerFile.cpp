#include <iostream>
using namespace std;
int main()
{
    int age;
    cout << "Enter your age : ";
    cin >> age;
    if(age >= 0 && age <=1)
        cout << "Baby";
    else if(age >= 2 && age <=3)
        cout << "Toddler";
    else if(age >= 4 && age <=14)
        cout << "Child";
    else if(age >= 15 && age <=17)
        cout << "Youth";
    else if(age >= 18 && age <=24)
        cout << "Young Adult";
    else if(age >= 25 && age <=64)
        cout << "Adult";
    else if(age >= 65 && age <=100)
        cout << "Senior";
    return 0;
}