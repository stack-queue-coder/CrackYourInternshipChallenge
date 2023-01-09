Question Link : https://leetcode.com/problems/best-time-to-buy-and-sell-stock/description/

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int minn = INT_MAX;
        int maxx = 0;
        for(int i=0;i<prices.size();i++){
            minn = min(prices[i], minn);
            maxx = max(maxx, prices[i] - minn);
        }
        return maxx;
       
    }
};