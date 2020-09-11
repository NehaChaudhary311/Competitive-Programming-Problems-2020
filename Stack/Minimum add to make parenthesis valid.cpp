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
    stack<int> st;
    int total = 0;
    for(char ch:S){
        if(ch=='(')
            st.push(ch);
        else if(!st.empty() && ch==')')
            st.pop();
        else if(st.empty() && ch==')')
            total += 1;
    }
    total += st.size();
    return total;
    }
};
