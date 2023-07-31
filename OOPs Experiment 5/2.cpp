#include <iostream>
using namespace std;

class Complex
{
    private:
        int real;
        int imag;

    public:
        Complex(int real = 0, int imag = 0)
        {
            this->real = real;
            this->imag = imag;
        }

        void operator ++()
        {
            ++real;
            ++imag;
        }
        void operator ++(int)
        {
            real++;
            imag++;
        }
        
        void display()
        {
            cout << real << " + " << imag << "i\n";
        }
};

int main()
{
    Complex c1(2, 3);
    Complex c2(4, 5);

    cout << "Before Incrementation\n";

    cout << "c1 : ";
    c1.display();

    cout << "c2 : ";
    c2.display();

    cout << "After Incrementation\n";

    ++c1;
    c2++;

    cout << "c1 : ";
    c1.display();

    cout << "c2 : ";
    c2.display();
    return 0;
}