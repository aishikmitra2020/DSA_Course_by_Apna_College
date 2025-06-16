#include <iostream>
using namespace std;

int main() {
    int n = 15;
    int i = 1;

    // It will run at least one time irrespective of the condition.
    // do while loop mein kaam pehle hota hain, condition baad mein check hota hain
    // but in case of other loops, condition pehle check hota hain and kaam baad mein hota hain
    // in case of do while loops, agar condition false hain, fir bhi minimum 1 baar code run hoga hi hoga
    do
    {
        cout << i << " ";
        i++;
    } while (i <= n);
    
    
    return 0;
}