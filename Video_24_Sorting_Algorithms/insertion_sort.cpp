#include <iostream>
using namespace std;

// Insertion Sort
// O(n^2)
void insertionSort(int arr[], int n) {
    for (int i = 1; i < n; i++)
    {
        int curr = arr[i];
        int prev = i-1;

        // while (prev >= 0 && arr[prev] > curr) { // ascending order
        while (prev >= 0 && arr[prev] < curr) { // descending oerder
            arr[prev+1] = arr[prev];
            prev--;
        }
        arr[prev+1] = curr; // placing the curr elem in its correct pos
    }
    
}

void printArr(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << endl;
    }
    cout << endl;
    
}

int main() {
    int n = 5;
    int arr[] = {4,1,5,2,3};

    insertionSort(arr, n);
    printArr(arr, n);
    
    return 0;
}