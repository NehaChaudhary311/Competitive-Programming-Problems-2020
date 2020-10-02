class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.size() == 0) return "";
        int i = 0;
        for(i = 0; strs[0][i] != NULL; i++){          // loop thru each char in first one
            for(int j = 1;j < strs.size(); j++){      // loop all other strings
                if(strs[j][i] != strs[0][i]){         // compare current char
                    return strs[0].substr(0,i);       // return the substr if not equal
                }                
            }
        }
        return strs[0];              
    }
};
