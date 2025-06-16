#include <iostream>
using namespace std;

int main(){
    // Arithmatic Operators
    int a = 10, b = 5;
    int sum = a+b;

    cout << sum << endl;
    cout << (a/b) << endl;
    cout << (5%2) << endl;
    cout << 5 + 5 << endl;
    cout << 7/(double)2 << endl;
    cout << (7/(double)2) << endl;

    // Relationsal Operators
    // always returns a boolean value
    // true -> 1
    // false -> 0

    cout << (5>2) << endl;
    cout << (15 <= 10) << endl;
    cout << (3==3) << endl;
    cout << (3!=3) << endl;

    // Logical Operators
    // In C++, any non-zero value is considered true in a boolean context.
    // Thus !3 is actually '!true' and it returns false(0)
    cout << (!3) << endl;
    cout << !(3==3) << endl;
    cout << !false << endl;
    
    cout << ( (3<1) || (5>2) ) << endl;
    cout << ( (3<1) && (5>2) ) << endl;

    // Unary Operators
    int x = 10;

    // While writing ++x, the value is updated first and then assigned
    // int y = ++x;

    // here, the value is assigned first and then updated. Thus, y will contain the previous value but x's value will get updated
    int y = x++;

    cout << "x = " << x << endl;
    cout << "y = " << y << endl;

    return 0;
}