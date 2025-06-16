#include <iostream>
using namespace std;

int reverseInteger(int num){
    int ans = 0;
    while (num > 0)
    {
        int rem = num % 10;
        ans = ans * 10 + rem;
        num /= 10;
    }

    return ans;
}

int main() {
    int num = 45;
    int res = reverseInteger(num);

    cout << res << endl;

    return 0;
}