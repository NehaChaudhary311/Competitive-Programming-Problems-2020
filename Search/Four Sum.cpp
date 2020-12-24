/*
Approach 1: 
Sort the array
We create three loops - i = 0, j = i+1, k = j+1
We find a[i]+a[j]+a[k] = curr_sum
x = target - curr_sum
Then we find x in the array after index k using binary search.
If x is not found in a[], k++ 
If x is found in a[], push it to the vector
Now, this vector might be having duplicates. To remove the duplicates, we can put the vector into a set.
Time: O(n^3logn + nlogn)
Space: O(1)

Approach 2:
Sort the array
We create two loops  i = 0, j = i+1
We create left and right pointers. left = j+1, right = a.size() - 1
Find a[i]+a[j]+a[left]+a[right] = cur_sum
if cur_sum < target, left++
else if cur_sum > target, right--
And we will stop when left = right
Also, to avoid duplicates, we jump comsecutive same a[i] and a[j] values
Time: O(N^3)
Space: O(1)
*/

class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<std::vector<int>> result;
        int n = nums.size();
        if (n < 4) {
            return result;
        }

        sort(nums.begin(), nums.end());
        for (int i = 0; i < n-3; ++i) {
            // target too small, no point in continuing
            if (target <= 0 && nums[i] > 0) break;
            // nums[i] has become too large, no point in continuing
            if (nums[i] + nums[i+1] + nums[i+2] + nums[i+3] > target) break;
            // nums[i] is so small, even the largest elements cannot help reach the sum
            if (nums[i] + nums[n-3] + nums[n-2] + nums[n-1] < target) continue; 
             // skip duplicates
            if (i > 0 && nums[i] == nums[i-1]) continue;

            for (int j = i+1; j < n - 2; ++j) {
                // nums[j] has become too large, no point in continuing
                if (nums[i] + nums[j] + nums[j+1] + nums[j+2] > target) break;
                // nums[j] is so small, even the largest elements cannot help reach the sum
                if (nums[i] + nums[j] + nums[n-2] + nums[n-1] < target) continue; 
                if (j > i+1 && nums[j] == nums[j-1]) continue; // skip duplicates

                int left = j+1, right = n-1;
                while (left < right) {
                    int sum = nums[i] + nums[j] + nums[left] + nums[right];
                    if (sum == target) {
                        result.push_back({nums[i], nums[j], nums[left], nums[right]});
                        while (left < right && nums[left] == nums[left+1]){
                             left++;
                        }
                        //skip duplicates
                        while (left<right && nums[right] == nums[right-1]){
                            right--;
                        } 
                        left++;
                        right--;
                    } 
                    else if (sum < target) {
                        ++left;
                    }
                    else {
                        --right;
                    }
                }
            }
        }
        return result;

    }
};
