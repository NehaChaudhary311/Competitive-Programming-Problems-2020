//APPROACH 1
//Time: O(N^2)
//SPACE: O(N*sum(nums))
class Solution {
public:
    bool canPartition(vector<int>& nums) {
        int sum_nums = 0;
        for(int i = 0; i<nums.size(); i++){
            sum_nums += nums[i];
        }
        if(sum_nums %2 != 0) return false;
        int n = nums.size();
        //now we need to find sum_nums/2 in the array, if it exists, the true else false
        //Now, this is a subset sum problem of target = sum_nums/2
        
        //initialising the dp with base conditions
        bool dp[n+1][(sum_nums/2)+1];
        for(int i = 0; i<n+1; i++){
            for(int j = 0; j<(sum_nums/2)+1; j++){
                if(i == 0) dp[i][j] = false;
                if(j == 0) dp[i][j] = true; //will overwrite at dp[0][0] to make it true
            }
        }
        for(int i = 1; i<n+1; i++){
            for(int j = 1; j<(sum_nums/2)+1; j++){
                //if total sum is less than the current item, then either include it or exclude
                if(nums[i-1] <= j)
                    dp[i][j] = dp[i-1][j-nums[i-1]] || dp[i-1][j];
                else
                    dp[i][j] = dp[i-1][j];
            }
        }
        return dp[n][sum_nums/2];
    }
};

//APPROACH 2
//Time: O(N^2)
//SPACE: O(sum(nums))
class Solution {
public:
    bool canPartition(vector<int>& nums) {
        int sum = 0;
        for (int i = 0; i<nums.size(); i++)
            sum += nums[i];
        
        if (sum % 2 != 0) 
            return false;
        
        sum = sum/2;
        vector<bool> dp(sum+1, false); // dp keeps for each number if it has a subset or not
        dp[0] = true;
        
        //for each index of nums, we iterate through the dp
        //Example: {1,2,5}
        //First iteration: T T F F F (0 and 1 sum can be created using num = 1)
        //Second iteration: T T T T F (0 and 1 and 2 and 3 sums can be created using num = 1,2)
        //Third iteration: T T T T F
        for (int i = 0; i<nums.size(); i++) {
            for (int j = sum; j >= nums[i]; j--) {
                dp[j] = dp[j] || dp[j-nums[i]]; // for each number, either we use it or we don't
            } 
        }
        return dp[sum];
    }
};
