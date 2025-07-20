#include <iostream>
#include <vector>
using namespace std;

bool isValid(vector<int> &nums, int N, int M, int mid) { // mid => max allowed time
    int painter = 1, time = 0;
    
    for (int i = 0; i < N; i++) {
        if (nums[i] > mid) return false;

        if (time + nums[i] <= mid) time += nums[i];
        else {
            time = nums[i];
            painter++;
        }
    }

    if (painter <= M) return true;
    else return false;
    
}

int minTime(vector<int> &nums, int N, int M) {
    int st = 0, end = 0, ans = 0;
    for (int i = 0; i < N; i++) {
        st = max(st, nums[i]);
        end += nums[i];
    }

    while (st <= end) {
        int mid = st + (end - st) / 2;

        if (isValid(nums, N, M, mid)) {
            ans = mid;
            end = mid-1; // left
        } else {
            st = mid+1; //right
        }
    }

    return ans;
    
}

int main() {
    vector<int> lengths = {10,10,10,10};
    int N = 4, M = 2;

    cout << minTime(lengths, N, M) << endl;
    
    return 0;
}