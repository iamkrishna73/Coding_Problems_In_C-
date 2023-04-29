#include <bits/stdc++.h>
using namespace std;
#define fast  ios_base::sync_with_stdio(false);cin.tie(NULL);

int main(){
    fast
    int n, temp = 0, num;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >>arr[i];
    }
    for(int i = 0; i < n/2; i++){
        while(arr[i] >= 10){
            arr[i] = arr[i]/10;
        }
        num = arr[i];
        num = temp + num;
        temp = num * 10;
    }
    for(int i = n/2; i < n; i++){
        num = arr[i] % 10;
        num = temp + num;
        temp = num *10;

    }
    if(num%11){
        cout << "OUI" <<endl; 
    }
    else {
        cout << "NON" <<endl;
    }
    return 0;
}

