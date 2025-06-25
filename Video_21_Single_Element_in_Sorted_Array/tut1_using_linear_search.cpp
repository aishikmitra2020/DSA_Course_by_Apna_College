#include <iostream>
#include <vector>
using namespace std;

// using linear search
int singleElementInSortedArray(vector<int> &nums){
    for (int i = 0; i < nums.size() - 1; i++)
    {
        if (nums[i-1] != nums[i] && nums[i] != nums[i+1]){
            return i;
        }
    }
    
}

int main() {
    vector<int> vec = {1,1,2,3,3,4,4,8,8};
    
    cout << singleElementInSortedArray(vec) << endl;
    
    return 0;
}