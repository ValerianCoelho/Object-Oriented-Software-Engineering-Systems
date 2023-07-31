#include <iostream>
using namespace std;

void sort(int array[], int size) {
    for (int step = 0; step < (size-1); ++step) 
    {
        int swapped = 0;
        for (int i = 0; i < (size-step-1); ++i)
        {
            if (array[i] > array[i + 1])
            {
                int temp = array[i];
                array[i] = array[i + 1];
                array[i + 1] = temp;
                swapped = 1;
            }
        }
        if (swapped == 0)
            break;
    }
}

int main() {
    int n;
    float median;

    cout << "Enter the value of n : ";
    cin >> n;

    int num[n];

    cout << "Enter the numbers : ";
    for(int i=0; i<n; i++)
        cin >> num[i];

    sort(num, n);

    if(n%2 == 1)    median = num[n/2];
    else            median = (num[n/2-1] + num[n/2])/2.0;
    
    cout << "Median : " << median;
    return 0;
}
