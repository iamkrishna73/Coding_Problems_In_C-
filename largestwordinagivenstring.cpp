#include <bits/stdc++.h>
using namespace std;

int word_cnt(string str2){
	int cnt = 0;
	for(int i = 0; i < str2.size(); i++){
		if(str2[i] == ' '){
			cnt++;
		}
	}
	return cnt + 1;
}

int main(){
	string str1;
	cout <<"Enter a string: ";
	getline(cin, str1);
	cout <<"The number of words in a string are: "<< word_cnt(str1)<<endl;
	return 0;
}
