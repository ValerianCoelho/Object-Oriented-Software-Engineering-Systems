// Derive classes DOCTOR, ENGINEER, ARTIST from class PERSON. 
// Derive class SPECIALIST DOCTOR from class DOCTOR.

#include <iostream>
#include <string>
using namespace std;
class PERSON{
    protected:
        int age;
        float height;
        string name;
    public:
        void set_data(){
            cout << "Enter your name : ";
            cin.ignore();
            getline(cin, name);
            cout << "Enter your age : ";
            cin >> age;
            cout << "Enter your height : ";
            cin >> height;
        }
        void display(){
            cout << "Name : " << name << endl;
            cout << "Age : " << age << endl;
            cout << "Height : " << height << endl;
        }
};
class DOCTOR : public PERSON{
    protected:
        string type_of_doctor;
    public:
        void set_data_doctor(){
            set_data();
            cout << "Enter what type of doctor your are : ";
            cin.ignore();
            getline(cin, type_of_doctor);
        }
        void display_doctor(){
            display();
            cout << "I am a " << type_of_doctor << " Doctor" << endl;
        } 
};
class ENGINEER : public PERSON{
    protected:
        string type_of_engineer;
    public:
        void set_data_engineer(){
            set_data();
            cout << "Enter what type of engineer your are : ";
            cin.ignore();
            getline(cin, type_of_engineer);
        }
        void display_engineer(){
            display();
            cout << "I am a " << type_of_engineer << " Engineer" << endl;
        }
};
class ARTIST : public PERSON{
    protected:
        string type_of_artist;
    public:
        void set_data_artist(){
            set_data();
            cout << "Enter what type of artist you are : ";
            cin.ignore();
            getline(cin, type_of_artist);
        }
        void display_artist(){
            display();
            cout << "I am a " << type_of_artist << " Artist" << endl;
        }
};
class SPECIALIST_DOCTOR : public DOCTOR{
    protected:
        string special_type_of_doctor;
    public:
        void set_special_data_doctor(){
            set_data_doctor();
            cout << "Enter what did you specialize in? : ";
            cin.ignore();
            getline(cin, special_type_of_doctor);
        }
        void display_special_doctor(){
            display_doctor();
            cout << "I am a " << special_type_of_doctor << " Doctor" << endl;
        }
};
int main()
{
    DOCTOR d;
    cout << "Doctor ---------------------------------------\n";
    d.set_data_doctor();
    d.display_doctor();
    ENGINEER e;
    cout << "engineer ---------------------------------------\n";
    e.set_data_engineer();
    e.display_engineer();
    ARTIST a;
    cout << "artist ---------------------------------------\n";
    a.set_data_artist();
    a.display_artist();
    SPECIALIST_DOCTOR sd;
    cout << "Special Doctor ---------------------------------------\n";
    sd.set_special_data_doctor();
    sd.display_doctor();
    return 0;
}


// OUTPUT
// Doctor ---------------------------------------
// Enter your name :  Valerian
// Enter your age : 18
// Enter your height : 175
// Enter what type of doctor your are :  General Surgeon
// Name : Valerian
// Age : 18       
// Height : 175   
// I am a General Surgeon Doctor
// engineer ---------------------------------------
// Enter your name :  Conrad
// Enter your age : 19
// Enter your height : 173
// Enter what type of engineer your are : Civil
// Name : Conrad
// Age : 19
// Height : 173
// I am a Civil Engineer
// artist ---------------------------------------
// Enter your name :  Joshua
// Enter your age : 23
// Enter your height : 176
// Enter what type of artist you are : 3D
// Name : Joshua
// Age : 23
// Height : 176
// I am a 3D Artist
// Special Doctor ---------------------------------------
// Enter your name :  Vincent
// Enter your age : 30
// Enter your height : 180
// Enter what type of doctor your are : Cardiologist
// Enter what did you specialize in? : Cardiologist
// Name : Vincent
// Age : 30
// Height : 180
// I am a Cardiologist Doctor