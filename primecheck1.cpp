#include <bits/stdc++.h>
using namespace std;

int checkprime(int n){
	int cnt = 1;
	for(int i = 2; i <= n/2 ; i++){
		if(n % i == 0){
			cnt = cnt - 1;
			break;
		}
	}
	return cnt;
}

int main(){
	int n1, n2, c;
	cout << "Enter a number: ";
	cin >> n1 >> n2;
	for(int i = n1; i <= n2; i++){
		c = checkprime(i);
		if(c == 1){
			cout <<" "<<i;
		}
	}
	return 0;
}