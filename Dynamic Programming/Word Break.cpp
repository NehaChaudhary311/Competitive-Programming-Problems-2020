class Solution {
public:
    bool wordBreak(string s, vector<string>& wordDict) {
        //j i
        //  j i
        //j    i
        //     j i
        if(wordDict.size()==0) return false;
        
        vector<bool> dp(s.size()+1,false);
        dp[0]=true;
        
        for(int i=1;i<=s.size();i++)
        {
            for(int j=i-1;j>=0;j--)
            {
                if(dp[j])
                {
                    string word = s.substr(j,i-j);
                    //if word found in the wordDict, then make dp[i] = true and move to next i
                    if(find(wordDict.begin(), wordDict.end(), s.substr(j, i-j)) != wordDict.end())
                    {
                        dp[i]=true;
                        break; 
                    }
                }
            }
        }
        
        return dp[s.size()];
    }
};
