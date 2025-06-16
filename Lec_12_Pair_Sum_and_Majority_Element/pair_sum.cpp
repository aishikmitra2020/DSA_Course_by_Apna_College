#include <iostream>
#include <vector>
using namespace std;


// Brute Force Approach
// Time complexity - O(n^2)
// The return type of this vector is 'vector<int>'
vector<int> pairSum(vector<int> nums, int target){
    vector<int> ans;
    int n = nums.size();

    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if (nums[i] + nums[j] == target)
            {
                ans.push_back(i);
                ans.push_back(j);
                return ans;
            }
            
        }
    }
    
}

// Optimized Approach
// Time Compelexity - O(n)
vector<int> pairSum2(vector<int> nums, int target){
    vector<int> ans;
    int n = nums.size();

    int i = 0, j = n - 1;

    while (i < j)
    {
        int pairSum = nums[i] + nums[j];
        if (pairSum > target) j--;
        else if (pairSum < target) i++;
        else{
            ans.push_back(i);
            ans.push_back(j);
            return ans;
        }

    }

}

int main() {
    vector<int> vec = {2, 7, 11, 15};
    int target = 26;

    vector<int> ans = pairSum2(vec, target);

    for (int val: ans)
    {
        cout << val << endl;
    }
    
    
    return 0;
}