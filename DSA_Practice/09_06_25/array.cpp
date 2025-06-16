#include <iostream>
using namespace std;
#include <climits>

// reversing an array with two pointer approach
void revereseAnArray(int arr[], int size){
    int st = 0, end = size - 1;
    
    while (st < end) {
        swap(arr[st], arr[end]);
        st++;
        end--;
    }
}

int largestAndSmallestNumberOfArray(int arr[], int size){
    int largest = INT_MIN, smallest = INT_MAX, largestIndex = 0, smallestIndex = 0;

    for (size_t i = 0; i < size; i++) {
        // largest = max(largest, arr[i]);
        // smallest = min(smallest, arr[i]);

        if (largest < arr[i]) {
            largestIndex = i;
            largest = arr[i];
        }
        else if (smallest > arr[i]) {
            smallestIndex = i;
            smallest = arr[i];
        }
        
    }

    // Printing our output
    cout << "The smallest number in this array is: " << smallest << " and it is present at the index " << smallestIndex << endl;
    cout << "The largest number in this array is: " << largest << " and it is present at the index " << largestIndex << endl;
}


int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = 5;

    // reverse an array
    revereseAnArray(arr, size);

    // find the largest, smallest and their indexes
    largestAndSmallestNumberOfArray(arr, size);
    
    return 0;
}