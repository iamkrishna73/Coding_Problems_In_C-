#include <bits/stdc++.h>
using namespace std;

int main(){
	string str;
	char word;
	cout << "Enter a string: ";
	getline(cin, str);
	cout <<"Enter a character: ";
	cin >> word;
	int cnt = 0;

	for(int i = 0; i < str.size(); i++){
		char str1 = str[i];
		if(str1 == word ){
			cnt += 1;
		}

	}
	cout << "the frequency of the character "<< word << " is " << cnt << endl;
    return 0;
}
