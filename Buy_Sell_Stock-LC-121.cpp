// LeetCode Problem #121 Best Time to Buy and Sell Stock (11 ms)
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mini = prices[0];
        int profit = 0;
        int cost;
        for(int i = 1; i < prices.size();i++){
            cost = prices[i]-mini;
            profit = max(cost,profit);
            mini = min(mini,prices[i]);
        }
        return profit;
    }
};
