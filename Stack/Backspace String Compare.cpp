/*

Given two strings S and T, return if they are equal when both are typed into empty text editors. # means a backspace character.
Note that after backspacing an empty text, the text will continue empty.
Example 1:
Input: S = "ab#c", T = "ad#c"
Output: true
Explanation: Both S and T become "ac".

Example 2:
Input: S = "ab##", T = "c#d#"
Output: true
Explanation: Both S and T become "".

Example 3:
Input: S = "a##c", T = "#a#c"
Output: true
Explanation: Both S and T become "c".

Example 4:
Input: S = "a#c", T = "b"
Output: false
Explanation: S becomes "c" while T becomes "b".

*/
class Solution {
public:
    bool backspaceCompare(string S, string T) {
        stack<char> stk1;
        stack<char> stk2;
        for(int i = 0; i< S.length() ; i++){
            if(S.at(i) != '#')
                stk1.push(S[i]);
            else if(!stk1.empty())
                stk1.pop();
        }
        for(int i = 0; i< T.length() ; i++){
            if(T.at(i) != '#')
                stk2.push(T[i]);
            else if(!stk2.empty())
                stk2.pop();
        }
        return stk1 == stk2 ? true : false;
    }
};
