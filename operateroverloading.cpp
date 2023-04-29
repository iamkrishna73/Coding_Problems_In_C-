#include <iostream>
#include <string>
using namespace std;
class complex{
private:
	int r, i;
public:
	complex(int r, int i){
		this ->r = r;
		this ->i = i;
	}
	complex(){}
	void displaydata(){
		cout << "real number = " << r << "imganary number = "<< i <<endl;
	}
	complex operator+(complex c){
		return (r+c.r, i+c.i);
	}
};

int main(){
	complex a(5, 6);
	complex b(8, 11);
	complex c = a+b;
	c.displaydata();
	return 0;
}

