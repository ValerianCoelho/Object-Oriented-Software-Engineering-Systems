#include <iostream>
using namespace std;
class date{
    private:
        int day, month, year;
    public:
        date(){
            day = 10;
            month = 5;
            year = 2022;
        }
        date(int day, int month, int year){
            this->day = day;
            this->month = month;
            this->year = year;
        }
        void display(){
            cout << "Date : " << day << "-" << month << "-" << year << endl;
        }
        ~date(){
            cout << "\nObject Destroyed";
        }
};
int main(){
    date a, b(23, 7, 2022);
    a.display();
    b.display();
    return 0;
}