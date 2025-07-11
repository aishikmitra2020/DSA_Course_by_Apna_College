#include <iostream>
#include <vector>
using namespace std;

// binary search can only be correctly applied on a sorted array

int binarySearch(vector<int> &nums, int target) {
    int st = 0, end = nums.size() - 1;

    while (st <= end) {
        int mid = st + (end - st) / 2;

        if (target > nums[mid]) st = mid + 1;
        else if (target < nums[mid]) end = mid-1;
        else return mid;
    }

    return -1;
}

int main() {
    vector<int> arr1 = {-1,0,3,4,5,9,12}; // odd size
    int target = 40;

    cout << binarySearch(arr1, target) << endl;

    vector<int> arr2 = {-1,0,3,5,9,12}; // even size
    int target2 = 0;

    cout << binarySearch(arr2, target2) << endl;
    
    return 0;
}