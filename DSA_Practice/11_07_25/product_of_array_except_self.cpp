#include <iostream>
#include <vector>
using namespace std;

// OPTIMIZED APPROACH
// Time Complexity = O(n)
// Space Complexity = O(1)
vector<int> productOfArrayExceptSelf3(vector<int> &nums) {
    int n = nums.size();
    vector<int> ans(n, 1);

    // CALCULATING PREFIX
    for (int i = 1; i < n; i++) {
        ans[i] *= ans[i-1] * nums[i-1];
    }

    // CALCULATING THE ANSWER AND SUFFIX
    int suffix = 1;
    for (int i = n-2; i >= 0; i--) {
        suffix *= nums[i+1];
        ans[i] *= suffix;
    }

    return ans;
}


// OPTIMAL
vector<int> productOfArrayExceptSelf2(vector<int> &nums) {
    int n = nums.size();
    vector<int> ans(n,1), prefix(n,1), suffix(n,1);

    // PREFIX
    for (int i = 1; i < n; i++) {
        prefix[i] = prefix[i-1] * nums[i-1];
    }

    // SUFFIX
    for (int i = n-2; i >= 0; i--) {
        suffix[i] = suffix[i+1] * nums[i+1];
    }

    // CALCULATING THE ANS
    for (int i = 0; i < n; i++) {
        ans[i] = suffix[i] * prefix[i];
    }

    return ans;
    
}

// BRUTE FORCE
vector<int> productOfArrayExceptSelf(vector<int> &nums) {
    int n = nums.size();
    vector<int> ans;

    for (int i = 0; i < n; i++) {
        int product = 1;
        for (int j = 0; j < n; j++) {
            if (i != j) {
                product *= nums[j];
            }
        }
        ans.push_back(product);
        
    }

    return ans;
    
}

int main() {
    vector<int> nums = {1,2,3,4};

    vector<int> ans = productOfArrayExceptSelf3(nums);
    for (int item : ans) {
        cout << item << " ";
    }
    
    return 0;
}