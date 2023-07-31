#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int marks[5];
    int max, min;
    float sum = 0;
    cout << "Enter marks of 5 subjects : ";
    for(int i=0; i<5; i++)
        cin >> marks[i];

    max = min = marks[0];

    for(int i=0; i<5; i++)
    {
        sum = sum + marks[i];
        if(max < marks[i])
            max = marks[i];
        if(min > marks[i])
            min = marks[i];
    }

    cout << "Max : " << max << "\nMin : " << min << "\nAvg : " << sum/5;

    return 0;
}

