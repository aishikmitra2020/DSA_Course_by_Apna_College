#include <iostream>
#include <vector>
using namespace std;

int search(vector<int> &nums, int target) {
    // Things To Remember
    // one half => sorted
    // another half => not sorted
    // we will be using Binary Search here too.

    int n = nums.size();
    int st = 0, end = n-1;

    while (st <= end) {
        int mid = st + (end - st)/2;

        if (nums[mid] == target) return mid;

        if (nums[st] <= nums[mid]) { // left half sorted
            if (nums[st] <= target && target <= nums[mid]) { // chk if target is present at the left half
                end = mid-1; // target at left half
            } else {
                st = mid+1; // else right half
            }
        } else { // right sorted
            if (nums[mid] <= target && target <= nums[end]) { // chk if target is present ai the right half
                st = mid+1; // target at right half
            } else {
                end = mid-1; // else left half
            }
        }
    }

    return -1; // TARGET NOT FOUND
}

int main() {
    vector<int> vec = {3,4,5,6,7,0,1,2};
    int target = 7;

    cout << search(vec, target) << endl;
    
    return 0;
}