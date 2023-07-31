#include <iostream>
using namespace std;
class box
{
    private:
        int length, breadth, height;
    public:
        box(){
            length = 10;
            breadth = 15;
            height = 20;
        }
        box(int length, int breadth, int height){
            this->length = length;
            this->breadth = breadth;
            this->height = height;
        }
        int surface_area(){
            return 2*(length*breadth+breadth*height+height*length);
        }
        int volume(){
            return length*breadth*height;
        }
        ~box(){
            cout << "\nObject Destroyed";
        }
};

int main()
{
    box a, b(5, 20, 25);
    cout << "Box A :-" << endl;
    cout << "Surface Area : " << a.surface_area() << endl;
    cout << "Volume : " << a.volume() << endl << endl;
    cout << "Box B :-" << endl;
    cout << "Surface Area : " << b.surface_area() << endl;
    cout << "Volume : " << b.volume() << endl;
    return 0;
}