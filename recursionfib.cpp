#include <iostream>
using namespace std;

int fib(int n){
	if(n ==0 || n == 1){
		return n;
	}
	else {
		return fib (n-1) + fib(n -2);
	}
}

int main(){
	int n , m = 0;
	cout << "Enter a number: ";
	cin >> n;
	for(int i = 0; i <= n; i++){
		if(m <= i){
		    cout << "fibonacci series are: ";
		    cout << fib(m) << endl;
		    m++;
		}
	}
	return 0;
}

