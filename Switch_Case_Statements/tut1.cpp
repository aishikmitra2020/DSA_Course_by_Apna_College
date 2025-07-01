#include <iostream>
using namespace std;

int main() {
    char btn;
    cout << "Input a character";
    cin >> btn;

    switch (btn) {
        case 'a':
            cout << "Hello" << endl;
            break;
        case 'b':
            cout << "Namaste" << endl;
            break;
        case 'c':
            cout << "Hola" << endl;
            break;
        default:
            cout << "I am still learning more!" << endl;
            break;
    }
    
    return 0;
}