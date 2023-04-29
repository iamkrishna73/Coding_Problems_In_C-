#include <iostream>
using namespace std;

int main(){
	int n, rem , rev = 0;
	cout << "Enter a number:";
	cin >> n;
	int j = n;
	while(j != 0){
		rem = j % 10;
		rev = rev *10 + rem;
		j = j /10;	
	}
	cout << "reverse is " << rev << endl;
	if(rev == n){
		cout << "true" <<endl;

		}
	else {
		cout << "false" <<endl;
	}
	return 0;
}

