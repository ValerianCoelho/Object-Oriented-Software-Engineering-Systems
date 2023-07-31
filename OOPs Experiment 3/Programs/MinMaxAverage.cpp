#include <iostream>
using namespace std;
int main()
{
    int n;
    float sum=0, avg;
    cout << "Enter the value of n : ";
    cin >> n;
    int num[n];
    cout << "Enter the numbers : ";
    for(int i=0; i<n; i++)
    {
            cin >> num[i];
            sum = sum + num[i];
    }
    avg = sum/n;
    int min = num[0];
    int max = num[0];
    for(int i=0; i<n; i++)
    {
        if(num[i]<min)
            min = num[i];
        if(num[i]>max)
            max = num[i];
    }
    cout << "Min : " << min << endl;
    cout << "Max : " << max << endl;
    cout << "Avg : " << avg << endl;
    return 0;
}
