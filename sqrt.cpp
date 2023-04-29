#include <bits/stdc++.h>
using namespace std;

int main(){
  float a,b,c;
  cin >> a >> b >> c;
  float x1 = 0, x2 = 0;
  float d = b*b - 4*a*c;
   x1 = (-b + sqrt(d))/( 2 * a);
 x2 = (-b - sqrt(d))/(2 * a);

  cout << x1 <<endl;
  cout << x2 <<endl;
  return 0;
}
