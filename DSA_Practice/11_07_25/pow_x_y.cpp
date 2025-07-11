#include <iostream>
using namespace std;

double calculate_pow(double num, int pow) {
    // HANDLING SPECIAL CASES
    if (num == 0) return 0.0;
    if (pow == 0) return 1.0;
    if (num == 1) return 1.0;
    if (num == -1 && pow%2==0) return 1.0;
    if (num == -1 && pow%2!=0) return -1.0;

    long binForm = pow;
    double ans = 1;

    // HANDLING FOR NEGETIVE INTEGERS
    if (pow < 0){
        num = 1/num;
        binForm = -binForm;
    }

    while (binForm > 0) {
        if (binForm % 2 == 1) {
            ans *= num;
        }
        num *= num;
        binForm /= 2;
    }

    return ans;
    
}

int main() {
    int num = 3, pow = 5;
    cout << calculate_pow(num, pow) << endl;
    
    return 0;
}