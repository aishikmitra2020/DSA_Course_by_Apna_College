#include <iostream>
using namespace std;

int main() {
    int n = 5;

    for (int i = 0; i < n; i++)
    {
        // for loop for spaces
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }

        // for loop for numbers
        for (int j = 0; j < n-i; j++)
        {
            cout << i+1;
            // cout << i+1 << " "; // It will give an inverted pyramid
        }
        cout << endl;
    }


    // character version
    char ch = 'A';

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        for (char j = 0; j < n-i; j++)
        {
            cout << ch;
        }
        ch++;
        cout << endl;
        
        
    }
    
    
    
    return 0;
}