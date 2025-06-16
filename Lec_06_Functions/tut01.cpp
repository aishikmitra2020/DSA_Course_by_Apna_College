#include <iostream>
using namespace std;

// void means the function doesn't returns anything
// function defination (define)
void printHello(){
    cout << "hello" << endl;
}

double sum(double a, double b){ // parameters
    return a+b;
}

// after a return function - a function is terminated
// return statement - final statement of a function

// min of 2
int minOfTwo(int a, int b){
    if (a<b) {
        return a;
    } else {
        return b;
    }
    
}

void fun(){
    return; // it returns nothing, just ends the function and transfers the control to its parent
}

int sumOfDigitsOfNumber(int num){
    int digitSum = 0;

    while (num > 0)
    {
        digitSum += num%10;
        num /= 10;
    }
    
    return digitSum;
}

int main() {
    // syntax
    // returnType funcName(){
    //     // block of code
    // }

    // Redundancy - Using repeated lines of code multiple times(it is the unnecessary repeatations in the code). This problem is solved by functions

    // function call or invoking the function
    // printHello();
    // printHello();
    // printHello();

    // constants = literals

    // so, we pass literals in the arguments

    double ans = sum(10.96,4.63); // arguments
    cout << ans << endl;

    cout << minOfTwo(3,5) << endl;


    cout << "digit sum of 2356 is: " << sumOfDigitsOfNumber(2356) << endl;
    
    return 0;
}