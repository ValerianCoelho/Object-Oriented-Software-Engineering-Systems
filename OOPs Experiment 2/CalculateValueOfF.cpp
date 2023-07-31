#include <iostream>
using namespace std;
int main()
{
    float e = 8.8572;
    float pi = 3.1415;
    float q1, q2, r1, r2;
    cout << "Enter the values : ";
    cin >> q1 >> q2 >> r1 >> r2;
    cout << "F : " << (q1*q2*r2)/(4*pi*e*r1*r1);
    return 0;
}
