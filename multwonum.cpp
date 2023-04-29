#include <iostream>
using namespace std;

int main(){
  int a;
  cout << "Enter a number: ";
  cin >> a;
  if(a%2 == 0){
    cout <<"the given number "<< a <<" is even"<<endl;
  } else {
      cout << "the given number "<< a <<" is odd"<<endl;
  }
  return 0;
}
