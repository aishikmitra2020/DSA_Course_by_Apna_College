#include <iostream>
#include <limits.h>
using namespace std;

int main() {
    int n = 7;
    int arr[7] = {3, -4, 5, 4, -1, 7, -8};

    // Printing all the subarrays
    // No. of Subarrays - (n*(n+1))/2
    for (int st = 0; st < n; st++)
    {
        for (int end = st; end < n; end++)
        {
            for (int i = st; i <= end; i++)
            {
                cout << arr[i];
            }
            cout << " ";
            
        }
        cout << endl;
        
    }
    // Time complexity of this above code is - O(n^3)

    // Using Brute Force Approach
    // int maxSum = INT_MIN;
    // for (int st = 0; st < n; st++)
    // {
    //     int currentSum = 0;
    //     for (int end = st; end < n; end++)
    //     {
    //         currentSum += arr[end];
    //         maxSum = max(currentSum, maxSum);
    //     }
    // }

    // cout << "Max Subarray Sum = " << maxSum << endl;

    // Time Complexity of this method is - O(n^2)


    // Using Kadane's Algorithm
    // time complexity - O(n) which is linear
    int currSum = 0, maxSum = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        currSum += arr[i];
        maxSum = max(currSum, maxSum);
        if (currSum < 0)
        {
            currSum = 0;
        }
        
    }

    cout << maxSum << endl;
    

    
    
    return 0;
}