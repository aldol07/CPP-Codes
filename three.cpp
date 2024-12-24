#include <iostream>
#include <math.h>
using namespace std;
int decimaltoBinarymethod1(int n) {
    int binaryno=0;
    int i=0;
  while(n>0){
    int bit = n%2;
    binaryno= bit*pow(10,i++) + binaryno;
    cout<<bit<<endl;
    n = n/2;
    
  }
  return 0;
  
}
int main() {
  int n;
  cin>>n;
  int binary = decimaltoBinarymethod1(n);
  cout<<binary<<endl;
}