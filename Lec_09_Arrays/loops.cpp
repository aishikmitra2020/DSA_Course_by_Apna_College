#include <iostream>
using namespace std;

int main() {
    // Loops on Arrays : 0 to size-1
    // int size = 5; // generally, the size is given in another variable
    // int marks [5] = {99, 100, 54, 36, 88};
    // // int size = sizeof(marks) / sizeof(int);

    // // cout << sizeof(marks) << endl;

    // for (int i = 0; i < size; i++)
    // {
    //     cout << marks[i] << endl;
    // }


    // taking all the elements of the array from input
    int size = 5;
    int marks[size];

    // taking input
    for (int i = 0; i < size; i++)
    {
        cin >> marks[i];
    }

    // output (printing the array
    cout << "The array is: " << endl;
    for (int i = 0; i < size; i++) {
        cout << marks[i] << endl;
    }
    
    

    
    return 0;
}