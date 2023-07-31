#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n;
    float mean, variance, standardDeviation, sum=0;
    cout << "Enter the value of n : ";
    cin >> n;
    int num[n];
    cout << "Enter the numbers : ";
    for(int i=0; i<n; i++)
    {
        cin >> num[i];
        sum = sum + num[i];
    }
    mean = sum/n;
    sum = 0;
    for(int i=0; i<n; i++)
    {
        sum = sum + pow(num[i]-mean, 2);
    }
    variance = sum/(n-1);
    standardDeviation = sqrt(variance);
    cout << "Mean : " << mean << endl;
    cout << "Variance : " << variance << endl;
    cout << "Standard Deviation : " << standardDeviation;
    return 0;
}