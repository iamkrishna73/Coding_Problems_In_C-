#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, num, sum = 0;
    cin >>n;
    int arrnum[n];
    for(int i = 0; i < n; i++){
        cin >> arrnum[i];
    }
    for(int i = 0; i < n; i++){
        num = arrnum[i]; 
        num = num % 10;
        num = num*10;
        sum = num;
    }
    cout << sum << endl;
    if(sum%10 ==0){
        cout <<"Yes"<< endl;
    }
    else {
        cout <<"No"<< endl;
    }

    return 0;
}
5
85 25 65 21 84
