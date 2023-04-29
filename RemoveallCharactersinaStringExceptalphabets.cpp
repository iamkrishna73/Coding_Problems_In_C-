#include <bits/stdc++.h>
using namespace std;
 
int main(){
	string str1;
	cout << "Enter a string: ";
	getline(cin, str1);
	string str2;
	for(int i = 0; i < str1.size(); i++){
		if(str1[i] >= 'a' && str1[i] <= 'z' || str1[i] >= 'A' && str1[i] <= 'Z'){
			str2 += str1[i];
		}
	}
	cout <<"Output string: "<< str2<<endl;

	return 0;
} 
