#include <iostream>
#include <vector>
using namespace std;

// BINARY SEARCH
int findPeakIndex2(vector<int> &nums) {
    int n = nums.size();
    int st = 1, end = n-2;

    while (st <= end) {
        int mid = st + (end - st)/2;
        
        if (nums[mid] > nums[mid-1] && nums[mid] > nums[mid+1]) return mid;

        if (nums[mid] > nums[mid-1]) { // RIGHT HALF
            st = mid+1;
        } else { // LEFT HALF
            end = mid-1;
        }
    }

    return -1; // NOT FOUND
}

// LINEAR SEARCH
int findPeakIndex(vector<int> &nums) {
    int n = nums.size();
    
    for (int i = 1; i < n-1; i++) {
        if (nums[i-1] < nums[i] && nums[i] > nums[i+1]) return i;
    }

    return -1;
}

int main() {
    vector<int> nums = {0,2,1,0};

    cout << findPeakIndex2(nums) << endl;
    
    return 0;
}