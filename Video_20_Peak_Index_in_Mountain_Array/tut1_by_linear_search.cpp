#include <iostream>
#include <vector>
using namespace std;

int peakIndexInMountainArray(vector<int> &nums){
    for (int i = 0; i < nums.size() - 1; i++)
    {
        if (nums[i-1] < nums[i] && nums[i+1] < nums[i]) return i;
    }

    return -1;
    
}

int main() {
    vector<int> nums = {0,2,1,0};

    cout << peakIndexInMountainArray(nums) << endl;
    
    return 0;
}