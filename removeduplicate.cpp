#include <bits/stdc++.h>
using namespace std;

int isDigitSumEven(int n){
        int sum = 0;
        while (n != 0) {
            sum = sum + n % 10;
            n = n / 10;
        }
        return (sum % 2) == 0;
}

int count(int N) {
       int cnt = 0;
    for(int i = 0; i <= N; i++) {
     
        if(isDigitSumEven(i)) cnt++;
        
    } 
    return cnt;
}

int main(){
    int N;
    cin >> N;
    int result;
    result = count(N);
    cout << result;
    return 0;
}
