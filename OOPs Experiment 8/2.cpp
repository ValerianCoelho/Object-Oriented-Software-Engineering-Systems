// Write a program to handle array index out of bound exception

#include <iostream>
using namespace std;
int main()
{
    int a[50], n;
    cout << "Enter the size of the array : ";
    cin >> n;
    
    try{
        if(n > 50){
            throw n;
        }
        else{
            cout << "Enter the elements to be inserted in the array : ";
            for(int i=0; i<n; i++)
                cin >> a[i];
        }
    }
    catch(int n){
        cout << "ERROR : array index out of bound";
        return 0;
    }
    cout << "The array is : ";
    for(int i=0; i<n; i++)
        cout <<  a[i] << " ";
    return 0;
}

// OUTPUT:

// Enter the size of the array : 51
// ERROR : array index out of bound

// Enter the size of the array : 5
// Enter the elements to be inserted in the array : 1 2 3 4 5
// The array is : 1 2 3 4 5