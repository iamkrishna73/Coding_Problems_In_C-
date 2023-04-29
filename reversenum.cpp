#include <iostream>
using namespace std;

int main(){
	int n, rev = 0, rem;
	cout << "enter a number: ";
	cin >> n;
	while(n != 0){
		rem = n % 10;
		rev = rev * 10 + rem;
		cout << rem << endl;
		n = n/10;
	}
	cout <<"reverse number: " << rev << endl;
	return 0;
}
