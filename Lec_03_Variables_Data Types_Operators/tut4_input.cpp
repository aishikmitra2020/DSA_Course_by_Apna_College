#include <iostream>
using namespace std;

int main(){
    // When the value of the variable is not assigned, compiler automatically assigns a garbage value to it (it is a random value)
    int age;
    
    // Inputs
    cout << "Enter your age: ";
    cin >> age;

    cout << "your age is " << age << endl;

    double price;
    cout << "Enter the price: ";
    cin >> price;
    cout << "You entered price = " << price << endl;

    return 0;
}