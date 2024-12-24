#include<bits/stdc++.h>
#include<string>
using namespace std;
int main() {
     string s;
     cin>>s;
//     // string str= to_string(num);
//     sort(s.begin(), s.end());
//     cout <<s;
//     return 0;
// }
int n=s.size();
for(int i=0;i<n-1;i++) {
    if((s[i]-'0')%2 == (s[i+1]-'0')%2) {
        if(s[i]>s[i+1]) {
            swap(s[i],s[i+1]);
            break;
        }
    }
}
cout<< s;
return 0; 
}