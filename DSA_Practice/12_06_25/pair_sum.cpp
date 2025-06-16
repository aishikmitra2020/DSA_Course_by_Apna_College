#include <iostream>
#include <vector>
using namespace std;

// brute force
vector<int> pairSum1(vector<int> vec, int target) {
    int n = vec.size();

    vector<int> ans;

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j <= n; j++) {
            if (vec[i] + vec[j] == target) {
                ans.push_back(i);
                ans.push_back(j);
                return ans;
            }
            
        }
    }
}

// two pointer approach (optimized)
vector<int> pairSum2(vector<int> vec, int target){
    int n = vec.size();
    vector<int> ans;

    int i = 0, j = n-1;

    while (i < j) {
        int PS = vec[i] + vec[j];

        if (PS > target) j--;
        else if (PS < target) i++;
        else{
            ans.push_back(i);
            ans.push_back(j);
            return ans;
        }
        
    }

    return ans;
}


int main() {
    vector<int> vec = {1, 2, 3, 4, 5};
    int target = 9;

    // vector<int> ans = pairSum1(vec, target);
    vector<int> ans = pairSum2(vec, target);

    for(int item : ans){
        cout << item << endl;
    }
    
    return 0;
}