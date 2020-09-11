/*
Given a string S of '(' and ')' parentheses, we add the minimum number of parentheses ( '(' or ')', and in any positions ) so that the resulting parentheses string is valid.

Example 1:
Input: "())"
Output: 1

Example 2:
Input: "((("
Output: 3

Example 3:
Input: "()"
Output: 0

Example 4:
Input: "()))(("
Output: 4
*/
class Solution {
public:
    int minAddToMakeValid(string S) {
        stack<char> st;
        int n = S.size();

        int ans = 0;

        for(int i = 0;i<n;i++){
            if(S[i]=='(') st.push('(');
            else{
                if(st.size()==0){
                    ans++;
                }else{
                    st.pop();
                }
            }

        }
        if(st.size()!=0){
            ans+=st.size();
        }
        return ans;
    }
};
