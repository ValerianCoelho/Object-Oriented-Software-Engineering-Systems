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
        void operator -- ()
        {
            --num;
        }
        void operator -- (int)
        {
            num--;
        }
        void display()
        {
            cout << num;
        }
};

int main()
{
    Number n(5);
    cout << "Before decrementation" << endl;
    cout << "n : ";
    n.display();

    --n;
    cout << "\nAfter pre-decrementation" << endl;
    cout << "n : ";
    n.display();

    n--;
    cout << "\nAfter post-decrementation" << endl;
    cout << "n : ";
    n.display();
    return 0;
}