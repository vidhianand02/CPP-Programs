#include <iostream>
using namespace std;

//class Mammals
class Mammals{
	public:
		void display1() {
			cout << "Hey, I am a mammal" << endl;
		}
};


//class MarineAnimals
class MarineAnimals {
	public:
		void display2() {
			cout << "Hey, I am a marine animal" << endl;
		}
};


//class BlueWhale
class BlueWhale : public Mammals, public MarineAnimals {
	public:
		void display3() {
			cout << "Hey, I belong to both the categories i.e. Mammals and  Marine Animals" << endl;
		}
};


int main()
{
	Mammals us;  
	MarineAnimals we; 
	BlueWhale pretty;
	
	us.display1(); 
	we.display2(); 
	pretty.display3(); 
	pretty.display1();
	pretty.display2();

	return 0;
}
