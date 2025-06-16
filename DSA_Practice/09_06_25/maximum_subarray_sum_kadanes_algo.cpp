#include <iostream>
using namespace std;
#include <vector>
#include <climits>

// find subarrays
void findSubarrays(vector<int> vec){
    int n = vec.size();

    // No. of Subarrays - (n*(n+1))/2)
    
    for (int st = 0; st < n; st++) {
        for (int end = st; end < n; end++) {
            for (int i = st; i <= end; i++)
            {
                cout << vec[i];
            }
            cout << " ";
            
        }
        cout << endl;
        
    }
}


// BruteForce Approach
void maximumSubarraySum1(vector<int> vec){
    int n = vec.size();

    int maxSum = 0;

    for (int st = 0; st < n; st++) {
        int currSum = 0;
        for (int end = st; end < n; end++) {
            currSum += vec[end];
            maxSum = max(maxSum, currSum);
        }
    }

    cout << "The maximum subarray sum is: " << maxSum << endl;
}

// Kadane's Algorithm
void maximumSubarraySum2(vector<int> vec){
    int currSum = 0, maxSum = INT_MIN;
    
    for (int i = 0; i < vec.size(); i++)
    {
        currSum += vec[i];
        maxSum = max(maxSum, currSum);

        if (currSum < 0) {
            currSum = 0;
        }
        
    }

    cout << "The maximum subarray sum is: " << maxSum << endl;
    
}

int main() {
    vector<int> vec = {2, 3, 5, -6};

    findSubarrays(vec);
    maximumSubarraySum1(vec);
    maximumSubarraySum2(vec);

    return 0;
}