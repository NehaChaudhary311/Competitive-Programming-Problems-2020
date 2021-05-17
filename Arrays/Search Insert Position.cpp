// Given a sorted array of distinct integers and a target value, return the index if the target is found. If not, return the index where it would be if it were inserted in order.

// You must write an algorithm with O(log n) runtime complexity.

 

// Example 1:

// Input: nums = [1,3,5,6], target = 5
// Output: 2
// Example 2:

// Input: nums = [1,3,5,6], target = 2
// Output: 1
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int l = 0; 
        int r = nums.size()-1;
        int mid;
        while(l <= r)
        {
            mid = l + (r-l)/2; 
            if(target == nums[mid])
                return mid;
            else if(target > nums[mid])
                l = mid +1;
            else if(target < nums[mid])
                r = mid -1;
        }
        return l; 
    }
};
