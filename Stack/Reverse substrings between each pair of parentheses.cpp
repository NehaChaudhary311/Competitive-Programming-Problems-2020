/*
Input: s = "(abcd)"
Output: "dcba"

Input: s = "(u(love)i)"
Output: "iloveu"
Explanation: The substring "love" is reversed first, then the whole string is reversed.
*/
class Solution {
public:
    string reverseParentheses(string s) {
        stack<char> temp;
        string res="";
        for(int i=0;i<s.length();i++)
        {
            if(s[i]!=')')
            {
                temp.push(s[i]);
            }
            else
            {
                while(temp.top()!='(')
                {
                    res+=temp.top();
                    temp.pop();
                }
                temp.pop();
                for(int i=0;i<res.length();i++)
                {
                    temp.push(res[i]);
                }
                res="";
            }
        }
        while(!temp.empty())
        {
            res+=temp.top();
            temp.pop();
        }
        reverse(res.begin(),res.end());
        return  res;
    }
};
