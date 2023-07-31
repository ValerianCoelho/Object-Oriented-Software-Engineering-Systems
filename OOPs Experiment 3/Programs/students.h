#include <iostream>
using namespace std;
int percentage(int MaxMarks, int marks[], int n)
{
    int sum = 0;
    for(int i=0; i<n; i++)
        sum = sum + marks[i];
    
    return (sum*100)/(MaxMarks*n);
}
void displayGrade(int percentage)
{
    if(percentage > 100)     cout << "Invalid Percentage";
    else if(percentage>=70)  cout << "Distinction";
    else if(percentage>=60)  cout << "First Class";
    else if(percentage>=50)  cout << "Second Class";
    else if(percentage>=40)  cout << "Pass Class";
    else cout << "Fail";
}