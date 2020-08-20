class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int minDiff = INT_MAX;
        int sum = 0, ans = 0;
        sort(nums.begin(),nums.end());
        
        for(int i = 0; i < nums.size();i++){
              
           //to handle duplicates
            if(i > 0 && nums[i]==nums[i-1])
                continue;
             int l = i + 1; 
            int r = nums.size() - 1; 
            int x = nums[i]; 
            
            while (l < r) 
            {    
               int sum = x + nums[l] + nums[r];
                int diff = abs(sum - target);
                if(diff < minDiff) {
                    minDiff = diff;
                    ans = sum;
                }
                if(sum > target) {
                    r--;
                } else {
                    l++;
                }
            }
                
        }
        return ans;
    }
};
