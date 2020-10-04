//Given a number N. Find the number of operations required to reach N starting from 0. You have 2 operations available:
//Double the number
//Add one to the number


class Solution
{
  public:
    int minOperation(int n)
    {
        //code here.
        int ans=0;
	    int dp[n+1]={0};
	    dp[1]=1;
	    dp[2]=2;
	    for(int i = 3;i<=n;i++)
	    {
	        if(i%2==0)
	        {
	            dp[i]=min(dp[i-1]+1,dp[i/2]+1);
	        }
	        else
	        {
	            dp[i]=min(dp[i-1]+1,dp[i/2]+2);
	        }
	    }
	    return dp[n];
    }
};

