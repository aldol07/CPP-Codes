#include <bits/stdc++.h>
using namespace std;

int main() {
    int num;
    cout << "Enter the Number: ";
    cin >> num;

    int mask = 0;
    int temp = num;

    // Create a mask with all bits set to 1 that are of the same length as the binary representation of num
    while (temp != 0) {
        mask = (mask << 1) | 1;
        temp >>= 1;
    }

    // XOR the number with the mask to flip all bits in the binary representation of num
    int complement = (~num) & mask;

    cout << "The complement of " << num << " is " << complement << endl;

    return 0;
}
