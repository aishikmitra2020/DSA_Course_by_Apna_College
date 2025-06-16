#include <iostream>
#include <vector>
using namespace std;

vector<int> productOfArrayExceptSelf(vector<int> &nums){
    vector<int> ans;

    int x = 0;
    
    for (int i = 0; i < nums.size(); i++) {
        int product = 1;
        for (int j = 0; j < nums.size(); j++)
        {
            product *= nums[j];
        }
        product /= nums[x];
        
        ans.push_back(product);
        
        x+=1;
               
    }

    return ans;
}


// OR

// Brute Force Method by ChatGPT
// vector<int> productOfArrayExceptSelf(vector<int> &nums) {
//     vector<int> ans;
    
//     // Calculate total product of all elements
//     int totalProduct = 1;
//     for (int num : nums) {
//         totalProduct *= num;
//     }
    
//     // For each element, divide totalProduct by that element
//     for (int i = 0; i < nums.size(); i++) {
//         ans.push_back(totalProduct / nums[i]);
//     }
    
//     return ans;
// }


// Apna College
// Brute Force
// vector<int> productOfArrayExceptSelf2(vector<int> &nums){
//     int n = nums.size();
//     vector<int> ans(n, 1);

//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < n; j++) {
//             if (i!=j) {
//                 ans[i] *= nums[j];
//             }
            
//         }
//     }

//     return ans;
    
// }


// Optimized
// Time Complexity = O(n)
// Space Complexity = O(n)
// vector<int> productOfArrayExceptSelf2(vector<int> &nums){
//     int n = nums.size();
//     vector<int> ans(n,1);
//     vector<int> prefix(n, 1);
//     vector<int> suffix(n, 1);

//     // Calculating the Prefix
//     for (int i = 1; i < n; i++) {
//         prefix[i] = prefix[i-1] * nums[i-1];
//     }

//     // Calculating the suffix
//     for (int i = n-2; i >= 0; i--) {
//         suffix[i] = suffix[i+1] * nums[i+1];
//     }

//     // Calculating the final answer
//     for (int i = 0; i < n; i++) {
//         ans[i] = prefix[i] * suffix[i];
//     }
    
//     return ans;
    
    
// }


// Fully Optimized
// Time Complexity = O(n)
// Space Complexity = O(1)
vector<int> productOfArrayExceptSelf2(vector<int> &nums){
    int n = nums.size();
    vector<int> ans(n,1);

    // Calculating the Prefix
    for (int i = 1; i < n; i++) {
        ans[i] = ans[i-1] * nums[i-1];
    }

    // Calculating the suffix
    int suffix = 1;
    for (int i = n-2; i >= 0; i--) {
        suffix *= nums[i+1];
        ans[i] *= suffix;
    }

    return ans;
}



int main() {
    vector<int> nums = {1,2,3,4};

    vector<int> result = productOfArrayExceptSelf2(nums);

    for (int val : result) {
        cout << val << " ";
    }
    
    
    return 0;
}