#include <iostream>
using namespace std;

// Bubble Sort
void bubbleSort(int arr[], int n) { // O(n^2)
    for (int i = 0; i < n-1; i++) {
        bool isSwap = false; // this will prevent for extra checks when the array is already sorted

        for (int j = 0; j < n-i-1; j++) {
            // if(arr[j] > arr[j+1]) { // ascending order
            if(arr[j] < arr[j+1]) { // descending order
                swap(arr[j], arr[j+1]);
                isSwap = true;
            }
        }

        if (!isSwap){ // array is already sorted
            return;
        }
        
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

    bubbleSort(arr, n);
    printArr(arr, n);
    
    return 0;
}