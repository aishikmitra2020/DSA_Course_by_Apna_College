#include <iostream>
using namespace std;

// Pow(x,n)
double pow_x_n(double x, int n){
    // handling corner cases to make our code more efficient
    if (n == 0) return 1.0;
    if (x == 0) return 0.0;
    if (x == 1) return 1.0;
    if (x == -1 && n%2 == 0) return 1.0;
    if (x == -1 && n%2 != 0) return -1.0;
    

    long long binaryForm = n;
    if (n < 0){
        x = 1/x;
        binaryForm = -binaryForm;
    }
    double ans = 1;

    while(binaryForm > 0){
        if (binaryForm % 2 == 1){
            ans *= x;
        }

        x *= x;
        binaryForm /= 2;
    }

    return ans;
}

int main() {
    // Pow(x,n)
    cout << pow_x_n(2, 3) << endl;
    
    return 0;
}