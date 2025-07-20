#include <iostream>
#include <vector>
using namespace std;

void selectionSort(vector<int> &nums) {
    int n = nums.size();
    for (int i = 0; i < n-1; i++)
    {
        int smallestIndex = i;
        for (int j = i+1; j < n; j++)
        {
            if (nums[j] < nums[smallestIndex]) {
                smallestIndex = j;
            }
        }

        swap(nums[i], nums[smallestIndex]);
        
    }
    
}

int main() {
    vector<int> vec = {4,1,5,2,3};

    selectionSort(vec);

    for (int item : vec) {
        cout << item << endl;
    }
    
    return 0;
}