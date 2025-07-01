#include <iostream>
#include <vector>
using namespace std;

// binary search
int singleElementInSortedArray(vector<int> &A){
    int n = A.size();
    int st = 0, end = n - 1;

    if (n == 1) return A[0]; // handling the corner cases

    while (st <= end) {
        int mid = st + (end - st)/2;

        // handling the corner cases
        if (mid == 0 && A[0] != A[1]) return A[mid];
        if (mid == n-1 && A[n-1] != A[n-2]) return A[mid];

        if (A[mid-1] != A[mid] && A[mid] != A[mid+1]) return A[mid]; // returning the ans
        
        // main logic
        if (mid % 2 == 0) { // even
            if (A[mid] == A[mid-1]) end = mid - 1; // left
            else st = mid + 1; // right
        }
        else { // odd
            if (A[mid-1] == A[mid]){
                st = mid + 1; // right
            } else {
                end = mid - 1; // left
            }
        }
    }

    return -1;
    
}

int main() {
    vector<int> vec = {1,1,2,3,3,4,4,8,8};
    
    cout << singleElementInSortedArray(vec) << endl;
    
    return 0;
}