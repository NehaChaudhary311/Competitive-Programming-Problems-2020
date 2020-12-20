class Solution {
public:
    int minDistance(string word1, string word2) {
        int dp[word1.size()+1][word2.size()+1];
        //filling the first row of dp like 0,1,2,3,4,5...
        for(int i = 0; i<= word1.size(); i++)
            dp[i][0] = i;
        //filling the first col of dp like 0,1,2,3,4,5...
        for(int i = 0; i <= word2.size(); i++)
            dp[0][i] = i;

        for(int i = 1; i <= word1.size(); i++){
            for(int j=1; j <= word2.size(); j++){

                if(word1[i-1] == word2[j-1])
                    dp[i][j] = dp[i-1][j-1];

                else
                    dp[i][j] = 1 + min({dp[i][j - 1], // Insert 
                                   dp[i - 1][j], // Remove 
                                   dp[i - 1][j - 1]}); // Replace 
            }
        }
        
        return dp[word1.size()][word2.size()];
    }
};
