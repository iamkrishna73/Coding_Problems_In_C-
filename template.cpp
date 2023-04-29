// #include <bits/stdc++.h>
// using namespace std;
// constexpr int MAXN = 200005;
// int res;

// vector<int> adj[MAXN];  // this is just a representation of graph;
// // adj[i].push_back(j); and edge from i to j; (->)
// bool used[MAXN];

// void dfs(int u, int par) {
//        for(int v : adj[u]) 
//            if(v != par)
//             dfs(v, u);

//     if(!used[par] && !used[u] && par != 0){
//         used[par] = used[u] = true;
//          res++;
//     }
// }

// void solve() {
//     int n; cin >> n;
//     for(int i = 0; i < n - 1; i++) { // since 1 is the boss, so starting from 2;
//         int p, c; cin >> p >> c;  // add edge from parent to child
//         adj[c].push_back(p);
//         adj[p].push_back(c);
//     }
// // just do the trick now, bro
//     dfs(1, 0); // startnode, parent(since edges are undirected);
//     cout << res << endl;
// }
// int main(){
//     int t = 1;
//     // cin >> t;
//     while(t--) {
//         solve();
//     } 
// }


#include <bits/stdc++.h>
using namespace std;

#define int long long 
void yes() {
    cout << "YES" << endl;
}

void no() {
    cout << "NO" << endl;
}

void solve() {
    int n, m; cin >> n >> m; 
    std::vector<int> a(n + 1, 0), pre(n + 1, 0), suf(n + 1, 0);
     
    for(int i = 1; i <= n; i++) {
        cin >> a[i]; 
        int diff = a[i] - a[i - 1] < 0 ? abs(a[i] - a[i - 1]) : 0;
        pre[i] = pre[i - 1] + diff;
    }
    reverse(begin(a), end(a));
    for(int i = 1; i <= n; i++) {
      int diff = a[i] - a[i - 1] < 0 ? abs(a[i] - a[i - 1]) : 0;
        if(diff < 0) {
            suf[i] = suf[i - 1] + abs(diff);
        }
    }
    
    cout << "pre" << endl;
    for(int i = 1; i <= n; i++) cout << pre[i] << " ";
    cout << "suff" <<  endl;
    for(int i = 1; i <= n; i++) cout << suf[i] << " ";
    cout << endl;
    while(m-- > 0) {
        int a, b;
        cin >> a >> b;
        if(b > a) {
            cout << pre[b] - pre[a] << endl;
        }else{
            cout << suf[b] - suf[a] << endl;
        }
    }
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





