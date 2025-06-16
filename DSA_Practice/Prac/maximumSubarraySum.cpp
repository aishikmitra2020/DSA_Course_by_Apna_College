#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;

void printAllSubarray(vector<int> &nums){
    // No. of subarry - (n*(n-1))/2
    for (int st = 0; st < nums.size(); st++)
    {
        for (int end = st; end < nums.size(); end++)
        {
            for (int i = st; i <= end; i++)
            {
                cout << nums[i];
            }
            cout << " ";
            
        }
        cout << endl;
        
    }
    
}

int maximumSubarraySumBruteForce(vector<int> &nums){
    int n = nums.size();

    int currSum = 0, maxSum = INT_MIN;
    
    for (int st = 0; st < n; st++)
    {
        currSum = 0;
        for (int end = st; end < n; end++)
        {
            currSum += nums[end];
            maxSum = max(currSum, maxSum);
        }
        
    }
    return maxSum;
    
}

int maximumSubarraySumKadaneAlgo(vector<int> &nums){
    int n = nums.size();

    int currSum = 0, maxSum = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        currSum += nums[i];
        maxSum = max(currSum, maxSum);
        if (currSum < 0) currSum = 0;
        
    }

    return maxSum;
    
}

int main() {
    vector<int> vec = {1, 2, 3, 4, 5};

    printAllSubarray(vec);

    cout << maximumSubarraySumBruteForce(vec) << endl;

    cout << maximumSubarraySumKadaneAlgo(vec) << endl;

    return 0;
}