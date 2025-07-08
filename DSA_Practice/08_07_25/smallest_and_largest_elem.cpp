#include <iostream>
#include <climits>
using namespace std;

void find(int arr[], int n){
    int maximum = INT_MIN, minimum = INT_MAX, maxIndex = 0, minIndex = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < minimum) {
            minimum = min(minimum, arr[i]);
            minIndex = i;
        } else if (arr[i] > maximum) {
            maximum = max(maximum, arr[i]);
            maxIndex = i;
        }
    }

    cout << "The maximum value is: " << maximum << " and the minimum value is: " << minimum << endl;
    cout << "maxIndex = " << maxIndex << " and minIndex = " << minIndex << endl;
    
}

int main() {
    int arr[] = {2, 5, 9, 6};
    int n = 4;

    find(arr, n);
    
    return 0;
}