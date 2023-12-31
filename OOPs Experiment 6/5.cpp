#include <iostream>
using namespace std;

void display(int list[], int n)
{
    for(int i=0; i<n; i++)
        cout << list[i] << " ";
    cout << endl;
}
void bubbleSort(int arr[], int n)
{
   int i, j;
   bool swapped;
   for (i = 0; i < n-1; i++){
        swapped = false;
        for (j = 0; j < n-i-1; j++){
            if (arr[j] > arr[j+1]){
                swap(arr[j], arr[j+1]); swapped = true;
            }
        }if (swapped == false)  break;
   }
}
void binarySearch(int list[], int n, int key)
{
    int pos = -1, low = 0, high = n-1, mid = (low+high)/2;
    while(low <= high)
    {
        if(key == list[mid]){
            pos = mid + 1;
            break;
        }
        else if(key < list[mid])    high = mid-1;
        else if(key > list[mid])    low = mid + 1;
        mid = (low + high)/2;
    }
    if(pos == -1)   cout << "The element is not present in the list";
    else    cout << "The element is found at position : " << pos;
}
int main()
{
    int n, key, list[10];
    cout << "Enter the number of elements : ";  cin >> n;
    cout << "Enter the elements in the array : ";
    for(int i=0; i<n; i++)  cin >> list[i];
    cout << "Array Before Sorting : " ; display(list, n);
    bubbleSort(list, n);
    cout << "Array After Sorting : " ; display(list, n);
    cout << "Enter the element you want to search : ";
    cin >> key;
    binarySearch(list, n, key);
    return 0;
}

// OUTPUT
// Enter the number of elements : 5 
// Enter the elements in the array : 6 3 4 2 5  
// Array Before Sorting : 6 3 4 2 5
// Array After Sorting : 2 3 4 5 6
// Enter the element you want to search : 3
// The element is found at position : 2