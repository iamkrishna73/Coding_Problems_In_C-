#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, a = -1, b = 1, sum = 0;
	cout << "Enter a number: ";
	cin >> n;
	for(int i = 0; i <= n; i++){
		sum = a + b;
		if(sum < n)
			cout << sum << endl;
		a = b;
		b = sum;
	}
	return 0;
}
