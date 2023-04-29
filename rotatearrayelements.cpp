#include <bits/stdc++.h>
using namespace std;
#define fast  ios_base::sync_with_stdio(false);cin.tie(NULL);

int main(){
	fast
	int p = 3, n= 5;
	int arr[5] = {4, 5, 8, 2, 7};
	int x;

	for(int i = 0 ; i < p; i++){
		x = arr[0];
		for(int j = 0; j < n-1; j++){
			arr[j] = arr[j +1];	
		}
		arr[n-1] = x;
	}
	for(auto  a: arr)
	 cout << a << " ";
 return 0;
}


