#include <iostream>
#include <vector>
using namespace std;

void buubleSort(vector<int> &nums){
    int n = nums.size();

    for (int i = 0; i < n-1; i++) {
        bool isSwap = false; // it is taken to keep a track that array is already sorted or not
        for (int j = 0; j < n-i-1; j++) {
            if (nums[j] > nums[j+1]) {
                swap(nums[j], nums[j+1]);
                isSwap = true;
            }
        }
        
        if (!isSwap){
            return; // array is already sorted
        }
    }
    
}

int main() {
    vector<int> vec = {4,1,5,2,3};

    buubleSort(vec);

    for (int item : vec) {
        cout << item << endl;
    }
    
    return 0;
}