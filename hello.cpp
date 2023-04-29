#include <iostream>
using namespace std;

int main(){
  int a = 5 , b = 7, temp;
  temp = a;
  a = b;
  b = temp;
  cout <<"the value of a and b are:" << a << ","<< b <<endl;
  return 0;
}
