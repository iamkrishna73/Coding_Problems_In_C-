#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, fact = 1;
	cout <<"Enter a number: ";
	cin >> n;
	if(n == 0){
		cout<< "Factorial of "<< n << " is: " << 1 << endl;
	}
	else if(n >= 1){
		for(int i = 1; i <= n; i++){
			fact *= i;
		}
		cout<< "Factorial of "<< n << " is: " << fact << endl;
	}
	else{
		cout << "invalid number"<< endl;
	}
	return 0;
}


