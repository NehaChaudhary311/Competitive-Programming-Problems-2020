/*
Given two equal-size strings s and t. In one step you can choose any character of t and replace it with another character.
Return the minimum number of steps to make t an anagram of s.
An Anagram of a string is a string that contains the same characters with a different (or the same) ordering.

Example 1:
Input: s = "bab", t = "aba"
Output: 1
Explanation: Replace the first 'a' in t with b, t = "bba" which is anagram of s.

Example 2:
Input: s = "leetcode", t = "practice"
Output: 5
Explanation: Replace 'p', 'r', 'a', 'i' and 'c' from t with proper characters to make t anagram of s.
*/

class Solution {
public:
    int minSteps(string s, string t) {
        //if the strings are equal, do nothing and return 0
        //if(strcmp(s,t)) return 0;
        //default value in map is 0 so don't initialize
        unordered_map<char,int> m;
        int ans = 0;
        for(auto i : s)
            m[i]++;
        for(auto i : t)
            m[i]--;
        
        for(auto i : m){
            if(i.second > 0)
                ans += i.second;
        }
        return ans;
    }
};
