#include <iostream>
#include <vector>
using namespace std;


// Iterative Method
int binarySearch1(vector<int> &arr,int target){
    int n = arr.size();
    int st = 0, end = n-1;

    while (st<=end){
        // int mid = (st + end) / 2;
        int mid = st + (end - st) / 2; // prevents overflow

        if (target > arr[mid]) st = mid+1;
        else if (target < arr[mid]) end = mid-1;
        else return mid;
    }

    return -1; // ans not found
    
}

int main() {
    vector<int> arr1 = {-1,0,3,4,5,9,12}; // odd size
    int target = 40;

    cout << binarySearch1(arr1, target) << endl;

    vector<int> arr2 = {-1,0,3,5,9,12}; // even size
    int target2 = 0;

    cout << binarySearch1(arr2, target2) << endl;

    
    return 0;
}