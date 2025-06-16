#include <iostream>
using namespace std;

int main() {

    // Checking the given number is a power of 2 or not
    // ChatGPT Method (Using Loops)
    int n = 65536, pow = 1;
    bool res = false;

    while (pow <= n) {
        if (pow == n) {
            res = true;
            break;
        }
        pow *= 2;
    }

    cout << (res ? "Yes, the given number is a power of 2" : "No, the given number is not a power of 2") << endl;

    // Without Using Loops
    bool res = (n > 0) && ((n & (n - 1)) == 0);

    cout << (res ? "Yes, the given number is a power of 2" : "No, the given number is not a power of 2") << endl;


    // Reversing the integer
    int num = 12345;
    int reversed = 0;

    while (num != 0) {
        int rem = num % 10;
        reversed = reversed * 10 + rem;
        num /= 10;
    }

    cout << "Reversed number is: " << reversed << endl;
    
    
    return 0;
}