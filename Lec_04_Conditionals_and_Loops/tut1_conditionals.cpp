#include <iostream>
using namespace std;

int main(){
    int age = 40;

    if(age >= 18) cout << "Yes u can drive" << endl;
    else cout << "No you cannot drive" << endl;

    int marks = 85;
    
    if (marks >= 90){
        cout << "Grade A" << endl;
    } else if (marks >= 80 && marks < 90)
    {
        cout << "Grade B" << endl;
    } else {
        cout << "Grade C" << endl;
    }

    // Checking if a character is in lowercase or in uppercase
    char ch;
    cout << "Enter a character: ";
    cin >> ch;

    // It is actually comparing their ascii values
    if (ch >= 'a' && ch <= 'z'){
        cout << "lowercase\n";
    } else {
        cout << "uppercase\n";
    }

    // Actually comparing ASCII values
    // Inplicit Type Conversion is taking place here.
    if (ch >= 65 && ch <= 90){
        cout << "uppercase\n";
    } else {
        cout << "lowercase\n";
    }

    
    // Ternary Statements/Operators
    int n = -5;

    // n >= 0 ? cout << "positive\n": cout << "negetive\n";
    // OR
    cout << (n >= 0 ? "positive" : "negetive") << endl;

    return 0;
}