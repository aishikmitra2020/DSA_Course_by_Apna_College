#include <iostream>
using namespace std;

int binaryToDecimal(int num){
    int ans = 0, pow = 1;

    while (num > 0) {
        int lastDigit = num % 10;     // Get the last digit (0 or 1)
        ans += (lastDigit * pow);     // Add the digit to the answer
        num /= 10;                    // Remove the last digit
        pow *= 2;                     // Multiply pow by 2 (binary place value)
    }

    return ans;  // Return the Decimal form
}

int main() {
    int n = 1010;
    cout << binaryToDecimal(n) << endl;
    
    return 0;
}
