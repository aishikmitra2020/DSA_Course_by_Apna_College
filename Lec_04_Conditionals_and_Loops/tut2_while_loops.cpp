#include <iostream>
using namespace std;

int main(){

    // int i = 1; - Statement of Initialisation
    int i = 1, n;

    cout << "Enter a number: ";
    cin >> n;

    while (i <= n) { // condition
        cout << i << endl;
        i++; // Updation statement
        /*
        OR
        i = i + 1;
        i += 1;
        */
    }
    

    return 0;
}