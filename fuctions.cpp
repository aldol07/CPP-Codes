#include<iostream>
using namespace std;
int multiply(int x, int y, int z) {
    return x * y * z;
    
}

int main() {
    int result = multiply(2, 3, 4); // Calls multiply(2, 3, 4)
    cout << "The product is: " << result << endl;
     
    return 0;
}

