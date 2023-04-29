#include <iostream>
using namespace std;

int binarysearch(int arr[], int size, int searchvalue){
	int low = 0;
	int high = size - 1;
	int mid;
	while(low <= high){
		mid = (low + high)/ 2;

		if(searchvalue == arr[mid]){
			return mid;
		}
		else if(searchvalue > arr[mid]){
			low = mid + 1;
		}
		else{
			high = mid - 1;
		}
	}
	return -1;
}

int main(){
	int result, n;
	int arr[] = {2, 4, 5, 7, 11, 13, 18, 27, 33, 73};
	int num;
	cout << "Enter a integer: ";
	cin >> num;
	n = sizeof(arr)/sizeof(arr[0]);
	result = binarysearch(arr, n, num);

	if(result >= 0){
        cout << "The number " << arr[result] << " was found at the"
                " element with index " << result << endl;
    }
    else{
        cout << "The number " << num << " was not found. " << endl;
    }
    return  0;
}


