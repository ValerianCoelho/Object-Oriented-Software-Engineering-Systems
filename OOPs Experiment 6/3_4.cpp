#include <iostream>
#include <string>
using namespace std;
int main()
{
    string name;
    cout << "Enter your name : ";
    getline(cin, name);
    for(int i=0; i<name.length(); i++)
        name[i] = toupper(name[i]);
    cout << "Name in Uppercase : " << name << endl;
    for(int i=0; i<name.length(); i++)
        name[i] = tolower(name[i]);
    cout << "Name in Lowercase : " << name << endl;
    return 0;
}

// OUTPUT
// Enter your name : Valerian Coelho
// Name in Uppercase : VALERIAN COELHO
// Name in Lowercase : valerian coelho