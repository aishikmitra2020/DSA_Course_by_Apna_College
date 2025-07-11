#include <iostream>
#include <vector>
#include <climits>
using namespace std;

// BRUTE FORCE APPROACH
int containerWithMostWater(vector<int> &height) {
    int n = height.size(), maxWater = INT_MIN;

    for (int i = 0; i < n; i++) {
        for (int j = i+1; j < n; j++) {
            // Always (j>i), because its the index not the value at the index
            int currWater = min(height[i], height[j]) * (j-i);
            maxWater = max(maxWater, currWater);
        }
        
    }

    return maxWater;
    
}

// OPTIMISED APPROACH
int containerWithMostWater2(vector<int> &height) {
    int n = height.size(), st = 0, end = n-1, maxArea = 0;

    while (st < end) {
        int area = min(height[end], height[st]) * (end - st);
        maxArea = max(area, maxArea);

        if (height[st] > height[end]) {
            end--;
        } else {
            st++;
        }
    }

    return maxArea;
}

int main() {
    vector<int> height = {1, 8, 6, 2, 5, 4, 8, 3, 7};

    cout << "Brute Force: " << containerWithMostWater(height) << endl;
    cout << "Optimized: " << containerWithMostWater2(height) << endl;
    
    return 0;
}