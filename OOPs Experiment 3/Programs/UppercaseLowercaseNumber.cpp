#include <iostream>
#include <cctype>

using namespace std;

int main()
{
    char ch;
    int choice;
    printf("Enter a character : ");
    scanf("%c",&ch);
    printf("1) To check if it is Uppercase\n2) To check if it is Lowercase\n3) To check if it is a Number\nEnter Choice : ");
    scanf("%d",&choice);
    switch(choice)
    {
    case 1:
        if(isupper(ch))
            cout << "True";
        else
            cout << "False";
        break;
    
    case 2:
        if(islower(ch))
            cout << "True";
        else
            cout << "False";
        break;

    case 3:
        if(isdigit(ch))
            cout << "True";
        else
            cout << "False";
        break;

    default:
        printf("Invalid input\n");
    }
    return 0;
}

