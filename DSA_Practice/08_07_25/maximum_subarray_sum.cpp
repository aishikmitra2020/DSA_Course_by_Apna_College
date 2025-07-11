#include <iostream>
#include <vector>
#include <climits>
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
        for (int end = st; end < n; end++) {
            currSum += nums[end];
            maxSum = max(maxSum, currSum);
        }
        
    }

    return maxSum;
    
}

// Kadane's Algorithm
int findMaxSubarraySum2(vector<int> &nums) {
    int n = nums.size();
    int currSum = 0, maxSum = INT_MIN;

    for (int i = 0; i < n; i++) {
        currSum += nums[i];
        maxSum = max(currSum, maxSum);
        if (currSum < 0){
            currSum = 0;
        }
    }

    return maxSum;
    
}

int main() {
    vector<int> vec = {1,2,3,-14,5};

    findSubarrays(vec);
    cout << findMaxSubarraySum(vec) << endl;
    cout << findMaxSubarraySum2(vec) << endl;
    
    return 0;
}