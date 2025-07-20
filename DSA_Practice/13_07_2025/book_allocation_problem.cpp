#include <iostream>
#include <vector>
using namespace std;

bool isValid(vector<int> &nums, int m, int n, int mid) { // mid => max allowed pages
    int st = 1, pages = 0; // st => students

    for (int i = 0; i < nums.size(); i++) {
        if (nums[i] > mid) return false;

        if (nums[i] + pages > mid) {
            pages = nums[i];
            st++;
        } else {
            pages += nums[i];
        }
    }

    if (st > m) return false;
    else return true;
}

int bookAllocationProblem(vector<int> &nums, int m, int n) {
    // m => no. of students
    // n => no. of books
    if (m>n) return -1;

    int sum = 0;
    for (int elem : nums) {
        sum += elem;
    }
    int st = 0, end = sum, ans = 0;

    while (st <= end) {
        int mid = st + (end - st)/2;

        if (isValid(nums, m, n, mid)) { // left
            // search for the least possible value
            ans = mid;
            end = mid-1;
        } else { // right
            st = mid+1;
        }
    }

    return ans;
    
}

int main() {
    vector<int> arr = {2,1,3,4};
    int n = 4, m = 5;

    cout << bookAllocationProblem(arr, m, n) << endl;
    
    return 0;
}