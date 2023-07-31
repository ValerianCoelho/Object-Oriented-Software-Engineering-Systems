#include <iostream>
using namespace std;

class Number
{
    private:
        int num;
    public:
        Number(int num = 0)
        {
            this->num = num;
        }
        void operator -()
        {
            num = -num;
        }
        void display()
        {
            cout << num << endl;
        }
};

int main()
{
    Number n1(3);

    cout << "Before Using Unary operator\n";
    cout << "num : ";
    n1.display();

    -n1;

    cout << "After Using Unary operator\n";
    cout << "num : ";
    n1.display();
    return 0;
}