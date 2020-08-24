class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n =nums.size();
        int x1=nums[0];
        for(int i=1;i<n;i++){
            x1 =x1 ^ nums[i];
        }
        int x2= 1;
        for(int i=2;i<n+1;i++){
            x2= x2^ i;
        }
        return x1 ^ x2; 
    }
};
