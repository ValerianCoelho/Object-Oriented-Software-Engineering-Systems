#include <iostream>
#include <string>
using namespace std;
int main()
{
    string text;
    int pos;
    cout << "Enter some text : ";
    getline(cin, text);
    cout << "Enter the position you want to split the string at : ";
    cin >> pos;
    string leftSubText = text.substr(0, pos);
    string rightSubText = text.substr(pos, text.length()-pos);
    cout << "Left sub-string : " << leftSubText << endl;
    cout << "Right sub-string : " << rightSubText << endl;
    return 0;
}

// OUTPUT
// Enter some text : Valerian Coelho
// Enter the position you want to split the string at : 8
// Left sub-string : Valerian
// Right sub-string :  Coelho
