#include <iostream>
using namespace std;

int main() {
    cout << sizeof(int) << endl; // returns the space taken by an integer (it can differ computer to computer) (returns bytes)

    // Long
    // On Windows 64-bit systems, the size of long int is 4 bytes. So there is no difference between int and long int in windows
    cout << sizeof(long int) << endl;

    // Short
    cout << sizeof(short int) << endl;
    
    // long long
    // can be variable according to use and as per the system
    cout << sizeof(long long int) << endl;
    cout << sizeof(long long) << endl; // 'long long' implicitly means 'long long int'

    // unsigned
    unsigned int x = -10;
    cout << x << endl;
    
    return 0;
}