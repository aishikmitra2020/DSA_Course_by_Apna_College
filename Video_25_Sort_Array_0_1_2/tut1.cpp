#include <iostream>
#include <vector>
#include <algorithm> // Required for sort()
using namespace std;


// Most Optimized
// Dutch National Flag Algorithm
void sort2(vector<int> &nums) {
    int n = nums.size();
    int low = 0, mid = 0, high = n-1;

    while (mid <= high) {
        if (nums[mid] == 0){
            swap(nums[low], nums[mid]);
            low++; mid++;
        } else if (nums[mid] == 1) {
            mid++;
        } else { //2
            swap(nums[high], nums[mid]);
            high--;
        }
    }
}

// optimized approach - O(n)
void sort1(vector<int> &arr) { // O(n)
    int n = arr.size();
    int count0 = 0, count1 = 0, count2 = 0;

    // O(n)
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0) count0++;
        else if (arr[i] == 1) count1++;
        else count2++;
    }

    // replacing or overwriting - O(n)
    int idx = 0; // it keeps track of the index at which we want to place/overwrite the values

    for (int i = 0; i < count0; i++) {
        arr[idx++] = 0;
    }

    for (int i = 0; i < count1; i++) {
        arr[idx++] = 1;
    }

    for (int i = 0; i < count2; i++) {
        arr[idx++] = 2;
    }
    
    
}

// brute force approach
void sortByBruteForce(vector<int> &arr) {
    // Sorting using built-in sort (Brute Force)
    sort(arr.begin(), arr.end());
}

int main() {
    vector<int> arr = {2,0,2,1,1,0};

    sort2(arr);
    
    // Printing the sorted vector
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;
    
    return 0;
}