#include <iostream>

using namespace std;

class base{
	int a;
public:
	void display() {
		cout << "base class";
	}
};
class derived : public base{
public:
	int a;
	void display() {
		cout << "derived class";
	}
};
int main() {
	base obj = derived();
	obj.display();
	return 0;
}