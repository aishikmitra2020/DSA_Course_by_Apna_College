#include <iostream>
#include <vector>
using namespace std;

int peakIndex(vector<int> &nums) {
    int st = 1, end = nums.size() - 2;

    while (st <= end) {
        int mid = st + (end - st)/2;

        if (nums[mid-1] < nums[mid] && nums[mid] > nums[mid+1]) return mid;

        if (nums[mid-1] < nums[mid]) { // right
            st = mid + 1;
        } else { // left
            end = mid - 1;
        }
    }

    return -1; // if no peak index doesn't exist (in leetcode, this case isn't possible)
}

int main() {
    vector<int> arr = {0,3,8,9,5,2};

    cout << peakIndex(arr) << endl;
    
    return 0;
}