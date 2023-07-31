#include <iostream>
#include <string>
using namespace std;
int main()
{
    string text;
    int tab = 0, newline = 0, whitespace = 0;
    cout << "Enter the text : \n";
    getline(cin, text, '.');
    for(int i=0; i<text.length(); i++)
    {
        if(text[i] == '\t')
            tab++;
        else if(text[i] == '\n')
            newline++;
        else if(text[i] == ' ')
            whitespace++;
    }
    cout << "Tabs : " << tab << endl;
    cout << "Newline : " << newline << endl;
    cout << "Whitespace : " << whitespace << endl;
    return 0;
}

// OUTPUT
// Enter the text : 
// Name:   Valerian Coelho
// Age:    18.
// Tabs : 2
// Newline : 1
// Whitespace : 1