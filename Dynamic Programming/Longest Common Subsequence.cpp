#include<iostream>
using namespace std;
int longestCommonSubsequence(string X, string Y, int N, int M){
    int dp[N+1][M+1];
    //initialising dp with 0
    for(int i =0; i<N+1; i++){
        for(int j = 0; j<M+1; j++)
        dp[i][j] = 0;
    }
            
    //creating dp
    for(int i = 1; i <= N; i++){
        for(int j = 1; j <= M; j++){
            if(X[i-1] == Y[j-1])
                dp[i][j] = dp[i-1][j-1] + 1;
            else
                dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
        }
    }
    return dp[N][M];
}
int main()
 {
	//code
	int T;
	cin>>T;
	while(T--){
	    int N, M;
	    string X, Y;
	    cin>>N>>M;
	    cin>>X>>Y;
	    cout<<longestCommonSubsequence(X,Y,N,M);
	    cout<<endl;
	    
	}
	return 0;
}
