/*
The given sets can be considered as P and N. where N contains the numbers of other set which are
	subtracted.
	P - N = Target(T)
    P + N = S
	2P = T + S
	P = (T + S) / 2
	
	=> (T + S) should be even and P = (T + S)/2
  
  Use Subset Sum Count function here 
 */
 
 class Solution {
public:
    
    int findTargetSumWays(vector<int>& nums, int S) {
        long long sum = 0;
        for(int i = 0; i<nums.size(); i++){
            sum += nums[i];
        }
        if((sum + S)%2 != 0 || S > sum) return 0;
        int p = (sum + S)/2;
        
        //Start storing the count in dp[]
        int n = nums.size();
        vector<int> dp(p + 1, 0);
        // sum zero is always possible
        dp[0] = 1;
        
        for(int i = 0; i<n; i++){
            // starting from back
            for(int j = p; j >= nums[i]; j--) {
                dp[j] = dp[j] + dp[j - nums[i]];
            }
        }
        return dp[p];
    }
};
