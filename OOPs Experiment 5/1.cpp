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
        Complex operator + (const Complex &obj)
        {
            Complex result;
            result.real = real + obj.real;
            result.imag = imag + obj.imag;
            return result;
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
    Complex c3 = c1 + c2;
    cout << "c1 = "; c1.display();
    cout << "c2 = "; c2.display();
    cout << "Result = "; c3.display();
    return 0;
}