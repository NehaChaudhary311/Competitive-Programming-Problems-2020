/*
Example 1:
Input: s = "abc", t = "ahbgdc"
Output: true

Example 2:
Input: s = "axc", t = "ahbgdc"
Output: false

*/
class Solution {
public:
    bool isSubsequence(string s, string t) {
        int j = 0;
        if (s.size() == 0) return true;
        for(int i = 0;i<t.size();i++){
            if (s[j] == t[i]) j++;
            if (j == s.size()) return true;
        }
        return false;
    }
};
