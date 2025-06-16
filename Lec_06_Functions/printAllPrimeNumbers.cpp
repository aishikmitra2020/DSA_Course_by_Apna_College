#include <iostream>
using namespace std;

bool chkPrime(int num){
    for (int i = 2; i*i <= num; i++)
    {
        if (num % i == 0)
        {
            return false;
        }
        
    }

    return true;
    
}

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    cout << "Prime numbers from 2 to " << n << " are:\n";
    for (int i = 2; i <= n; i++) {
        if (chkPrime(i)) cout << i << " ";
    }
    cout << endl;
    
    return 0;
}