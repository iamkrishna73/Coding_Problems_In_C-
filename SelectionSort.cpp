#include <iostream>

using namespace std;

void selectionsort(int array[], int size){
	for(int i = 0; i < size - 1; i++){
		int imin = i
		for(int j = i + 1; j < size; j++){
			if(array[j] < array[imin]){
			   imin = j;
			}
		}
		int temp = array[i];
		array[i] = array[imin];
		array[imin] = temp;

	}

}

int main(){
	int array[] = {20, 12, 10, 15, 2};
	int arraysize = sizeof(array)/sizeof(array[0]);
	cout <<"unsorted array: ";
	for(int i = 0; i < arraysize; i++){
		cout << array[i]<< " ";
	}
	selectionsort(array, arraysize);
	cout <<endl;
	cout <<"sorted array: ";
	for(int i = 0; i < arraysize; i++){
		cout << array[i]<< " ";
	}
	return 0;
}