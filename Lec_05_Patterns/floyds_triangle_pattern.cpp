#include <iostream>
using namespace std;

int main() {
    // Floyd's Triangle Pattern
    int n = 4;

    int num = 1;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i+1; j++)
        {
            cout << num << " ";
            num++;
        }
        cout << endl;
        
    }

    // another method (for concept) (less readable)
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = i+1; j > 0; j--)
    //     {
    //         cout << num << " ";
    //         num++;
    //     }
    //     cout << endl;
        
    // }
    
    
    return 0;
}