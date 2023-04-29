 #include <bits/stdc++.h>
using namespace std;
//  using recursion

int fact_rec(int n){
	if( n == 0 || n == 1){
		return 1;
	}
	else{
		return n *fact_rec(n - 1);
	}
}

int main(){
	int n, f;
	cout << "Enter a number: ";
	cin >> n;
	f = fact_rec(n);
	cout << "the factorial of " << n << " is: " << f << endl;
	return 0;
}