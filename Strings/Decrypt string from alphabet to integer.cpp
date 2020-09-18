/*
Given a string s formed by digits ('0' - '9') and '#' . We want to map s to English lowercase characters as follows:
Characters ('a' to 'i') are represented by ('1' to '9') respectively.
Characters ('j' to 'z') are represented by ('10#' to '26#') respectively. 
Return the string formed after mapping.

Example 1:
Input: s = "10#11#12"
Output: "jkab"
Explanation: "j" -> "10#" , "k" -> "11#" , "a" -> "1" , "b" -> "2".

Example 2:
Input: s = "1326#"
Output: "acz"

*/
class Solution {
public:
    string freqAlphabets(string s) {
       string ans;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='#')
            {
                int index=stoi(s.substr(i-2,2));
                char c='a'+index-1;
                ans.pop_back();
                ans.pop_back();
                ans.push_back(c);
            }
            else ans.push_back((s[i]-'0')+'a'-1);
        }
        return ans;
        
    }
};
