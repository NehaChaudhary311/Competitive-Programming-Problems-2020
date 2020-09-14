vector<int> cumulativeSum(10000);
class NumArray {
public:
    NumArray(vector<int>& nums) {
        int n = nums.size();
        if(n == 0)
            return;
        cumulativeSum[0] = nums[0];
        for(int i = 1; i<n; i++) {
            cumulativeSum[i] = nums[i] + cumulativeSum[i-1];
        }
    }
    
    int sumRange(int i, int j) {
        if(i == 0)
            return cumulativeSum[j];
        else
            return cumulativeSum[j] - cumulativeSum[i-1];
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(i,j);
 */
