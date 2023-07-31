// Hierarchical inheritance
#include <iostream>

#include <string>

using namespace std;
class vehichle {
    protected:
    string vbrand;
    string vcolor;
    void setVData() {
        cout << "Enter Vehicle brand and color : ";
        cin.clear();
        cin >> vbrand >> vcolor;
    }
    void dispVData() {
        cout << "Vehicle brand : " << vbrand << endl;
        cout << "Vehicle color : " << vcolor << endl;
    }
};
class FourWheeler: public vehichle {
    string vtype;
    string vname;
    public:
    void setFWData() {
        setVData();
        cout << "Enter Vehicle type and name : ";
        cin >> vtype >> vname;
    }
    void dispFWData() {
        dispVData();
        cout << "vehichle type : " << vtype << endl;
        cout << "Vehicle name : " << vname << endl;
    }
};

class TwoWheeler: protected vehichle {
    public: string vtype;
    string vname;
    void setTWData() {
        setVData();
        cout << "Enter Vehicle type and name : ";
        cin >> vtype >> vname;
    }
    void dispTWData() {
        dispVData();
        cout << "vehichle type : " << vtype << endl;
        cout << "Vehicle name : " << vname << endl;
    }
};

int main() {
    TwoWheeler tw;
    FourWheeler fw;
    tw.setTWData();
    fw.setFWData();
    tw.dispTWData();
    fw.dispFWData();
    return 0;
}

// OUTPUT
// Enter Vehicle brand and color: Zeus Raven
// Enter Vehicle type and name : Two_Wheeler Pegasus
// Enter Vehicle brand and color: Tesla Black
// Enter Vehicle type and name : Four_Wheeler Prometheus
// Vehicle brand : Zeus
// Vehicle color : Raven
// vehichle type : Two_Wheeler
// Vehicle name : Pegasus
// Vehicle brand : Tesla
// Vehicle color : Black
// vehichle type : Four_Wheeler
// Vehicle name : Prometheus