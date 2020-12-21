class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        int l = 0, r = n - 1;
        while(l <= r) {
            int m = (l + r) / 2;
            if (nums[m] == target)
                return m;
            else if (nums[l] <= nums[m]) { /* left part is sorted */
                if (nums[l] <= target && target < nums[m]) /* target is in the left part */
                    r = m - 1;
                else  /* target is in the right part */
                    l = m + 1;                               
            } else {/* right part is sorted */
                if (nums[m] < target && target <= nums[r]) /* target is in the right part */
                    l = m + 1;
                else /* target is in the left part */
                    r = m - 1;
            }
        }
        
        return -1;
    }
};
