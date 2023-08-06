class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int profit=0;
        int buyPrice=prices[0];
        for(int i=1;i<prices.size();i++){
            profit=max(profit,prices[i]-buyPrice);
            if(buyPrice>prices[i]){
                buyPrice=prices[i];
            }
            
        }
        return profit;
        
    }
};