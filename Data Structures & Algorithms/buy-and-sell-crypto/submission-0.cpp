class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxProfit=0,bb=prices[0];
        for(int i=0;i<prices.size();i++){
            if(prices[i]>bb){
                maxProfit=max(maxProfit,prices[i]-bb);
            }
            bb=min(bb,prices[i]);
        }
        return maxProfit;
    }
};
