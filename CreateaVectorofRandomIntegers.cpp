#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v;
// for(int i = 0; i < 10; i++){
//     int num = (int) rand() % 10;
//     cout << num << " ";
//     v.push_back(num);
// }
// cout << endl;

    vector <int>::iterator iter1 = v.begin();
    while(iter1 != v.end() && *iter % 2 == 0){
        iter++;
    }
    cout << *iter << end;

    return 0;
}

