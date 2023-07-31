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
        void display()
        {
            cout << num << endl;
        }
        friend void operator ++ (Number &obj);
        friend void operator ++ (Number &obj, int);
};

void operator ++(Number &obj)
{
    ++obj.num;
}
void operator ++(Number &obj, int)
{
    obj.num++;
}

int main()
{
    Number n1(2);
    Number n2(4);

    cout << "Before Incrementation\n";

    cout << "n1 : ";
    n1.display();

    cout << "n2 : ";
    n2.display();

    cout << "After Incrementation\n";

    ++n1;
    n2++;

    cout << "n1 : ";
    n1.display();

    cout << "n2 : ";
    n2.display();
    return 0;
}