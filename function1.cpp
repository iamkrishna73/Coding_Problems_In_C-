#include <iostream>
using namespace std;

class ComplexNum{
public:
	int real;
	float imaginary;

public:
	ComplexNum(int a , float b){
		real = a; 
		imaginary = b;
	}

	void displaydata(){
		cout<<"the real and imaginary part is " <<real<<"+ " <<imaginary<<"i"<<endl;
	}

};

int main(){
	ComplexNum complex(4, 5);
	cout << complex.real << " " << complex.imaginary <<endl;
	complex.displaydata();

	return 0;
}