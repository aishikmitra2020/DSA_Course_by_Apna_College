#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> vec = {13, 17, 42, 63};

    // .size() - returns the size of an vector (no. of elements present)
    cout << "size = " << vec.size() << endl;

    // .capacity() - returns the capacity of an vector (how many elements a vector can hold)
    // The size and capacity may differ due to the internal mechanism of vectors. Video Timing - 18:12
    cout << "capacity = " << vec.capacity() << endl;

    // .push_back(elem) - adds the given element at the last of the vector
    // its like .append() in python and .push() in JS
    vec.push_back(25);
    cout << "after push back size = " << vec.size() << endl;

    // .pop_back() - deletes the element at the last index
    vec.pop_back();

    // .front() - returns the first element (element at index 0) of an vector
    cout << vec.front() << endl;

    // .back() - returns that last element (element at the last index) of an vector
    cout << vec.back() << endl;

    // .at(index) - returns the element at the given index
    // vec[i] and vec.at(i) - both are same
    cout << vec.at(1) << endl;
    // If we try with a non-existent/invalid index, it will throw error


    // For Each Loop
    cout << "For Each: " << endl;
    for(int val: vec) {
        cout << val << endl;
    }
    
    return 0;
}