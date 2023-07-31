#include <iostream>
#include <string>
using namespace std;
int main()
{
    string firstname, surname, fullname;
    cout << "Enter your name : ";
    getline(cin, firstname);
    cout << "Enter your surname : ";
    getline(cin, surname);
    fullname = firstname + " " + surname;
    cout << "Full Name : " << fullname;
    return 0;
}

// OUTPUT
// Enter your name : Valerian
// Enter your surname : Coelho
// Full Name : Valerian Coelho