#include <bits/stdc++.h>
using namespace std;

bool checkprime(int n){
	for(int i = 2; i < n; i++){
		if(n % i == 0){
			return false;
		}
	}
	return true;
}

int main(){
	int n1, n2, c;
	cout << "Enter a any two number: ";
	cin >> n1 >> n2;
	if(n1 < n2){
		for(int i = n1; i <= n2; i++){
			c = checkprime(i);
			if(c){
				cout << " "<< i;
			}
		}
	}
	else{
		cout << "n1 is greater than n2"<< endl;
	}
	return 0;
}

