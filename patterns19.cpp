#include<iostream>
using namespace std;
int main() {
    int n;
    cin >>n;
    int iniS=0;
 for (int i = 0; i < n; i++) {

    for (int j = 0; j <n-i ; j++)
     {
   cout<<"*"; 
      }
   for (int j = 0; j <iniS ; j++)
      {
       cout <<" ";
       }
    for (int j = 0; j < n-1; j++)
     {
      cout<<"*";
      }
      iniS += 2;
       cout<<endl;
      }
}

