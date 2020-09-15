class Solution {
public:
    //Function to check whether the number is a power of 2 or now
    inline bool ispowerof2(int n){
        return (n & (n-1)) == 0;
    }
    vector<int> countBits(int num) {
        vector<int> dp(num+1);
        
        dp[0]=0;
        
        if(num>=1) 
            dp[1]=1;

        int curr=2;
        int nearest=2;
        while(curr<=num)
        {
            //nearest stores the nearest power of 2 less than current element (nearest of 5 is 4, nearest of 13 is 8..)
            nearest = ispowerof2(curr) ? curr  : nearest; 
            dp[curr] = 1 + dp[curr-nearest]; // 1 stands for dp[nearest]
            curr++;
        }
        
        return dp;
    }
};
