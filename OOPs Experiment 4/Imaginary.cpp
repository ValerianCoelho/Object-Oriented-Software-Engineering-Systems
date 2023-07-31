#include <iostream>
using namespace std;
class Complex_Nos{
    private:
        float real, imag;
    public:
        Complex_Nos(float real, float imag){
            this->real = real;
            this->imag = imag;
        }
        Complex_Nos(Complex_Nos &a){
            this->real = a.real;
            this->imag = a.imag;
        }
        ~Complex_Nos(){
            cout << "\nObjects Destroyed";
        }
        friend void Display_Sum(Complex_Nos &, Complex_Nos &);
        friend void Display_Diff(Complex_Nos &, Complex_Nos &);
};
void Display_Sum(Complex_Nos &a, Complex_Nos &b){
    cout << "Summation : " << a.real+b.real << "+" << a.imag+b.imag << "i" << endl;
}
void Display_Diff(Complex_Nos &a, Complex_Nos &b){
    cout << "Difference : " << a.real-b.real << "+" << a.imag-b.imag << "i" << endl;
}
int main(){
    Complex_Nos a(2, 3), b(a);
    Display_Sum(a, b);
    Display_Diff(a,b);
    return 0;
}