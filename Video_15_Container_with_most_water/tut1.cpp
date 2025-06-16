#include <iostream>
#include <vector>
using namespace std;

// Brute Force Approach
int containerWithMostWater(vector<int> &nums){
    int maxArea = 0;

    for (int i = 0; i < nums.size(); i++) // selecting the left boundary
    {
        for (int j = i+1; j < nums.size(); j++) // right boundary
        {
            int area = min(nums[j], nums[i]) * (j - i); // height * width
            maxArea = max(area, maxArea);
        }
        
    }

    return maxArea;
    
}

// Optimized Way
// Two Pointer Approach
int containerWithMostWater2(vector<int> &height){
    int lp = 0, rp = height.size() - 1, maxArea = 0;

    while (rp > lp) {
        int area = (rp-lp) * min(height[lp], height[rp]);
        maxArea = max(maxArea, area);

        if (height[rp] > height[lp]) {
            lp++;
        }
        else {
            rp--;
        }
    }

    return maxArea;
}

int main() {
    vector<int> height = {1,8,6,2,5,4,8,3,7};

    cout << containerWithMostWater2(height) << endl;


    return 0;
}