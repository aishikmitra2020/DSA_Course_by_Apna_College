#include <iostream>
using namespace std;

int main() {
    int num = 11;
    bool isPrime = true;

    // for (int div = 2; div < num; div++) {
    //     if (num % div == 0) {
    //         isPrime = false;
    //         break;
    //     }
    // }

    // Optimised for loop code
    // checking from 2 to √n
    /*
       i*i <= num
    => i^2 <= num
    => i <= √num
    */
    for (int div = 2; div*div <= num; div++) {
        if (num % div == 0) {
            isPrime = false;
            break;
        }
    }

    // if (isPrime)
    //     cout << "Prime" << endl;
    // else
    //     cout << "Non Prime (Composite)" << endl;

    cout << (isPrime ? "Prime" : "Non Prime (Composite)") << endl;

    return 0;
}
