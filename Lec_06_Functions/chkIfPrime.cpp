#include <iostream>
using namespace std;

bool chkPrime(int num){
    int isPrime = true;

    for (int i = 2; i*i <= num; i++)
    {
        if (num % i == 0)
        {
            isPrime = false;
            break;
        }
        
    }

    return isPrime;
    
}

int main() {
    int num = 85;

    cout << num << " is " << (chkPrime(num) ? "Prime" : "Composite(Non-Prime)") << endl;
    
    return 0;
}