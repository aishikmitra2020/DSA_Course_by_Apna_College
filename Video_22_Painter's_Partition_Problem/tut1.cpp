#include <iostream>
#include <vector>
#include <climits>
#include <algorithm> // DUE TO THIS, WE CAN USE THE MAX_ELEMENT() FUNCTION
using namespace std;

bool isValid(vector<int> &lengths, int N, int M, int mid) {
    int painter = 1, time = 0;

    for (int i = 0; i < N; i++)
    {
        if (lengths[i] > mid) return false;
        if (time + lengths[i] <= mid) time += lengths[i];
        else {
            painter++;
            time = lengths[i];
        }
    }

    if (painter <= M) return true;
    else return false;
    
}

int minTime(vector<int> &lengths, int N, int M) {
    int maxTime = 0;
    for (int item : lengths) {
        maxTime += item;
    }

    int st = *max_element(lengths.begin(), lengths.end()), end = maxTime, ans = 0;

    while (st <= end) {
        int mid = st + (end - st)/2;

        if (isValid(lengths, N, M, mid)) {
            ans = mid;
            end = mid - 1; // left
        } else {
            st = mid + 1; // right
        }

    }

    return ans;
}

int main() {
    vector<int> lengths = {10,10,10,10};
    int N = 4, M = 2;

    cout << minTime(lengths, N, M) << endl;
    
    return 0;
}