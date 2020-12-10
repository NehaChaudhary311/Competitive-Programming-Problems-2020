/*
Example 1:
Input: nums = [1,2,3]
Output: [1,3,2]

Example 2:
Input: nums = [3,2,1]
Output: [1,2,3]

Example 3:
Input: nums = [1,1,5]
Output: [1,5,1]

Example 4:
Input: nums = [1]
Output: [1]
*
class Solution {
public:
    void nextPermutation(vector<int>& nums) {
       if(nums.size()<=1) return;
        int n = nums.size(), pos, i;
        
        for(i=n-1; i>=1; i--){
            if(nums[i-1]<nums[i])
               break;
        }
        //if the vector is like this 5 4 3 2 1, next permutation would be 1 2 3 4 5, so simply
        //reverse 
        if(i==0) return reverse(nums.begin(), nums.end());
        pos = i-1;
        
        for(i=n-1; i>pos && i>=0; i--){
            if(nums[i]>nums[pos]){
                swap(nums[i], nums[pos]);
                break;
            }
        }
        reverse(nums.begin() + pos+1, nums.end());
    }
};
