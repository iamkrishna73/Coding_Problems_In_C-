#include <bits/stdc++.h>
using namespace std;
int calculate (int r, int unit, vector<int>arr, int n) {
   if(n == 0) return -1;
  

}


int main ()
{
    int r;
    cin >> r;
    int unit;
    cin >> unit;
    int n;
    cin >> n;
    vector<int> arr(n);

    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }
    cout << calculate (r, unit, arr, n);
    return 0;
}