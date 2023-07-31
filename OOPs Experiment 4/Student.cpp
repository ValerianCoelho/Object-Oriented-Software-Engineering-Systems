#include <iostream>
#include <cstring>
using namespace std;
class Student{
	private:
		string name, branch;
        int rollno;
	public:
		Student(){
			name = "Valerian";
			rollno = 68;
			branch = "Computer";
		}
		Student(string name, string branch, int rollno){
			this->name = name;
			this->branch = branch;
            this->rollno = rollno;
		}
		void display(){
            cout << "Name : " << name << endl;
            cout << "Roll Number : " << rollno << endl;
            cout << "Branch : " << branch << endl << endl;

		}
		~Student(){
		    cout<<"Object Destroyed\n";
		}
};
int main(){
    Student a, b("Joshua", "Mechanical", 34);
    a.display();
    b.display();

}