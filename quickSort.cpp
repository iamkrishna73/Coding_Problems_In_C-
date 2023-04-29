#include <bits/stdc++.h>


using namespace std;



void quicksort(int arr[], int l, int r) {
	if (l >= r) return;
	int i = l;
	for(int j = l; j <= r - 1; j++) 
		if(arr[j] <= arr[r]) 
			swap(arr[j], arr[i++]);

	swap(arr[i], arr[r]);
	quicksort(arr, l, i - 1);
	quicksort(arr, i + 1, r);
}

int main() {
	int arr[] = {3, -1, 9, 23, 22, 2, 32, -2};
	int n = sizeof(arr) / sizeof(arr[0]);
	quicksort(arr, 0, n - 1);
	for(int a: arr) cout << a << " ";
	
	return 0;
}