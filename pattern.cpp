#include <bits/stdc++.h>
// #include <iostream.h>
using namespace std;
int main() {
	int n; cin >> n;
	// *
 //      *
 //    *
 //      *
 // //    *
 //    for(int i = 0; i < n; i++) {
 //    	if(i % 2 == 0) 
 //    		cout << "*";
 //    	else
 //    		cout << "  *";
 //    	cout << endl;
 //    }

	/*
		* * * * *
		* *		*
		*   *	*
		*	  *	*
		* * * * *
	*/

	for(int i = 0; i < n; i++) {
		for(int j = 0; j < n; j++) {
			if(i == 0 or i == n - 1) {
				cout << "* ";
			}else if(j == 0 or j == n - 1) {
				cout << "* ";
			}else{
				cout << "  ";
			}
		}
		cout << endl;
	}
    return 0;
}