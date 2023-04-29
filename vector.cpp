#include <bits/stdc++.h>
using namespace std;

int main(){
	vector<int>arr(10);
	for(int i = 0; i < arr.size(); i++){
		cout << arr[i] << " ";
	}
	arr.insert(arr.begin() + 1,  9);
	cout << endl;

	for(int i = 0; i < arr.size(); i++){
		cout << arr[i] << " ";
	}
	return 0;
}