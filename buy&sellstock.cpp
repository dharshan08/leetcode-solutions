class Solution {
public:
    int maxProfit(vector<int>& prices) {
        ios_base::sync_with_stdio(false);
        cin.tie(nullptr);
        int min_price=prices[0];
        int profit=0;
        for(int i=0;i<prices.size();i++){
            profit=max(profit,prices[i]-min_price);
            min_price=min(min_price,prices[i]);
        }
        return profit;
    }
};
