#include <iostream>
#include <vector>
#include <climits>
using namespace std;

// Stock Buy & Sell
// har din ko selling day man ke chalna hai
int stockBuyAndSell1(vector<int> prices) {
    int n = prices.size();
    int maxProfit = 0;

    for (int i = 1; i < n; i++) {
        // for (int j = i - 1; j >= 0; j--)  // ✅ Backward
        for (int j = 0; j < i; j++) {
            int profit = prices[i] - prices[j];
            maxProfit = max(maxProfit, profit);
        }
    }
    return maxProfit;
}

int stockBuyAndSell2(vector<int> prices) {
    int n = prices.size();
    
    int maxProfit = INT_MIN, bestBuy = prices[0];
    for (int i = 0; i < n; i++) {
        if(prices[i] > bestBuy){
            maxProfit = max(maxProfit, prices[i] - bestBuy);
        }
        bestBuy = min(bestBuy, prices[i]);
    }

    return maxProfit;
    
}

int main() {
    vector<int> prices = {7, 1, 5, 3, 6, 4};

    cout << stockBuyAndSell1(prices) << endl;
    cout << stockBuyAndSell2(prices) << endl;

    return 0;
}