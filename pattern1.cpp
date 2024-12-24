#include<iostream>
using namespace std;
int main(){
    // for (int i = 0; i < 4; i++)
    // {
    //     for ( int j =0; j<4; j++)
    //     {
    //        cout<< "*";
    //     }
    //     cout<<endl;
    // }
    //  
    // int n;
    // cin >>n;
    // for (int i = 0; i < n; i++)
    // {
    //     for ( int j =0; j<n; j++)
    //     {
    //        cout<< "*";
    //     }
    //     cout<<endl;
    // }
    // int n;
    // cin>>n;
    // for (int i=0;i<5;i++) 
    // {
    //     for (int j = 0; j<=i; j++)
    //     {
    //         cout<<"*";
    //     }
    //  cout<<endl;   
    // }
    // int n;
    // cin>>n;
    // for (int i = 0; i <=n; i++)
    // {
    //     for (int j = 1;j<=i; j++)
    //     {
    //         cout<<j;
    //     }
    // cout<<endl;    
    // }
    
    //  int n;
    // cin>>n;
    // for (int i = 0; i <=n; i++)
    // {
    //     for (int j = 1;j<=i; j++)
    //     {
    //         cout<<i<<" ";
    //     }
    // cout<<endl;    
    // }
    //  int n;
    // cin>>n;
    // for (int i = 1; i <=n; i++)
    // {
    //     for (int j = 0;j<n-i+1; j++)
    //     {
    //         cout<<"* ";
    //     }
    // cout<<endl;    
    // }
    
    //  int n;
    // cin>>n;
    // for (int i = 1; i <=n; i++)
    // {
    //     for (int j = 1;j<=n-i+1; j++)
    //     {
    //         cout<<j<<" ";
    //     }
    // cout<<endl;    
    // }
    
    //  int n;
    // cin>>n;
    // for (int i = 0; i <n; i++)
    // {
    //     for (int j = 0;j<n-i-1; j++)
    //     {
    //         cout<<" ";}
    //     for (int j = 0; j < 2*i+1; j++)
    //         {
    //             cout<<"*";}
    //     for (int j = 0; j<n-i-1; j++)
    //             {
    //                 cout<<" ";}
               
    // cout<<endl;    
    // }
    // // int n;
    // // cin>>n;
    // for (int i = 0; i <n; i++)
    // {
    //     for (int j = 0;j<i; j++)
    //     {
    //         cout<<" ";}
    //     for (int j = 0; j < 2*n-(2*i+1); j++)
    //         {
    //             cout<<"*";}
    //     for (int j = 0; j<i; j++)
    //             {
    //                 cout<<" ";}
               
    // cout<<endl;    
    // }
    // int n;
    // cin>>n;
    // for (int i = 1; i <=2*n-1; i++)
    // {
    //     int stars = i;
    //     if (i>n) stars=2*n-i;
    //    for (int j = 1;j<= stars; j++)
    //    {
    //      cout<<"* ";
         
    //    }
    //  cout<<endl;  
    // }
    // int n;
    // cin>>n;
    // int start =1;
    // for (int i = 0; i < n; i++)
    // {
    //     if (i%2==0) start=1;
    //     else start=0;
    //     for (int j = 0; j <= i; j++)
    //     {
    //         cout<<start;
    //         start=1-start;
    //     }
    //     cout<<endl;       
    // }

    // int n;
    // cin>>n;
    //   int space=2*(n-1);
    // for (int i = 1; i <= n; i++)
    // { 
    //     for (int j = 1; j<=i; j++)
    //     {
    //       cout<< j;  
    //     }
    //     for (int j = 1; j <=space; j++)
    //     {
    //         cout<<" ";
    //     }
    //     for (int j = i; j>=1; j--)
    //     {
    //        cout<< j;
    //     }
        
    //     cout<<endl;
    //     space-= 2;
    // }
    // int n;
    // cin>>n;
    // int num=1;
    // for (int i = 1; i <=n; i++)
    // {
    //   for (int j = 1; j <=i; j++)
    //   {
    //     cout<< num<<" ";
    //     num+=1;
    //   }
    //   cout<<endl;
    // }
    // int n;
    // cin>>n;
    // for (int i = 0; i < n; i++)
    // {
    //   for (char ch = 'A'; ch <= 'A'+i; ch++)
    //   {
    //     cout<<ch<<" ";
    //   }
    //   cout<<endl;
    // }
    //  int n;
//     cin>>n;
//     for (int i = 0; i < n; i++)
//     {
//       for (char ch = 'A'; ch <= 'A'+(n-i-1); ch++)
//       {
//         cout<<ch<<" ";
//       }
//       cout<<endl;
//     }
int n;
cin>>n;
for (int i = 0; i < n; i++)

{
 char ch='A'+i;
 for (int j = 0; j <= i; j++)
 {
  cout<<ch<<" ";
  /* code */
 }
 cout<<endl;

 
}

 }   

    

 