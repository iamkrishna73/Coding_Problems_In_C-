#include <iostream>
#include <string>
using namespace std;

class complex{
private:
float r, i;
public:
complex(float r, float i){
this->r=r;
this->i=i;
}
complex(){}
void displaydata(){
	cout <<"real part = "<<r<<endl;
	cout <<"imaginary part = "<<i<<endl;
}
complex operator+(complex c){
return complex(r+c.r, i+c.i);
}
};
int main(){
complex a(2,3);
complex b(3,4);
complex c=a+b;
c.displaydata();
return 0;
}
#include <bits/stdc++.h>
using namespace std;

#define int long long 
void yes() {
    cout << "YES" << endl;
}

void no() {
    cout << "NO" << endl;
}
const int inf = 1e9;
void solve() {
    int h, n; cin >> h >> n;
    int huge = inf;
    std::vector<int> d(n), pre[n];
    int 
    for(int i = 0; i < n; i++){
       cin >> d[i];
       if(i == 0)  pre[i] = d[i];
       else pre[i] = pre[i - 1] + d[i];
      huge = max(huge, pre[i]);
    }
    if(sum >= 0) {
        cout << "-1\n";
    }
    int res = 0;
    cout << "-1\n";
    
}

int32_t main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int t = 1;
    // cin >> t;
    while(t--) {
        solve();
    } 
}