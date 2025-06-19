#include <iostream>
#include <vector>
using namespace std;

// Product Of Array Except Self
// Brute Force Approach

vector<int> productOfArrayExceptSelf1(vector<int> &nums){
    int n = nums.size();

    vector<int> ans(n);

    for (int i = 0; i < n; i++) {
        int product = 1;

        for (int j = 0; j < n; j++) {
            if(i != j){
                product *= nums[j];
            }
        }
        ans[i] = product;
    }

    return ans;
    
}

// Bit optimal approach
// we will be using the concept of prefix and suffix here
vector<int> productOfArrayExceptSelf12(vector<int> &nums){
    int n = nums.size();

    vector<int> prefix(n, 1), suffix(n, 1), ans(n, 1);

    // calculating the prefix
    for (int i = 1; i < n; i++) {
        prefix[i] = prefix[i-1] * nums[i-1];
    }

    // calculating the suffix
    for (int i = n-2; i >= 0; i--){
        suffix[i] = suffix[i+1] * nums[i+1];
    }
    
    // calculating the ans
    for(int i = 0; i < n; i++){
        ans[i] = prefix[i] * suffix[i];
    }

    return ans;
    
}


// Most optimized aproach
// just doing the above task in just one loop
vector<int> productOfArrayExceptSelf13(vector<int> &nums){
    int n = nums.size();

    vector<int> ans(n, 1);

    // calculating and storing the prefix
    for (int i = 1; i < n; i++) {
        ans[i] = ans[i-1] * nums[i-1];
    }

    // calculating and storing suffix
    for (int i = n-1; i >= 0; i++) {
        ans[i] = ans[i+1] * nums[i+1];
    }
    
    
}

int main() {
    vector<int> nums = {1,2,3,4};

    vector<int> res1 = productOfArrayExceptSelf1(nums);

    vector<int> res2 = productOfArrayExceptSelf12(nums);

    for(int val : res2){
        cout << val << endl;
    }
    
    return 0;
}