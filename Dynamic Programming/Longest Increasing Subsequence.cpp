#include<iostream>
using namespace std;
int longestIncreasingSubsequence(int a[], int n){
    int dp[n+1];
    dp[0] = 1;
    int max_ans=1;
    for(int i = 1; i < n; i++)
    { 
        dp[i] = 1;
        for(int j = 0; j < i; j++){
            if(a[i] > a[j])
            {
                dp[i] = max(dp[j]+1, dp[i]);
                max_ans = max(dp[i], max_ans);
            }
        }
    }
    return max_ans;
}
int main()
 {
	//code
	int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        {
         cin>>a[i];   
        }
        cout<<longestIncreasingSubsequence(a, n);
        cout<<endl;
    }
	return 0;
}
