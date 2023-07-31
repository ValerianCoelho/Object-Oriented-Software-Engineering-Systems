#include <iostream>
using namespace std;

class Solid{
	private:
		float radius;
		float height;
	public:
		Solid(){
			radius = 10;
			height = 10;
		}
		Solid(int height, int radius = 10){
			this->height = height;
			this->radius = radius;
		}
		float cylinder(){
			return 3.14*radius*radius*height;
		}
		float cone(){
			return (3.14*radius*radius*height)/3;
		}
		~Solid(){
			cout << "\nObject Destroyed";
		}
};
int main()
{
	Solid a, b(10), c(10, 20);
	cout << "Solid A :-" << endl;
	cout << "Volume of Cylinder (Object A) : " << a.cylinder() << endl;
	cout << "Volume of Cone (Object A) : " << a.cone() << endl << endl;

	cout << "Solid B :-" << endl;
	cout << "Volume of Cylinder (Object B) : " << b.cylinder() << endl;
	cout << "Volume of Cone (Object B) : " << b.cone() << endl << endl;

	cout << "Solid C :-" << endl;
	cout << "Volume of Cylinder (Object C) : " << c.cylinder() << endl;
	cout << "Volume of Cone (Object C) : " << c.cone() << endl;

}

