#include <iostream>
#include "students.h"
using namespace std;
int main()
{
    int MaxMarks, n;
    int marks[10];
    cout << "Enter the number of subjects : ";
    cin >> n;
    cout << "Enter the marks of the subjects : ";
    for(int i=0; i<n; i++)
        cin >> marks[i];
    cout << "Enter the Max Marks : ";
    cin >> MaxMarks;
    int per = percentage(MaxMarks, marks, n);
    cout << "Percentage : " << per << endl;
    cout << "Grade : ";
    displayGrade(per);
    return 0;
}