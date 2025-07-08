#include <iostream>
#include <vector>
using namespace std;

void findSubarrays(vector<int> &nums) {
    int n = nums.size();

    for (int st = 0; st < n; st++)
    {
        for (int end = st; end < n; end++)
        {
            for (int i = st; i < end; i++)
            {
                cout << nums[i];
            }
            cout << " ";
            
        }
        cout << endl;
        
    }
    
}

// Brute Force Algorithm
int findMaxSubarraySum(vector<int> &nums) {
    int n = nums.size();

    int maxSum = 0;

    for (int st = 0; st < n; st++)
    {
        int currSum = 0;
        for (int end = st; end < n; end++)
        {
            currSum += nums[end];
            maxSum = max(maxSum, currSum);
        }
        
    }

    return maxSum;
    
}

int main() {
    vector<int> vec = {1,2,3,4,5};

    findSubarrays(vec);
    cout << findMaxSubarraySum(vec) << endl;
    
    return 0;
}