#include <bits/stdc++.h>
using namespace std;

void secondmax(int array[], int n){
	int firstmax = array[0];
	for(int i = 1; i < n; i++){
		if(array[i] > firstmax){
			firstmax = array[i];
		}
	}
	int secondmax = INT_MIN;
	for(int i = 0; i < n; i++){
		if(array[i] > secondmax && array[i] < firstmax){
			secondmax = array[i];

		}
	}

	cout << "second largest element in array: "<< secondmax << endl;

}

int main(){
int array[] = {7, 8, 11, 9, 23, -2, 14};
	int size = sizeof(array)/sizeof(array[0]);
	secondmax(array, size);	
	return 0;
}