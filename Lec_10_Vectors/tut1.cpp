#include <iostream>
#include <vector>
using namespace std;

int main() {
    // Creation  of Vectors
    // Method 1
    // vector<int> vec; // default size is 0

    // Method 2
    // vector<int> vec = {1, 2, 3}; // size 3
    // cout << vec[0]; // Accessing elements by their indices/indexes

    // Method 3
    // vector<int> vec (5, 0);
    // cout << vec[0] << endl; // Accessing elements by their indices/indexes
    // cout << vec[1] << endl; // Accessing elements by their indices/indexes
    // cout << vec[2] << endl; // Accessing elements by their indices/indexes
    // cout << vec[3] << endl; // Accessing elements by their indices/indexes
    // cout << vec[4] << endl; // Accessing elements by their indices/indexes


    // We use a special type of loops with vectors, that is: for each loop
    vector<char> vec = {'A', 'B', 'C', 'D', 'E'};
    
    // For Each Loop
    for(char val : vec) { // Here, the i (iterator) will contain the value present at the index
        cout << val << endl;
    }
    
    return 0;
}