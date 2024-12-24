#include<iostream>
using namespace std;
int main() {
    // int n;
    // cin>>n;
    // int space=2*(n-1);
    // for (int i = 0; i < n; i++)
    // { 
    //     for (int j = 1; j<=i; j++)
    //     {
    //       cout<< j;  
    //     }
    //     for (int j = 1; j <=space; j++)
    //     {
    //         cout<<" ";
    //     }
    //     for (int j = 1; j>=i; j--)
    //     {
    //        cout<< j;
    //     }
        
    //     cout<<endl;
    //     space-=2;
    // }
    int n;
    cin>> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <n-i-1; j++)
        {
            cout<<" ";
        }
         char ch='A';
         int breakpoint=(2*i+1)/2;
         for (int j = 0; j < 2 * i + 1; j++) {
             cout << ch;
                 if (j < breakpoint) {
                   ch++;
                       } else {
                             ch--;
    }
}

          cout<<endl; 
    }
    


}