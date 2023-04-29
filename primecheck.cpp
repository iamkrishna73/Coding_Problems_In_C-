#include <iostream>
using namespace std;

bool primecheck(int n){
	for(int i = 2; i < n; i++){
		if(n%i == 0){
			return false;
		}
	}
	return true;
}

int main(){
	int number;
	cout << "Enter a number: ";
	cin >> number;
	if(primecheck(number)){
		cout << "Prime number" << endl;
	}
	else{
		cout << "Not prime number" << endl;
	}
	return 0;
}
