#include <iostream>
using namespace std;

int main() {
    // Creation of Arrays
    // int marks[5];
    // OR
    int marks[5] = {99, 100, 54, 36, 88};
    // OR
    double price[] = {10.78, 52.36, 850.00};

    // Accessing Data
    marks[0] = 101; // changing data
    // we can treat these as an individual variables
    cout << marks[0] << endl;
    cout << marks[1] << endl;
    cout << marks[2] << endl;
    cout << marks[3] << endl;
    cout << marks[4] << endl;

    // 0 to size-1

    cout << marks[5] << endl; // this is out of index thus, it will throw an warning or return a garbage value
    cout << marks[-1] << endl; // this is out of index thus, it will throw an warning or return a garbage value
    
    return 0;
}