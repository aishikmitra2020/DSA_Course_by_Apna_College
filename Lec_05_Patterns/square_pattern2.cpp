#include <iostream>
using namespace std;

int main() {
    int n = 3;
    int num = 1;
    
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << num << " ";
            num++;
        }
        cout << endl;
    }
    
    cout << "after pattern, the value of number is: " << num << endl;

    // using characters
    char ch = 'A';

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << ch << " ";
            ch++;
        }
        cout << endl;
    }

    cout << "after pattetn, the value of ch is: " << ch << endl;
    

    return 0;
}