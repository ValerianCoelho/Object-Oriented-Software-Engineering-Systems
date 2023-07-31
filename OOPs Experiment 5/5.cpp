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
        friend void operator << (ostream &out, Number &obj);
        friend void operator >> (istream &in, Number &obj);
};

void operator << (ostream &out, Number &obj)
{
    out << obj.num;
}
void operator >> (istream &in, Number &obj)
{
    in >> obj.num;
}

int main()
{
    Number n1(2);
    cout << "Enter a value : ";
    cin >> n1;

    cout << "Displaying Object : ";
    cout << n1;
    return 0;
}