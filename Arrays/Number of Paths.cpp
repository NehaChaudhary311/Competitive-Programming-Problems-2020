#include<iostream>
using namespace std;
int main()
 {
	//code
	int t;
	cin>>t;
	
	while(t--){
	    int m,n;
	    cin>>m>>n;
	    
	    int dp[m][n];
	    
	    for(int i=0; i<m; i++){
	        dp[i][0]=1;
	    }
	    for(int i=0; i<n; i++){
	        dp[0][i]=1;
	    }
	    
	    for(int i=1 ;i<m; i++){
	        for(int j=1; j<n; j++){
	            dp[i][j] = dp[i-1][j] + dp[i][j-1];
	        }
	    }
	    
	    cout<<dp[m-1][n-1]<<"\n";
	} 
	return 0;
}
