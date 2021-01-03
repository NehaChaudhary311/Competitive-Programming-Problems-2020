
/*
Given a string s and a non-empty string p, find all the start indices of p's anagrams in s.

Example 1:
Input:
s: "cbaebabacd" p: "abc"

Output:
[0, 6]

Explanation:
The substring with start index = 0 is "cba", which is an anagram of "abc".
The substring with start index = 6 is "bac", which is an anagram of "abc".

Example 2:
Input:
s: "abab" p: "ab"

Output:
[0, 1, 2]
*/
class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        if(p.size()>s.size())
            return {};
        vector<int>res;
        vector<int>shash(26,0),phash(26,0);
        int left = 0;
        int right = 0;
        for(int i=0; i<p.size(); i++)
        {
            phash[p[i]-'a']++;
            shash[s[i]-'a']++;
            right++;
        }
        if(shash == phash)
            res.push_back(0);
        while(right<s.size())
        {
            shash[s[left]-'a']--;
            shash[s[right]-'a']++;
            left++;
            right++;
            if(shash == phash)
                res.push_back(left); 
        }
        return res;
    }
};
