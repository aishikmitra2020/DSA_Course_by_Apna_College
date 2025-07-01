#include <iostream>
#include <vector>
using namespace std;

bool isValid(vector<int> &nums, int n, int m, int mid){
    int st = 1, pages = 0;

    for (int i = 0; i < n; i++)
    {
        if (nums[i] > mid) return false;
        if (nums[i] + pages <= mid){
            pages += nums[i];
        } else {
            st++;
            pages = nums[i];
        }
    }

    if (st > m) return false;
    else return true;
    
}

int allocateBooks(vector<int> &nums, int n, int m){
    if (m > n) return -1;

    int sum = 0;
    for (int item : nums){
        sum += item;
    }
    
    int st = 0, end = sum, ans = 0;

    while (st <= end) {
        int mid = st + (end - st) / 2;

        if (isValid(nums, n, m, mid)){
            ans = mid;
            end = mid - 1;
        } else {
            st = mid + 1;
        }
    }

    return ans;
    
}

int main() {
    vector<int> arr = {2,1,3,4};
    int n = 4, m = 5;

    cout << allocateBooks(arr, n, m) << endl;
    
    return 0;
}