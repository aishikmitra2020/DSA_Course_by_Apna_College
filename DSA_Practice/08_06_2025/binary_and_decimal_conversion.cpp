#include <iostream>
using namespace std;

// Decimal to Binary
int decimalToBinary(int num){
    int pow = 1, ans = 0;

    while (num > 0){
        int rem = num % 2;
        ans += (rem * pow);
        num /= 2;
        pow *= 10;
    }

    return ans;
}

// Binary to Decimal
int binaryToDecimal(int bin){
    int pow = 1, ans = 0;

    while (bin > 0){
        int lastDigit = bin % 10;
        ans += (lastDigit * pow);
        bin /= 10;
        pow *= 2;
    }

    return ans;
    
}

int main() {
    // Decimal to Binary
    cout << decimalToBinary(8) << endl;

    // Binary to Decimal
    cout << binaryToDecimal(1000) << endl;
    
    return 0;
}