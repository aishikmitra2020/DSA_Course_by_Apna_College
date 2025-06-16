#include <iostream>
using namespace std;
#include <climits>  // This enables INT_MAX and INT_MIN

int main() {
    int size = 6;
    int nums[size] = {5, 15, 22, 1, -15, -24};

    int smallest = INT_MAX; // + infinity
    int largest = INT_MIN; // - infinity

    for (int i = 0; i < size; i++)
    {
        // if(nums[i] < smallest) smallest = nums[i];
        smallest = min(nums[i], smallest);
        largest = max(nums[i], largest);
    }


    cout << "The smallest value is: " << smallest << endl;
    cout << "The largest value is: " << largest << endl;

    for (int i = 0; i < size; i++)
    {
        if (nums[i] == largest)
        {
            cout << "The largest value is present at a index of: " << i << endl;
        }
        if (nums[i] == smallest)
        {
            cout << "The smallest value is present at a index of: " << i << endl;
        }
        
    }


    // Optimised version
    // int size = 6;
    // int nums[size] = {5, 15, 22, 1, -15, -24};

    // int smallest = nums[0], largest = nums[0];
    // int smallestIndex = 0, largestIndex = 0;

    // for (int i = 1; i < size; i++) {
    //     if (nums[i] < smallest) {
    //         smallest = nums[i];
    //         smallestIndex = i;
    //     }
    //     if (nums[i] > largest) {
    //         largest = nums[i];
    //         largestIndex = i;
    //     }
    // }

    // cout << "The smallest value is: " << smallest << " at index: " << smallestIndex << endl;
    // cout << "The largest value is: " << largest << " at index: " << largestIndex << endl;

    
    

    
    return 0;
}