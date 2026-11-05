class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minPrice = prices[0];
        int max_profit = 0;

        for (int i = 1; i < prices.size(); i++) {
            int profit = prices[i] - minPrice;
            max_profit = max(max_profit, profit);
            minPrice = min(minPrice, prices[i]);
        }

        return max_profit;
    }
};