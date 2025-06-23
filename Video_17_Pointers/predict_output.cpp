#include <iostream>
using namespace std;

int main() {
    // 1
    int arr[] = {10, 20, 30, 40};
    int *ptr = arr;

    cout << *(ptr + 1) << endl;   // 20
    cout << *(ptr + 3) << endl;   // 40
    ptr++;
    cout << *ptr << endl;         // 20

    cout << endl;

    // 2
    int a = 5;
    int *p = &a;
    int **q = &p;

    cout << *p << endl; // 5
    cout << **q << endl; // 5
    cout << p << endl; // memeory address of p
    cout << *q << endl; // memory address of p
    
    return 0;
}