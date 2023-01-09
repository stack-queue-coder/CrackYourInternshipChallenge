Question Link : https://leetcode.com/problems/best-time-to-buy-and-sell-stock-ii

class Solution {
public:
    int maxProfit(vector<int>& price) {
        int n = price.size();
        int sl = 0, by = 0;
        int profit = 0;
        for(int i=1;i<n;i++){
            if(price[i] >= price[i-1]){
                sl++;
            }
            else{
                profit += price[sl] - price[by];
                sl = i;
                by = i;
            }
        }
        profit += price[sl] - price[by];
        return profit;
    }
};