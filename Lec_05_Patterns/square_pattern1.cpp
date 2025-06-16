#include <iostream>
using namespace std;

int main() {
    int n = 6; // no. of lines

    // outer loop - columns (no. of lines)
    // inner loop - rows (content in each line)

    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= n; j++)
    //     {
    //         cout << j << " ";
    //     }
    //     cout << endl;
        
    // }

    // using starts
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < n; j++)
    //     {
    //         cout << "* ";
    //     }
    //     cout << endl;
        
    // }

    // using characters
    for (int i = 0; i < n; i++) // outer loop => controls the number of line
    {
        char ch = 'A'; // we are declaring this variable inside the loop because we want to reset the value of 'ch' to 'A' on every iteration, unless it will be diffuclt to start every new line with the character 'A'
        // The value resets on every iteration of the outer loop
        for (char j = 0; j < n; j++) // inner loop => controls the content of every line
        {
            cout << ch << " ";
            // inplicit type conversion haqppens here
            ch += 1;
        }
        cout << endl;
        
    }
    
    
    return 0;
}