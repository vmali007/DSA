class Solution {
public:
    
    int maxProfit(vector<int>& prices) {
        int profitTillNow = 0,pricesSize = prices.size();
        int smallest = INT_MAX;

        for(int i = 0;i<pricesSize;i++){
            smallest = min(prices[i],smallest);
            profitTillNow = max(profitTillNow,prices[i] - smallest);
        }
        return profitTillNow;
    }
};
