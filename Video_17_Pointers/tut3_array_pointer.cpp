#include <iostream>
using namespace std;

int main() {
    // Array Pointer
    int arr[] = {1,2,3,4,5};

    int* arrPtr = arr; // 'arr' itself is a pointer that's why we needn't use '&' here

    cout << arrPtr << endl;
    cout << arr << endl; //pointer
    cout << *arr << endl; //pointer => 1

    // Pointer Arithmetic
    // Increment/Decrement
    int a = 10;
    int* ptr = &a;
    cout << ptr << endl;
    cout << *ptr << endl;

    ptr++; // incrementing the pointer
    // This moves the pointer to the next integer in memory. (+4 bytes)(as 1 int = 4 bytes)

    cout << ptr << endl;

    // Whatever value is at this memory location is just garbage/random data.
    // cout << *ptr << endl;

    ptr--; // -4 bytes

    cout << ptr << endl;

    
    // Add/Subtract Number
    ptr = ptr + 2; // +(2*4) bytes = +8 bytes
    cout << ptr << endl;

    ptr = ptr - 3; // -(3*4) bytes = -12 bytes
    cout << ptr << endl;


    // Pointer Arithmetic with Arrays
    int arr1[] = {2, 3, 4, 5};

    cout << *(arr1) << endl;
    cout << *(arr1+1) << endl;
    cout << *(arr1+2) << endl;
    cout << *(arr1+3) << endl;

    cout << sizeof(&arr) << endl;
    
    return 0;
}