#include <iostream>
using namespace std;

int linearSearch(int arr[], int sz, int target){
    for (int i = 0; i < sz; i++) {
        if (arr[i] == target) { // TARGERT FOUND
            return i;
        }
    }

    return -1; // TARGERT NOT FOUND
}

int main() {
    // Linear Search
    int arr[] = {4, 2, 7, 8, 1, 2, 5};
    int size = sizeof(arr) / sizeof(int);
    int target = 50;

    int ans = linearSearch(arr, size, target);

    cout << ans << endl;
    
    
    return 0;
}