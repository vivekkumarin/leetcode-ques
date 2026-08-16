class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int miniprice=prices[0];
        int maxprofit=0;
        int cost=0;
        for(int i=0;i<n;i++){
            miniprice=min(miniprice,prices[i]);
            cost=prices[i]-miniprice;
            maxprofit=max(maxprofit,cost);
        }
        return maxprofit;
    }
};