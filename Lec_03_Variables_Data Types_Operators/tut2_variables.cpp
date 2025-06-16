#include <iostream>
using namespace std;

int main(){
    // Variables
    // Integers (takes 4 byte)
    int age = 25;

    cout << age << endl;
    cout << sizeof(age) << endl; // It returns the value in bytes. The value is actually the space reserved for our variable (it depends upon our data type)

    // Character (takes 1 byte)
    // written with - ''
    // can contain only one character
    // first converted to ascii and that value is stored in the memeory in the form of binary
    char grade = 'A';
    cout << grade << endl;

    // Float
    // 4 bytes
    // WQe generlly use variable name in capital letters for constants.
    float PI = 3.14f; // We can use 'f' or 'F' otherwise our compiler assume that it is a double
    float percentage = 99.63F;
    
    cout << PI << endl;

    // Boolean
    // 1 byte
    // either true or false
    bool isSafe = false;

    /*
    1 - true
    0 - false
    */

    cout << isSafe << endl;

    // Double
    // 8 bytes - double of float
    double price = 500.258;

    cout << price << endl;

    // These 5 data types are all 'primitive data types'

    return 0;
}