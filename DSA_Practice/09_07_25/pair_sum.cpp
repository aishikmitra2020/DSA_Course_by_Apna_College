#include <iostream>
#include <vector>
using namespace std;

// In this pair sum => the given array or vector always will be SORTED

// OPTIMAL APROACH
vector<int> findPairSum2(vector<int> &nums, int target) {
    int n = nums.size();

    int st = 0, end = n-1;

    while (st < end) {
        if (nums[st] + nums[end] > target) {
            end--;
        } else if (nums[st] + nums[end] < target) {
            st++;
        } else if (nums[st] + nums[end] == target) {
            return {st, end};
        }
    }

    return {};
}

// BRUTE FORCE
vector<int> findPairSum(vector<int> &nums, int target){
    int n = nums.size();

    vector<int> ans;
    
    for (int st = 0; st < n; st++)
    {
        for (int end = st+1; end < n; end++)
        {
            if ((nums[st] + nums[end]) == target) {
                ans.push_back(st);
                ans.push_back(end);
                return ans;
            }
        }
        
    }

    return {}; // return empty vector if no pair found
    
}

int main() {
    vector<int> nums = {2,7,11,15};
    int target = 13;

    // vector<int> ans = findPairSum(nums, target);
    vector<int> ans = findPairSum2(nums, target);

    for (int elem : ans) {
        cout << elem << endl;
    }
    
    return 0;
}