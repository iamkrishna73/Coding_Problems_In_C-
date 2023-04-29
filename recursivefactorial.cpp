#include <bits/stdc++.h>
using namespace std;

int fact(int n){
 	if(n < 0){
 		cout << " invalid number ";
 	}
 	else if(n == 0){
 		return n + 1;
 	}
 	else{
 		return n * fact(n - 1);
 	}
 }

 int main(){
 	int n;
 	cout << "Enter a number: ";
 	cin >> n;
 	cout << fact(n) << endl;
 	return 0;
 }

