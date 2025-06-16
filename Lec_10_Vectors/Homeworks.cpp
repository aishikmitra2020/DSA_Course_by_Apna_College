#include <iostream>
#include <vector>
using namespace std;

int linearSearch(vector<int> &vec, int target){
    for (int i = 0; i < vec.size(); i++)
    {
        if (vec[i] == target)
        {
            return i;
        }
        
    }
    return -1;
}

void reverseVector(vector<int> &vec){
    // for (int i = 0; i < vec.size() / 2; i++)
    // {
    //     swap(vec[i], vec[vec.size() - i - 1]);
    // }
    // OR
    int start = 0, end = vec.size() - 1;
    while (start < end) {
        swap(vec[start], vec[end]);
        start++;
        end--;
    }
    
    
}

int main() {
    vector<int> vec = {2, 5, 8};

    // Question 1
    // Linear Search
    int target = 8;
    int res = linearSearch(vec, target);
    cout << res << endl;

    // Question 2
    reverseVector(vec);

    for(int item: vec){
        cout << item << endl;
    }
    
    return 0;
}