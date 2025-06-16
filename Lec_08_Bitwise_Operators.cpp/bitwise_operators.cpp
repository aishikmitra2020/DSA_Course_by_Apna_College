#include <iostream>
using namespace std;

int main() {
    int a = 4, b = 8;

    // Bitwise Operators

    // Bitwise AND (&)
    cout << (a & b) << endl;

    // Bitwise OR (|)
    cout << (a | b) << endl;

    // Bitwise XOR (^) [exclusive OR]
    cout << (a ^ b) << endl;

    // Bitwise Left Shift Operator (<<)
    cout << (4 << 1) << endl;
    cout << (10 << 2) << endl;

    // Bitwise Right Shift Operator (>>)
    cout << (10 >> 1) << endl;
    cout << (8 >> 2) << endl;



    // Operater Precendence and Associativity
    cout << (4-5*2) << endl;
    cout << (4*8/2) << endl;
    
    return 0;
}