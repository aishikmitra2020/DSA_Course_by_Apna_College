#include <iostream>
using namespace std;

int x = 10; // global variable

void fun(){
    cout << x << endl;
}

int main() {
    fun();
    cout << x << endl;
    
    return 0;
}