#include <iostream>
using namespace std;

void reverse(int arr[], int n){
    int st = 0, end = n-1;

    while (st < end) {
        swap(arr[st], arr[end]);
        st++;
        end--;
    }

}

int main() {
    int arr[] = {2, 8, 10, 5};
    int n = 4;

    reverse(arr, n);

    for (int i = 0; i < n; i++) {
        cout << arr[i] << endl;
    }
    
    
    return 0;
}