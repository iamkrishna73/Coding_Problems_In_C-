#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	string a, b, result;
	getline(cin, a);
	getline(cin, b);
	cout << a << endl;
	cout << b << endl;
	cout << a.size() <<" " <<b.size() <<endl;
	result = a +b;
	cout << result << endl;
	swap( a[0], b[0] );
    cout << a << ' ' <<  b << endl;
	return 0;
}
