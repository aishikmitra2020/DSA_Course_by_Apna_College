#include <iostream>
#include <vector>
using namespace std;

int peakIndexInMountainArray(vector<int> &nums){
    // int st = 0, end = nums.size() - 1;
    int st = 1, end = nums.size() - 2; // more optimized

    while (st <= end) {
        int mid = st + (end - st)/2;

        if (nums[mid-1] < nums[mid] && nums[mid+1] < nums[mid]) return mid;
        else if (nums[mid-1] < nums[mid]){
            st = mid + 1;
        } else {
            end = mid - 1;
        }
    }

    return -1;
    
}

int main() {
    vector<int> nums = {0,2,1,0};

    cout << peakIndexInMountainArray(nums) << endl;
    // cout << peakIndexInMountainArray2(nums) << endl;
    
    return 0;
}