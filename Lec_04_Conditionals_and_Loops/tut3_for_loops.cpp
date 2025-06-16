#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        cout << i << " ";
    }
    cout << endl;

    /*
    // We can also initialise multiple variables here
    // We can also use Logical operators (&&, ||) to write conditions
    // We cna also do 'i=i+2' in updation which means to increment the value of i by 2
    for (int i = 1, j = 5; i <= n; i=i+2)
    {
        cout << i << " ";
    }
    */

    // Sum of numbers from 1 to n

    // using For Loop
    // int sum = 0;
    // for (int i = 1; i <= n; i++) {
    //     sum += i;
    // }
    // cout << "The sum of number upto n: " << sum << endl;

    // using While Loop
    // int sum = 0;
    // int i = 0;
    // while (i<=n)
    // {
    //     sum += i;
    //     i++;
    // }
    // cout << "The sum of number upto n: " << sum << endl;


    // Break statement - helps to exit the loop flow.
    // It works will all kinds of loops
    for (int i = 1; i <= n; i++) {
        if (i==5)
        {
            break; // keyword
            // keywords - reverved values. It is like dictionary of c++. We cannot name any variable that collides with these keywords
            // It will exit the flow of the loop
        }
        
        cout << i << endl;
    }
    // after the usage of the break statement the control comes here


    // Sum of all odd numbers from 1 to n
    int oddSum = 0;
    for (int i = 0; i <= n; i++)
    {
        // this condition will ensure that only odd numbers are added to the sum variable
        if (i%2 != 0){
            oddSum += i;
        }
    }
    cout << "The sum of all odd numbers from 1 to n is: " << oddSum << endl;
    return 0;
}