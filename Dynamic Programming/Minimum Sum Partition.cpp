/APPROACH 1
//USE last row of subset sum problem dp
//Minimize sum(arr) - 2*sum(s1) 

class Solution{

	public:
	int minDiffernce(int arr[], int n) 
	{ 
	    // Your code goes here
	    int sum = 0;
	    for(int i = 0; i<n; i++){
	        sum += arr[i];
	    }
	    vector<vector<bool>> dp(n+1, vector<bool>(sum+1));
	    for(int i = 0; i<n+1; i++){
	        for(int j = 0; j<sum+1; j++){
	            if(i == 0) dp[i][j] = false;
	            if(j == 0) dp[i][j] = true;
	        }
	    }
	    for(int i = 1; i<n+1; i++){
	        for(int j = 1; j<sum+1; j++){
	            if(arr[i-1] <= j)
	                dp[i][j] = dp[i-1][j-arr[i-1]] || dp[i-1][j];
	           else
	                dp[i][j] = dp[i-1][j];
	        }
	    }
	    int mn = INT_MAX;
        for (int j=sum/2; j>=0; j--)
        {
            // Finding the largest j and that is why startign from the right corner
            if (dp[n][j] == true)
            {
                mn = sum-2*j;
                break;
            }
        }
        return mn;
	    
	} 
};
