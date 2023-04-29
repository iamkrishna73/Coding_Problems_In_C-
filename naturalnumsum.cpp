#include <iostream>
using namespace std;

int main(){
  int n , n1, sum= 0;
  cout <<"Enter how many number you want to add: ";
  cin >>n;
  for(int i = 0; i < n ; i++){
    cout<<"enter a number: ";
    cin>>n1;
    sum += n1;
  }
  cout << "the sum of the numbers" << sum;
  return 0;
}
