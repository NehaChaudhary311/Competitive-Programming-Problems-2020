/*

A good string is a string which doesn't have two adjacent characters s[i] and s[i + 1] where:
  0 <= i <= s.length - 2
  s[i] is a lower-case letter and s[i + 1] is the same letter but in upper-case or vice-versa

Example 1:
Input: s = "leEeetcode"
Output: "leetcode"
Explanation: In the first step, either you choose i = 1 or i = 2, both will result "leEeetcode" to be reduced to "leetcode".

Example 2:
Input: s = "abBAcC"
Output: ""
Explanation: We have many possible scenarios, and all lead to the same answer. For example:
"abBAcC" --> "aAcC" --> "cC" --> ""
"abBAcC" --> "abBA" --> "aA" --> ""

*/
class Solution {
public:
    string makeGood(string s) {
        stack<char> stk;
        for(int i = s.size()-1; i>=0; i--){
            if(!stk.empty() && (((int)s[i] == (int)stk.top() +32)|| (int)s[i] ==(int)stk.top() -32)){
                stk.pop();
            }
            else
                stk.push(s[i]);
        }
        string ans;
        while(!stk.empty()){
            ans = ans + stk.top();
            stk.pop();
        }
        return ans;
    }
};
