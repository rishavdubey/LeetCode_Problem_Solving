class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mnStockPrice=prices[0];
        int mxProfit=0;
        for(auto it:prices){
            if(mnStockPrice>it){
                mnStockPrice=it;
            }
            
            mxProfit=max(mxProfit,it-mnStockPrice);
        
        }
        return mxProfit;
    }
};