#include <iostream>
#include <string>
using namespace std;
int main()
{
    string text, word;
    cout << "Enter some text : ";
    getline(cin, text);
    cout << "Enter word to be searched : ";
    getline(cin, word);
    int pos = text.find(word);
    cout << "Word Found at location : " << pos+1;
    return 0;
}

// OUTPUT
// Enter some text : I love Python
// Enter word to be searched : Python
// Word Found at location : 8