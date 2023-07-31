// Multilevel inheritance
#include <iostream>

#include <string>

using namespace std;
class Shape {
    protected:
    int dim[10], n;
    void setShapeData() {
        cout << "Enter the no of dimensions : ";
        cin >> n;
        cout << "Enter the length for " << n << " sides : ";
        for (int i = 0; i < n; i++) {
            cin >> dim[i];
        }
    }
    int * getDim() {
        return dim;
    }
    int getSize() {
        return n;
    }
};
class Quadrilateral: public Shape {
    int no_of_equalsides;
    public:
    void setQuadData() {
        setShapeData();
        cout << "Enter no of equal sides : ";
        cin >> no_of_equalsides;
    }
    int get_EqualSides() {
        return no_of_equalsides;
    }
};
class Rectangle: public Quadrilateral {
    public: 
    void computeArea() {
    int * d;
    d = getDim();
    int prod = 1;
    for (int i = 0; i < getSize(); i++) {
        prod = prod * dim[i];
        }
    cout << "area = " << prod << endl;
    }
};
int main() {
    Rectangle r;
    r.setQuadData();
    r.computeArea();
    return 0;
}


// OUTPUT
// Enter the no of dimensions : 2
// Enter the length for 2 sides : 3 4
// Enter no of equal sides : 2
// area = 12