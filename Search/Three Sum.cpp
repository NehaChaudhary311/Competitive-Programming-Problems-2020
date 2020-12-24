class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        
          vector<vector<int>> res;
        
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
                if (x + nums[l] + nums[r] == 0) {
                    res.push_back(vector<int>{x,nums[l],nums[r]});
                    //to handle duplicates
                    while (l<r && nums[l] == nums[l+1]) 
                        l++;
                    // to handle duplicates
                    while (l<r && nums[r] == nums[r-1]) 
                        r--;
                    l++;
                    r--;
                    //break
                }
                
                else if (x + nums[l] + nums[r] < 0) 
                    l++; 
  
                 
                else
                    r--; 
            }
                
        }
        return res;
    }
};
