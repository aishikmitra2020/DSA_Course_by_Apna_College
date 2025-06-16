#include <iostream>
using namespace std;

int main(){
    // Type Casting
    // It is the conversion of data from one type to another

    // Type Conversion -- [Implicit]
    char grade = 'A';
    int value = grade; // The character will be converted into int

    cout << value << endl;

    // It will return the ascii value of the given character.


    // Type Casting
    // [Explicit]
    double price = 100.99;
    // int newPrice = (int)price;
    int newPrice = (int) price;

    // int newPrice = (int) price; -- here, (int) is the data type we want to type cast to
    // Where we have to explicitly type cast with the proper syntax, thus it is explicit. But in the case of Type Conversion we do not need to explicitly type cast, thus it is implicit as it is done by the compiler automatically

    // We may or may not use a space after (int)

    cout << newPrice << endl;

    // Here we are type casting double to integer. In C++, if we typecast any decimal numbers to a integer, the digits after decimal will be ignored


    return 0;
}