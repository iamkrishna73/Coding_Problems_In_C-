#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, flag = 0;
	cout << "Enter a number: ";
	cin >> n;
	for(int i = 0; i <= n; i++){
		int j = i*1;
		if(j = n){
			flag = 1;
			break;
		}
		if(j > n){
			break;
		}
	}
	if(flag == 1){
		cout << n <<" is a perfect square"<<endl;
	}
	else{
		cout << n <<"is not a perfect square"<<endl;
	}
	return 0;
}

