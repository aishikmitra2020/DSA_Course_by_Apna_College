#include <iostream>
using namespace std;

int binaryToDecimal(int binary){
    int ans = 0, pow = 1;
    while (binary > 0) {
        int lastDigit = binary % 10;
        binary /= 10;
        ans += (lastDigit * pow);
        pow *= 2;
    }

    return ans;
}

int decimalToBinary(int num) {
    int ans = 0, pow = 1;
    while (num > 0) {
        int rem = num % 2;
        ans += (rem * pow);
        pow *= 10;
        num /= 2;
    }

    return ans;
}

int main() {
    cout << binaryToDecimal(101010) << endl;
    cout << decimalToBinary(5) << endl;
    
    return 0;
}