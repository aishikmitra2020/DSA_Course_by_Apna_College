#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// MOST OPTIMIZED VERSION - MOORE'S VOTING ALGORITHM
int findMajorityElement2(vector<int> &nums) {
    int freq = 0, ans = 0;

    for (int i = 0; i < nums.size(); i++) {
        if (freq == 0){
            ans = nums[i];
        }
        if (ans == nums[i]) freq++;
        else freq--;
    }

    return ans;
    
}

// OPTIMAL USING SORTING
int findMajorityElement1(vector<int> &nums) {
    sort(nums.begin(), nums.end());

    int freq = 1, ans = nums[0];

    for (int i = 1; i < nums.size(); i++)
    {
        if (nums[i] == nums[i-1]) freq++;
        else {
            freq = 1;
            ans = nums[i];
        }

        if (freq > nums.size()/2) return ans;
    }

    return -1;
    
}

// BRUTE FORCE
int findMajorityElement(vector<int> &nums) {
    int n = nums.size();

    for (int i = 0; i < n; i++)
    {
        int freq = 0;
        for (int j = 0; j < n; j++) {
            if (nums[j] == nums[i]) freq++;
        }
        if (freq > n/2) return nums[i];
        
    }

    return -1;
    
}

int main() {
    vector<int> nums = {1,2,2,1,1,2,2};
    
    cout << findMajorityElement2(nums) << endl;
    
    return 0;
}