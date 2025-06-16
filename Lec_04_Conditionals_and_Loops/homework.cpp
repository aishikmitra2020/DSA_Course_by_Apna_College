#include <iostream>
using namespace std;

int main() {
    // Sum of all numbers from 1 to n which are divisible by 3
    int n = 10;
    int sum = 0;

    // using for loop
    // for (int i = 1; i <= n; i++)
    // {
    //     if(i % 3 == 0){
    //         sum += i;
    //     }
    // }
    // cout << "Sum: " << sum;

    // using while loop
    int i = 1;
    while (i <= n)
    {
        if (i%3 == 0)
        {
            sum += i;
        }
        i++;
    }
    cout << "Sum: " << sum << endl;


    // Factorial
    int val = 5;
    int factorial = 1;

    for (int i = 1; i <= val; i++)
    {
        if (val==1 || val==0){
            factorial = 1;
            break;
        }
        factorial *= i;
    }

    cout << "The factorial is: " << factorial << endl;
    
    
    
    
    return 0;
}