#include <iostream>
using namespace std;

// Selection Sort
// O(n^2)
void selectionSort(int arr[], int n){
    for (int i = 0; i < n-1; i++) {
        int smallestIndex = i;
        for (int j = i+1; j < n; j++) {
            // if (arr[j] < arr[smallestIndex]) { // ascending order
            if (arr[j] > arr[smallestIndex]) { // descending order
                smallestIndex = j;
            }
        }
        // i => first elem of unsorted part
        swap(arr[i], arr[smallestIndex]);
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

    selectionSort(arr, n);
    printArr(arr, n);
    
    return 0;
}