// Using Kadane's Algorithm
/*
Input: [-2,1,-3,4,-1,2,1,-5,4],
Output: 6
Explanation: [4,-1,2,1] has the largest sum = 6.

*/

#include<algorithm>
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        //Sorted the array
    int max_so_far = INT_MIN;
    int max_ending_here = 0;

    for (int i = 0; i < nums.size(); i++) {
        max_ending_here += nums[i];

        max_so_far = max(max_so_far, max_ending_here);

        max_ending_here = max(max_ending_here, 0);
    }

    return max_so_far;
    }

        
};
