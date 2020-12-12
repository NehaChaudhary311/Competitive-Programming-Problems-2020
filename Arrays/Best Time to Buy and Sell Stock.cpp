class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mn=INT_MAX;
        int mx=0;
        for(int i=0;i<prices.size();i++)
        {
            mn=min(prices[i],mn);
            mx=max(prices[i]-mn,mx);
        }
       return mx;
    }
};
//NOte for a testcase like [10, 9, 8], we should return -1
