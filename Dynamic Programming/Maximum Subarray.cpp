/*
Example 1:
Input: nums = [-2,1,-3,4,-1,2,1,-5,4]
Output: 6
Explanation: [4,-1,2,1] has the largest sum = 6.

Example 2:
Input: nums = [1]
Output: 1
*/

#include<algorithm>
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int len = nums.size();
        int dp[len];
        dp[0] = nums[0];
        int maxans = nums[0];
        
        for(int i = 1; i<len ; i++){
            dp[i] = max(nums[i], nums[i] + dp[i-1]);
            maxans = max(maxans, dp[i]);
        }
        return maxans;
    }

        
};
