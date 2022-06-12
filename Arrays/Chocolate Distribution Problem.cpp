class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int price=prices[0],profit=0,max_profit=0;
        for(int i=0;i<prices.size();i++)
        {
            if(prices[i]<price)
            {
                price=prices[i];
            }
            profit=prices[i]-price;
            max_profit=max(max_profit,profit);
        }
        return max_profit;
    }
};