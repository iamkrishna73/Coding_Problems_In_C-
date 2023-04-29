#include <iostream>
using namespace std;

int checkprime(int n){
    int cnt = 1;
    for(int i = 2; i <= n/2 ; i++){
        if(n % i ==0){
            cnt = 0;
            break;
        }
    }
    return cnt;
}

int main(){
    int n1, n2, temp, c;
    cout << "Enter Numbers BetweenTwo Intervals: ";
    cin >> n1 >> n2;
    if(n1 > n2){
        temp = n1;
        n1 = n2;
        n2 = temp;
    }
    for(int i = n1; i <= n2; i++){
        c = checkprime(i);

        if(c == 1){
            cout << i << " ";
        }
    }
    return 0;
}
