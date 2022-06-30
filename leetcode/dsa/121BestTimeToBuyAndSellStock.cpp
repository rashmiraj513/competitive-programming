#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit = 0, leastPrice = INT_MAX, overallProfit = 0;
        for(int i = 0; i < prices.size(); i++) {
            if(prices[i] < leastPrice) leastPrice = prices[i];
            profit = prices[i] - leastPrice;
            if(profit > overallProfit) overallProfit = profit;
        }
        return overallProfit;
    }
};