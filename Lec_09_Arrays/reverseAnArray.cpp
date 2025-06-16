#include <iostream>
using namespace std;

void reverseArray(int arr[], int size){
    for (int i = 0; i < size/2; i++)
    {
        swap(arr[i], arr[size-i-1]);
    }
    
}

// APNA COLLEGE METHOD
void reverseArray2(int arr[], int size){
    // using to pointer approach
    int start = 0, end = size-1;

    while (start < end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
    
}

int main() {
    int arr[] = {1,2,3,4,5};
    int size = sizeof(arr) / sizeof(int);

    reverseArray(arr, size);
    
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    
    return 0;
}