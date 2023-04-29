#include <iostream>
#include <string>
using namespace std;

int frequencyofcharacter(string name, char c){
	int cnt = 0;
	for(int i = 0; i < name.length(); i++){
		if(name.at(i) == c)
			cnt += 1;
	}
	return cnt;
}

int main(){
	string name;
	cout << "Enter a name: ";
	getline(cin, name);
	char character;
	cout << "Enter a character: ";
	cin >> character;
	int n = frequencyofcharacter(name, character);
	cout << "Frequency of the given character is: " << n << endl;

	return 0;
}


