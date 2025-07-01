#include <iostream>
#include <vector>
using namespace std;

int search(vector<int> &nums, int target){
    int st = 0, end = nums.size() - 1;

    while (st <= end){
        int mid = st + (end - st)/2;

        if (nums[mid] == target) return mid;

        if (nums[st] <= nums[mid]){ // left sorted
            if (nums[st] <= target && target <= nums[mid]) { // left search
                end = mid - 1;
            }
            else { // right search
                st = mid + 1;
            }
        } else { // right sorted
            if (nums[mid] <= target && target <= nums[end]) { // right search
                st = mid + 1;
            } else { // left search
                end = mid - 1;
            }
        }
    }

    return -1;
}

int main() {
    vector<int> arr = {3,4,5,6,7,0,1,2};
    int target = 0;

    cout << search(arr, target);
    
    return 0;
}