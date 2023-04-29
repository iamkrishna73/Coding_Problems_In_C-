#include <iostream>
using namespace std;
#define fast  ios_base::sync_with_stdio(false);cin.tie(NULL);


int main(){
	fast
	int n = 5;
	cout << &n << endl;
	int* ptr = &n;
	cout << ptr <<endl;
	cout << *ptr << endl;
	*ptr = 10;
	cout << *ptr <<endl;
	cout << n <<endl;


	return 0;
} 