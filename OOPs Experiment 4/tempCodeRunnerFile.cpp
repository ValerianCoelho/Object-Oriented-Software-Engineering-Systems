#include <iostream>
using namespace std;

class example{
    private:
        int value;
    public:
        example(int value){
            this->value = value;
        }
        void display(){
            cout << "Value : " << value;
        }
        ~example(){
            cout << "\nObject Destroyed\n" << endl;
        }
};

int main(){
    {
        example a(5);
        a.display();
    }
    {
        example a(10);
        a.display();
    }
    return 0;
}