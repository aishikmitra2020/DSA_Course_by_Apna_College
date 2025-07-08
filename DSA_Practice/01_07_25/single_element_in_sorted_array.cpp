#include <iostream>
#include <vector>
using namespace std;

int findSingleElement(vector<int> &nums){
    int st = 0, end = nums.size() - 1;

    while (st <= end) {
        int mid = st + (end - st)/2;

        if (nums[mid-1] != nums[mid] && nums[mid] != nums[mid+1]) return nums[mid];

        // handling the corner cases

        if (mid % 2 == 0) { // even
            if (nums[mid] == nums[mid-1]){
                end = mid - 1; // left
            } else {
                st = mid + 1; // right
            }
        } else { // odd
            if (nums[mid] == nums[mid-1]) st = mid + 1; // right
            else end = mid - 1; // left
        }
    }

    return -1;
}

int main() {
    vector<int> vec = {1,1,2,3,3,4,4,8,8};
    
    cout << findSingleElement(vec) << endl;
    
    return 0;
}