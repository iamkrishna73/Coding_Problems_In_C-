#include <iostream>
using namespace std;

int main(){
	int m, n;
	cin >> m >> n;
	for(int i = 0; i < m; i++){
		for(int j = 0; j < m; j++){
			if(j <= i)
				cout << "*";
			else{
				cout << " ";
			}
		}
		cout << endl;
	}
	return 0;
}
