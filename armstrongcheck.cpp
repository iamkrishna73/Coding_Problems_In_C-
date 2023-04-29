#include <iostream>
using namespace std;

int main(){
	int n, rem, sum = 0;
	cout << "Enter a number: ";
	cin >> n;
	int j = n;
	while(j){
		rem  = j % 10;
		sum  += rem*rem*rem; 
		j = j/10; 
	}
	if(sum == n){
		cout << n << " is  number";
	}
	else{
		cout << n << " is not armstrong number";
	}
	return 0;
}


