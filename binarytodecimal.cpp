#include <bits/stdc++.h>
using namespace std;

int main(){
	int num, temp, b = 1, dec = 0, rem;
	cin >> num;
	temp = num;
	while(temp > 0){
		rem = temp % 10;
		dec = dec + rem*b;
		cout <<"dec: " << dec << " rem: " << rem << endl;
		b *= 2;
		temp /= 10;
	}
	cout <<dec << endl;
	return 0;
}
