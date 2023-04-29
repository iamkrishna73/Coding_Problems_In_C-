#include <bits/stdc++.h>
using namespace std;

#define long long int

int x, y, k;
int solve(int m) {
   if(m % x == 0 or  m % y == 0) return m;
   
   int a = 0, b = 0;
   if(m - x >= 0)
     a += x + solve(m - x);
   if(m - y >= 0)
     b += y + solve(m - y);
     return max(a, b);
}


int32_t main() {
		ios::sync_with_stdio(false);
	cin.tie(0);
    ifstream fin("pails.in");
	ofstream fout("pails.out");
	
    int t = 1; 
    // cin >> t;
    while(t--) {
        fin >> x >> y >> k;
        fout << solve(k) << '\n';
    }
    return 0;
}





