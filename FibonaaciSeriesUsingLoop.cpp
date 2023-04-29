#include <iostream>
using namespace std;

int main(){
	int t1 = 0, t2 = 1, NextTerm = 0, number;
	cout << "Enter a number: ";
	cin >> number;
	cout << "Fibonnaci series upto " << number << " is";
	for(int i = 1; i <= number; i++){
		if(i == 1){
			cout << t1 << " ";
			continue;
		}
		if(i == 2){
			cout << t2 << " ";
			continue;	
		}

		NextTerm = t1 + t2;
		t1 = t2;
		t2 = NextTerm;

		cout << NextTerm << " ";
	}
	return 0;
}