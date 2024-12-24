#include<iostream>
using namespace std;
int main(){
    int day;
    cin>>day;
    cout<<"Day: " <<" "<<day;
    switch (day)
    {
    case 1:
        cout<<"Monday";
        break;
    case 2:
        cout<<"Tuesday";
        break;
    case 3:
        cout<<"Wednesday";
        break;
    case 4:
        cout<<"thursday";
        break;
    case 5:
         cout<<"friday";
        break;
    default:
        break;
        
    }
    return 0;
}