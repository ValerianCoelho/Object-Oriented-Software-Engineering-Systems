#include<iostream>
using namespace std;

class student
{
    private:
        string name="ABCD",game="Football";
        int roll;

    public:
        student(int roll)
        {
            this->roll = roll;
            cout<<"Constructor executed\n";
            cout<<"21CO"<<roll<<endl;
        }
        int display()
        {
            cout<<"Name : "<<name<<endl;
            cout<<"Favourite Game : "<<game<<endl;
            cout<<"Roll Number : 21CO"<<roll<<endl;
        }
        ~student()
        {
            cout<<"Destructor executed";
        }
};

int main()
{
	{
	    student a(71);
        a.display();
    }
    {
	    student a(62);
        a.display();
    }
	return 0;
}