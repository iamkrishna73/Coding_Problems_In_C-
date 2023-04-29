#include <iostream>
#include <bits/stdc++.h>
using namespace std;

 int main() {
   int a, b, c;
   cout << "enter a 1st number: ";
   cin >>a;
   cout << "enter a 2st number: ";
   cin >>b;
   cout << "enter a 3st number: ";
   cin >>c;
   if (a > b and a > c){
      cout <<"The number " << a << " greater then other";
    }
    else if (b > c){
      cout <<"The number " << b << " greater then other";
    }
    else if (a ==b && b ==c) {
      cout << "All the three number are equal";
    }
    else {
      cout <<"The number " << c << " greater then other";
    }
   return 0;
 }
