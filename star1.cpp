#include <iostream>
using namespace std;

int main(){
	int m, n;
	cin >> m >> n;
	for(int i = 1; i <= m; i++){
		for(int j = 1 ; j <= m; j++){
			if(j >=  6 - i)
				cout << "*";
			else {
				cout << " ";
			}
		}
		cout << endl;
	}
	return 0;
}
