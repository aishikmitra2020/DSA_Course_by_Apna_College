#include <iostream>
#include <vector>
using namespace std;

int stockBuyAndSell(vector<int> &prices){
    int bestBuy = prices[0], maxProfit = 0;

    for (int i = 1; i < prices.size(); i++)
    {
        bestBuy = min(bestBuy, prices[i]);
        if (prices[i] > bestBuy)
        {
            maxProfit = max(maxProfit, prices[i] - bestBuy);
        }
    }
    
    return maxProfit;
}

int main() {
    vector<int> prices = {7, 1, 5, 3, 6, 4};

    cout << stockBuyAndSell(prices) << endl;
    
    return 0;
}

