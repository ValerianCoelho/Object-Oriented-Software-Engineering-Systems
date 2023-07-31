#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{
    int choice;
    float area;
    cout << "Choose One Of the Following :-\n";
    cout << "1) Triangle\n2) Circle\n3) Square\n4) Rectangle\nEnter Choice : ";
    cin >> choice;
    switch(choice)
    {
        case 1:
            int base, height;
            cout << "Enter the base and height : ";
            cin >> base >> height;
            area = 0.5 * base * height;
            break;
        case 2:
            int radius;
            cout << "Enter the radius : ";
            cin >> radius;
            area = 3.14 * radius *radius;
            break;
        case 3:
            int side;
            cout << "Enter the side : ";
            cin >> side;
            area = side * side;
            break;
        case 4:
            int length, breadth;
            cout << "Enter the length and Breadth : ";
            cin >> length >> breadth;
            area = length * breadth;
            break;
    }
    cout << "Area : " << area;
    return 0;
}