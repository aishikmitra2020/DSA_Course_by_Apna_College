#include <iostream>
#include <vector>
using namespace std;

// BINARY SEARCH
int singleElementInSortedArray2(vector<int> &nums) {
    int n = nums.size();
    int st = 0, end = n-1;

    while (st <= end) {
        int mid = st + (end-st)/2;

        // HANDLING SPECIAL CASES
        if (mid == 0 && nums[0] != nums[1]) return nums[mid];
        else if (mid == n-1 && nums[mid] != nums[mid-1]) return nums[mid];
        
        // CHECKING IF MID IS THE ANSWER
        else if (nums[mid] != nums[mid-1] && nums[mid] != nums[mid+1]) return nums[mid];

        // MAIN LOGIC
        if (mid % 2 != 0) { // left and right is odd
            if (nums[mid] == nums[mid-1]) { // right
                st = mid+1;
            } else { // left
                end = mid-1;
            }
        } else { // left and right is even
            if (nums[mid] == nums[mid-1]) { // left
                end = mid-1;
            } else { // right
                st = mid+1;
            }
        }
        
    }

    return -1; // NOT FOUND
    
}

// LINEAR SEARCH
int singleElementInSortedArray(vector<int> &nums) {
    int n = nums.size()-1;

    for (int i = 0; i < n; i++) {
        // HANDLING SPECIAL CASES
        if (i == 0 && nums[0] != nums[1]) return nums[i];
        else if (i == n && nums[i] != nums[i-1]) return nums[i];

        else if (nums[i-1] != nums[i] && nums[i] != nums[i+1]) return nums[i];
    }
    
    return -1; // NOT FOUND
}

int main() {
    vector<int> vec = {1,1,2,3,3,4,4,8,8};
    
    cout << singleElementInSortedArray(vec) << endl;
    
    return 0;
}