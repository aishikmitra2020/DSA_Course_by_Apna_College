#include <iostream>
#include <vector>
#include <climits>
using namespace std;

// Container with most water
// Brute Force Approach
// we have to check for all the possible combinations
int containerWithMostWater1(vector<int> &vec){
    int n = vec.size();

    int maxWater = INT_MIN;

    for (int i = 0; i < n; i++) {
        for (int j = i+1; j < n; j++)
        {
            int currWater = (j - i) * min(vec[i], vec[j]);
            maxWater = max(maxWater, currWater);
        }
        
    }

    return maxWater;
    
}

// Optimal Approach
int containerWithMostWater2(vector<int> &height){
    int n = height.size();

    int maxWater = INT_MIN, lp = 0, rp = n-1;

    while(lp < rp) {
        int currWater = (rp - lp) * min(height[lp], height[rp]);
        maxWater = max(maxWater, currWater);

        if (height[rp] > height[lp]) {
            lp++;
        }
        else{
            rp--;
        }
    }

    return maxWater;
    
}

int main() {
    vector<int> height = {1,8,6,2,5,4,8,3,7};
    
    cout << containerWithMostWater1(height) << endl;
    cout << containerWithMostWater2(height) << endl;
    
    return 0;
}