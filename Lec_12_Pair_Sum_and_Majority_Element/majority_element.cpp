#include <iostream>
#include <vector>
#include <algorithm> // hekps us to use the sort utility
using namespace std;

// Brute Force Approarch
// Time Complexity - O(n^2)
int majorityElement(vector<int> nums){
    int n = nums.size();

    for (int val : nums)
    {
        int freq = 0;
        for (int el : nums){
            if (val == el) freq++;
        }

        if (freq > n/2)
        {
            return val;
        }
        
    }

    return -1; // if majority elemeent is not present
    
}

// Optimzed - Thooda sa
// Time Complexity - O(nlogn)
int majorityElement2(vector<int> nums){
    int n = nums.size();

    // sort
    sort(nums.begin(), nums.end());

    // freq. count
    int freq = 1, ans = nums[0];

    for (int i = 1; i < n; i++)
    {
        if (nums[i] == nums[i-1])
        {
            freq++;
        } else{
            freq = 1;
            ans = nums[i];
        }

        if (freq > n/2)
        {
            return ans;
        }
    }

    return ans;
    

}

int main() {
    vector<int> vec = {2, 2, 1, 1, 1};

    // cout << majorityElement(vec) << endl;
    cout << majorityElement2(vec) << endl;
    
    return 0;
}