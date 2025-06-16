#include <iostream>
#include <vector>
#include <algorithm> // for sort
using namespace std;


// Brute Force Approach
int majorityElement1(vector<int> &nums){
    int n = nums.size();

    for(int val : nums){
        int freq = 0;
        for(int el : nums){
            if (el == val) freq++;
        }
        if (freq > n/2) return val;
    }
}


// Using a better and optimized approarch
// O(nlogn)
int majorityElement2(vector<int> &nums){
    int n = nums.size();
    sort(nums.begin(), nums.end());

    int freq = 1, ans = nums[0];
    for (int i = 1; i < n; i++) {
        if (nums[i] == nums[i-1]) freq++;
        else {
            freq = 1;
            ans = nums[i];
        }
        if (freq > n/2) return ans;
        
    }
}

// Moore's Voting Algorithm (Most Optimized)
int majorityElement3(vector<int> &nums){
    int freq = 0, ans = 0;

    for (int i = 0; i < nums.size(); i++){
        if (freq == 0) ans = nums[i];
        if (nums[i] == ans) freq++;
        else freq--;
    }

    return ans;
    
}

int main() {
    vector<int> nums = {2, 2, 1, 1, 1, 2, 2};
    
    cout << majorityElement1(nums) << endl;
    cout << majorityElement2(nums) << endl;
    cout << majorityElement3(nums) << endl;

    return 0;
}