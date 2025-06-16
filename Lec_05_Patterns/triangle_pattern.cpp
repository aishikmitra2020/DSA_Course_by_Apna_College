#include <iostream>
using namespace std;

int main() {
    int n = 5;
    
    // for (int i = 0; i < n; i++)
    // {
    //     for (int  j = 0; j <= i; j++)
    //     {
    //         // cout << j << " ";
    //         cout << "* ";
    //     }
    //     cout << endl;
        
    // }

    
    // using numbers

    // 1 to i+1 = 0 to i

    for (int i = 0; i < n; i++)
    {
        for (int  j = 0; j < i+1; j++)
        {
            cout << (i+1) << " ";
        }
        cout << endl;
        
    }


    // using characters
    // char ch = 'A';

    // for (int i = 0; i < n; i++)
    // {
    //     for (int  j = 0; j < i+1; j++)
    //     {
    //         cout << ch << " ";
    //     }
    //     ch++;
    //     cout << endl;
        
    // }


    // Triangle Pattern - type 2
    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j <= i+1; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
    
    return 0;
}