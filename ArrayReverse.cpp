#include <iostream>
using namespace std;

void arrayreverse(int array[], int start, int end){
	int temp = array[start];
	while(start <= end){
		array[start] = array[end];
		array[end] = temp;
		start++;
		end--;
	}

}


int main(){
	int array[] = {20, 12, 10, 15, 2};
	int arraysize = sizeof(array)/sizeof(array[0]);
	cout <<" array: ";
	for(int i = 0; i < arraysize; i++){
		cout << array[i]<< " ";
	}
	arrayreverse(array, 0, arraysize - 1);
	cout <<endl;
	cout <<"reverse array: ";
	for(int i = 0; i < arraysize; i++){
		cout << array[i]<< " ";
	}
	return 0;
}
