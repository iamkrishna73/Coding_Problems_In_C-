#include <bits/stdc++.h>
using namespace std;

void maar(vector<int> &arr, int n){
	vector<int> res(n, 0);
	// O(n^2);	
	for(int i = 0; i < n; i++){
		int cnt = 0;
		for(int j = i + 1; j < n; j++){
			if(arr[i] > arr[j]){
				cnt++;
			}	
			else if(arr[i] == arr[j]) {
				cnt++;
				break;
			}
			else{
				break;
			}

		}	
		res[i] = cnt;
	}
	stack<int> st;
	// O(n);
	for (int i = n - 1; i >= 0; i--) {
		while (!st.empty() and arr[i] > arr[st.top()]) {
			st.pop();
		}
		if (st.empty()) {
			res[i] = n - 1 - i;
		}
		else if (arr[st.top()] == arr[i]) {
			res[i] = st.top() - i;
		}
		else {
			res[i] = st.top() - i - 1;
		}
		st.push(i);
	} 
	for (auto &v: res) cout << v << " ";
	
}
int main(){
	int n;
	cin >> n;
	vector<int> arr(n);
	for(int i = 0; i < n; i++){
		cin >> arr[i];
	}
	maar(arr, n);
	return 0;
}