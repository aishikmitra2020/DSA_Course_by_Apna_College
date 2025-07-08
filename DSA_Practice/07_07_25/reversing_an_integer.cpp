#include <iostream>
using namespace std;

int reverse(int num) {
    int ans = 0;
    while (num > 0) {
        int rem = num % 10;
        ans = ans * 10 + rem;
        num /= 10;
    }

    return ans;
}

int main() {
    cout << reverse(15) << endl;
    
    return 0;
}