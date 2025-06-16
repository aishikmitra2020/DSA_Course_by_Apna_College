#include <iostream>
using namespace std;

// This is a LeetCode Problem

int singleNumber(int arr[], int size){
    int ans = 0;

    // These two concepts are being used here
    // n^n = 0
    // n^0 = n

    for (int i = 0; i < size; i++)
    {
        ans ^= arr[i];
    }

    return ans;
    
}

int main() {
    int nums[5] = {1, 2, 1, 5, 2};
    int size = 5;

    int res = singleNumber(nums, size);

    cout << res << endl;
    
    return 0;
}