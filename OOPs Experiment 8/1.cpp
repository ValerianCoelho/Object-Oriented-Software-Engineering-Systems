//1. Write a program to include a function to enter user input for two double values and to
//divide two numbers. Include a try catch block to handle the divide by zero exception.

#include <iostream>
using namespace std;

void input(){
    double num, den;
    cout << "Enter the numerator and denominator : ";
    cin >> num >> den;

    try{
        if(den == 0){
            throw den;
        }
        else{
            cout << "Value : " << num / den;
        }
    }
    catch(double den){
        cout << "Value : infinity";
    }
}

int main()
{
    input();
    return 0;
}

// OUTPUT:

// Enter the numerator and denominator : 5 2
// Value : 2.5

// Enter the numerator and denominator : 3 0
// Value : infinity

