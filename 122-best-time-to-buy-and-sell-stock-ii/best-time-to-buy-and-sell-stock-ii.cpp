class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buyPrice = prices[0];
        int profit = 0;

        for (int i = 1; i < prices.size(); i++) {
            if (buyPrice > prices[i]) {
                buyPrice = prices[i];
            }
            
            profit +=  prices[i] - buyPrice;
            buyPrice = prices[i];
               
    }

        return profit;
        }
};