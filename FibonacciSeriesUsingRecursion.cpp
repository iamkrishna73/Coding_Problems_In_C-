#include <bits/stdc++.h>
using namespace std;

// int fib_num(int n){
// 	if(n == 0 || n == 1){
// 		return n;
// 	}
// 	else{
// 		return fib_num(n - 1) + fib_num(n - 2);
// 	}
// }
// int main(){
// 	int n, f;
// 	cout << "Enter a number: ";
// 	cin >> n;
// 	f = fib_num(n);
// 	cout<<"the fibonacci series to following number: " << f <<endl;
// 	return 0;
// }
int main () {
	int n;
	// cin >> n;
	n = 4;
	for (int i = 1; i <= n; i++) {

		for (int j = 1; j <= i + 1; j++) {
			cout << (2 * i) << "";
		}
		cout << endl;
	}
	return 0;
}