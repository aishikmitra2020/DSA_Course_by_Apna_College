#include <iostream>
#include <vector>
using namespace std;

void insertionSort(vector<int> &nums) {
    int n = nums.size();

    for (int i = 1; i < n; i++) {
        int curr = nums[i];
        int prev = i-1;

        // Aim: place curr in proper place in every iteration!

        while (prev >= 0 && nums[prev] > curr) {
            nums[prev+1] = nums[prev];
            prev--;
        }
        nums[prev+1] = curr;
    }
    
}

int main() {
    vector<int> vec = {4,1,5,2,3};

    insertionSort(vec);
    for (int elem : vec) {
        cout << elem << endl;
    }
    
    return 0;
}