#include <bits/stdc++.h>
using namespace std;

int largestnum(int arr[], int n){
	int max = arr[0];
	for(int i = 1; i < n; i++){
		if(arr[i] > max){
			max = arr[i];
		}
	}
	return max;
}

int main(){
	int arr[] = {9, 8, 3, 4, 7, 1, 11};
	int n = sizeof(arr)/ sizeof(arr[0]);

	cout << largestnum(arr, n); 
	return 0;
}

