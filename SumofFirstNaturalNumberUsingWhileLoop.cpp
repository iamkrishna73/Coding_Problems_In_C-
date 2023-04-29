#include <iostream>
using namespace std;

int main(){
	int n, sum = 0;
	cout << "Enter a natural number: ";
	cin >> n;
	if(n <= 0){
		cout << "invalied number";
	}
	else{
		int i = 1;
		while(i <= n){
			sum += i;
			i++;
		}
		cout << sum << endl;
	}
	return 0;
}


